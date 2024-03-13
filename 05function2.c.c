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
    unsigned long long ri_secure_time_in_system;
    unsigned long long ri_secure_ptime_in_system;
    unsigned long long ri_reserved[12];
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
struct sLambdaNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
};
struct sFunNode
{
    struct sFun* mFun;
    int sline;
    char* sname;
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

void* reallocf(void* __ptr, long int __size);

void* valloc(long int anonymous_var_nameX206);

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

void _Exit(int anonymous_var_nameX245);

long a64l(const char* anonymous_var_nameX246);

double drand48();

char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);

double erand48(unsigned short int anonymous_var_nameX251[3]);

char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);

char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);

int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);

int grantpt(int anonymous_var_nameX262);

char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, long int anonymous_var_nameX265);

long jrand48(unsigned short int anonymous_var_nameX266[3]);

char* l64a(long anonymous_var_nameX267);

void lcong48(unsigned short int anonymous_var_nameX268[7]);

long lrand48();

char* mktemp(char* anonymous_var_nameX269);

int mkstemp(char* anonymous_var_nameX270);

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

void setkey(const char* anonymous_var_nameX279);

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

void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);

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

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

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

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

struct sNode* expression_v5(struct sInfo* info);

struct sNode* statment(struct sInfo* info);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info);

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info);

_Bool sLambdaNode_terminated();

char* sLambdaNode_kind();

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* sType_clone(struct sType* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);

static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
int sFunNode_sline(struct sFunNode* self, struct sInfo* info);

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info);

_Bool sFunNode_terminated();

char* sFunNode_kind();

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);

static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);

static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);

int expected_next_character(char c, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

char* parse_attribute(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

int transpile_v5(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 1988, "smart_pointer$1long"))));
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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




struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj6;
struct sLambdaNode* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result10__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = self->sline;
    return __result11__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    __result12__ = __result_obj__ = ((char*)(right_value13=__builtin_string(self->sname)));
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = (_Bool)0;
    return __result13__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value14;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result14__ = __result_obj__ = ((char*)(right_value14=__builtin_string("sLambdaNode")));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result14__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_5;
void* right_value15;
void* right_value16;
struct sType* result_type_6;
void* right_value17;
void* right_value18;
_Bool _if_conditional23;
void* right_value19;
struct CVALUE* come_value_13;
void* right_value20;
char* __dec_obj7;
void* right_value56;
struct sType* __dec_obj31;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_5, 0, sizeof(struct sFun*));
right_value15 = (void*)0;
right_value16 = (void*)0;
memset(&result_type_6, 0, sizeof(struct sType*));
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&come_value_13, 0, sizeof(struct CVALUE*));
right_value20 = (void*)0;
right_value56 = (void*)0;
    come_fun_5=info->come_fun;
    info->come_fun=self->mFun;
    result_type_6=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value15=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value17=make_define_var(result_type_6,"__result_obj__",(_Bool)0,info))));
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value18=make_type_name_string(result_type_6,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_13=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value19=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=come_value_13->c_value;
    come_value_13->c_value=(char*)come_increment_ref_count(((char*)(right_value20=xsprintf("%s",self->mFun->mName))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj31=come_value_13->type;
    come_value_13->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_13->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_13->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_13));
    info->come_fun=come_fun_5;
    __result34__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional6=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional6) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional8) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional10) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional11) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional12) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional13) {
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional15) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional16) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional18) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional19) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional20) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional21) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional22) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_7;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sTypeph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional7=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional7) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional9) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_9;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*));
                it_9=self->head;
                while(_while_condtional2=it_9!=((void*)0),                _while_condtional2) {
                    prev_it_10=it_9;
                    it_9=it_9->next;
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional14) {
                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_11;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                it_11=self->head;
                while(_while_condtional3=it_11!=((void*)0),                _while_condtional3) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional17) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional24=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional24) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional25=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional25) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional26;
struct sType* __result15__;
void* right_value21;
struct sType* result_14;
_Bool _if_conditional27;
_Bool _if_conditional28;
void* right_value28;
struct list$1sTypeph* __dec_obj11;
_Bool _if_conditional32;
void* right_value31;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional36;
void* right_value32;
struct tuple1$1sTypeph* __dec_obj14;
_Bool _if_conditional37;
void* right_value33;
char* __dec_obj15;
_Bool _if_conditional38;
void* right_value34;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional39;
void* right_value42;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value43;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional54;
void* right_value50;
struct list$1charph* __dec_obj25;
_Bool _if_conditional58;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value52;
struct sNode* __dec_obj27;
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
_Bool _if_conditional84;
void* right_value53;
struct sNode* __dec_obj28;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value54;
char* __dec_obj29;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value55;
char* __dec_obj30;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&result_14, 0, sizeof(struct sType*));
right_value28 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
        if(_if_conditional26=self==(void*)0,        _if_conditional26) {
            __result15__ = __result_obj__ = (void*)0;
            return __result15__;
        }
        result_14=(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional27=self!=((void*)0),        _if_conditional27) {
            result_14->mClass=self->mClass;
        }
        if(_if_conditional28=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional28) {
            __dec_obj11=result_14->mMultipleTypes;
            result_14->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value28=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional32) {
            __dec_obj13=result_14->mNoSolvedGenericsType;
            result_14->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value31=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional36) {
            __dec_obj14=result_14->mOriginalLoadVarType;
            result_14->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional37) {
            __dec_obj15=result_14->mGenericsName;
            result_14->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(self->mGenericsName))));
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional38=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional38) {
            __dec_obj16=result_14->mGenericsTypes;
            result_14->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional39) {
            __dec_obj20=result_14->mArrayNum;
            result_14->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            result_14->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional53=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional53) {
            __dec_obj21=result_14->mParamTypes;
            result_14->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional54) {
            __dec_obj25=result_14->mParamNames;
            result_14->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional58=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional58) {
            __dec_obj26=result_14->mResultType;
            result_14->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_14->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional60=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional60) {
            __dec_obj27=result_14->mAlignas;
            result_14->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value52=sNode_clone(self->mAlignas))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value52) { right_value52 = come_decrement_ref_count2(right_value52, ((struct sNode*)right_value52)->finalize, ((struct sNode*)right_value52)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_14->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_14->mShort=self->mShort;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_14->mLong=self->mLong;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_14->mLongLong=self->mLongLong;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_14->mConstant=self->mConstant;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_14->mRegister=self->mRegister;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_14->mVolatile=self->mVolatile;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_14->mStatic=self->mStatic;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_14->mExtern=self->mExtern;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_14->mRestrict=self->mRestrict;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_14->mImmutable=self->mImmutable;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_14->mHeap=self->mHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_14->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_14->mDelegate=self->mDelegate;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_14->mShare=self->mShare;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_14->mClone=self->mClone;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_14->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_14->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_14->mRefference=self->mRefference;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_14->mException=self->mException;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_14->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_14->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_14->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional84=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional84) {
            __dec_obj28=result_14->mSizeNum;
            result_14->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value53=sNode_clone(self->mSizeNum))));
            if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value53) { right_value53 = come_decrement_ref_count2(right_value53, ((struct sNode*)right_value53)->finalize, ((struct sNode*)right_value53)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_14->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_14->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            __dec_obj29=result_14->mOriginalTypeName;
            result_14->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value54=string_clone(self->mOriginalTypeName))));
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_14->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_14->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_14->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_14->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_14->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_14->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_14->mInline=self->mInline;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_14->mNullValue=self->mNullValue;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            __dec_obj30=result_14->mAsmName;
            result_14->mAsmName=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(self->mAsmName))));
            __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result32__ = __result_obj__ = result_14;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result32__;
        come_call_finalizer2(sType_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
struct list$1sTypeph* __result16__;
void* right_value22;
void* right_value23;
struct list$1sTypeph* result_15;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional4;
void* right_value27;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
right_value27 = (void*)0;
                if(_if_conditional29=self==((void*)0),                _if_conditional29) {
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                result_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_16=self->head;
                while(_while_condtional4=it_16!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=sType_clone(it_16->item)))));
                    come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_16=it_16->next;
                }
                __result19__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result17__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result17__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional30;
void* right_value24;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj8;
_Bool _if_conditional31;
void* right_value25;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj9;
void* right_value26;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj10;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
right_value25 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value26 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional30=self->len==0,                        _if_conditional30) {
                            litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj8=litem_17->item;
                            litem_17->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else {
                            if(_if_conditional31=self->len==1,                            _if_conditional31) {
                                litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=self->head;
                                litem_18->next=((void*)0);
                                __dec_obj9=litem_18->item;
                                litem_18->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_18;
                                self->head->next=litem_18;
                            }
                            else {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->tail;
                                litem_19->next=((void*)0);
                                __dec_obj10=litem_19->item;
                                litem_19->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_19;
                                self->tail=litem_19;
                            }
                        }
                        self->len++;
                        __result18__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result18__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
struct tuple1$1sTypeph* __result20__;
void* right_value29;
struct tuple1$1sTypeph* result_20;
_Bool _if_conditional35;
void* right_value30;
struct sType* __dec_obj12;
struct tuple1$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&result_20, 0, sizeof(struct tuple1$1sTypeph*));
right_value30 = (void*)0;
                if(_if_conditional33=self==(void*)0,                _if_conditional33) {
                    __result20__ = __result_obj__ = (void*)0;
                    return __result20__;
                }
                result_20=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional35=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional35) {
                    __dec_obj12=result_20->v1;
                    result_20->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value30=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result21__ = __result_obj__ = result_20;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result21__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional34) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sNodeph* __result22__;
void* right_value35;
void* right_value36;
struct list$1sNodeph* result_21;
struct list_item$1sNodeph* it_22;
_Bool _while_condtional5;
void* right_value41;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sNodeph*));
memset(&it_22, 0, sizeof(struct list_item$1sNodeph*));
right_value41 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result22__ = __result_obj__ = ((void*)0);
                    return __result22__;
                }
                result_21=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_22=self->head;
                while(_while_condtional5=it_22!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_21,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(it_22->item)))));
                    if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_22=it_22->next;
                }
                __result27__ = __result_obj__ = result_21;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result27__;
                come_call_finalizer2(list$1sNodephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result23__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result23__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value37;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj17;
_Bool _if_conditional42;
void* right_value38;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj18;
void* right_value39;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
right_value38 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
right_value39 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_23->prev=((void*)0);
                            litem_23->next=((void*)0);
                            __dec_obj17=litem_23->item;
                            litem_23->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_23;
                            self->head=litem_23;
                        }
                        else {
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->head;
                                litem_24->next=((void*)0);
                                __dec_obj18=litem_24->item;
                                litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_24;
                                self->head->next=litem_24;
                            }
                            else {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_25->prev=self->tail;
                                litem_25->next=((void*)0);
                                __dec_obj19=litem_25->item;
                                litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_25;
                                self->tail=litem_25;
                            }
                        }
                        self->len++;
                        __result24__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result24__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional43;
struct sNode* __result25__;
void* right_value40;
struct sNode* result_26;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
struct sNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&result_26, 0, sizeof(struct sNode*));
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            __result25__ = __result_obj__ = (void*)0;
                            return __result25__;
                        }
                        result_26=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional44=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional44) {
                            result_26->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_26->finalize=self->finalize;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_26->clone=self->clone;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_26->compile=self->compile;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_26->sname=self->sname;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_26->terminated=self->terminated;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_26->kind=self->kind;
                        }
                        __result26__ = __result_obj__ = result_26;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result26__;
                        if(result_26) { result_26 = come_decrement_ref_count2(result_26, ((struct sNode*)result_26)->finalize, ((struct sNode*)result_26)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1charph* __result28__;
void* right_value44;
void* right_value45;
struct list$1charph* result_27;
struct list_item$1charph* it_28;
_Bool _while_condtional6;
void* right_value49;
struct list$1charph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1charph*));
memset(&it_28, 0, sizeof(struct list_item$1charph*));
right_value49 = (void*)0;
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    __result28__ = __result_obj__ = ((void*)0);
                    return __result28__;
                }
                result_27=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_28=self->head;
                while(_while_condtional6=it_28!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_27,(char*)come_increment_ref_count(((char*)(right_value49=string_clone(it_28->item)))));
                    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_28=it_28->next;
                }
                __result31__ = __result_obj__ = result_27;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result31__;
                come_call_finalizer2(list$1charphp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result29__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result29__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value46;
struct list_item$1charph* litem_29;
char* __dec_obj22;
_Bool _if_conditional57;
void* right_value47;
struct list_item$1charph* litem_30;
char* __dec_obj23;
void* right_value48;
struct list_item$1charph* litem_31;
char* __dec_obj24;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
right_value47 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
right_value48 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_29->prev=((void*)0);
                            litem_29->next=((void*)0);
                            __dec_obj22=litem_29->item;
                            litem_29->item=(char*)come_increment_ref_count(item);
                            __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_29;
                            self->head=litem_29;
                        }
                        else {
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->head;
                                litem_30->next=((void*)0);
                                __dec_obj23=litem_30->item;
                                litem_30->item=(char*)come_increment_ref_count(item);
                                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_30;
                                self->head->next=litem_30;
                            }
                            else {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_31->prev=self->tail;
                                litem_31->next=((void*)0);
                                __dec_obj24=litem_31->item;
                                litem_31->item=(char*)come_increment_ref_count(item);
                                __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_31;
                                self->tail=litem_31;
                            }
                        }
                        self->len++;
                        __result30__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result30__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional97;
void* right_value57;
struct list_item$1CVALUEph* litem_32;
struct CVALUE* __dec_obj32;
_Bool _if_conditional99;
void* right_value58;
struct list_item$1CVALUEph* litem_33;
struct CVALUE* __dec_obj33;
void* right_value59;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj34;
struct list$1CVALUEph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1CVALUEph*));
right_value58 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1CVALUEph*));
right_value59 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional97=self->len==0,        _if_conditional97) {
            litem_32=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value57=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_32->prev=((void*)0);
            litem_32->next=((void*)0);
            __dec_obj32=litem_32->item;
            litem_32->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_32;
            self->head=litem_32;
        }
        else {
            if(_if_conditional99=self->len==1,            _if_conditional99) {
                litem_33=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value58=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_33->prev=self->head;
                litem_33->next=((void*)0);
                __dec_obj33=litem_33->item;
                litem_33->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_33;
                self->head->next=litem_33;
            }
            else {
                litem_34=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value59=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_34->prev=self->tail;
                litem_34->next=((void*)0);
                __dec_obj34=litem_34->item;
                litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_34;
                self->tail=litem_34;
            }
        }
        self->len++;
        __result33__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result33__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional98=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional98) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj35;
char* __dec_obj36;
struct sFunNode* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj35=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj36=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result35__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result35__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional100=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional100) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional101=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional101) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional102=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional102) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional103=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional103) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional104=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional104) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional105=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional105) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional106=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional106) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional109=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional109) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional110=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional110) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional111=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional111) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional112=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional112) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional113=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional113) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional114=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional114) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional107;
_Bool _if_conditional108;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional107=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional107) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional108=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional108) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = self->sline;
    return __result36__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value60;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
    __result37__ = __result_obj__ = ((char*)(right_value60=__builtin_string(self->sname)));
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result37__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = (_Bool)0;
    return __result38__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value61;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
    __result39__ = __result_obj__ = ((char*)(right_value61=__builtin_string("sFunNode")));
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
}

void caller_begin(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void caller_end(struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_35;
char* come_fun_name_36;
void* right_value62;
char* __dec_obj37;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value63;
void* right_value64;
struct sType* result_type_37;
void* right_value65;
void* right_value66;
_Bool _if_conditional119;
void* right_value67;
char* __dec_obj38;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_35, 0, sizeof(struct sFun*));
memset(&come_fun_name_36, 0, sizeof(char*));
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_type_37, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
    come_fun_35=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    come_fun_name_36=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj37=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(info->come_fun->mName))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional118=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional118) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_37=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value63=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value65=make_define_var(result_type_37,"__result_obj__",(_Bool)0,info))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value66=make_type_name_string(result_type_37,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional119=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional119) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value67=xsprintf("come_heap_final();\n"))));
            right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    caller_end(info);
    info->come_fun=come_fun_35;
    __dec_obj38=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_36);
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result40__ = (_Bool)1;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result40__;
    come_fun_name_36 = come_decrement_ref_count2(come_fun_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value68;
void* right_value69;
struct list$1sNodeph* __dec_obj39;
struct sBlock* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
right_value69 = (void*)0;
    __dec_obj39=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value69=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value68=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result41__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value70;
struct sType* __dec_obj40;
void* right_value71;
struct list$1charph* __dec_obj41;
void* right_value72;
struct list$1charph* __dec_obj42;
char* __dec_obj43;
struct sType* __dec_obj44;
struct list$1sTypeph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct list$1charph* __dec_obj47;
char* __dec_obj48;
void* right_value73;
char* __dec_obj49;
struct sGenericsFun* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
    __dec_obj40=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj42=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj44=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj46=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj47=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj48=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj49=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(generics_sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result42__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional120=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional120) {
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional121) {
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional122) {
            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional123) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional124) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional125=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional125) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional126=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional126) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional127=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional127) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional128=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional128) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional129=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional129) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value74;
void* right_value75;
struct sBlock* result_38;
int block_level_39;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _while_condtional7;
_Bool _if_conditional132;
int sline_40;
char* sname_41;
void* right_value76;
struct sNode* node_42;
void* right_value77;
char* __dec_obj50;
_Bool _if_conditional133;
_Bool _if_conditional136;
_Bool _while_condtional8;
_Bool _if_conditional137;
void* right_value81;
struct sNode* node_46;
_Bool _if_conditional138;
struct sBlock* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_38, 0, sizeof(struct sBlock*));
memset(&block_level_39, 0, sizeof(int));
memset(&sline_40, 0, sizeof(int));
memset(&sname_41, 0, sizeof(char*));
right_value76 = (void*)0;
memset(&node_42, 0, sizeof(struct sNode*));
right_value77 = (void*)0;
right_value81 = (void*)0;
memset(&node_46, 0, sizeof(struct sNode*));
    result_38=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value75=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value74=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_39=info->block_level;
    if(_if_conditional130=!no_block_level,    _if_conditional130) {
        info->block_level++;
    }
    if(_if_conditional131=*info->p==123,    _if_conditional131) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            parse_sharp_v5(info);
            if(_if_conditional132=*info->p==125,            _if_conditional132) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_40=info->sline;
            sname_41=info->sname;
            node_42=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=statment(info))));
            if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj50=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value77=node_42->sname(node_42->_protocol_obj))));
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_42->sline(node_42->_protocol_obj);
            if(_if_conditional133=node_42==((void*)0),            _if_conditional133) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_42));
            parse_sharp_v5(info);
            if(_if_conditional136=node_42->terminated(node_42->_protocol_obj),            _if_conditional136) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional8=*info->p==59,            _while_condtional8) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional137=*info->p==125,            _if_conditional137) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_42) { node_42 = come_decrement_ref_count2(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_42) { node_42 = come_decrement_ref_count2(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_46=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=expression_v13(info))));
        if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional138=node_46==((void*)0),        _if_conditional138) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_38->mNodes,(struct sNode*)come_increment_ref_count(node_46));
        if(node_46) { node_46 = come_decrement_ref_count2(node_46, ((struct sNode*)node_46)->finalize, ((struct sNode*)node_46)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_39;
    __result44__ = __result_obj__ = result_38;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result44__;
    come_call_finalizer2(sBlock_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional134;
void* right_value78;
struct list_item$1sNodeph* litem_43;
struct sNode* __dec_obj51;
_Bool _if_conditional135;
void* right_value79;
struct list_item$1sNodeph* litem_44;
struct sNode* __dec_obj52;
void* right_value80;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sNodeph*));
right_value80 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional134=self->len==0,                _if_conditional134) {
                    litem_43=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_43->prev=((void*)0);
                    litem_43->next=((void*)0);
                    __dec_obj51=litem_43->item;
                    litem_43->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_43;
                    self->head=litem_43;
                }
                else {
                    if(_if_conditional135=self->len==1,                    _if_conditional135) {
                        litem_44=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->head;
                        litem_44->next=((void*)0);
                        __dec_obj52=litem_44->item;
                        litem_44->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_44;
                        self->head->next=litem_44;
                    }
                    else {
                        litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value80=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_45->prev=self->tail;
                        litem_45->next=((void*)0);
                        __dec_obj53=litem_45->item;
                        litem_45->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_45;
                        self->tail=litem_45;
                    }
                }
                self->len++;
                __result43__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result43__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional139;
int __result45__;
struct sVarTable* old_table_47;
_Bool _if_conditional140;
void* right_value82;
void* right_value83;
struct sVarTable* __dec_obj54;
struct sVarTable* current_loop_vtable_48;
_Bool _if_conditional141;
struct list$1sTypeph* param_types__49;
struct list$1charph* param_names__50;
_Bool _if_conditional142;
int i_51;
struct list$1charph* o2_saved_52;
char* name_55;
void* right_value84;
struct sType* type_61;
void* right_value85;
int block_level_62;
_Bool _if_conditional149;
_Bool _if_conditional150;
int i_63;
struct list$1sNodeph* o2_saved_64;
struct sNode* node_67;
struct list$1sRightValueObjectph* right_value_objects_70;
void* right_value86;
void* right_value87;
struct list$1sRightValueObjectph* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
int stack_num_before_73;
int sline_74;
void* right_value88;
char* sname_75;
void* right_value89;
char* __dec_obj59;
_Bool _if_conditional159;
void* right_value90;
char* __dec_obj60;
struct list$1sRightValueObjectph* __dec_obj61;
_Bool _if_conditional160;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_47, 0, sizeof(struct sVarTable*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&current_loop_vtable_48, 0, sizeof(struct sVarTable*));
memset(&param_types__49, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__50, 0, sizeof(struct list$1charph*));
memset(&i_51, 0, sizeof(int));
memset(&o2_saved_52, 0, sizeof(struct list$1charph*));
memset(&name_55, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&type_61, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&block_level_62, 0, sizeof(int));
memset(&i_63, 0, sizeof(int));
memset(&o2_saved_64, 0, sizeof(struct list$1sNodeph*));
memset(&node_67, 0, sizeof(struct sNode*));
memset(&right_value_objects_70, 0, sizeof(struct list$1sRightValueObjectph*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&stack_num_before_73, 0, sizeof(int));
memset(&sline_74, 0, sizeof(int));
right_value88 = (void*)0;
memset(&sname_75, 0, sizeof(char*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    if(info->output_header_file) {
        __result45__ = 0;
        return __result45__;
    }
    old_table_47=info->lv_table;
    if(_if_conditional140=!no_var_table,    _if_conditional140) {
        __dec_obj54=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value83=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value82=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "sVarTable")))),(_Bool)0,old_table_47))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_48=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__49=info->param_types;
    param_names__50=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional142=param_types&&param_names,    _if_conditional142) {
        for(        o2_saved_52=(param_names),name_55=list$1charph_begin((o2_saved_52));        !list$1charph_end((o2_saved_52));        name_55=list$1charph_next((o2_saved_52))        ){
            type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(list$1sTypephp_operator_load_element(param_types,i_51)))));
            come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_61->mFunctionParam=(_Bool)1;
            type_61->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type_61)))),info);
            come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_51++;
            come_call_finalizer2(sType_finalize,type_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_62=info->block_level;
    if(_if_conditional149=!no_var_table,    _if_conditional149) {
        info->block_level++;
    }
    if(_if_conditional150=list$1sNodeph_length(block->mNodes)==0,    _if_conditional150) {
    }
    else {
        for(        o2_saved_64=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_67=list$1sNodeph_begin((o2_saved_64));        !list$1sNodeph_end((o2_saved_64));        node_67=list$1sNodeph_next((o2_saved_64))        ){
            right_value_objects_70=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj55=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value87=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value86=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj56=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj57=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj58=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_73=list$1CVALUEph_length(info->stack);
            sline_74=info->sline;
            sname_75=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
            right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_67->sline(node_67->_protocol_obj);
            __dec_obj59=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value89=node_67->sname(node_67->_protocol_obj))));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional159=!node_compile(node_67,info),            _if_conditional159) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_74;
            __dec_obj60=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value90=__builtin_string(sname_75))));
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_73);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj61=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_70);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_75 = come_decrement_ref_count2(sname_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional160=!no_var_table,    _if_conditional160) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_47;
    info->block_level=block_level_62;
    info->param_types=param_types__49;
    info->param_names=param_names__50;
    info->current_loop_vtable=current_loop_vtable_48;
    __result66__ = 0;
    return __result66__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_53;
char* __result46__;
_Bool _if_conditional144;
char* __result47__;
char* result_54;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_53, 0, sizeof(char*));
memset(&result_54, 0, sizeof(char*));
            if(_if_conditional143=self==((void*)0),            _if_conditional143) {
                memset(&result_53,0,sizeof(char*));
                __result46__ = __result_obj__ = result_53;
                return __result46__;
            }
            self->it=self->head;
            if(self->it) {
                __result47__ = __result_obj__ = self->it->item;
                return __result47__;
            }
            memset(&result_54,0,sizeof(char*));
            __result48__ = __result_obj__ = result_54;
            return __result48__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
            __result49__ = self==((void*)0)||self->it==((void*)0);
            return __result49__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional145;
char* result_56;
char* __result50__;
_Bool _if_conditional146;
char* __result51__;
char* result_57;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(char*));
memset(&result_57, 0, sizeof(char*));
            if(_if_conditional145=self==((void*)0)||self->it==((void*)0),            _if_conditional145) {
                memset(&result_56,0,sizeof(char*));
                __result50__ = __result_obj__ = result_56;
                return __result50__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result51__ = __result_obj__ = self->it->item;
                return __result51__;
            }
            memset(&result_57,0,sizeof(char*));
            __result52__ = __result_obj__ = result_57;
            return __result52__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional147;
struct list_item$1sTypeph* it_58;
int i_59;
_Bool _while_condtional9;
_Bool _if_conditional148;
struct sType* __result53__;
struct sType* default_value_60;
struct sType* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_59, 0, sizeof(int));
memset(&default_value_60, 0, sizeof(struct sType*));
                if(_if_conditional147=position<0,                _if_conditional147) {
                    position+=self->len;
                }
                it_58=self->head;
                i_59=0;
                while(_while_condtional9=it_58!=((void*)0),                _while_condtional9) {
                    if(_if_conditional148=position==i_59,                    _if_conditional148) {
                        __result53__ = __result_obj__ = it_58->item;
                        return __result53__;
                    }
                    it_58=it_58->next;
                    i_59++;
                }
                memset(&default_value_60,0,sizeof(struct sType*));
                __result54__ = __result_obj__ = default_value_60;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result54__;
                come_call_finalizer2(sType_finalize,default_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        __result55__ = self->len;
        return __result55__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct sNode* result_65;
struct sNode* __result56__;
_Bool _if_conditional152;
struct sNode* __result57__;
struct sNode* result_66;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct sNode*));
memset(&result_66, 0, sizeof(struct sNode*));
            if(_if_conditional151=self==((void*)0),            _if_conditional151) {
                memset(&result_65,0,sizeof(struct sNode*));
                __result56__ = __result_obj__ = result_65;
                return __result56__;
            }
            self->it=self->head;
            if(self->it) {
                __result57__ = __result_obj__ = self->it->item;
                return __result57__;
            }
            memset(&result_66,0,sizeof(struct sNode*));
            __result58__ = __result_obj__ = result_66;
            return __result58__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
            __result59__ = self==((void*)0)||self->it==((void*)0);
            return __result59__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional153;
struct sNode* result_68;
struct sNode* __result60__;
_Bool _if_conditional154;
struct sNode* __result61__;
struct sNode* result_69;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(_if_conditional153=self==((void*)0)||self->it==((void*)0),            _if_conditional153) {
                memset(&result_68,0,sizeof(struct sNode*));
                __result60__ = __result_obj__ = result_68;
                return __result60__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result61__ = __result_obj__ = self->it->item;
                return __result61__;
            }
            memset(&result_69,0,sizeof(struct sNode*));
            __result62__ = __result_obj__ = result_69;
            return __result62__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result63__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_71;
_Bool _while_condtional10;
struct list_item$1sRightValueObjectph* prev_it_72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_71, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_72, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_71=self->head;
                    while(_while_condtional10=it_71!=((void*)0),                    _while_condtional10) {
                        prev_it_72=it_71;
                        it_71=it_71->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional155=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional155) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional156=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional156) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional157=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional157) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional158=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional158) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
                __result64__ = self->len;
                return __result64__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_76;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_77;
struct list$1sRightValueObjectph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_76=self->head;
                while(_while_condtional11=it_76!=((void*)0),                _while_condtional11) {
                    prev_it_77=it_76;
                    it_76=it_76->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result65__ = __result_obj__ = self;
                return __result65__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional161=list$1CVALUEph_length(info->stack)>top,    _if_conditional161) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional162=list$1CVALUEph_length(info->stack)<top,    _if_conditional162) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional163;
_Bool _if_conditional164;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional163=*info->p!=c,    _if_conditional163) {
        if(_if_conditional164=!info->no_output_err,        _if_conditional164) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result67__ = 0;
    return __result67__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_78;
_Bool _if_conditional165;
_Bool dquort_79;
_Bool squort_80;
int sline_81;
int nest_82;
_Bool _while_condtional12;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
char* tail_83;
void* right_value91;
char* buf_84;
void* right_value92;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_78, 0, sizeof(char*));
memset(&dquort_79, 0, sizeof(_Bool));
memset(&squort_80, 0, sizeof(_Bool));
memset(&sline_81, 0, sizeof(int));
memset(&nest_82, 0, sizeof(int));
memset(&tail_83, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&buf_84, 0, sizeof(char*));
right_value92 = (void*)0;
    head_78=info->p;
    if(_if_conditional165=*info->p==123,    _if_conditional165) {
        info->p++;
        dquort_79=(_Bool)0;
        squort_80=(_Bool)0;
        sline_81=0;
        nest_82=0;
        while(_while_condtional12=1,        _while_condtional12) {
            if(dquort_79) {
                if(_if_conditional167=*info->p==92,                _if_conditional167) {
                    info->p++;
                    if(_if_conditional168=*info->p==0,                    _if_conditional168) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional169=*info->p==34,                    _if_conditional169) {
                        info->p++;
                        dquort_79=!dquort_79;
                    }
                    else {
                        info->p++;
                        if(_if_conditional170=*info->p==0,                        _if_conditional170) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_80) {
                    if(_if_conditional172=*info->p==92,                    _if_conditional172) {
                        info->p++;
                        if(_if_conditional173=*info->p==0,                        _if_conditional173) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional174=*info->p==39,                        _if_conditional174) {
                            info->p++;
                            squort_80=!squort_80;
                        }
                        else {
                            info->p++;
                            if(_if_conditional175=*info->p==0,                            _if_conditional175) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_81);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional176=*info->p==39,                    _if_conditional176) {
                        sline_81=info->sline;
                        info->p++;
                        squort_80=!squort_80;
                    }
                    else {
                        if(_if_conditional177=*info->p==34,                        _if_conditional177) {
                            sline_81=info->sline;
                            info->p++;
                            dquort_79=!dquort_79;
                        }
                        else {
                            if(_if_conditional178=*info->p==35,                            _if_conditional178) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional179=*info->p==123,                                _if_conditional179) {
                                    info->p++;
                                    nest_82++;
                                }
                                else {
                                    if(_if_conditional180=*info->p==125,                                    _if_conditional180) {
                                        info->p++;
                                        if(_if_conditional181=nest_82==0,                                        _if_conditional181) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_82--;
                                    }
                                    else {
                                        if(_if_conditional182=*info->p==0,                                        _if_conditional182) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional183=*info->p==10,                                            _if_conditional183) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_83=info->p;
    buf_84=(char*)come_increment_ref_count(((char*)(right_value91=(char*)come_calloc(1, sizeof(char)*(1*(tail_83-head_78+1)), "05function2.c", 488, "char"))));
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_84,head_78,tail_83-head_78);
    buf_84[tail_83-head_78]=0;
    __result68__ = __result_obj__ = ((char*)(right_value92=__builtin_string(buf_84)));
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
    buf_84 = come_decrement_ref_count2(buf_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_85;
char* p3_86;
int i_87;
_Bool _if_conditional184;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_85, 0, sizeof(_Bool));
memset(&p3_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
    terminated_85=(_Bool)0;
    p3_86=p;
    for(    i_87=0;    i_87<strlen(p2);    i_87++    ){
        if(_if_conditional184=*p3_86==0,        _if_conditional184) {
            terminated_85=(_Bool)1;
            break;
        }
        p3_86++;
    }
    __result69__ = !terminated_85&&memcmp(p,p2,strlen(p2))==0;
    return __result69__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value93;
void* right_value94;
struct buffer* asm_fun_name_88;
_Bool _while_condtional13;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
int brace_num_89;
_Bool _while_condtional14;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
int len_90;
_Bool in_dquort_91;
int brace_num_92;
_Bool _while_condtional15;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
int brace_num_93;
_Bool _while_condtional16;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value95;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&asm_fun_name_88, 0, sizeof(struct buffer*));
memset(&brace_num_89, 0, sizeof(int));
memset(&len_90, 0, sizeof(int));
memset(&in_dquort_91, 0, sizeof(_Bool));
memset(&brace_num_92, 0, sizeof(int));
memset(&brace_num_93, 0, sizeof(int));
right_value95 = (void*)0;
    asm_fun_name_88=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value94=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value93=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        if(_if_conditional185=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional185) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional186=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional186) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional187=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional187) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional188=strmemcmp(info->p,"__wur"),                    _if_conditional188) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional189=strmemcmp(info->p,"__noreturn"),                        _if_conditional189) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional190=strmemcmp(info->p,"__attribute__"),                            _if_conditional190) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_89=0;
                                while(_while_condtional14=*info->p,                                _while_condtional14) {
                                    if(_if_conditional191=*info->p==40,                                    _if_conditional191) {
                                        info->p++;
                                        brace_num_89++;
                                    }
                                    else {
                                        if(_if_conditional192=*info->p==41,                                        _if_conditional192) {
                                            info->p++;
                                            brace_num_89--;
                                            if(_if_conditional193=brace_num_89==0,                                            _if_conditional193) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(_if_conditional194=strmemcmp(info->p,"__asm__"),                                _if_conditional194) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_90=0;
                                    in_dquort_91=(_Bool)0;
                                    brace_num_92=0;
                                    while(_while_condtional15=*info->p,                                    _while_condtional15) {
                                        if(_if_conditional195=*info->p==34,                                        _if_conditional195) {
                                            info->p++;
                                            in_dquort_91=!in_dquort_91;
                                        }
                                        else {
                                            if(in_dquort_91) {
                                                buffer_append_char(asm_fun_name_88,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional197=*info->p==40,                                                _if_conditional197) {
                                                    info->p++;
                                                    brace_num_92++;
                                                }
                                                else {
                                                    if(_if_conditional198=*info->p==41,                                                    _if_conditional198) {
                                                        info->p++;
                                                        brace_num_92--;
                                                        if(_if_conditional199=brace_num_92==0,                                                        _if_conditional199) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional200=strmemcmp(info->p,"__asm"),                                    _if_conditional200) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_93=0;
                                        while(_while_condtional16=*info->p,                                        _while_condtional16) {
                                            if(_if_conditional201=*info->p==40,                                            _if_conditional201) {
                                                info->p++;
                                                brace_num_93++;
                                            }
                                            else {
                                                if(_if_conditional202=*info->p==41,                                                _if_conditional202) {
                                                    info->p++;
                                                    brace_num_93--;
                                                    if(_if_conditional203=brace_num_93==0,                                                    _if_conditional203) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result70__ = __result_obj__ = ((char*)(right_value95=buffer_to_string(asm_fun_name_88)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional17;
char* head_94;
int head_sline_95;
void* right_value96;
char* buf_96;
_Bool _if_conditional204;
void* right_value97;
struct sNode* node_97;
_Bool _while_condtional18;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_94, 0, sizeof(char*));
memset(&head_sline_95, 0, sizeof(int));
right_value96 = (void*)0;
memset(&buf_96, 0, sizeof(char*));
right_value97 = (void*)0;
memset(&node_97, 0, sizeof(struct sNode*));
    while(_while_condtional17=*info->p,    _while_condtional17) {
        parse_sharp_v5(info);
        head_94=info->p;
        head_sline_95=info->sline;
        buf_96=(char*)come_increment_ref_count(((char*)(right_value96=parse_word(info))));
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional204=block&&*info->p==125,        _if_conditional204) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=top_level_v99(buf_96,head_94,head_sline_95,info))));
        if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional18=*info->p==59,        _while_condtional18) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional205=node_97!=((void*)0),        _if_conditional205) {
            if(_if_conditional206=!node_compile(node_97,info),            _if_conditional206) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional207=block&&*info->p==125,        _if_conditional207) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_97) { node_97 = come_decrement_ref_count2(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_96 = come_decrement_ref_count2(buf_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_97) { node_97 = come_decrement_ref_count2(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value98;
char* name_98;
void* right_value99;
void* right_value100;
struct sType* result_type_99;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
void* right_value110;
struct sType* __list_values1___100[5];
void* right_value114;
void* right_value115;
struct list$1sTypeph* param_types_105;
void* right_value116;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
char* __list_values2___106[5];
void* right_value124;
void* right_value125;
struct list$1charph* param_names_111;
void* right_value126;
void* right_value127;
struct list$1charph* param_default_parametors_112;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
void* right_value133;
void* right_value134;
struct sFun* main_fun_113;
void* right_value141;
void* right_value142;
char* name_158;
void* right_value143;
void* right_value144;
struct sType* result_type_159;
void* right_value145;
void* right_value146;
struct sType* __list_values3___160[1];
void* right_value147;
void* right_value148;
struct list$1sTypeph* param_types_161;
void* right_value149;
char* __list_values4___162[1];
void* right_value150;
void* right_value151;
struct list$1charph* param_names_163;
void* right_value152;
void* right_value153;
struct list$1charph* param_default_parametors_164;
void* right_value154;
void* right_value155;
void* right_value156;
void* right_value157;
struct sFun* main_fun_165;
void* right_value158;
void* right_value159;
char* name_166;
void* right_value160;
void* right_value161;
struct sType* result_type_167;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
struct sType* __list_values5___168[7];
void* right_value176;
void* right_value177;
struct list$1sTypeph* param_types_169;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
void* right_value184;
char* __list_values6___170[7];
void* right_value185;
void* right_value186;
struct list$1charph* param_names_171;
void* right_value187;
void* right_value188;
struct list$1charph* param_default_parametors_172;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
struct sFun* main_fun_173;
void* right_value193;
void* right_value194;
char* name_174;
void* right_value195;
void* right_value196;
struct sType* result_type_175;
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
struct sType* __list_values7___176[5];
void* right_value207;
void* right_value208;
struct list$1sTypeph* param_types_177;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
char* __list_values8___178[5];
void* right_value214;
void* right_value215;
struct list$1charph* param_names_179;
void* right_value216;
void* right_value217;
struct list$1charph* param_default_parametors_180;
void* right_value218;
void* right_value219;
void* right_value220;
void* right_value221;
struct sFun* main_fun_181;
void* right_value222;
void* right_value223;
char* name_182;
void* right_value224;
void* right_value225;
struct sType* result_type_183;
void* right_value226;
void* right_value227;
struct sType* __list_values9___184[1];
void* right_value228;
void* right_value229;
struct list$1sTypeph* param_types_185;
void* right_value230;
char* __list_values10___186[1];
void* right_value231;
void* right_value232;
struct list$1charph* param_names_187;
void* right_value233;
void* right_value234;
struct list$1charph* param_default_parametors_188;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
struct sFun* main_fun_189;
void* right_value239;
void* right_value240;
char* name_190;
void* right_value241;
void* right_value242;
struct sType* result_type_191;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
struct sType* __list_values11___192[4];
void* right_value251;
void* right_value252;
struct list$1sTypeph* param_types_193;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
char* __list_values12___194[4];
void* right_value257;
void* right_value258;
struct list$1charph* param_names_195;
void* right_value259;
void* right_value260;
struct list$1charph* param_default_parametors_196;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
void* right_value267;
struct sFun* main_fun_197;
void* right_value268;
void* right_value269;
char* name_198;
void* right_value270;
void* right_value271;
struct sType* result_type_199;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
struct sType* __list_values13___200[3];
void* right_value278;
void* right_value279;
struct list$1sTypeph* param_types_201;
void* right_value280;
void* right_value281;
void* right_value282;
char* __list_values14___202[3];
void* right_value283;
void* right_value284;
struct list$1charph* param_names_203;
void* right_value285;
void* right_value286;
struct list$1charph* param_default_parametors_204;
void* right_value287;
void* right_value288;
void* right_value289;
void* right_value290;
struct sFun* main_fun_205;
void* right_value291;
void* right_value292;
char* name_206;
void* right_value293;
void* right_value294;
struct sType* result_type_207;
void* right_value295;
void* right_value296;
struct sType* __list_values15___208[1];
void* right_value297;
void* right_value298;
struct list$1sTypeph* param_types_209;
void* right_value299;
char* __list_values16___210[1];
void* right_value300;
void* right_value301;
struct list$1charph* param_names_211;
void* right_value302;
void* right_value303;
struct list$1charph* param_default_parametors_212;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
struct sFun* main_fun_213;
void* right_value308;
void* right_value309;
char* name_214;
void* right_value310;
void* right_value311;
struct sType* result_type_215;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
struct sType* __list_values17___216[3];
void* right_value318;
void* right_value319;
struct list$1sTypeph* param_types_217;
void* right_value320;
void* right_value321;
void* right_value322;
char* __list_values18___218[3];
void* right_value323;
void* right_value324;
struct list$1charph* param_names_219;
void* right_value325;
void* right_value326;
struct list$1charph* param_default_parametors_220;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
struct sFun* main_fun_221;
void* right_value331;
void* right_value332;
char* name_222;
void* right_value333;
void* right_value334;
struct sType* result_type_223;
void* right_value335;
void* right_value336;
struct list$1sTypeph* param_types_224;
void* right_value337;
void* right_value338;
struct list$1charph* param_names_225;
void* right_value339;
void* right_value340;
struct list$1charph* param_default_parametors_226;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
struct sFun* main_fun_227;
void* right_value345;
void* right_value346;
char* name_228;
void* right_value347;
void* right_value348;
struct sType* result_type_229;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
void* right_value354;
void* right_value355;
void* right_value356;
struct sType* __list_values19___230[4];
void* right_value357;
void* right_value358;
struct list$1sTypeph* param_types_231;
void* right_value359;
void* right_value360;
void* right_value361;
void* right_value362;
char* __list_values20___232[4];
void* right_value363;
void* right_value364;
struct list$1charph* param_names_233;
void* right_value365;
void* right_value366;
struct list$1charph* param_default_parametors_234;
void* right_value367;
void* right_value368;
void* right_value369;
void* right_value370;
struct sFun* main_fun_235;
void* right_value371;
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&name_98, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_type_99, 0, sizeof(struct sType*));
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
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&param_types_105, 0, sizeof(struct list$1sTypeph*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&param_names_111, 0, sizeof(struct list$1charph*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&param_default_parametors_112, 0, sizeof(struct list$1charph*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&main_fun_113, 0, sizeof(struct sFun*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&name_158, 0, sizeof(char*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&result_type_159, 0, sizeof(struct sType*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
memset(&param_types_161, 0, sizeof(struct list$1sTypeph*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&param_names_163, 0, sizeof(struct list$1charph*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&param_default_parametors_164, 0, sizeof(struct list$1charph*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&main_fun_165, 0, sizeof(struct sFun*));
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&name_166, 0, sizeof(char*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&result_type_167, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&param_types_169, 0, sizeof(struct list$1sTypeph*));
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&param_names_171, 0, sizeof(struct list$1charph*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&param_default_parametors_172, 0, sizeof(struct list$1charph*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&main_fun_173, 0, sizeof(struct sFun*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&result_type_175, 0, sizeof(struct sType*));
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
memset(&param_types_177, 0, sizeof(struct list$1sTypeph*));
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&param_names_179, 0, sizeof(struct list$1charph*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&param_default_parametors_180, 0, sizeof(struct list$1charph*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&main_fun_181, 0, sizeof(struct sFun*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&name_182, 0, sizeof(char*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&result_type_183, 0, sizeof(struct sType*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&param_types_185, 0, sizeof(struct list$1sTypeph*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&param_names_187, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&param_default_parametors_188, 0, sizeof(struct list$1charph*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&main_fun_189, 0, sizeof(struct sFun*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&name_190, 0, sizeof(char*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&result_type_191, 0, sizeof(struct sType*));
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
memset(&param_types_193, 0, sizeof(struct list$1sTypeph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&param_names_195, 0, sizeof(struct list$1charph*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&param_default_parametors_196, 0, sizeof(struct list$1charph*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&main_fun_197, 0, sizeof(struct sFun*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&name_198, 0, sizeof(char*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&result_type_199, 0, sizeof(struct sType*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&param_types_201, 0, sizeof(struct list$1sTypeph*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&param_names_203, 0, sizeof(struct list$1charph*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&param_default_parametors_204, 0, sizeof(struct list$1charph*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&main_fun_205, 0, sizeof(struct sFun*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&name_206, 0, sizeof(char*));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&result_type_207, 0, sizeof(struct sType*));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&param_types_209, 0, sizeof(struct list$1sTypeph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&param_names_211, 0, sizeof(struct list$1charph*));
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&param_default_parametors_212, 0, sizeof(struct list$1charph*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&main_fun_213, 0, sizeof(struct sFun*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&name_214, 0, sizeof(char*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&result_type_215, 0, sizeof(struct sType*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&param_types_217, 0, sizeof(struct list$1sTypeph*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&param_names_219, 0, sizeof(struct list$1charph*));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_default_parametors_220, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&main_fun_221, 0, sizeof(struct sFun*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&name_222, 0, sizeof(char*));
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&result_type_223, 0, sizeof(struct sType*));
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&param_types_224, 0, sizeof(struct list$1sTypeph*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value347 = (void*)0;
right_value348 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value371 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_98=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string("come_calloc"))));
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_99=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value99=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___100[0]=come_increment_ref_count(((struct sType*)(right_value102=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value101=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[1]=come_increment_ref_count(((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[2]=come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
__list_values1___100[3]=come_increment_ref_count(((struct sType*)(right_value108=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value107=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"int",(_Bool)0,info))));
__list_values1___100[4]=come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "sType")))),"char*",(_Bool)0,info))));
}        param_types_105=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value115=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value114=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___100))));
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___106[0]=come_increment_ref_count(((char*)(right_value116=__builtin_string("count"))));
__list_values2___106[1]=come_increment_ref_count(((char*)(right_value117=__builtin_string("size"))));
__list_values2___106[2]=come_increment_ref_count(((char*)(right_value118=__builtin_string("sname"))));
__list_values2___106[3]=come_increment_ref_count(((char*)(right_value119=__builtin_string("sline"))));
__list_values2___106[4]=come_increment_ref_count(((char*)(right_value120=__builtin_string("class_name"))));
}        param_names_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value125=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___106))));
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_112=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,((void*)0));
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string("null")))));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string("0")))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_112,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string("null")))));
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_113=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value134=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value131=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "sFun")))),(char*)come_increment_ref_count(name_98),(struct sType*)come_increment_ref_count(result_type_99),(struct list$1sTypeph*)come_increment_ref_count(param_types_105),(struct list$1charph*)come_increment_ref_count(param_names_111),(struct list$1charph*)come_increment_ref_count(param_default_parametors_112),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(name_98)))),(struct sFun*)come_increment_ref_count(main_fun_113));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_98 = come_decrement_ref_count2(name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_158=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("come_increment_ref_count"))));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___160[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "sType")))),"void*",(_Bool)0,info))));
}        param_types_161=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___160))));
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___162[0]=come_increment_ref_count(((char*)(right_value149=__builtin_string("mem"))));
}        param_names_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___162))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_164=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value153=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_165=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value157=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value154=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "sFun")))),(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(result_type_159),(struct list$1sTypeph*)come_increment_ref_count(param_types_161),(struct list$1charph*)come_increment_ref_count(param_names_163),(struct list$1charph*)come_increment_ref_count(param_default_parametors_164),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(name_158)))),(struct sFun*)come_increment_ref_count(main_fun_165));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_166=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("come_call_finalizer"))));
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___168[0]=come_increment_ref_count(((struct sType*)(right_value163=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[1]=come_increment_ref_count(((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[2]=come_increment_ref_count(((struct sType*)(right_value167=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[3]=come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"void*",(_Bool)0,info))));
__list_values5___168[4]=come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___168[5]=come_increment_ref_count(((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
__list_values5___168[6]=come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "sType")))),"int",(_Bool)0,info))));
}        param_types_169=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value177=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___168))));
        come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___170[0]=come_increment_ref_count(((char*)(right_value178=__builtin_string("fun"))));
__list_values6___170[1]=come_increment_ref_count(((char*)(right_value179=__builtin_string("mem"))));
__list_values6___170[2]=come_increment_ref_count(((char*)(right_value180=__builtin_string("protocol_fun"))));
__list_values6___170[3]=come_increment_ref_count(((char*)(right_value181=__builtin_string("protocol_obj"))));
__list_values6___170[4]=come_increment_ref_count(((char*)(right_value182=__builtin_string("call_finalizer_only"))));
__list_values6___170[5]=come_increment_ref_count(((char*)(right_value183=__builtin_string("no_decrement"))));
__list_values6___170[6]=come_increment_ref_count(((char*)(right_value184=__builtin_string("no_free"))));
}        param_names_171=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___170))));
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_172=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value188=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_173=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value192=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value189=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "sFun")))),(char*)come_increment_ref_count(name_166),(struct sType*)come_increment_ref_count(result_type_167),(struct list$1sTypeph*)come_increment_ref_count(param_types_169),(struct list$1charph*)come_increment_ref_count(param_names_171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_172),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(name_166)))),(struct sFun*)come_increment_ref_count(main_fun_173));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_174=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string("come_decrement_ref_count"))));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___176[0]=come_increment_ref_count(((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[1]=come_increment_ref_count(((struct sType*)(right_value200=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value199=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[2]=come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"void*",(_Bool)0,info))));
__list_values7___176[3]=come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
__list_values7___176[4]=come_increment_ref_count(((struct sType*)(right_value206=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value205=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "sType")))),"bool",(_Bool)0,info))));
}        param_types_177=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value208=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value207=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___176))));
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___178[0]=come_increment_ref_count(((char*)(right_value209=__builtin_string("mem"))));
__list_values8___178[1]=come_increment_ref_count(((char*)(right_value210=__builtin_string("protocol_fun"))));
__list_values8___178[2]=come_increment_ref_count(((char*)(right_value211=__builtin_string("protocol_obj"))));
__list_values8___178[3]=come_increment_ref_count(((char*)(right_value212=__builtin_string("no_decrement"))));
__list_values8___178[4]=come_increment_ref_count(((char*)(right_value213=__builtin_string("no_free"))));
}        param_names_179=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___178))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_180=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_181=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value221=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value218=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "sFun")))),(char*)come_increment_ref_count(name_174),(struct sType*)come_increment_ref_count(result_type_175),(struct list$1sTypeph*)come_increment_ref_count(param_types_177),(struct list$1charph*)come_increment_ref_count(param_names_179),(struct list$1charph*)come_increment_ref_count(param_default_parametors_180),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(name_174)))),(struct sFun*)come_increment_ref_count(main_fun_181));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_182=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("come_free_object"))));
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___184[0]=come_increment_ref_count(((struct sType*)(right_value227=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "sType")))),"void*",(_Bool)0,info))));
}        param_types_185=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value229=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value228=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___184))));
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___186[0]=come_increment_ref_count(((char*)(right_value230=__builtin_string("mem"))));
}        param_names_187=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___186))));
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_188=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value234=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_189=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value238=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value235=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "sFun")))),(char*)come_increment_ref_count(name_182),(struct sType*)come_increment_ref_count(result_type_183),(struct list$1sTypeph*)come_increment_ref_count(param_types_185),(struct list$1charph*)come_increment_ref_count(param_names_187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_188),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(name_182)))),(struct sFun*)come_increment_ref_count(main_fun_189));
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_190=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string("come_memdup"))));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___192[0]=come_increment_ref_count(((struct sType*)(right_value244=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"void*",(_Bool)0,info))));
__list_values11___192[1]=come_increment_ref_count(((struct sType*)(right_value246=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
__list_values11___192[2]=come_increment_ref_count(((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"int",(_Bool)0,info))));
__list_values11___192[3]=come_increment_ref_count(((struct sType*)(right_value250=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value249=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "sType")))),"char*",(_Bool)0,info))));
}        param_types_193=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value252=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value251=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___192))));
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___194[0]=come_increment_ref_count(((char*)(right_value253=__builtin_string("block"))));
__list_values12___194[1]=come_increment_ref_count(((char*)(right_value254=__builtin_string("sname"))));
__list_values12___194[2]=come_increment_ref_count(((char*)(right_value255=__builtin_string("sline"))));
__list_values12___194[3]=come_increment_ref_count(((char*)(right_value256=__builtin_string("class_name"))));
}        param_names_195=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___194))));
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_196=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value260=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,((void*)0));
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("null")))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("0")))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_196,(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string("null")))));
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_197=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value267=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value264=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "sFun")))),(char*)come_increment_ref_count(name_190),(struct sType*)come_increment_ref_count(result_type_191),(struct list$1sTypeph*)come_increment_ref_count(param_types_193),(struct list$1charph*)come_increment_ref_count(param_names_195),(struct list$1charph*)come_increment_ref_count(param_default_parametors_196),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(name_190)))),(struct sFun*)come_increment_ref_count(main_fun_197));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_190 = come_decrement_ref_count2(name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_198=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string("memset"))));
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___200[0]=come_increment_ref_count(((struct sType*)(right_value273=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value272=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"void*",(_Bool)0,info))));
__list_values13___200[1]=come_increment_ref_count(((struct sType*)(right_value275=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value274=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"int",(_Bool)0,info))));
__list_values13___200[2]=come_increment_ref_count(((struct sType*)(right_value277=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "sType")))),"long",(_Bool)0,info))));
}        param_types_201=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value279=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___200))));
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___202[0]=come_increment_ref_count(((char*)(right_value280=__builtin_string("b"))));
__list_values14___202[1]=come_increment_ref_count(((char*)(right_value281=__builtin_string("c"))));
__list_values14___202[2]=come_increment_ref_count(((char*)(right_value282=__builtin_string("len"))));
}        param_names_203=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___202))));
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_204=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value286=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value285=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_205=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value290=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value287=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "sFun")))),(char*)come_increment_ref_count(name_198),(struct sType*)come_increment_ref_count(result_type_199),(struct list$1sTypeph*)come_increment_ref_count(param_types_201),(struct list$1charph*)come_increment_ref_count(param_names_203),(struct list$1charph*)come_increment_ref_count(param_default_parametors_204),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(name_198)))),(struct sFun*)come_increment_ref_count(main_fun_205));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_198 = come_decrement_ref_count2(name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_206=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string("__builtin_string"))));
        right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___208[0]=come_increment_ref_count(((struct sType*)(right_value296=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "sType")))),"char*",(_Bool)0,info))));
}        param_types_209=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value298=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___208))));
        come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___210[0]=come_increment_ref_count(((char*)(right_value299=__builtin_string("str"))));
}        param_names_211=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___210))));
        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_212=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value303=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_213=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value307=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value304=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "sFun")))),(char*)come_increment_ref_count(name_206),(struct sType*)come_increment_ref_count(result_type_207),(struct list$1sTypeph*)come_increment_ref_count(param_types_209),(struct list$1charph*)come_increment_ref_count(param_names_211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_212),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string(name_206)))),(struct sFun*)come_increment_ref_count(main_fun_213));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_214=(char*)come_increment_ref_count(((char*)(right_value309=__builtin_string("come_heap_init"))));
        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value310=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___216[0]=come_increment_ref_count(((struct sType*)(right_value313=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___216[1]=come_increment_ref_count(((struct sType*)(right_value315=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value314=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
__list_values17___216[2]=come_increment_ref_count(((struct sType*)(right_value317=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value316=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "sType")))),"int",(_Bool)0,info))));
}        param_types_217=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value319=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___216))));
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___218[0]=come_increment_ref_count(((char*)(right_value320=xsprintf("come_malloc"))));
__list_values18___218[1]=come_increment_ref_count(((char*)(right_value321=xsprintf("come_debug"))));
__list_values18___218[2]=come_increment_ref_count(((char*)(right_value322=xsprintf("come_gc"))));
}        param_names_219=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___218))));
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_220=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_220,((void*)0));
        main_fun_221=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value330=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value327=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "sFun")))),(char*)come_increment_ref_count(name_214),(struct sType*)come_increment_ref_count(result_type_215),(struct list$1sTypeph*)come_increment_ref_count(param_types_217),(struct list$1charph*)come_increment_ref_count(param_names_219),(struct list$1charph*)come_increment_ref_count(param_default_parametors_220),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(name_214)))),(struct sFun*)come_increment_ref_count(main_fun_221));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_222=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string("come_heap_final"))));
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value333=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_224=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value336=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value340=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value344=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value341=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "sFun")))),(char*)come_increment_ref_count(name_222),(struct sType*)come_increment_ref_count(result_type_223),(struct list$1sTypeph*)come_increment_ref_count(param_types_224),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value343=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string(name_222)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_222 = come_decrement_ref_count2(name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value346=__builtin_string("come_null_check"))));
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value347=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values19___230[0]=come_increment_ref_count(((struct sType*)(right_value350=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value349=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"void*",(_Bool)0,info))));
__list_values19___230[1]=come_increment_ref_count(((struct sType*)(right_value352=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value351=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"char*",(_Bool)0,info))));
__list_values19___230[2]=come_increment_ref_count(((struct sType*)(right_value354=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value353=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
__list_values19___230[3]=come_increment_ref_count(((struct sType*)(right_value356=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value355=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "sType")))),"int",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value358=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value357=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),4,__list_values19___230))));
        come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___232[0]=come_increment_ref_count(((char*)(right_value359=__builtin_string("mem"))));
__list_values20___232[1]=come_increment_ref_count(((char*)(right_value360=__builtin_string("sname"))));
__list_values20___232[2]=come_increment_ref_count(((char*)(right_value361=__builtin_string("sline"))));
__list_values20___232[3]=come_increment_ref_count(((char*)(right_value362=__builtin_string("id"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value364=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value363=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),4,__list_values20___232))));
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value365=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value370=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value367=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value369=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value371=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result99__ = 0;
    return __result99__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_101;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_101, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_101=0;            i_101<num_value;            i_101++            ){
                list$1sTypeph_push_back(self,values[i_101]);
            }
            __result72__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result72__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value111;
struct list_item$1sTypeph* litem_102;
struct sType* __dec_obj62;
_Bool _if_conditional209;
void* right_value112;
struct list_item$1sTypeph* litem_103;
struct sType* __dec_obj63;
void* right_value113;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj64;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sTypeph*));
right_value112 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sTypeph*));
right_value113 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional208=self->len==0,                    _if_conditional208) {
                        litem_102=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value111=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_102->prev=((void*)0);
                        litem_102->next=((void*)0);
                        __dec_obj62=litem_102->item;
                        litem_102->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_102;
                        self->head=litem_102;
                    }
                    else {
                        if(_if_conditional209=self->len==1,                        _if_conditional209) {
                            litem_103=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value112=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_103->prev=self->head;
                            litem_103->next=((void*)0);
                            __dec_obj63=litem_103->item;
                            litem_103->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_103;
                            self->head->next=litem_103;
                        }
                        else {
                            litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value113=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_104->prev=self->tail;
                            litem_104->next=((void*)0);
                            __dec_obj64=litem_104->item;
                            litem_104->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_104;
                            self->tail=litem_104;
                        }
                    }
                    self->len++;
                    __result71__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_107;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_107, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_107=0;            i_107<num_value;            i_107++            ){
                list$1charph_push_back(self,values[i_107]);
            }
            __result74__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional210;
void* right_value121;
struct list_item$1charph* litem_108;
char* __dec_obj65;
_Bool _if_conditional211;
void* right_value122;
struct list_item$1charph* litem_109;
char* __dec_obj66;
void* right_value123;
struct list_item$1charph* litem_110;
char* __dec_obj67;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
right_value122 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
right_value123 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional210=self->len==0,                    _if_conditional210) {
                        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value121=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=((void*)0);
                        litem_108->next=((void*)0);
                        __dec_obj65=litem_108->item;
                        litem_108->item=(char*)come_increment_ref_count(item);
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_108;
                        self->head=litem_108;
                    }
                    else {
                        if(_if_conditional211=self->len==1,                        _if_conditional211) {
                            litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_109->prev=self->head;
                            litem_109->next=((void*)0);
                            __dec_obj66=litem_109->item;
                            litem_109->item=(char*)come_increment_ref_count(item);
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_109;
                            self->head->next=litem_109;
                        }
                        else {
                            litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_110->prev=self->tail;
                            litem_110->next=((void*)0);
                            __dec_obj67=litem_110->item;
                            litem_110->item=(char*)come_increment_ref_count(item);
                            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_110;
                            self->tail=litem_110;
                        }
                    }
                    self->len++;
                    __result73__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result73__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional212;
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional21;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool same_key_exist_149;
char* it2_152;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct map$2charphsFunph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
memset(&same_key_exist_149, 0, sizeof(_Bool));
memset(&it2_152, 0, sizeof(char*));
            if(_if_conditional212=self->len*10>=self->size,            _if_conditional212) {
                map$2charphsFunph_rehash(self);
            }
            hash_131=string_get_hash_key(key)%self->size;
            it_132=hash_131;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional224=self->item_existance[it_132],                _if_conditional224) {
                    if(_if_conditional225=string_equals(self->keys[it_132],key),                    _if_conditional225) {
                        if(_if_conditional226=1,                        _if_conditional226) {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132] = come_decrement_ref_count2(self->keys[it_132], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_132]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_132]);
                            self->keys[it_132]=key;
                        }
                        if(_if_conditional246=1,                        _if_conditional246) {
                            come_call_finalizer2(sFun_finalize,self->items[it_132], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_132]=item;
                        }
                        break;
                    }
                    it_132++;
                    if(_if_conditional247=it_132>=self->size,                    _if_conditional247) {
                        it_132=0;
                    }
                    else {
                        if(_if_conditional248=it_132==hash_131,                        _if_conditional248) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_132]=(_Bool)1;
                    if(_if_conditional249=1,                    _if_conditional249) {
                        self->keys[it_132]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_132]=key;
                    }
                    if(_if_conditional250=1,                    _if_conditional250) {
                        self->items[it_132]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_132]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_149=(_Bool)0;
            for(            it2_152=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_152=list$1charp_next(self->key_list)            ){
                if(_if_conditional255=string_equals(it2_152,key),                _if_conditional255) {
                    puts("SAME KEY");
                    same_key_exist_149=(_Bool)1;
                }
            }
            if(_if_conditional256=!same_key_exist_149,            _if_conditional256) {
                list$1charp_push_back(self->key_list,key);
            }
            __result98__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result98__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_114;
void* right_value135;
char** keys_115;
void* right_value136;
struct sFun** items_116;
void* right_value137;
_Bool* item_existance_117;
int len_118;
char* it_121;
struct sFun* default_value_124;
struct sFun* it2_127;
unsigned int hash_128;
int n_129;
_Bool _while_condtional20;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct sFun* default_value_130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_114, 0, sizeof(int));
right_value135 = (void*)0;
memset(&keys_115, 0, sizeof(char**));
right_value136 = (void*)0;
memset(&items_116, 0, sizeof(struct sFun**));
right_value137 = (void*)0;
memset(&item_existance_117, 0, sizeof(_Bool*));
memset(&len_118, 0, sizeof(int));
memset(&it_121, 0, sizeof(char*));
memset(&default_value_124, 0, sizeof(struct sFun*));
memset(&it2_127, 0, sizeof(struct sFun*));
memset(&hash_128, 0, sizeof(unsigned int));
memset(&n_129, 0, sizeof(int));
memset(&default_value_130, 0, sizeof(struct sFun*));
                    size_114=self->size*10;
                    keys_115=(char**)come_increment_ref_count(((char**)(right_value135=(char**)come_calloc(1, sizeof(char*)*(1*(size_114)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_116=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value136=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_114)), "/usr/local/include/comelang2.h", 1336, "sFun*%"))));
                    come_call_finalizer2(sFun_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_117=(_Bool*)come_increment_ref_count(((_Bool*)(right_value137=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_114)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_118=0;
                    for(                    it_121=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_121=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_124,0,sizeof(struct sFun*));
                        it2_127=map$2charphsFunph_at(self,it_121,default_value_124);
                        hash_128=string_get_hash_key(it_121)%size_114;
                        n_129=hash_128;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional221=item_existance_117[n_129],                            _if_conditional221) {
                                n_129++;
                                if(_if_conditional222=n_129>=size_114,                                _if_conditional222) {
                                    n_129=0;
                                }
                                else {
                                    if(_if_conditional223=n_129==hash_128,                                    _if_conditional223) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_117[n_129]=(_Bool)1;
                                keys_115[n_129]=it_121;
                                items_116[n_129]=map$2charphsFunph_at(self,it_121,default_value_130);
                                len_118++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_115;
                    self->items=items_116;
                    self->item_existance=item_existance_117;
                    self->size=size_114;
                    self->len=len_118;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional213;
char* result_119;
char* __result75__;
_Bool _if_conditional214;
char* __result76__;
char* result_120;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_119, 0, sizeof(char*));
memset(&result_120, 0, sizeof(char*));
                        if(_if_conditional213=self==((void*)0),                        _if_conditional213) {
                            memset(&result_119,0,sizeof(char*));
                            __result75__ = __result_obj__ = result_119;
                            return __result75__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result76__ = __result_obj__ = self->key_list->it->item;
                            return __result76__;
                        }
                        memset(&result_120,0,sizeof(char*));
                        __result77__ = __result_obj__ = result_120;
                        return __result77__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result78__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result78__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional215;
char* result_122;
char* __result79__;
_Bool _if_conditional216;
char* __result80__;
char* result_123;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_122, 0, sizeof(char*));
memset(&result_123, 0, sizeof(char*));
                        if(_if_conditional215=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional215) {
                            memset(&result_122,0,sizeof(char*));
                            __result79__ = __result_obj__ = result_122;
                            return __result79__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result80__ = __result_obj__ = self->key_list->it->item;
                            return __result80__;
                        }
                        memset(&result_123,0,sizeof(char*));
                        __result81__ = __result_obj__ = result_123;
                        return __result81__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_125;
unsigned int it_126;
_Bool _while_condtional19;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sFun* __result82__;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sFun* __result83__;
struct sFun* __result84__;
struct sFun* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_125, 0, sizeof(unsigned int));
memset(&it_126, 0, sizeof(unsigned int));
                            hash_125=string_get_hash_key(((char*)key))%self->size;
                            it_126=hash_125;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional217=self->item_existance[it_126],                                _if_conditional217) {
                                    if(_if_conditional218=string_equals(self->keys[it_126],key),                                    _if_conditional218) {
                                        __result82__ = __result_obj__ = self->items[it_126];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result82__;
                                    }
                                    it_126++;
                                    if(_if_conditional219=it_126>=self->size,                                    _if_conditional219) {
                                        it_126=0;
                                    }
                                    else {
                                        if(_if_conditional220=it_126==hash_125,                                        _if_conditional220) {
                                            __result83__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result83__;
                                        }
                                    }
                                }
                                else {
                                    __result84__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result84__;
                                }
                            }
                            __result85__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result85__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_133;
struct list_item$1charp* it_134;
_Bool _while_condtional22;
_Bool _if_conditional227;
struct list$1charp* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_133, 0, sizeof(int));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
                                it2_133=0;
                                it_134=self->head;
                                while(_while_condtional22=it_134!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional227=string_equals(it_134->item,item),                                    _if_conditional227) {
                                        list$1charp_delete(self,it2_133,it2_133+1);
                                        break;
                                    }
                                    it2_133++;
                                    it_134=it_134->next;
                                }
                                __result89__ = __result_obj__ = self;
                                return __result89__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
int tmp_135;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list$1charp* __result86__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list_item$1charp* it_138;
int i_139;
_Bool _while_condtional24;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_140;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* it_141;
int i_142;
_Bool _while_condtional25;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct list_item$1charp* prev_it_143;
struct list_item$1charp* it_144;
struct list_item$1charp* head_prev_it_145;
struct list_item$1charp* tail_it_146;
int i_147;
_Bool _while_condtional26;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list_item$1charp* prev_it_148;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct list$1charp* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_135, 0, sizeof(int));
memset(&it_138, 0, sizeof(struct list_item$1charp*));
memset(&i_139, 0, sizeof(int));
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
memset(&i_142, 0, sizeof(int));
memset(&prev_it_143, 0, sizeof(struct list_item$1charp*));
memset(&it_144, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_145, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_146, 0, sizeof(struct list_item$1charp*));
memset(&i_147, 0, sizeof(int));
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional228=head<0,                                            _if_conditional228) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional229=tail<0,                                            _if_conditional229) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional230=head>tail,                                            _if_conditional230) {
                                                tmp_135=tail;
                                                tail=head;
                                                head=tmp_135;
                                            }
                                            if(_if_conditional231=head<0,                                            _if_conditional231) {
                                                head=0;
                                            }
                                            if(_if_conditional232=tail>self->len,                                            _if_conditional232) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional233=head==tail,                                            _if_conditional233) {
                                                __result86__ = __result_obj__ = self;
                                                return __result86__;
                                            }
                                            if(_if_conditional234=head==0&&tail==self->len,                                            _if_conditional234) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional235=head==0,                                                _if_conditional235) {
                                                    it_138=self->head;
                                                    i_139=0;
                                                    while(_while_condtional24=it_138!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional236=i_139<tail,                                                        _if_conditional236) {
                                                            prev_it_140=it_138;
                                                            it_138=it_138->next;
                                                            i_139++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional237=i_139==tail,                                                            _if_conditional237) {
                                                                self->head=it_138;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_138=it_138->next;
                                                                i_139++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional238=tail==self->len,                                                    _if_conditional238) {
                                                        it_141=self->head;
                                                        i_142=0;
                                                        while(_while_condtional25=it_141!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional239=i_142==head,                                                            _if_conditional239) {
                                                                self->tail=it_141->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional240=i_142>=head,                                                            _if_conditional240) {
                                                                prev_it_143=it_141;
                                                                it_141=it_141->next;
                                                                i_142++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_141=it_141->next;
                                                                i_142++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_144=self->head;
                                                        head_prev_it_145=((void*)0);
                                                        tail_it_146=((void*)0);
                                                        i_147=0;
                                                        while(_while_condtional26=it_144!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional241=i_147==head,                                                            _if_conditional241) {
                                                                head_prev_it_145=it_144->prev;
                                                            }
                                                            if(_if_conditional242=i_147==tail,                                                            _if_conditional242) {
                                                                tail_it_146=it_144;
                                                            }
                                                            if(_if_conditional243=i_147>=head&&i_147<tail,                                                            _if_conditional243) {
                                                                prev_it_148=it_144;
                                                                it_144=it_144->next;
                                                                i_147++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_144=it_144->next;
                                                                i_147++;
                                                            }
                                                        }
                                                        if(_if_conditional244=head_prev_it_145!=((void*)0),                                                        _if_conditional244) {
                                                            head_prev_it_145->next=tail_it_146;
                                                        }
                                                        if(_if_conditional245=tail_it_146!=((void*)0),                                                        _if_conditional245) {
                                                            tail_it_146->prev=head_prev_it_145;
                                                        }
                                                    }
                                                }
                                            }
                                            __result88__ = __result_obj__ = self;
                                            return __result88__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_136;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_137;
struct list$1charp* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_136, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_137, 0, sizeof(struct list_item$1charp*));
                                                    it_136=self->head;
                                                    while(_while_condtional23=it_136!=((void*)0),                                                    _while_condtional23) {
                                                        prev_it_137=it_136;
                                                        it_136=it_136->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result87__ = __result_obj__ = self;
                                                    return __result87__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional251;
char* result_150;
char* __result90__;
_Bool _if_conditional252;
char* __result91__;
char* result_151;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(char*));
memset(&result_151, 0, sizeof(char*));
                if(_if_conditional251=self==((void*)0),                _if_conditional251) {
                    memset(&result_150,0,sizeof(char*));
                    __result90__ = __result_obj__ = result_150;
                    return __result90__;
                }
                self->it=self->head;
                if(self->it) {
                    __result91__ = __result_obj__ = self->it->item;
                    return __result91__;
                }
                memset(&result_151,0,sizeof(char*));
                __result92__ = __result_obj__ = result_151;
                return __result92__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
                __result93__ = self==((void*)0)||self->it==((void*)0);
                return __result93__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional253;
char* result_153;
char* __result94__;
_Bool _if_conditional254;
char* __result95__;
char* result_154;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_153, 0, sizeof(char*));
memset(&result_154, 0, sizeof(char*));
                if(_if_conditional253=self==((void*)0)||self->it==((void*)0),                _if_conditional253) {
                    memset(&result_153,0,sizeof(char*));
                    __result94__ = __result_obj__ = result_153;
                    return __result94__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result95__ = __result_obj__ = self->it->item;
                    return __result95__;
                }
                memset(&result_154,0,sizeof(char*));
                __result96__ = __result_obj__ = result_154;
                return __result96__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional257;
void* right_value138;
struct list_item$1charp* litem_155;
_Bool _if_conditional258;
void* right_value139;
struct list_item$1charp* litem_156;
void* right_value140;
struct list_item$1charp* litem_157;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charp*));
right_value139 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charp*));
right_value140 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional257=self->len==0,                    _if_conditional257) {
                        litem_155=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value138=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_155->prev=((void*)0);
                        litem_155->next=((void*)0);
                        litem_155->item=item;
                        self->tail=litem_155;
                        self->head=litem_155;
                    }
                    else {
                        if(_if_conditional258=self->len==1,                        _if_conditional258) {
                            litem_156=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_156->prev=self->head;
                            litem_156->next=((void*)0);
                            litem_156->item=item;
                            self->tail=litem_156;
                            self->head->next=litem_156;
                        }
                        else {
                            litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_157->prev=self->tail;
                            litem_157->next=((void*)0);
                            litem_157->item=item;
                            self->tail->next=litem_157;
                            self->tail=litem_157;
                        }
                    }
                    self->len++;
                    __result97__ = __result_obj__ = self;
                    return __result97__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_236;
_Bool is_type_name_flag_237;
int sline_238;
_Bool define_struct_nobody_239;
char* p_240;
int sline_241;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value372;
char* word_242;
_Bool _if_conditional261;
_Bool define_function_pointer_result_function_243;
_Bool define_variable_between_brace_244;
_Bool _if_conditional262;
char* p_245;
_Bool _if_conditional263;
void* right_value373;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_246;
char* fun_name_247;
_Bool err_248;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value374;
char* word_249;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool define_function_flag_250;
_Bool _if_conditional271;
char* p_251;
_Bool invalid_type_252;
_Bool _if_conditional272;
void* right_value375;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_253;
char* fun_name_254;
_Bool err_255;
_Bool _if_conditional273;
char* word_256;
_Bool _if_conditional274;
void* right_value376;
char* __dec_obj68;
_Bool _if_conditional275;
void* right_value377;
char* __dec_obj69;
char* __dec_obj70;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _while_condtional27;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value378;
char* __dec_obj71;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool define_variable_257;
_Bool _if_conditional283;
char* p_258;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value379;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_259;
char* fun_name_260;
_Bool err_261;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value380;
char* word_262;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value381;
char* word_263;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _while_condtional28;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value382;
char* word_264;
_Bool _if_conditional299;
_Bool _while_condtional30;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value383;
char* word_267;
void* right_value384;
void* right_value385;
struct sNode* node_268;
struct sNode* __result101__;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value386;
struct sNode* __result102__;
_Bool _if_conditional305;
char* header_head_269;
void* right_value387;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_270;
char* fun_name_271;
_Bool err_272;
_Bool _if_conditional306;
void* right_value388;
void* right_value389;
struct list$1sTypeph* param_types_273;
void* right_value390;
void* right_value391;
struct list$1charph* param_names_274;
_Bool _if_conditional307;
_Bool _while_condtional31;
void* right_value392;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_275;
char* param_name_276;
_Bool err_277;
_Bool _if_conditional308;
static int num_function_pointer_result_var_name_a_278=0;
void* right_value393;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value394;
void* right_value395;
struct list$1sTypeph* param_types2_279;
void* right_value396;
void* right_value397;
struct list$1charph* param_names2_280;
_Bool _if_conditional312;
_Bool _while_condtional32;
void* right_value398;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_281;
char* param_name_282;
_Bool err_283;
_Bool _if_conditional313;
static int num_function_pointer_result_var_name_b_284=0;
void* right_value399;
_Bool _if_conditional314;
_Bool _if_conditional315;
char* header_tail_285;
void* right_value400;
void* right_value401;
struct sType* result_type2_286;
void* right_value402;
void* right_value403;
struct tuple1$1sTypeph* __dec_obj73;
void* right_value404;
struct list$1sTypeph* __dec_obj74;
void* right_value405;
struct list$1charph* __dec_obj75;
_Bool var_args_287;
void* right_value406;
void* right_value407;
struct buffer* header_buf_288;
void* right_value408;
void* right_value409;
struct list$1charph* param_default_parametors_289;
void* right_value410;
void* right_value411;
void* right_value412;
void* right_value413;
void* right_value414;
struct sFun* fun_290;
void* right_value415;
struct sFun* fun2_294;
_Bool _if_conditional320;
void* right_value416;
void* right_value417;
void* right_value418;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value453;
struct sNode* __result132__;
_Bool _if_conditional385;
void* right_value454;
struct sNode* __result133__;
_Bool _if_conditional386;
void* right_value455;
struct sNode* node_329;
char* source_tail_330;
void* right_value456;
void* right_value457;
struct buffer* header_331;
void* right_value458;
struct sNode* __result134__;
void* right_value459;
char* buf2_332;
void* right_value460;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_236, 0, sizeof(char*));
memset(&is_type_name_flag_237, 0, sizeof(_Bool));
memset(&sline_238, 0, sizeof(int));
memset(&define_struct_nobody_239, 0, sizeof(_Bool));
memset(&p_240, 0, sizeof(char*));
memset(&sline_241, 0, sizeof(int));
right_value372 = (void*)0;
memset(&word_242, 0, sizeof(char*));
memset(&define_function_pointer_result_function_243, 0, sizeof(_Bool));
memset(&define_variable_between_brace_244, 0, sizeof(_Bool));
memset(&p_245, 0, sizeof(char*));
right_value373 = (void*)0;
memset(&result_type_246, 0, sizeof(struct sType*));
memset(&fun_name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
memset(&result_type_246, 0, sizeof(struct sType*));
memset(&fun_name_247, 0, sizeof(char*));
memset(&err_248, 0, sizeof(_Bool));
right_value374 = (void*)0;
memset(&word_249, 0, sizeof(char*));
memset(&define_function_flag_250, 0, sizeof(_Bool));
memset(&p_251, 0, sizeof(char*));
memset(&invalid_type_252, 0, sizeof(_Bool));
right_value375 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&result_type_253, 0, sizeof(struct sType*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&err_255, 0, sizeof(_Bool));
memset(&word_256, 0, sizeof(char*));
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&define_variable_257, 0, sizeof(_Bool));
memset(&p_258, 0, sizeof(char*));
right_value379 = (void*)0;
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
memset(&result_type_259, 0, sizeof(struct sType*));
memset(&fun_name_260, 0, sizeof(char*));
memset(&err_261, 0, sizeof(_Bool));
right_value380 = (void*)0;
memset(&word_262, 0, sizeof(char*));
right_value381 = (void*)0;
memset(&word_263, 0, sizeof(char*));
right_value382 = (void*)0;
memset(&word_264, 0, sizeof(char*));
right_value383 = (void*)0;
memset(&word_267, 0, sizeof(char*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&node_268, 0, sizeof(struct sNode*));
right_value386 = (void*)0;
memset(&header_head_269, 0, sizeof(char*));
right_value387 = (void*)0;
memset(&result_type_270, 0, sizeof(struct sType*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
memset(&result_type_270, 0, sizeof(struct sType*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&err_272, 0, sizeof(_Bool));
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&param_types_273, 0, sizeof(struct list$1sTypeph*));
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&param_names_274, 0, sizeof(struct list$1charph*));
right_value392 = (void*)0;
memset(&param_type_275, 0, sizeof(struct sType*));
memset(&param_name_276, 0, sizeof(char*));
memset(&err_277, 0, sizeof(_Bool));
memset(&param_type_275, 0, sizeof(struct sType*));
memset(&param_name_276, 0, sizeof(char*));
memset(&err_277, 0, sizeof(_Bool));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&param_types2_279, 0, sizeof(struct list$1sTypeph*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&param_names2_280, 0, sizeof(struct list$1charph*));
right_value398 = (void*)0;
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
memset(&param_type_281, 0, sizeof(struct sType*));
memset(&param_name_282, 0, sizeof(char*));
memset(&err_283, 0, sizeof(_Bool));
right_value399 = (void*)0;
memset(&header_tail_285, 0, sizeof(char*));
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&result_type2_286, 0, sizeof(struct sType*));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&var_args_287, 0, sizeof(_Bool));
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&header_buf_288, 0, sizeof(struct buffer*));
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&param_default_parametors_289, 0, sizeof(struct list$1charph*));
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&fun_290, 0, sizeof(struct sFun*));
right_value415 = (void*)0;
memset(&fun2_294, 0, sizeof(struct sFun*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&node_329, 0, sizeof(struct sNode*));
memset(&source_tail_330, 0, sizeof(char*));
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&header_331, 0, sizeof(struct buffer*));
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&buf2_332, 0, sizeof(char*));
right_value460 = (void*)0;
    source_head_236=info->p;
    is_type_name_flag_237=is_type_name(buf,info);
    sline_238=info->sline;
    define_struct_nobody_239=(_Bool)0;
    {
        p_240=info->p;
        sline_241=info->sline;
        if(_if_conditional259=charp_operator_equals(buf,"struct"),        _if_conditional259) {
            if(_if_conditional260=xisalpha(*info->p)||*info->p==95,            _if_conditional260) {
                word_242=(char*)come_increment_ref_count(((char*)(right_value372=parse_word(info))));
                right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional261=*info->p==59,                _if_conditional261) {
                    define_struct_nobody_239=(_Bool)1;
                }
                word_242 = come_decrement_ref_count2(word_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_241;
    }
    define_function_pointer_result_function_243=(_Bool)0;
    define_variable_between_brace_244=(_Bool)0;
    if(is_type_name_flag_237) {
        p_245=info->p;
        info->p=head;
        if(_if_conditional263=xisalpha(*info->p)||*info->p==95,        _if_conditional263) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value373=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_246=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_247=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_248=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional266=*info->p==40,            _if_conditional266) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional267=*info->p!=42,                _if_conditional267) {
                    define_function_pointer_result_function_243=(_Bool)1;
                    if(_if_conditional268=xisalpha(*info->p)||*info->p==95,                    _if_conditional268) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_249=(char*)come_increment_ref_count(((char*)(right_value374=parse_word(info))));
                        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional269=!is_type_name(word_249,info)&&*info->p==41,                        _if_conditional269) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional270=*info->p==40,                            _if_conditional270) {
                            }
                            else {
                                define_variable_between_brace_244=(_Bool)1;
                            }
                        }
                        word_249 = come_decrement_ref_count2(word_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_247 = come_decrement_ref_count2(fun_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_238;
    }
    define_function_flag_250=(_Bool)0;
    if(_if_conditional271=is_type_name_flag_237&&!define_function_pointer_result_function_243&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional271) {
        p_251=info->p;
        info->p=head;
        invalid_type_252=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional272=xisalpha(*info->p)||*info->p==95,        _if_conditional272) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value375=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_253=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_254=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_255=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_254 = come_decrement_ref_count2(fun_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional273=!info->define_struct,        _if_conditional273) {
            info->define_struct=(_Bool)0;
            word_256=((void*)0);
            if(_if_conditional274=xisalnum(*info->p)||*info->p==95,            _if_conditional274) {
                __dec_obj68=word_256;
                word_256=(char*)come_increment_ref_count(((char*)(right_value376=parse_word(info))));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional275=string_operator_equals(word_256,"extern"),                _if_conditional275) {
                    __dec_obj69=word_256;
                    word_256=(char*)come_increment_ref_count(((char*)(right_value377=parse_word(info))));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj70=word_256;
                word_256=((void*)0);
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_256) {
                if(_if_conditional277=is_type_name(word_256,info),                _if_conditional277) {
                    while(_while_condtional27=*info->p==42,                    _while_condtional27) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional278=*info->p==58,                    _if_conditional278) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional279=*info->p==58,                    _if_conditional279) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional280=xisalnum(*info->p)||*info->p==95,                    _if_conditional280) {
                        __dec_obj71=word_256;
                        word_256=(char*)come_increment_ref_count(((char*)(right_value378=parse_word(info))));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional281=strlen(word_256)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional281) {
                    if(is_type_name_flag_237) {
                        define_function_flag_250=(_Bool)1;
                    }
                }
            }
            word_256 = come_decrement_ref_count2(word_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_251;
        info->sline=sline_238;
    }
    define_variable_257=(_Bool)1;
    if(_if_conditional283=is_type_name_flag_237&&!define_function_pointer_result_function_243,    _if_conditional283) {
        p_258=info->p;
        info->p=head;
        if(_if_conditional284=!is_type_name_flag_237,        _if_conditional284) {
            define_variable_257=(_Bool)0;
        }
        if(_if_conditional285=xisalpha(*info->p)||*info->p==95,        _if_conditional285) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value379=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            result_type_259=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_260=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_261=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional286=*info->p==40,            _if_conditional286) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional287=*info->p==42,                _if_conditional287) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional288=xisalpha(*info->p)||*info->p==95,                    _if_conditional288) {
                        word_262=(char*)come_increment_ref_count(((char*)(right_value380=parse_word(info))));
                        right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional289=*info->p==41,                        _if_conditional289) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional290=*info->p==40,                            _if_conditional290) {
                                define_variable_257=(_Bool)1;
                            }
                        }
                        word_262 = come_decrement_ref_count2(word_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional291=xisalpha(*info->p)||*info->p==95,                    _if_conditional291) {
                        word_263=(char*)come_increment_ref_count(((char*)(right_value381=parse_word(info))));
                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional292=*info->p==41,                        _if_conditional292) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional293=!is_type_name(word_263,info)&&*info->p!=40,                            _if_conditional293) {
                                define_variable_257=(_Bool)1;
                            }
                        }
                        word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_260 = come_decrement_ref_count2(fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_257=(_Bool)0;
        }
        else {
            if(define_variable_257) {
            }
            else {
                if(_if_conditional296=!(xisalpha(*info->p)||*info->p==95),                _if_conditional296) {
                    define_variable_257=(_Bool)0;
                }
                while(_while_condtional28=xisalpha(*info->p)||*info->p==95,                _while_condtional28) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional297=*info->p==40||*info->p==58,                _if_conditional297) {
                    define_variable_257=(_Bool)0;
                }
            }
        }
        info->p=p_258;
        info->sline=sline_238;
    }
    else {
        define_variable_257=(_Bool)0;
    }
    if(_if_conditional298=charp_operator_equals(buf,"template"),    _if_conditional298) {
        word_264=(char*)come_increment_ref_count(((char*)(right_value382=parse_word(info))));
        right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional299=*info->p==60,        _if_conditional299) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while(_while_condtional30=(_Bool)1,            _while_condtional30) {
                if(_if_conditional300=*info->p==62,                _if_conditional300) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional301=*info->p==44,                    _if_conditional301) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional302=*info->p==0,                        _if_conditional302) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_267=(char*)come_increment_ref_count(((char*)(right_value383=parse_word(info))));
                            right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value384=string_clone(word_267)))));
                            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_267 = come_decrement_ref_count2(word_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=parse_function(info))));
            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result101__ = __result_obj__ = node_268;
            if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_264 = come_decrement_ref_count2(word_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
            if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_264 = come_decrement_ref_count2(word_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_239) {
        }
        else {
            if(define_variable_between_brace_244) {
                info->p=head;
                info->sline=sline_238;
                __result102__ = __result_obj__ = ((struct sNode*)(right_value386=parse_global_variable(info)));
                if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result102__;
            }
            else {
                if(define_function_pointer_result_function_243) {
                    header_head_269=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value387=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_270=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_271=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_272=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional306=*info->p==40,                    _if_conditional306) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_273=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value389=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value388=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1144, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value390=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1145, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional307=*info->p==41,                        _if_conditional307) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional31=(_Bool)1,                            _while_condtional31) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value392=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_275=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_276=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_277=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional308=!err_277,                                _if_conditional308) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_273,(struct sType*)come_increment_ref_count(param_type_275));
                                list$1charph_push_back(param_names_274,(char*)come_increment_ref_count(((char*)(right_value393=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_278)))));
                                right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional309=*info->p==44,                                _if_conditional309) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional310=*info->p==41,                                    _if_conditional310) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer2(sType_finalize,param_type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_276 = come_decrement_ref_count2(param_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_276 = come_decrement_ref_count2(param_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(_if_conditional311=*info->p==40,                        _if_conditional311) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_279=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value395=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1187, "list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            param_names2_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value397=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value396=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1188, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional312=*info->p==41,                            _if_conditional312) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value398=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_282=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_283=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional313=!err_283,                                    _if_conditional313) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_279,(struct sType*)come_increment_ref_count(param_type_281));
                                    list$1charph_push_back(param_names2_280,(char*)come_increment_ref_count(((char*)(right_value399=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_284)))));
                                    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional314=*info->p==44,                                    _if_conditional314) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional315=*info->p==41,                                        _if_conditional315) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,param_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_282 = come_decrement_ref_count2(param_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_282 = come_decrement_ref_count2(param_name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_285=info->p;
                            result_type2_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value401=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value400=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1226, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj73=result_type2_286->mResultType;
                            result_type2_286->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value403=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value402=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1228, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_270)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj74=result_type2_286->mParamTypes;
                            result_type2_286->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value404=list$1sTypephp_clone(param_types2_279))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj75=result_type2_286->mParamNames;
                            result_type2_286->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=list$1charphp_clone(param_names2_280))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            result_type2_286->mVarArgs=(_Bool)0;
                            result_type2_286->mStatic=(_Bool)0;
                            var_args_287=(_Bool)0;
                            header_buf_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value407=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value406=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1236, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_288,header_head_269,header_tail_285-header_head_269);
                            buffer_append_char(header_buf_288,0);
                            param_default_parametors_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value409=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1240, "list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun_290=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value414=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value410=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1242, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(fun_name_271)))),(struct sType*)come_increment_ref_count(result_type2_286),(struct list$1sTypeph*)come_increment_ref_count(param_types_273),(struct list$1charph*)come_increment_ref_count(param_names_274),(struct list$1charph*)come_increment_ref_count(param_default_parametors_289),(_Bool)1,var_args_287,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value412=buffer_to_string(header_buf_288)))),(char*)come_increment_ref_count(((char*)(right_value413=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun2_294=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value415=__builtin_string(fun_name_271))));
                            right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional320=fun2_294==((void*)0)||fun2_294->mExternal,                            _if_conditional320) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value416=string_clone(fun_name_271)))),(struct sFun*)come_increment_ref_count(fun_290));
                                right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1263, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value418=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value417=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1263, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_290),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result132__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_271 = come_decrement_ref_count2(fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result132__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_273, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_271 = come_decrement_ref_count2(fun_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_250) {
                        info->p=head;
                        info->sline=sline_238;
                        __result133__ = __result_obj__ = ((struct sNode*)(right_value454=parse_function(info)));
                        if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result133__;
                    }
                    else {
                        if(define_variable_257) {
                            info->p=head;
                            info->sline=sline_238;
                            node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=parse_global_variable(info))));
                            if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_330=info->p;
                            header_331=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value457=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value456=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1285, "buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_331,source_head_236,source_tail_330-source_head_236);
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value458=buffer_to_string(header_331))));
                            right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __result134__ = __result_obj__ = node_329;
                            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result134__;
                            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(buffer_finalize,header_331, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_238;
    buf2_332=(char*)come_increment_ref_count(((char*)(right_value459=parse_word(info))));
    right_value459 = come_decrement_ref_count2(right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result135__ = __result_obj__ = ((struct sNode*)(right_value460=top_level_v98(buf2_332,head,head_sline,info)));
    buf2_332 = come_decrement_ref_count2(buf2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result135__;
    buf2_332 = come_decrement_ref_count2(buf2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional264;
_Bool _if_conditional265;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional264=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional264) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional265=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional265) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_265;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_266;
struct list$1charph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_265, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_266, 0, sizeof(struct list_item$1charph*));
                it_265=self->head;
                while(_while_condtional29=it_265!=((void*)0),                _while_condtional29) {
                    prev_it_266=it_265;
                    it_265=it_265->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result100__ = __result_obj__ = self;
                return __result100__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj72;
struct tuple1$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj72=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __result103__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result103__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_291;
unsigned int hash_292;
unsigned int it_293;
_Bool _while_condtional33;
_Bool _if_conditional316;
_Bool _if_conditional317;
struct sFun* __result104__;
_Bool _if_conditional318;
_Bool _if_conditional319;
struct sFun* __result105__;
struct sFun* __result106__;
struct sFun* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_291, 0, sizeof(struct sFun*));
memset(&hash_292, 0, sizeof(unsigned int));
memset(&it_293, 0, sizeof(unsigned int));
                                memset(&default_value_291,0,sizeof(struct sFun*));
                                hash_292=string_get_hash_key(((char*)key))%self->size;
                                it_293=hash_292;
                                while(_while_condtional33=(_Bool)1,                                _while_condtional33) {
                                    if(_if_conditional316=self->item_existance[it_293],                                    _if_conditional316) {
                                        if(_if_conditional317=string_equals(self->keys[it_293],key),                                        _if_conditional317) {
                                            __result104__ = __result_obj__ = self->items[it_293];
                                            come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result104__;
                                        }
                                        it_293++;
                                        if(_if_conditional318=it_293>=self->size,                                        _if_conditional318) {
                                            it_293=0;
                                        }
                                        else {
                                            if(_if_conditional319=it_293==hash_292,                                            _if_conditional319) {
                                                __result105__ = __result_obj__ = default_value_291;
                                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result105__;
                                            }
                                        }
                                    }
                                    else {
                                        __result106__ = __result_obj__ = default_value_291;
                                        come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result106__;
                                    }
                                }
                                __result107__ = __result_obj__ = default_value_291;
                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result107__;
                                come_call_finalizer2(sFun_finalize,default_value_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional325;
struct sFun* __result109__;
void* right_value420;
struct sFun* result_296;
_Bool _if_conditional326;
void* right_value421;
char* __dec_obj76;
_Bool _if_conditional327;
void* right_value422;
struct sType* __dec_obj77;
_Bool _if_conditional328;
void* right_value423;
struct list$1sTypeph* __dec_obj78;
_Bool _if_conditional329;
void* right_value424;
struct list$1charph* __dec_obj79;
_Bool _if_conditional330;
void* right_value425;
struct list$1charph* __dec_obj80;
_Bool _if_conditional331;
void* right_value426;
struct sType* __dec_obj81;
_Bool _if_conditional332;
void* right_value444;
struct sBlock* __dec_obj87;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value445;
struct buffer* __dec_obj88;
_Bool _if_conditional376;
void* right_value446;
struct buffer* __dec_obj89;
_Bool _if_conditional377;
void* right_value447;
struct buffer* __dec_obj90;
_Bool _if_conditional378;
void* right_value448;
struct buffer* __dec_obj91;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value449;
char* __dec_obj92;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value450;
char* __dec_obj93;
struct sFun* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_296, 0, sizeof(struct sFun*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
                                        if(_if_conditional325=self==(void*)0,                                        _if_conditional325) {
                                            __result109__ = __result_obj__ = (void*)0;
                                            return __result109__;
                                        }
                                        result_296=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value420=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional326=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional326) {
                                            __dec_obj76=result_296->mName;
                                            result_296->mName=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->mName))));
                                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional327=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional327) {
                                            __dec_obj77=result_296->mResultType;
                                            result_296->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value422=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional328=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional328) {
                                            __dec_obj78=result_296->mParamTypes;
                                            result_296->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value423=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional329=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional329) {
                                            __dec_obj79=result_296->mParamNames;
                                            result_296->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value424=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional330=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional330) {
                                            __dec_obj80=result_296->mParamDefaultParametors;
                                            result_296->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value425=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional331=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional331) {
                                            __dec_obj81=result_296->mLambdaType;
                                            result_296->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value426=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional332=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional332) {
                                            __dec_obj87=result_296->mBlock;
                                            result_296->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value444=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional373=self!=((void*)0),                                        _if_conditional373) {
                                            result_296->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional374=self!=((void*)0),                                        _if_conditional374) {
                                            result_296->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional375=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional375) {
                                            __dec_obj88=result_296->mSource;
                                            result_296->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value445=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional376=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional376) {
                                            __dec_obj89=result_296->mSourceHead;
                                            result_296->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value446=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional377=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional377) {
                                            __dec_obj90=result_296->mSourceHead2;
                                            result_296->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value447=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional378=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional378) {
                                            __dec_obj91=result_296->mSourceDefer;
                                            result_296->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value448=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional379=self!=((void*)0),                                        _if_conditional379) {
                                            result_296->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional380=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional380) {
                                            __dec_obj92=result_296->mComeHeader;
                                            result_296->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value449=string_clone(self->mComeHeader))));
                                            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional381=self!=((void*)0),                                        _if_conditional381) {
                                            result_296->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional382=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional382) {
                                            __dec_obj93=result_296->mDeclareSName;
                                            result_296->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value450=string_clone(self->mDeclareSName))));
                                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result130__ = __result_obj__ = result_296;
                                        come_call_finalizer2(sFun_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result130__;
                                        come_call_finalizer2(sFun_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional333;
struct sBlock* __result110__;
void* right_value427;
struct sBlock* result_297;
_Bool _if_conditional334;
void* right_value428;
struct list$1sNodeph* __dec_obj82;
_Bool _if_conditional335;
void* right_value443;
struct sVarTable* __dec_obj86;
struct sBlock* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
memset(&result_297, 0, sizeof(struct sBlock*));
right_value428 = (void*)0;
right_value443 = (void*)0;
                                                if(_if_conditional333=self==(void*)0,                                                _if_conditional333) {
                                                    __result110__ = __result_obj__ = (void*)0;
                                                    return __result110__;
                                                }
                                                result_297=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value427=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional334=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional334) {
                                                    __dec_obj82=result_297->mNodes;
                                                    result_297->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value428=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional335=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional335) {
                                                    __dec_obj86=result_297->mVarTable;
                                                    result_297->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value443=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result129__ = __result_obj__ = result_297;
                                                come_call_finalizer2(sBlock_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result129__;
                                                come_call_finalizer2(sBlock_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional336;
struct sVarTable* __result111__;
void* right_value429;
struct sVarTable* result_298;
_Bool _if_conditional337;
void* right_value442;
struct map$2charphsVarph* __dec_obj85;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
struct sVarTable* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
memset(&result_298, 0, sizeof(struct sVarTable*));
right_value442 = (void*)0;
                                                        if(_if_conditional336=self==(void*)0,                                                        _if_conditional336) {
                                                            __result111__ = __result_obj__ = (void*)0;
                                                            return __result111__;
                                                        }
                                                        result_298=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value429=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional337=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional337) {
                                                            __dec_obj85=result_298->mVars;
                                                            result_298->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value442=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional370=self!=((void*)0),                                                        _if_conditional370) {
                                                            result_298->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional371=self!=((void*)0),                                                        _if_conditional371) {
                                                            result_298->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional372=self!=((void*)0),                                                        _if_conditional372) {
                                                            result_298->mID=self->mID;
                                                        }
                                                        __result128__ = __result_obj__ = result_298;
                                                        come_call_finalizer2(sVarTable_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result128__;
                                                        come_call_finalizer2(sVarTable_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional338;
struct map$2charphsVarph* __result112__;
void* right_value430;
void* right_value436;
struct map$2charphsVarph* result_304;
void* right_value437;
void* right_value438;
struct list$1charp* __dec_obj84;
char* it_307;
struct sVar* default_value_310;
struct sVar* it2_313;
struct map$2charphsVarph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value430 = (void*)0;
right_value436 = (void*)0;
memset(&result_304, 0, sizeof(struct map$2charphsVarph*));
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&it_307, 0, sizeof(char*));
memset(&default_value_310, 0, sizeof(struct sVar*));
memset(&it2_313, 0, sizeof(struct sVar*));
                                                                if(_if_conditional338=self==((void*)0),                                                                _if_conditional338) {
                                                                    __result112__ = __result_obj__ = ((void*)0);
                                                                    return __result112__;
                                                                }
                                                                result_304=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value436=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value430=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang2.h", 1178, "map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj84=result_304->key_list;
                                                                result_304->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value438=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value437=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1180, "list$1charp"))))))));
                                                                come_call_finalizer2(list$1charp_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(list$1charpp_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_307=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_307=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_310,0,sizeof(struct sVar*));
                                                                    it2_313=map$2charphsVarph_at(self,it_307,default_value_310);
                                                                    map$2charphsVarph_insert2(result_304,it_307,it2_313);
                                                                }
                                                                __result127__ = __result_obj__ = result_304;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result127__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value431;
void* right_value432;
void* right_value433;
int i_299;
void* right_value434;
void* right_value435;
struct list$1charp* __dec_obj83;
struct map$2charphsVarph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
memset(&i_299, 0, sizeof(int));
right_value434 = (void*)0;
right_value435 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value431=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1084, "char*%"))));
                                                                    right_value431 = come_decrement_ref_count2(right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value432=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "/usr/local/include/comelang2.h", 1085, "sVar*%"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value433=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1086, "bool"))));
                                                                    right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_299=0;                                                                    i_299<1024;                                                                    i_299++                                                                    ){
                                                                        self->item_existance[i_299]=(_Bool)0;
                                                                    }
                                                                    self->size=1024;
                                                                    self->len=0;
                                                                    __dec_obj83=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value435=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value434=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1096, "list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result114__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result114__;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional339=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional339) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional340=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional340) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional341=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional341) {
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional342=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional342) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result113__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result113__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_300;
_Bool _while_condtional34;
struct list_item$1charp* prev_it_301;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_300, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_301, 0, sizeof(struct list_item$1charp*));
                                                                            it_300=self->head;
                                                                            while(_while_condtional34=it_300!=((void*)0),                                                                            _while_condtional34) {
                                                                                prev_it_301=it_300;
                                                                                it_300=it_300->next;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_302;
_Bool _if_conditional343;
_Bool _if_conditional344;
int i_303;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_302, 0, sizeof(int));
memset(&i_303, 0, sizeof(int));
                                                                        for(                                                                        i_302=0;                                                                        i_302<self->size;                                                                        i_302++                                                                        ){
                                                                            if(_if_conditional343=self->item_existance[i_302],                                                                            _if_conditional343) {
                                                                                if(_if_conditional344=1,                                                                                _if_conditional344) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_302], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_303=0;                                                                        i_303<self->size;                                                                        i_303++                                                                        ){
                                                                            if(_if_conditional345=self->item_existance[i_303],                                                                            _if_conditional345) {
                                                                                if(_if_conditional346=1,                                                                                _if_conditional346) {
                                                                                    self->keys[i_303] = come_decrement_ref_count2(self->keys[i_303], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional347;
char* result_305;
char* __result115__;
_Bool _if_conditional348;
char* __result116__;
char* result_306;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_305, 0, sizeof(char*));
memset(&result_306, 0, sizeof(char*));
                                                                    if(_if_conditional347=self==((void*)0),                                                                    _if_conditional347) {
                                                                        memset(&result_305,0,sizeof(char*));
                                                                        __result115__ = __result_obj__ = result_305;
                                                                        return __result115__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result116__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result116__;
                                                                    }
                                                                    memset(&result_306,0,sizeof(char*));
                                                                    __result117__ = __result_obj__ = result_306;
                                                                    return __result117__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result118__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result118__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional349;
char* result_308;
char* __result119__;
_Bool _if_conditional350;
char* __result120__;
char* result_309;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_308, 0, sizeof(char*));
memset(&result_309, 0, sizeof(char*));
                                                                    if(_if_conditional349=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional349) {
                                                                        memset(&result_308,0,sizeof(char*));
                                                                        __result119__ = __result_obj__ = result_308;
                                                                        return __result119__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result120__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result120__;
                                                                    }
                                                                    memset(&result_309,0,sizeof(char*));
                                                                    __result121__ = __result_obj__ = result_309;
                                                                    return __result121__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_311;
unsigned int it_312;
_Bool _while_condtional35;
_Bool _if_conditional351;
_Bool _if_conditional352;
struct sVar* __result122__;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct sVar* __result123__;
struct sVar* __result124__;
struct sVar* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_311, 0, sizeof(unsigned int));
memset(&it_312, 0, sizeof(unsigned int));
                                                                        hash_311=string_get_hash_key(((char*)key))%self->size;
                                                                        it_312=hash_311;
                                                                        while(_while_condtional35=(_Bool)1,                                                                        _while_condtional35) {
                                                                            if(_if_conditional351=self->item_existance[it_312],                                                                            _if_conditional351) {
                                                                                if(_if_conditional352=string_equals(self->keys[it_312],key),                                                                                _if_conditional352) {
                                                                                    __result122__ = __result_obj__ = self->items[it_312];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result122__;
                                                                                }
                                                                                it_312++;
                                                                                if(_if_conditional353=it_312>=self->size,                                                                                _if_conditional353) {
                                                                                    it_312=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional354=it_312==hash_311,                                                                                    _if_conditional354) {
                                                                                        __result123__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result123__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result124__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result124__;
                                                                            }
                                                                        }
                                                                        __result125__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result125__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional355;
unsigned int hash_325;
int it_326;
_Bool _while_condtional37;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool same_key_exist_327;
char* it2_328;
_Bool _if_conditional367;
_Bool _if_conditional368;
struct map$2charphsVarph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_325, 0, sizeof(unsigned int));
memset(&it_326, 0, sizeof(int));
memset(&same_key_exist_327, 0, sizeof(_Bool));
memset(&it2_328, 0, sizeof(char*));
                                                                        if(_if_conditional355=self->len*2>=self->size,                                                                        _if_conditional355) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_325=string_get_hash_key(key)%self->size;
                                                                        it_326=hash_325;
                                                                        while(_while_condtional37=(_Bool)1,                                                                        _while_condtional37) {
                                                                            if(_if_conditional359=self->item_existance[it_326],                                                                            _if_conditional359) {
                                                                                if(_if_conditional360=string_equals(self->keys[it_326],key),                                                                                _if_conditional360) {
                                                                                    if(_if_conditional361=1,                                                                                    _if_conditional361) {
                                                                                        self->keys[it_326] = come_decrement_ref_count2(self->keys[it_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                                        self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                                        self->keys[it_326]=key;
                                                                                    }
                                                                                    if(_if_conditional362=1,                                                                                    _if_conditional362) {
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_326], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_326]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_326]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_326++;
                                                                                if(_if_conditional363=it_326>=self->size,                                                                                _if_conditional363) {
                                                                                    it_326=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional364=it_326==hash_325,                                                                                    _if_conditional364) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_326]=(_Bool)1;
                                                                                if(_if_conditional365=1,                                                                                _if_conditional365) {
                                                                                    self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_326]=key;
                                                                                }
                                                                                if(_if_conditional366=1,                                                                                _if_conditional366) {
                                                                                    self->items[it_326]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_326]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_327=(_Bool)0;
                                                                        for(                                                                        it2_328=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_328=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional367=string_equals(it2_328,key),                                                                            _if_conditional367) {
                                                                                same_key_exist_327=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional368=!same_key_exist_327,                                                                        _if_conditional368) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result126__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result126__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_314;
void* right_value439;
char** keys_315;
void* right_value440;
struct sVar** items_316;
void* right_value441;
_Bool* item_existance_317;
int len_318;
char* it_319;
struct sVar* default_value_320;
struct sVar* it2_321;
unsigned int hash_322;
int n_323;
_Bool _while_condtional36;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct sVar* default_value_324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_314, 0, sizeof(int));
right_value439 = (void*)0;
memset(&keys_315, 0, sizeof(char**));
right_value440 = (void*)0;
memset(&items_316, 0, sizeof(struct sVar**));
right_value441 = (void*)0;
memset(&item_existance_317, 0, sizeof(_Bool*));
memset(&len_318, 0, sizeof(int));
memset(&it_319, 0, sizeof(char*));
memset(&default_value_320, 0, sizeof(struct sVar*));
memset(&it2_321, 0, sizeof(struct sVar*));
memset(&hash_322, 0, sizeof(unsigned int));
memset(&n_323, 0, sizeof(int));
memset(&default_value_324, 0, sizeof(struct sVar*));
                                                                                size_314=self->size*10;
                                                                                keys_315=(char**)come_increment_ref_count(((char**)(right_value439=(char**)come_calloc(1, sizeof(char*)*(1*(size_314)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                                                                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_316=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value440=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_314)), "/usr/local/include/comelang2.h", 1336, "sVar*%"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_317=(_Bool*)come_increment_ref_count(((_Bool*)(right_value441=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_314)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                                                                                right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_318=0;
                                                                                for(                                                                                it_319=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_319=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_320,0,sizeof(struct sVar*));
                                                                                    it2_321=map$2charphsVarph_at(self,it_319,default_value_320);
                                                                                    hash_322=string_get_hash_key(it_319)%size_314;
                                                                                    n_323=hash_322;
                                                                                    while(_while_condtional36=(_Bool)1,                                                                                    _while_condtional36) {
                                                                                        if(_if_conditional356=item_existance_317[n_323],                                                                                        _if_conditional356) {
                                                                                            n_323++;
                                                                                            if(_if_conditional357=n_323>=size_314,                                                                                            _if_conditional357) {
                                                                                                n_323=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional358=n_323==hash_322,                                                                                                _if_conditional358) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_317[n_323]=(_Bool)1;
                                                                                            keys_315[n_323]=it_319;
                                                                                            items_316[n_323]=map$2charphsVarph_at(self,it_319,default_value_324);
                                                                                            len_318++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_315;
                                                                                self->items=items_316;
                                                                                self->item_existance=item_existance_317;
                                                                                self->size=size_314;
                                                                                self->len=len_318;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional369;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional369=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional369) {
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_338;
struct sType* type_342;
struct sClass* generics_class_343;
void* right_value461;
_Bool generics_type_name_345;
void* right_value462;
_Bool mgenerics_type_name_346;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_338, 0, sizeof(struct sClass*));
memset(&type_342, 0, sizeof(struct sType*));
memset(&generics_class_343, 0, sizeof(struct sClass*));
right_value461 = (void*)0;
memset(&generics_type_name_345, 0, sizeof(_Bool));
right_value462 = (void*)0;
memset(&mgenerics_type_name_346, 0, sizeof(_Bool));
    klass_338=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_342=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_343=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_345=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value461=__builtin_string(buf)))));
    right_value461 = come_decrement_ref_count2(right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_346=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value462=__builtin_string(buf)))));
    right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result146__ = generics_class_343||generics_type_name_345||mgenerics_type_name_346||klass_338||type_342||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result146__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_333;
unsigned int hash_334;
unsigned int it_335;
_Bool _while_condtional38;
_Bool _if_conditional387;
_Bool _if_conditional388;
struct sClass* __result136__;
_Bool _if_conditional395;
_Bool _if_conditional396;
struct sClass* __result137__;
struct sClass* __result138__;
struct sClass* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_333, 0, sizeof(struct sClass*));
memset(&hash_334, 0, sizeof(unsigned int));
memset(&it_335, 0, sizeof(unsigned int));
        memset(&default_value_333,0,sizeof(struct sClass*));
        hash_334=string_get_hash_key(((char*)key))%self->size;
        it_335=hash_334;
        while(_while_condtional38=(_Bool)1,        _while_condtional38) {
            if(_if_conditional387=self->item_existance[it_335],            _if_conditional387) {
                if(_if_conditional388=string_equals(self->keys[it_335],key),                _if_conditional388) {
                    __result136__ = __result_obj__ = self->items[it_335];
                    come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result136__;
                }
                it_335++;
                if(_if_conditional395=it_335>=self->size,                _if_conditional395) {
                    it_335=0;
                }
                else {
                    if(_if_conditional396=it_335==hash_334,                    _if_conditional396) {
                        __result137__ = __result_obj__ = default_value_333;
                        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result137__;
                    }
                }
            }
            else {
                __result138__ = __result_obj__ = default_value_333;
                come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result138__;
            }
        }
        __result139__ = __result_obj__ = default_value_333;
        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result139__;
        come_call_finalizer2(sClass_finalize,default_value_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional394;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional389=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional389) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional390=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional390) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional394=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional394) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_336;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_336, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_337, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_336=self->head;
                                while(_while_condtional39=it_336!=((void*)0),                                _while_condtional39) {
                                    prev_it_337=it_336;
                                    it_336=it_336->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_337, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional391=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional391) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional392=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional392) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional393=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional393) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_339;
unsigned int hash_340;
unsigned int it_341;
_Bool _while_condtional40;
_Bool _if_conditional397;
_Bool _if_conditional398;
struct sType* __result140__;
_Bool _if_conditional399;
_Bool _if_conditional400;
struct sType* __result141__;
struct sType* __result142__;
struct sType* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_339, 0, sizeof(struct sType*));
memset(&hash_340, 0, sizeof(unsigned int));
memset(&it_341, 0, sizeof(unsigned int));
        memset(&default_value_339,0,sizeof(struct sType*));
        hash_340=string_get_hash_key(((char*)key))%self->size;
        it_341=hash_340;
        while(_while_condtional40=(_Bool)1,        _while_condtional40) {
            if(_if_conditional397=self->item_existance[it_341],            _if_conditional397) {
                if(_if_conditional398=string_equals(self->keys[it_341],key),                _if_conditional398) {
                    __result140__ = __result_obj__ = self->items[it_341];
                    come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result140__;
                }
                it_341++;
                if(_if_conditional399=it_341>=self->size,                _if_conditional399) {
                    it_341=0;
                }
                else {
                    if(_if_conditional400=it_341==hash_340,                    _if_conditional400) {
                        __result141__ = __result_obj__ = default_value_339;
                        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result141__;
                    }
                }
            }
            else {
                __result142__ = __result_obj__ = default_value_339;
                come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result142__;
            }
        }
        __result143__ = __result_obj__ = default_value_339;
        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result143__;
        come_call_finalizer2(sType_finalize,default_value_339, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_344;
_Bool _if_conditional401;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_344, 0, sizeof(char*));
        for(        it_344=list$1charph_begin(self);        !list$1charph_end(self);        it_344=list$1charph_next(self)        ){
            if(_if_conditional401=string_operator_equals(it_344,item),            _if_conditional401) {
                __result144__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result144__;
            }
        }
        __result145__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result145__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_347;
int caller_line_348;
char* caller_sname_349;
char* last_code_350;
char* __dec_obj96;
char* last_code2_351;
char* __dec_obj97;
char* last_code3_352;
char* __dec_obj98;
void* right_value463;
char* sname_top_353;
int sline_top_354;
_Bool _if_conditional402;
struct sFun* funX_355;
_Bool _if_conditional403;
_Bool __result147__;
void* right_value464;
struct sType* result_type_356;
void* right_value465;
void* right_value466;
struct list$1sTypeph* param_types_357;
struct list$1sTypeph* o2_saved_358;
struct sType* it_361;
void* right_value467;
void* right_value468;
struct sType* param_type_364;
void* right_value469;
void* right_value470;
struct list$1charph* param_names_365;
void* right_value471;
struct list$1charph* param_default_parametors_366;
char* p_367;
int sline_368;
char* sname_369;
char* head_370;
struct buffer* source_371;
void* right_value472;
struct buffer* __dec_obj99;
struct sType* generics_type_saved_372;
void* right_value473;
struct sType* __dec_obj100;
struct list$1charph* method_generics_type_names_373;
void* right_value474;
void* right_value475;
struct list$1charph* __dec_obj101;
struct list$1charph* o2_saved_374;
char* it_375;
void* right_value476;
void* right_value477;
struct list$1charph* __dec_obj102;
char* __dec_obj103;
void* right_value478;
struct sBlock* block_376;
struct buffer* __dec_obj104;
char* __dec_obj105;
_Bool var_args_377;
void* right_value479;
void* right_value480;
void* right_value481;
void* right_value482;
void* right_value483;
struct sFun* fun_378;
void* right_value484;
void* right_value485;
void* right_value486;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value490;
struct sNode* node_380;
_Bool _if_conditional414;
_Bool __result157__;
struct sType* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
void* right_value491;
char* __dec_obj111;
char* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_347, 0, sizeof(struct sFun*));
memset(&caller_line_348, 0, sizeof(int));
memset(&caller_sname_349, 0, sizeof(char*));
memset(&last_code_350, 0, sizeof(char*));
memset(&last_code2_351, 0, sizeof(char*));
memset(&last_code3_352, 0, sizeof(char*));
right_value463 = (void*)0;
memset(&sname_top_353, 0, sizeof(char*));
memset(&sline_top_354, 0, sizeof(int));
memset(&funX_355, 0, sizeof(struct sFun*));
right_value464 = (void*)0;
memset(&result_type_356, 0, sizeof(struct sType*));
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&param_types_357, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_358, 0, sizeof(struct list$1sTypeph*));
memset(&it_361, 0, sizeof(struct sType*));
right_value467 = (void*)0;
right_value468 = (void*)0;
memset(&param_type_364, 0, sizeof(struct sType*));
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&param_names_365, 0, sizeof(struct list$1charph*));
right_value471 = (void*)0;
memset(&param_default_parametors_366, 0, sizeof(struct list$1charph*));
memset(&p_367, 0, sizeof(char*));
memset(&sline_368, 0, sizeof(int));
memset(&sname_369, 0, sizeof(char*));
memset(&head_370, 0, sizeof(char*));
memset(&source_371, 0, sizeof(struct buffer*));
right_value472 = (void*)0;
memset(&generics_type_saved_372, 0, sizeof(struct sType*));
right_value473 = (void*)0;
memset(&method_generics_type_names_373, 0, sizeof(struct list$1charph*));
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&o2_saved_374, 0, sizeof(struct list$1charph*));
memset(&it_375, 0, sizeof(char*));
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&block_376, 0, sizeof(struct sBlock*));
memset(&var_args_377, 0, sizeof(_Bool));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&fun_378, 0, sizeof(struct sFun*));
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value490 = (void*)0;
memset(&node_380, 0, sizeof(struct sNode*));
right_value491 = (void*)0;
    caller_fun_347=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_348=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_349=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_350=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj96=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_351=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj97=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_352=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj98=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_353=(char*)come_increment_ref_count(((char*)(right_value463=__builtin_string(info->sname))));
    right_value463 = come_decrement_ref_count2(right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_354=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_355=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_355) {
        __result147__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    result_type_356=(struct sType*)come_increment_ref_count(((struct sType*)(right_value464=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_357=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value466=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value465=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1341, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_358=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_361=list$1sTypeph_begin((o2_saved_358));    !list$1sTypeph_end((o2_saved_358));    it_361=list$1sTypeph_next((o2_saved_358))    ){
        param_type_364=(struct sType*)come_increment_ref_count(((struct sType*)(right_value468=solve_generics(((struct sType*)(right_value467=sType_clone(it_361))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_364->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_357,(struct sType*)come_increment_ref_count(((struct sType*)(right_value469=sType_clone(param_type_364)))));
        come_call_finalizer2(sType_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_358, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value470=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_366=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value471=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_367=info->p;
    sline_368=info->sline;
    sname_369=(char*)come_increment_ref_count(info->sname);
    head_370=info->head;
    source_371=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj99=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value472=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_372=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj100=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value473=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_373=info->method_generics_type_names;
    __dec_obj101=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value475=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value474=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1368, "list$1charph"))))))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_374=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_375=list$1charph_begin((o2_saved_374));    !list$1charph_end((o2_saved_374));    it_375=list$1charph_next((o2_saved_374))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value476=string_clone(it_375)))));
        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer2(list$1charphp_finalize,o2_saved_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj102=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value477=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj103=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_376=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value478=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_370;
    __dec_obj104=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_371);
    come_call_finalizer2(buffer_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_367;
    info->sline=sline_368;
    __dec_obj105=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_369);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_356->mInline=(_Bool)0;
    var_args_377=generics_fun->mVarArgs;
    fun_378=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value483=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value479=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1390, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_356),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value480=list$1sTypephp_clone(param_types_357)))),(struct list$1charph*)come_increment_ref_count(param_names_365),(struct list$1charph*)come_increment_ref_count(param_default_parametors_366),(_Bool)0,var_args_377,(struct sBlock*)come_increment_ref_count(block_376),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value481=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value482=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value484=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_378));
    right_value484 = come_decrement_ref_count2(right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1397, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value486=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value485=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1397, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_378),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_380=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional414=!node_compile(node_380,info),    _if_conditional414) {
        __result157__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result157__;
    }
    __dec_obj108=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_372);
    come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,info->method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj109=method_generics_type_names_373;
    __dec_obj110=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_373);
    come_call_finalizer2(list$1charph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value491=__builtin_string(sname_top_353))));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value491 = come_decrement_ref_count2(right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_354;
    __dec_obj112=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_350);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_351);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_352);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_347;
    info->caller_line=caller_line_348;
    info->caller_sname=caller_sname_349;
    __result158__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result158__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_350 = come_decrement_ref_count2(last_code_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_351 = come_decrement_ref_count2(last_code2_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_352 = come_decrement_ref_count2(last_code3_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_353 = come_decrement_ref_count2(sname_top_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_366, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_369 = come_decrement_ref_count2(sname_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_372, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_378, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional404;
struct sType* result_359;
struct sType* __result148__;
_Bool _if_conditional405;
struct sType* __result149__;
struct sType* result_360;
struct sType* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_359, 0, sizeof(struct sType*));
memset(&result_360, 0, sizeof(struct sType*));
        if(_if_conditional404=self==((void*)0),        _if_conditional404) {
            memset(&result_359,0,sizeof(struct sType*));
            __result148__ = __result_obj__ = result_359;
            return __result148__;
        }
        self->it=self->head;
        if(self->it) {
            __result149__ = __result_obj__ = self->it->item;
            return __result149__;
        }
        memset(&result_360,0,sizeof(struct sType*));
        __result150__ = __result_obj__ = result_360;
        return __result150__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
        __result151__ = self==((void*)0)||self->it==((void*)0);
        return __result151__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional406;
struct sType* result_362;
struct sType* __result152__;
_Bool _if_conditional407;
struct sType* __result153__;
struct sType* result_363;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_362, 0, sizeof(struct sType*));
memset(&result_363, 0, sizeof(struct sType*));
        if(_if_conditional406=self==((void*)0)||self->it==((void*)0),        _if_conditional406) {
            memset(&result_362,0,sizeof(struct sType*));
            __result152__ = __result_obj__ = result_362;
            return __result152__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result153__ = __result_obj__ = self->it->item;
            return __result153__;
        }
        memset(&result_363,0,sizeof(struct sType*));
        __result154__ = __result_obj__ = result_363;
        return __result154__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_381;
char* source_head_382;
void* right_value492;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_383;
char* var_name_384;
_Bool err_385;
_Bool _if_conditional415;
_Bool method_definition_386;
char* p_387;
int sline_388;
void* right_value493;
void* right_value494;
struct buffer* buf2_389;
_Bool _while_condtional41;
_Bool _while_condtional42;
_Bool _while_condtional43;
_Bool _if_conditional416;
char* fun_name_390;
char* base_fun_name_391;
_Bool _if_conditional417;
void* right_value495;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_392;
char* name_393;
_Bool err_394;
_Bool _if_conditional418;
void* right_value496;
void* right_value497;
char* __dec_obj115;
_Bool _if_conditional419;
void* right_value498;
void* right_value499;
char* __dec_obj116;
void* right_value500;
char* __dec_obj117;
void* right_value501;
void* right_value502;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_395;
struct list$1charph* param_names_396;
struct list$1charph* param_default_parametors_397;
_Bool var_args_398;
char* header_tail_399;
void* right_value503;
void* right_value504;
struct buffer* header_buf_400;
int version_401;
_Bool _if_conditional423;
int n_402;
_Bool _while_condtional44;
_Bool _if_conditional424;
void* right_value505;
struct sBlock* block_403;
static int lambda_num_404=0;
void* right_value506;
char* fun_name_405;
void* right_value507;
void* right_value508;
void* right_value509;
void* right_value510;
void* right_value511;
struct sFun* fun_406;
void* right_value512;
struct sFun* fun2_407;
_Bool _if_conditional425;
void* right_value513;
void* right_value514;
void* right_value515;
struct sNode* _inf_value3;
struct sLambdaNode* _inf_obj_value3;
void* right_value518;
struct sNode* __result161__;
_Bool _if_conditional431;
void* right_value519;
char* none_generics_name_409;
void* right_value520;
char* generics_sname_410;
int generics_sline_411;
void* right_value521;
char* block_412;
void* right_value522;
void* right_value523;
void* right_value524;
void* right_value525;
void* right_value526;
void* right_value527;
struct sGenericsFun* fun_413;
void* right_value528;
char* fun_name3_414;
void* right_value532;
struct sNode* __result175__;
_Bool _if_conditional454;
char* source_tail_436;
void* right_value533;
void* right_value534;
struct buffer* header_437;
void* right_value535;
void* right_value536;
struct sBlock* block_438;
_Bool static__439;
_Bool _if_conditional455;
_Bool _if_conditional456;
void* right_value537;
void* right_value538;
char* new_fun_name_440;
void* right_value539;
char* __dec_obj119;
void* right_value540;
void* right_value541;
void* right_value542;
void* right_value543;
void* right_value544;
void* right_value545;
struct sFun* fun_441;
void* right_value546;
struct sFun* fun2_442;
_Bool _if_conditional457;
void* right_value547;
void* right_value548;
void* right_value549;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* right_value553;
struct sNode* __result178__;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value554;
char* new_fun_name_444;
void* right_value555;
char* __dec_obj122;
_Bool _if_conditional466;
void* right_value556;
void* right_value557;
void* right_value558;
void* right_value559;
void* right_value560;
struct sFun* fun_445;
void* right_value561;
struct sFun* fun2_446;
_Bool _if_conditional467;
void* right_value562;
char* source_tail_447;
void* right_value563;
void* right_value564;
struct buffer* header_448;
void* right_value565;
void* right_value566;
void* right_value567;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value571;
struct sNode* __result181__;
void* right_value572;
char* asm_fun_450;
_Bool _if_conditional474;
void* right_value573;
char* __dec_obj125;
void* right_value574;
void* right_value575;
void* right_value576;
void* right_value577;
void* right_value578;
struct sFun* fun_451;
void* right_value579;
struct sFun* fun2_452;
_Bool _if_conditional475;
void* right_value580;
char* source_tail_453;
void* right_value581;
void* right_value582;
struct buffer* header_454;
void* right_value583;
void* right_value584;
void* right_value585;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value589;
struct sNode* __result184__;
struct sNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_381, 0, sizeof(char*));
memset(&source_head_382, 0, sizeof(char*));
right_value492 = (void*)0;
memset(&result_type_383, 0, sizeof(struct sType*));
memset(&var_name_384, 0, sizeof(char*));
memset(&err_385, 0, sizeof(_Bool));
memset(&result_type_383, 0, sizeof(struct sType*));
memset(&var_name_384, 0, sizeof(char*));
memset(&err_385, 0, sizeof(_Bool));
memset(&method_definition_386, 0, sizeof(_Bool));
memset(&p_387, 0, sizeof(char*));
memset(&sline_388, 0, sizeof(int));
right_value493 = (void*)0;
right_value494 = (void*)0;
memset(&buf2_389, 0, sizeof(struct buffer*));
memset(&fun_name_390, 0, sizeof(char*));
memset(&base_fun_name_391, 0, sizeof(char*));
right_value495 = (void*)0;
memset(&obj_type_392, 0, sizeof(struct sType*));
memset(&name_393, 0, sizeof(char*));
memset(&err_394, 0, sizeof(_Bool));
memset(&obj_type_392, 0, sizeof(struct sType*));
memset(&name_393, 0, sizeof(char*));
memset(&err_394, 0, sizeof(_Bool));
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&param_types_395, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_396, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_397, 0, sizeof(struct list$1charph*));
memset(&var_args_398, 0, sizeof(_Bool));
memset(&param_types_395, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_396, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_397, 0, sizeof(struct list$1charph*));
memset(&var_args_398, 0, sizeof(_Bool));
memset(&header_tail_399, 0, sizeof(char*));
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&header_buf_400, 0, sizeof(struct buffer*));
memset(&version_401, 0, sizeof(int));
memset(&n_402, 0, sizeof(int));
right_value505 = (void*)0;
memset(&block_403, 0, sizeof(struct sBlock*));
right_value506 = (void*)0;
memset(&fun_name_405, 0, sizeof(char*));
right_value507 = (void*)0;
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&fun_406, 0, sizeof(struct sFun*));
right_value512 = (void*)0;
memset(&fun2_407, 0, sizeof(struct sFun*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value518 = (void*)0;
right_value519 = (void*)0;
memset(&none_generics_name_409, 0, sizeof(char*));
right_value520 = (void*)0;
memset(&generics_sname_410, 0, sizeof(char*));
memset(&generics_sline_411, 0, sizeof(int));
right_value521 = (void*)0;
memset(&block_412, 0, sizeof(char*));
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value527 = (void*)0;
memset(&fun_413, 0, sizeof(struct sGenericsFun*));
right_value528 = (void*)0;
memset(&fun_name3_414, 0, sizeof(char*));
right_value532 = (void*)0;
memset(&source_tail_436, 0, sizeof(char*));
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&header_437, 0, sizeof(struct buffer*));
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&block_438, 0, sizeof(struct sBlock*));
memset(&static__439, 0, sizeof(_Bool));
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&new_fun_name_440, 0, sizeof(char*));
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
memset(&fun_441, 0, sizeof(struct sFun*));
right_value546 = (void*)0;
memset(&fun2_442, 0, sizeof(struct sFun*));
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
memset(&new_fun_name_444, 0, sizeof(char*));
right_value555 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value560 = (void*)0;
memset(&fun_445, 0, sizeof(struct sFun*));
right_value561 = (void*)0;
memset(&fun2_446, 0, sizeof(struct sFun*));
right_value562 = (void*)0;
memset(&source_tail_447, 0, sizeof(char*));
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&header_448, 0, sizeof(struct buffer*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value567 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&asm_fun_450, 0, sizeof(char*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
memset(&fun_451, 0, sizeof(struct sFun*));
right_value579 = (void*)0;
memset(&fun2_452, 0, sizeof(struct sFun*));
right_value580 = (void*)0;
memset(&source_tail_453, 0, sizeof(char*));
right_value581 = (void*)0;
right_value582 = (void*)0;
memset(&header_454, 0, sizeof(struct buffer*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value589 = (void*)0;
    header_head_381=info->p;
    source_head_382=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value492=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
    result_type_383=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_384=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_385=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional415=!err_385,    _if_conditional415) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_386=(_Bool)0;
    {
        p_387=info->p;
        sline_388=info->sline;
        buf2_389=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value494=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value493=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1440, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=xisalnum(*info->p)||*info->p==95,        _while_condtional41) {
            buffer_append_char(buf2_389,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional42=*info->p==42,        _while_condtional42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional43=*info->p==37,        _while_condtional43) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional416=buffer_length(buf2_389)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional416) {
            method_definition_386=(_Bool)1;
        }
        info->p=p_387;
        info->sline=sline_388;
        come_call_finalizer2(buffer_finalize,buf2_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_391=((void*)0);
    if(method_definition_386) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value495=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_392=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_393=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_394=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional418=!err_394,        _if_conditional418) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value496=parse_word(info))));
        right_value496 = come_decrement_ref_count2(right_value496, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj115=fun_name_390;
        fun_name_390=(char*)come_increment_ref_count(((char*)(right_value497=create_method_name(obj_type_392,(_Bool)0,base_fun_name_391,info))));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_392, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_393 = come_decrement_ref_count2(name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value498=parse_word(info))));
            right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj116=fun_name_390;
            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value499=create_method_name(info->impl_type,(_Bool)0,base_fun_name_391,info))));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj117=fun_name_390;
            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value500=parse_word(info))));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value500 = come_decrement_ref_count2(right_value500, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_391=(char*)come_increment_ref_count(((char*)(right_value501=__builtin_string(fun_name_390))));
            right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value502=parse_params(info)));
    param_types_395=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_396=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_397=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_398=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_399=info->p;
    header_buf_400=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value504=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value503=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1493, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_400,header_head_381,header_tail_399-header_head_381);
    buffer_append_char(header_buf_400,0);
    version_401=0;
    if(_if_conditional423=strmemcmp(info->p,"version"),    _if_conditional423) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_402=0;
        while(_while_condtional44=xisdigit(*info->p),        _while_condtional44) {
            n_402=n_402*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_401=n_402;
    }
    if(_if_conditional424=charp_operator_equals(base_fun_name_391,"lambda"),    _if_conditional424) {
        block_403=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value505=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_404++;
        fun_name_405=(char*)come_increment_ref_count(((char*)(right_value506=xsprintf("lambda%d",lambda_num_404))));
        right_value506 = come_decrement_ref_count2(right_value506, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_383->mStatic=(_Bool)0;
        fun_406=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value511=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value507=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1523, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value508=__builtin_string(fun_name_405)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)0,var_args_398,(struct sBlock*)come_increment_ref_count(block_403),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value509=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value510=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value508 = come_decrement_ref_count2(right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_407=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value512=__builtin_string(fun_name_405))));
        right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional425=fun2_407==((void*)0)||fun2_407->mExternal,        _if_conditional425) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value513=string_clone(fun_name_405)))),(struct sFun*)come_increment_ref_count(fun_406));
            right_value513 = come_decrement_ref_count2(right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1535, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sLambdaNode*)(right_value515=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value514=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1535, "sLambdaNode")))),fun_406,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sLambdaNode_finalize;
        _inf_value3->clone=(void*)sLambdaNode_clone;
        _inf_value3->compile=(void*)sLambdaNode_compile;
        _inf_value3->sline=(void*)sLambdaNode_sline;
        _inf_value3->sname=(void*)sLambdaNode_sname;
        _inf_value3->terminated=(void*)sLambdaNode_terminated;
        _inf_value3->kind=(void*)sLambdaNode_kind;
        __result161__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value3));
        come_call_finalizer2(sBlock_finalize,block_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_405 = come_decrement_ref_count2(fun_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result161__;
        come_call_finalizer2(sBlock_finalize,block_403, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_405 = come_decrement_ref_count2(fun_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_406, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional431=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional431) {
            none_generics_name_409=(char*)come_increment_ref_count(((char*)(right_value519=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_410=(char*)come_increment_ref_count(((char*)(right_value520=__builtin_string(info->sname))));
            right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_411=info->sline;
            block_412=(char*)come_increment_ref_count(((char*)(right_value521=skip_block(info))));
            right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_413=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value527=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value522=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1545, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value523=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value524=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value525=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),var_args_398,(char*)come_increment_ref_count(block_412),info,(char*)come_increment_ref_count(((char*)(right_value526=__builtin_string(generics_sname_410)))),generics_sline_411))));
            come_call_finalizer2(sGenericsFun_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value525 = come_decrement_ref_count2(right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value526 = come_decrement_ref_count2(right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_414=(char*)come_increment_ref_count(((char*)(right_value528=xsprintf("%s_%s",none_generics_name_409,base_fun_name_391))));
            right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value532=__builtin_string(fun_name3_414)))),(struct sGenericsFun*)come_increment_ref_count(fun_413));
            right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result175__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_409 = come_decrement_ref_count2(none_generics_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_410 = come_decrement_ref_count2(generics_sname_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_412 = come_decrement_ref_count2(block_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_414 = come_decrement_ref_count2(fun_name3_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result175__;
            none_generics_name_409 = come_decrement_ref_count2(none_generics_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_410 = come_decrement_ref_count2(generics_sname_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_412 = come_decrement_ref_count2(block_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_414 = come_decrement_ref_count2(fun_name3_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional454=*info->p==123,            _if_conditional454) {
                source_tail_436=info->p-1;
                header_437=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value534=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value533=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1567, "buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                buffer_append(header_437,source_head_382,source_tail_436-source_head_382);
                buffer_append_str(header_437,";\n");
                add_come_code_at_come_header(info,"%s",((char*)(right_value535=buffer_to_string(header_437))));
                right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_438=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value536=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__439=(_Bool)0;
                if(result_type_383->mStatic) {
                    result_type_383->mStatic=(_Bool)0;
                    static__439=(_Bool)1;
                }
                if(_if_conditional456=version_401>0,                _if_conditional456) {
                    new_fun_name_440=(char*)come_increment_ref_count(((char*)(right_value538=xsprintf("%s_v%d",((char*)(right_value537=__builtin_string(fun_name_390))),version_401))));
                    right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj119=fun_name_390;
                    fun_name_390=(char*)come_increment_ref_count(((char*)(right_value539=__builtin_string(new_fun_name_440))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value539 = come_decrement_ref_count2(right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_440 = come_decrement_ref_count2(new_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_441=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value545=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value540=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1587, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value541=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)0,var_args_398,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value542=sBlock_clone(block_438)))),static__439,(char*)come_increment_ref_count(((char*)(right_value543=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value544=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value543 = come_decrement_ref_count2(right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_442=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value546=__builtin_string(fun_name_390))));
                right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional457=fun2_442==((void*)0)||fun2_442->mExternal,                _if_conditional457) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value547=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_441));
                    right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1604, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(right_value549=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value548=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1604, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_441),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sFunNode_finalize;
                _inf_value4->clone=(void*)sFunNode_clone;
                _inf_value4->compile=(void*)sFunNode_compile;
                _inf_value4->sline=(void*)sFunNode_sline;
                _inf_value4->sname=(void*)sFunNode_sname;
                _inf_value4->terminated=(void*)sFunNode_terminated;
                _inf_value4->kind=(void*)sFunNode_kind;
                __result178__ = __result_obj__ = ((struct sNode*)(right_value553=_inf_value4));
                come_call_finalizer2(buffer_finalize,header_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result178__;
                come_call_finalizer2(buffer_finalize,header_437, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,block_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_441, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional464=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional464) {
                    if(_if_conditional465=version_401>0,                    _if_conditional465) {
                        new_fun_name_444=(char*)come_increment_ref_count(((char*)(right_value554=xsprintf("%s_v%d",fun_name_390,version_401))));
                        right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj122=fun_name_390;
                        fun_name_390=(char*)come_increment_ref_count(((char*)(right_value555=__builtin_string(new_fun_name_444))));
                        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value555 = come_decrement_ref_count2(right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_444 = come_decrement_ref_count2(new_fun_name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional466=*info->p==59,                    _if_conditional466) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_383->mStatic=(_Bool)0;
                        fun_445=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value560=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value556=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1618, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value557=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)1,var_args_398,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value558=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value559=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value559 = come_decrement_ref_count2(right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_446=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value561=__builtin_string(fun_name_390))));
                        right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional467=fun2_446==((void*)0)||fun2_446->mExternal,                        _if_conditional467) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value562=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_445));
                            right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_447=info->p;
                        header_448=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value564=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value563=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1634, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_448,source_head_382,source_tail_447-source_head_382);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value565=buffer_to_string(header_448))));
                        right_value565 = come_decrement_ref_count2(right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1639, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value567=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value566=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1639, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_445),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sFunNode_finalize;
                        _inf_value5->clone=(void*)sFunNode_clone;
                        _inf_value5->compile=(void*)sFunNode_compile;
                        _inf_value5->sline=(void*)sFunNode_sline;
                        _inf_value5->sname=(void*)sFunNode_sname;
                        _inf_value5->terminated=(void*)sFunNode_terminated;
                        _inf_value5->kind=(void*)sFunNode_kind;
                        __result181__ = __result_obj__ = ((struct sNode*)(right_value571=_inf_value5));
                        come_call_finalizer2(sFun_finalize,fun_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_448, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result181__;
                        come_call_finalizer2(sFun_finalize,fun_445, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_448, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_450=(char*)come_increment_ref_count(((char*)(right_value572=parse_attribute(info))));
                        right_value572 = come_decrement_ref_count2(right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional474=string_operator_not_equals(asm_fun_450,""),                        _if_conditional474) {
                            __dec_obj125=fun_name_390;
                            fun_name_390=(char*)come_increment_ref_count(((char*)(right_value573=__builtin_string(asm_fun_450))));
                            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_383->mStatic=(_Bool)0;
                        fun_451=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value578=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value574=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1652, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value575=__builtin_string(fun_name_390)))),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(param_types_395),(struct list$1charph*)come_increment_ref_count(param_names_396),(struct list$1charph*)come_increment_ref_count(param_default_parametors_397),(_Bool)1,var_args_398,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value576=buffer_to_string(header_buf_400)))),(char*)come_increment_ref_count(((char*)(right_value577=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value576 = come_decrement_ref_count2(right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value577 = come_decrement_ref_count2(right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_452=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value579=__builtin_string(fun_name_390))));
                        right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional475=fun2_452==((void*)0)||fun2_452->mExternal,                        _if_conditional475) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value580=string_clone(fun_name_390)))),(struct sFun*)come_increment_ref_count(fun_451));
                            right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        source_tail_453=info->p;
                        header_454=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value582=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value581=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1668, "buffer"))))))));
                        come_call_finalizer2(buffer_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(buffer_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        buffer_append(header_454,source_head_382,source_tail_453-source_head_382);
                        add_come_code_at_come_header(info,"%s",((char*)(right_value583=buffer_to_string(header_454))));
                        right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1673, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value585=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value584=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1673, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_451),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result184__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value6));
                        asm_fun_450 = come_decrement_ref_count2(asm_fun_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result184__;
                        asm_fun_450 = come_decrement_ref_count2(asm_fun_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_451, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_454, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_391 = come_decrement_ref_count2(base_fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result185__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result185__;
    come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_390 = come_decrement_ref_count2(fun_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_397, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_400, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional420=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional420) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional421=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional421) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional422=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional422) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional426=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional426) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional427;
struct sLambdaNode* __result159__;
void* right_value516;
struct sLambdaNode* result_408;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
void* right_value517;
char* __dec_obj118;
struct sLambdaNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value516 = (void*)0;
memset(&result_408, 0, sizeof(struct sLambdaNode*));
right_value517 = (void*)0;
            if(_if_conditional427=self==(void*)0,            _if_conditional427) {
                __result159__ = __result_obj__ = (void*)0;
                return __result159__;
            }
            result_408=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value516=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional428=self!=((void*)0),            _if_conditional428) {
                result_408->mFun=self->mFun;
            }
            if(_if_conditional429=self!=((void*)0),            _if_conditional429) {
                result_408->sline=self->sline;
            }
            if(_if_conditional430=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional430) {
                __dec_obj118=result_408->sname;
                result_408->sname=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->sname))));
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value517 = come_decrement_ref_count2(right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result160__ = __result_obj__ = result_408;
            come_call_finalizer2(sLambdaNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result160__;
            come_call_finalizer2(sLambdaNode_finalize,result_408, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
            __result162__ = self->len;
            return __result162__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional432;
unsigned int hash_432;
unsigned int it_433;
_Bool _while_condtional47;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool same_key_exist_434;
char* it2_435;
_Bool _if_conditional452;
_Bool _if_conditional453;
struct map$2charphsGenericsFunph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_432, 0, sizeof(unsigned int));
memset(&it_433, 0, sizeof(unsigned int));
memset(&same_key_exist_434, 0, sizeof(_Bool));
memset(&it2_435, 0, sizeof(char*));
                if(_if_conditional432=self->len*10>=self->size,                _if_conditional432) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_432=string_get_hash_key(key)%self->size;
                it_433=hash_432;
                while(_while_condtional47=(_Bool)1,                _while_condtional47) {
                    if(_if_conditional444=self->item_existance[it_433],                    _if_conditional444) {
                        if(_if_conditional445=string_equals(self->keys[it_433],key),                        _if_conditional445) {
                            if(_if_conditional446=1,                            _if_conditional446) {
                                list$1charp_remove(self->key_list,self->keys[it_433]);
                                self->keys[it_433] = come_decrement_ref_count2(self->keys[it_433], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_433]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_433]);
                                self->keys[it_433]=key;
                            }
                            if(_if_conditional447=1,                            _if_conditional447) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_433], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_433]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_433]=item;
                            }
                            break;
                        }
                        it_433++;
                        if(_if_conditional448=it_433>=self->size,                        _if_conditional448) {
                            it_433=0;
                        }
                        else {
                            if(_if_conditional449=it_433==hash_432,                            _if_conditional449) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_433]=(_Bool)1;
                        if(_if_conditional450=1,                        _if_conditional450) {
                            self->keys[it_433]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_433]=key;
                        }
                        if(_if_conditional451=1,                        _if_conditional451) {
                            self->items[it_433]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_433]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_434=(_Bool)0;
                for(                it2_435=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_435=list$1charp_next(self->key_list)                ){
                    if(_if_conditional452=string_equals(it2_435,key),                    _if_conditional452) {
                        puts("SAME KEY");
                        same_key_exist_434=(_Bool)1;
                    }
                }
                if(_if_conditional453=!same_key_exist_434,                _if_conditional453) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result174__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result174__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_415;
void* right_value529;
char** keys_416;
void* right_value530;
struct sGenericsFun** items_417;
void* right_value531;
_Bool* item_existance_418;
int len_419;
char* it_422;
struct sGenericsFun* default_value_425;
struct sGenericsFun* it2_428;
unsigned int hash_429;
int n_430;
_Bool _while_condtional46;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
struct sGenericsFun* default_value_431;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_415, 0, sizeof(int));
right_value529 = (void*)0;
memset(&keys_416, 0, sizeof(char**));
right_value530 = (void*)0;
memset(&items_417, 0, sizeof(struct sGenericsFun**));
right_value531 = (void*)0;
memset(&item_existance_418, 0, sizeof(_Bool*));
memset(&len_419, 0, sizeof(int));
memset(&it_422, 0, sizeof(char*));
memset(&default_value_425, 0, sizeof(struct sGenericsFun*));
memset(&it2_428, 0, sizeof(struct sGenericsFun*));
memset(&hash_429, 0, sizeof(unsigned int));
memset(&n_430, 0, sizeof(int));
memset(&default_value_431, 0, sizeof(struct sGenericsFun*));
                        size_415=self->size*10;
                        keys_416=(char**)come_increment_ref_count(((char**)(right_value529=(char**)come_calloc(1, sizeof(char*)*(1*(size_415)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                        right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_417=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value530=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_415)), "/usr/local/include/comelang2.h", 1336, "sGenericsFun*%"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_418=(_Bool*)come_increment_ref_count(((_Bool*)(right_value531=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_415)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                        right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_419=0;
                        for(                        it_422=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_422=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_425,0,sizeof(struct sGenericsFun*));
                            it2_428=map$2charphsGenericsFunph_at(self,it_422,default_value_425);
                            hash_429=string_get_hash_key(it_422)%size_415;
                            n_430=hash_429;
                            while(_while_condtional46=(_Bool)1,                            _while_condtional46) {
                                if(_if_conditional441=item_existance_418[n_430],                                _if_conditional441) {
                                    n_430++;
                                    if(_if_conditional442=n_430>=size_415,                                    _if_conditional442) {
                                        n_430=0;
                                    }
                                    else {
                                        if(_if_conditional443=n_430==hash_429,                                        _if_conditional443) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_418[n_430]=(_Bool)1;
                                    keys_416[n_430]=it_422;
                                    items_417[n_430]=map$2charphsGenericsFunph_at(self,it_422,default_value_431);
                                    len_419++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_416;
                        self->items=items_417;
                        self->item_existance=item_existance_418;
                        self->size=size_415;
                        self->len=len_419;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional433;
char* result_420;
char* __result163__;
_Bool _if_conditional434;
char* __result164__;
char* result_421;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_420, 0, sizeof(char*));
memset(&result_421, 0, sizeof(char*));
                            if(_if_conditional433=self==((void*)0),                            _if_conditional433) {
                                memset(&result_420,0,sizeof(char*));
                                __result163__ = __result_obj__ = result_420;
                                return __result163__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result164__ = __result_obj__ = self->key_list->it->item;
                                return __result164__;
                            }
                            memset(&result_421,0,sizeof(char*));
                            __result165__ = __result_obj__ = result_421;
                            return __result165__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result166__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result166__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional435;
char* result_423;
char* __result167__;
_Bool _if_conditional436;
char* __result168__;
char* result_424;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_423, 0, sizeof(char*));
memset(&result_424, 0, sizeof(char*));
                            if(_if_conditional435=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional435) {
                                memset(&result_423,0,sizeof(char*));
                                __result167__ = __result_obj__ = result_423;
                                return __result167__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result168__ = __result_obj__ = self->key_list->it->item;
                                return __result168__;
                            }
                            memset(&result_424,0,sizeof(char*));
                            __result169__ = __result_obj__ = result_424;
                            return __result169__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_426;
unsigned int it_427;
_Bool _while_condtional45;
_Bool _if_conditional437;
_Bool _if_conditional438;
struct sGenericsFun* __result170__;
_Bool _if_conditional439;
_Bool _if_conditional440;
struct sGenericsFun* __result171__;
struct sGenericsFun* __result172__;
struct sGenericsFun* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_426, 0, sizeof(unsigned int));
memset(&it_427, 0, sizeof(unsigned int));
                                hash_426=string_get_hash_key(((char*)key))%self->size;
                                it_427=hash_426;
                                while(_while_condtional45=(_Bool)1,                                _while_condtional45) {
                                    if(_if_conditional437=self->item_existance[it_427],                                    _if_conditional437) {
                                        if(_if_conditional438=string_equals(self->keys[it_427],key),                                        _if_conditional438) {
                                            __result170__ = __result_obj__ = self->items[it_427];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result170__;
                                        }
                                        it_427++;
                                        if(_if_conditional439=it_427>=self->size,                                        _if_conditional439) {
                                            it_427=0;
                                        }
                                        else {
                                            if(_if_conditional440=it_427==hash_426,                                            _if_conditional440) {
                                                __result171__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result171__;
                                            }
                                        }
                                    }
                                    else {
                                        __result172__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result172__;
                                    }
                                }
                                __result173__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result173__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_456;
char* __dec_obj128;
char* last_code2_457;
char* __dec_obj129;
char* last_code3_458;
char* __dec_obj130;
struct sClass* current_stack_frame_struct_459;
struct sFun* finalizer_460;
void* right_value590;
char* real_fun_name_461;
void* right_value591;
struct sType* type2_462;
struct sClass* klass_463;
_Bool _if_conditional482;
void* right_value592;
void* right_value593;
struct buffer* source_464;
struct list$1tuple2$2charphsTypephph* o2_saved_465;
struct tuple2$2charphsTypeph* it_468;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_471;
struct sType* field_type_472;
_Bool _if_conditional487;
_Bool _if_conditional488;
char* p_474;
int sline_475;
char* sname_476;
char* head_477;
struct buffer* source3_478;
struct buffer* __dec_obj131;
void* right_value594;
char* __dec_obj132;
void* right_value595;
struct sBlock* block_479;
void* right_value596;
void* right_value597;
struct sType* result_type_480;
void* right_value598;
char* name_481;
void* right_value599;
struct sType* self_type_482;
_Bool _if_conditional489;
struct sType* __list_values21___483[1];
void* right_value600;
void* right_value601;
struct list$1sTypeph* param_types_484;
void* right_value602;
char* __list_values22___485[1];
void* right_value603;
void* right_value604;
struct list$1charph* param_names_486;
void* right_value605;
void* right_value606;
struct list$1charph* param_default_parametors_487;
void* right_value607;
void* right_value608;
struct buffer* header_buf_488;
void* right_value609;
int i_489;
struct sType* param_type_490;
char* param_name_494;
void* right_value610;
_Bool _if_conditional492;
void* right_value611;
void* right_value612;
void* right_value613;
void* right_value614;
struct sFun* fun_495;
void* right_value615;
struct sFun* fun2_496;
_Bool _if_conditional493;
void* right_value616;
void* right_value617;
void* right_value618;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value622;
struct sNode* node_498;
_Bool _if_conditional500;
struct buffer* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
void* right_value623;
void* right_value624;
struct tuple2$2sFunpcharph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_456, 0, sizeof(char*));
memset(&last_code2_457, 0, sizeof(char*));
memset(&last_code3_458, 0, sizeof(char*));
memset(&current_stack_frame_struct_459, 0, sizeof(struct sClass*));
memset(&finalizer_460, 0, sizeof(struct sFun*));
right_value590 = (void*)0;
memset(&real_fun_name_461, 0, sizeof(char*));
right_value591 = (void*)0;
memset(&type2_462, 0, sizeof(struct sType*));
memset(&klass_463, 0, sizeof(struct sClass*));
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&source_464, 0, sizeof(struct buffer*));
memset(&o2_saved_465, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_468, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_471, 0, sizeof(char*));
memset(&field_type_472, 0, sizeof(struct sType*));
memset(&name_471, 0, sizeof(char*));
memset(&field_type_472, 0, sizeof(struct sType*));
memset(&p_474, 0, sizeof(char*));
memset(&sline_475, 0, sizeof(int));
memset(&sname_476, 0, sizeof(char*));
memset(&head_477, 0, sizeof(char*));
memset(&source3_478, 0, sizeof(struct buffer*));
right_value594 = (void*)0;
right_value595 = (void*)0;
memset(&block_479, 0, sizeof(struct sBlock*));
right_value596 = (void*)0;
right_value597 = (void*)0;
memset(&result_type_480, 0, sizeof(struct sType*));
right_value598 = (void*)0;
memset(&name_481, 0, sizeof(char*));
right_value599 = (void*)0;
memset(&self_type_482, 0, sizeof(struct sType*));
right_value600 = (void*)0;
right_value601 = (void*)0;
memset(&param_types_484, 0, sizeof(struct list$1sTypeph*));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value604 = (void*)0;
memset(&param_names_486, 0, sizeof(struct list$1charph*));
right_value605 = (void*)0;
right_value606 = (void*)0;
memset(&param_default_parametors_487, 0, sizeof(struct list$1charph*));
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&header_buf_488, 0, sizeof(struct buffer*));
right_value609 = (void*)0;
memset(&i_489, 0, sizeof(int));
memset(&param_type_490, 0, sizeof(struct sType*));
memset(&param_name_494, 0, sizeof(char*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
memset(&fun_495, 0, sizeof(struct sFun*));
right_value615 = (void*)0;
memset(&fun2_496, 0, sizeof(struct sFun*));
right_value616 = (void*)0;
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value622 = (void*)0;
memset(&node_498, 0, sizeof(struct sNode*));
right_value623 = (void*)0;
right_value624 = (void*)0;
    last_code_456=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj128=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_457=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj129=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_458=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj130=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_459=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_460=((void*)0);
    real_fun_name_461=(char*)come_increment_ref_count(((char*)(right_value590=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_462=(struct sType*)come_increment_ref_count(((struct sType*)(right_value591=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_462;
    klass_463=type->mClass;
    if(_if_conditional482=type->mPointerNum>0&&klass_463->mStruct,    _if_conditional482) {
        source_464=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value593=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value592=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1709, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_464,123);
        klass_463=map$2charphsClassphp_operator_load_element(info->classes,klass_463->mName);
        for(        o2_saved_465=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_463->mFields)),it_468=list$1tuple2$2charphsTypephph_begin((o2_saved_465));        !list$1tuple2$2charphsTypephph_end((o2_saved_465));        it_468=list$1tuple2$2charphsTypephph_next((o2_saved_465))        ){
            multiple_assign_var10=it_468;
            name_471=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_472=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional487=string_operator_equals(type->mClass->mName,field_type_472->mClass->mName)&&type->mPointerNum==field_type_472->mPointerNum&&field_type_472->mHeap,            _if_conditional487) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_472->mHeap) {
                char source2_473[1024];
                memset(&source2_473, 0, sizeof(char)                *(1024)                );
                snprintf(source2_473,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_471,name_471);
                buffer_append_str(source_464,source2_473);
            }
            name_471 = come_decrement_ref_count2(name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_472, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_464,125);
        p_474=info->p;
        sline_475=info->sline;
        sname_476=(char*)come_increment_ref_count(info->sname);
        head_477=info->head;
        source3_478=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj131=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_464);
        come_call_finalizer2(buffer_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_464->buf;
        info->head=source_464->buf;
        __dec_obj132=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value594=__builtin_string(real_fun_name_461))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_479=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value595=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_480=(struct sType*)come_increment_ref_count(((struct sType*)(right_value597=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value596=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1748, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_481=(char*)come_increment_ref_count(((char*)(right_value598=string_clone(real_fun_name_461))));
        right_value598 = come_decrement_ref_count2(right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_482=(struct sType*)come_increment_ref_count(((struct sType*)(right_value599=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_482->mHeap=(_Bool)0;
        if(_if_conditional489=self_type_482->mPointerNum>1,        _if_conditional489) {
            self_type_482->mPointerNum=1;
        }
        {__list_values21___483[0]=come_increment_ref_count(self_type_482);
}        param_types_484=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value601=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value600=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1755, "struct list$1sTypeph")))),1,__list_values21___483))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___485[0]=come_increment_ref_count(((char*)(right_value602=__builtin_string("self"))));
}        param_names_486=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value604=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value603=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1756, "struct list$1charph")))),1,__list_values22___485))));
        right_value602 = come_decrement_ref_count2(right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_487=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value606=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value605=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1757, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_487,((void*)0));
        header_buf_488=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value608=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value607=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1760, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_488,((char*)(right_value609=make_come_type_name_string(result_type_480,info))));
        right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_488," ");
        buffer_append_str(header_buf_488,real_fun_name_461);
        buffer_append_str(header_buf_488,"(");
        for(        i_489=0;        i_489<list$1sTypeph_length(param_types_484);        i_489++        ){
            param_type_490=list$1sTypephp_operator_load_element(param_types_484,i_489);
            param_name_494=list$1charphp_operator_load_element(param_names_486,i_489);
            buffer_append_str(header_buf_488,((char*)(right_value610=make_come_type_name_string(param_type_490,info))));
            right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_488," ");
            buffer_append_str(header_buf_488,param_name_494);
            if(_if_conditional492=i_489!=list$1sTypeph_length(param_types_484)-1,            _if_conditional492) {
                buffer_append_str(header_buf_488,",");
            }
        }
        buffer_append_str(header_buf_488,")");
        result_type_480->mStatic=(_Bool)0;
        fun_495=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value614=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value611=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1783, "sFun")))),(char*)come_increment_ref_count(name_481),(struct sType*)come_increment_ref_count(result_type_480),(struct list$1sTypeph*)come_increment_ref_count(param_types_484),(struct list$1charph*)come_increment_ref_count(param_names_486),(struct list$1charph*)come_increment_ref_count(param_default_parametors_487),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_479),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value612=buffer_to_string(header_buf_488)))),(char*)come_increment_ref_count(((char*)(right_value613=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_496=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value615=__builtin_string(fun_name))));
        right_value615 = come_decrement_ref_count2(right_value615, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional493=fun2_496==((void*)0)||fun2_496->mExternal,        _if_conditional493) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value616=string_clone(name_481)))),(struct sFun*)come_increment_ref_count(fun_495));
            right_value616 = come_decrement_ref_count2(right_value616, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_460=fun_495;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1799, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value618=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value617=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1799, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_495),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFunNode_finalize;
        _inf_value7->clone=(void*)sFunNode_clone;
        _inf_value7->compile=(void*)sFunNode_compile;
        _inf_value7->sline=(void*)sFunNode_sline;
        _inf_value7->sname=(void*)sFunNode_sname;
        _inf_value7->terminated=(void*)sFunNode_terminated;
        _inf_value7->kind=(void*)sFunNode_kind;
        node_498=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=_inf_value7)));
        come_call_finalizer2(sFunNode_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional500=!node_compile(node_498,info),        _if_conditional500) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj135=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_478);
        come_call_finalizer2(buffer_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_474;
        info->head=head_477;
        info->sline=sline_475;
        __dec_obj136=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_476);
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_476 = come_decrement_ref_count2(sname_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_478, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_481 = come_decrement_ref_count2(name_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_482, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_484, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_486, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_488, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_495, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_498) { node_498 = come_decrement_ref_count2(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_459;
    __dec_obj137=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_456);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_457);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj139=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_458);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result199__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value624=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value623=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1819, "struct tuple2$2sFunpcharph")))),finalizer_460,(char*)come_increment_ref_count(real_fun_name_461))));
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_461 = come_decrement_ref_count2(real_fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value623 = come_decrement_ref_count2(right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result199__;
    last_code_456 = come_decrement_ref_count2(last_code_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_457 = come_decrement_ref_count2(last_code2_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_458 = come_decrement_ref_count2(last_code3_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_461 = come_decrement_ref_count2(real_fun_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_462, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional483;
struct tuple2$2charphsTypeph* result_466;
struct tuple2$2charphsTypeph* __result186__;
_Bool _if_conditional484;
struct tuple2$2charphsTypeph* __result187__;
struct tuple2$2charphsTypeph* result_467;
struct tuple2$2charphsTypeph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_466, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_467, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional483=self==((void*)0),            _if_conditional483) {
                memset(&result_466,0,sizeof(struct tuple2$2charphsTypeph*));
                __result186__ = __result_obj__ = result_466;
                return __result186__;
            }
            self->it=self->head;
            if(self->it) {
                __result187__ = __result_obj__ = self->it->item;
                return __result187__;
            }
            memset(&result_467,0,sizeof(struct tuple2$2charphsTypeph*));
            __result188__ = __result_obj__ = result_467;
            return __result188__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
            __result189__ = self==((void*)0)||self->it==((void*)0);
            return __result189__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional485;
struct tuple2$2charphsTypeph* result_469;
struct tuple2$2charphsTypeph* __result190__;
_Bool _if_conditional486;
struct tuple2$2charphsTypeph* __result191__;
struct tuple2$2charphsTypeph* result_470;
struct tuple2$2charphsTypeph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_469, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_470, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional485=self==((void*)0)||self->it==((void*)0),            _if_conditional485) {
                memset(&result_469,0,sizeof(struct tuple2$2charphsTypeph*));
                __result190__ = __result_obj__ = result_469;
                return __result190__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result191__ = __result_obj__ = self->it->item;
                return __result191__;
            }
            memset(&result_470,0,sizeof(struct tuple2$2charphsTypeph*));
            __result192__ = __result_obj__ = result_470;
            return __result192__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result193__;
memset(&__result_obj__, 0, sizeof(void*));
            __result193__ = self->len;
            return __result193__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional490;
struct list_item$1charph* it_491;
int i_492;
_Bool _while_condtional48;
_Bool _if_conditional491;
char* __result194__;
char* default_value_493;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_491, 0, sizeof(struct list_item$1charph*));
memset(&i_492, 0, sizeof(int));
memset(&default_value_493, 0, sizeof(char*));
                if(_if_conditional490=position<0,                _if_conditional490) {
                    position+=self->len;
                }
                it_491=self->head;
                i_492=0;
                while(_while_condtional48=it_491!=((void*)0),                _while_condtional48) {
                    if(_if_conditional491=position==i_492,                    _if_conditional491) {
                        __result194__ = __result_obj__ = it_491->item;
                        return __result194__;
                    }
                    it_491=it_491->next;
                    i_492++;
                }
                memset(&default_value_493,0,sizeof(char*));
                __result195__ = __result_obj__ = default_value_493;
                default_value_493 = come_decrement_ref_count2(default_value_493, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result195__;
                default_value_493 = come_decrement_ref_count2(default_value_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj140;
struct tuple2$2sFunpcharph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj140=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result198__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result198__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional501;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional501=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional501) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_499;
char* __dec_obj141;
char* last_code2_500;
char* __dec_obj142;
char* last_code3_501;
char* __dec_obj143;
struct sClass* current_stack_frame_struct_502;
struct sFun* finalizer_503;
void* right_value625;
char* real_fun_name_504;
void* right_value626;
struct sType* type2_505;
struct sClass* klass_506;
_Bool _if_conditional502;
void* right_value627;
void* right_value628;
struct buffer* source_507;
struct list$1tuple2$2charphsTypephph* o2_saved_508;
struct tuple2$2charphsTypeph* it_509;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_510;
struct sType* field_type_511;
_Bool _if_conditional503;
_Bool _if_conditional504;
char* p_513;
int sline_514;
char* sname_515;
char* head_516;
struct buffer* source3_517;
struct buffer* __dec_obj144;
void* right_value629;
char* __dec_obj145;
void* right_value630;
struct sBlock* block_518;
void* right_value631;
void* right_value632;
struct sType* result_type_519;
void* right_value633;
char* name_520;
void* right_value634;
struct sType* self_type_521;
_Bool _if_conditional505;
struct sType* __list_values23___522[1];
void* right_value635;
void* right_value636;
struct list$1sTypeph* param_types_523;
void* right_value637;
char* __list_values24___524[1];
void* right_value638;
void* right_value639;
struct list$1charph* param_names_525;
void* right_value640;
void* right_value641;
struct list$1charph* param_default_parametors_526;
void* right_value642;
void* right_value643;
struct buffer* header_buf_527;
void* right_value644;
int i_528;
struct sType* param_type_529;
char* param_name_530;
void* right_value645;
_Bool _if_conditional506;
void* right_value646;
void* right_value647;
void* right_value648;
void* right_value649;
struct sFun* fun_531;
void* right_value650;
struct sFun* fun2_532;
_Bool _if_conditional507;
void* right_value651;
void* right_value652;
void* right_value653;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value657;
struct sNode* node_534;
_Bool _if_conditional514;
struct buffer* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
void* right_value658;
void* right_value659;
struct tuple2$2sFunpcharph* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_499, 0, sizeof(char*));
memset(&last_code2_500, 0, sizeof(char*));
memset(&last_code3_501, 0, sizeof(char*));
memset(&current_stack_frame_struct_502, 0, sizeof(struct sClass*));
memset(&finalizer_503, 0, sizeof(struct sFun*));
right_value625 = (void*)0;
memset(&real_fun_name_504, 0, sizeof(char*));
right_value626 = (void*)0;
memset(&type2_505, 0, sizeof(struct sType*));
memset(&klass_506, 0, sizeof(struct sClass*));
right_value627 = (void*)0;
right_value628 = (void*)0;
memset(&source_507, 0, sizeof(struct buffer*));
memset(&o2_saved_508, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_509, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_510, 0, sizeof(char*));
memset(&field_type_511, 0, sizeof(struct sType*));
memset(&name_510, 0, sizeof(char*));
memset(&field_type_511, 0, sizeof(struct sType*));
memset(&p_513, 0, sizeof(char*));
memset(&sline_514, 0, sizeof(int));
memset(&sname_515, 0, sizeof(char*));
memset(&head_516, 0, sizeof(char*));
memset(&source3_517, 0, sizeof(struct buffer*));
right_value629 = (void*)0;
right_value630 = (void*)0;
memset(&block_518, 0, sizeof(struct sBlock*));
right_value631 = (void*)0;
right_value632 = (void*)0;
memset(&result_type_519, 0, sizeof(struct sType*));
right_value633 = (void*)0;
memset(&name_520, 0, sizeof(char*));
right_value634 = (void*)0;
memset(&self_type_521, 0, sizeof(struct sType*));
right_value635 = (void*)0;
right_value636 = (void*)0;
memset(&param_types_523, 0, sizeof(struct list$1sTypeph*));
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
memset(&param_names_525, 0, sizeof(struct list$1charph*));
right_value640 = (void*)0;
right_value641 = (void*)0;
memset(&param_default_parametors_526, 0, sizeof(struct list$1charph*));
right_value642 = (void*)0;
right_value643 = (void*)0;
memset(&header_buf_527, 0, sizeof(struct buffer*));
right_value644 = (void*)0;
memset(&i_528, 0, sizeof(int));
memset(&param_type_529, 0, sizeof(struct sType*));
memset(&param_name_530, 0, sizeof(char*));
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value649 = (void*)0;
memset(&fun_531, 0, sizeof(struct sFun*));
right_value650 = (void*)0;
memset(&fun2_532, 0, sizeof(struct sFun*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value657 = (void*)0;
memset(&node_534, 0, sizeof(struct sNode*));
right_value658 = (void*)0;
right_value659 = (void*)0;
    last_code_499=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj141=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_500=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj142=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_501=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj143=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_502=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_503=((void*)0);
    real_fun_name_504=(char*)come_increment_ref_count(((char*)(right_value625=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_505=(struct sType*)come_increment_ref_count(((struct sType*)(right_value626=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_505;
    klass_506=type->mClass;
    if(_if_conditional502=type->mPointerNum>0&&klass_506->mStruct,    _if_conditional502) {
        source_507=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value628=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value627=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1846, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_507,123);
        klass_506=map$2charphsClassphp_operator_load_element(info->classes,klass_506->mName);
        for(        o2_saved_508=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_506->mFields)),it_509=list$1tuple2$2charphsTypephph_begin((o2_saved_508));        !list$1tuple2$2charphsTypephph_end((o2_saved_508));        it_509=list$1tuple2$2charphsTypephph_next((o2_saved_508))        ){
            multiple_assign_var11=it_509;
            name_510=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_511=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional503=string_operator_equals(type->mClass->mName,field_type_511->mClass->mName)&&type->mPointerNum==field_type_511->mPointerNum&&field_type_511->mHeap,            _if_conditional503) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_511->mHeap) {
                char source2_512[1024];
                memset(&source2_512, 0, sizeof(char)                *(1024)                );
                snprintf(source2_512,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_510,name_510);
                buffer_append_str(source_507,source2_512);
            }
            name_510 = come_decrement_ref_count2(name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_508, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_507,125);
        p_513=info->p;
        sline_514=info->sline;
        sname_515=(char*)come_increment_ref_count(info->sname);
        head_516=info->head;
        source3_517=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj144=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_507);
        come_call_finalizer2(buffer_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_507->buf;
        info->head=source_507->buf;
        __dec_obj145=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value629=__builtin_string(real_fun_name_504))));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_518=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value630=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_519=(struct sType*)come_increment_ref_count(((struct sType*)(right_value632=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value631=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1885, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_520=(char*)come_increment_ref_count(((char*)(right_value633=string_clone(real_fun_name_504))));
        right_value633 = come_decrement_ref_count2(right_value633, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_521=(struct sType*)come_increment_ref_count(((struct sType*)(right_value634=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_521->mHeap=(_Bool)0;
        if(_if_conditional505=self_type_521->mPointerNum>1,        _if_conditional505) {
            self_type_521->mPointerNum=1;
        }
        {__list_values23___522[0]=come_increment_ref_count(self_type_521);
}        param_types_523=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value636=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value635=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1892, "struct list$1sTypeph")))),1,__list_values23___522))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___524[0]=come_increment_ref_count(((char*)(right_value637=__builtin_string("self"))));
}        param_names_525=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value639=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value638=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1893, "struct list$1charph")))),1,__list_values24___524))));
        right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_526=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value641=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value640=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1894, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_526,((void*)0));
        header_buf_527=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value643=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value642=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1897, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_527,((char*)(right_value644=make_come_type_name_string(result_type_519,info))));
        right_value644 = come_decrement_ref_count2(right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_527," ");
        buffer_append_str(header_buf_527,real_fun_name_504);
        buffer_append_str(header_buf_527,"(");
        for(        i_528=0;        i_528<list$1sTypeph_length(param_types_523);        i_528++        ){
            param_type_529=list$1sTypephp_operator_load_element(param_types_523,i_528);
            param_name_530=list$1charphp_operator_load_element(param_names_525,i_528);
            buffer_append_str(header_buf_527,((char*)(right_value645=make_come_type_name_string(param_type_529,info))));
            right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_527," ");
            buffer_append_str(header_buf_527,param_name_530);
            if(_if_conditional506=i_528!=list$1sTypeph_length(param_types_523)-1,            _if_conditional506) {
                buffer_append_str(header_buf_527,",");
            }
        }
        buffer_append_str(header_buf_527,")");
        result_type_519->mStatic=(_Bool)0;
        fun_531=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value649=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value646=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1920, "sFun")))),(char*)come_increment_ref_count(name_520),(struct sType*)come_increment_ref_count(result_type_519),(struct list$1sTypeph*)come_increment_ref_count(param_types_523),(struct list$1charph*)come_increment_ref_count(param_names_525),(struct list$1charph*)come_increment_ref_count(param_default_parametors_526),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_518),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value647=buffer_to_string(header_buf_527)))),(char*)come_increment_ref_count(((char*)(right_value648=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_532=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value650=__builtin_string(fun_name))));
        right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional507=fun2_532==((void*)0)||fun2_532->mExternal,        _if_conditional507) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value651=string_clone(name_520)))),(struct sFun*)come_increment_ref_count(fun_531));
            right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_503=fun_531;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1936, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value653=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value652=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1936, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_531),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_534=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional514=!node_compile(node_534,info),        _if_conditional514) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj148=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_517);
        come_call_finalizer2(buffer_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_513;
        info->head=head_516;
        info->sline=sline_514;
        __dec_obj149=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_515);
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_507, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_515 = come_decrement_ref_count2(sname_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_517, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_518, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_519, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_521, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_523, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_525, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_526, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_527, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_531, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_534) { node_534 = come_decrement_ref_count2(node_534, ((struct sNode*)node_534)->finalize, ((struct sNode*)node_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_502;
    __dec_obj150=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_499);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_500);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_501);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result202__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value659=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value658=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 1956, "struct tuple2$2sFunpcharph")))),finalizer_503,(char*)come_increment_ref_count(real_fun_name_504))));
    last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_504 = come_decrement_ref_count2(real_fun_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_505, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result202__;
    last_code_499 = come_decrement_ref_count2(last_code_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_500 = come_decrement_ref_count2(last_code2_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_501 = come_decrement_ref_count2(last_code3_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_504 = come_decrement_ref_count2(real_fun_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_505, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_535;
char* __dec_obj153;
char* last_code2_536;
char* __dec_obj154;
char* last_code3_537;
char* __dec_obj155;
struct sClass* current_stack_frame_struct_538;
struct sFun* equaler_539;
void* right_value660;
char* real_fun_name_540;
void* right_value661;
struct sType* type2_541;
struct sClass* klass_542;
_Bool _if_conditional515;
void* right_value662;
void* right_value663;
struct buffer* source_543;
_Bool _if_conditional516;
char* name_544;
struct list$1tuple2$2charphsTypephph* o2_saved_546;
struct tuple2$2charphsTypeph* it_547;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_548;
struct sType* field_type_549;
_Bool _if_conditional517;
char* p_551;
int sline_552;
char* sname_553;
char* head_554;
struct buffer* source3_555;
struct buffer* __dec_obj156;
void* right_value664;
char* __dec_obj157;
void* right_value665;
struct sBlock* block_556;
void* right_value666;
void* right_value667;
struct sType* result_type_557;
void* right_value668;
char* name_558;
void* right_value669;
struct sType* left_type_559;
void* right_value670;
struct sType* right_type_560;
struct sType* __list_values25___561[2];
void* right_value671;
void* right_value672;
struct list$1sTypeph* param_types_562;
void* right_value673;
void* right_value674;
char* __list_values26___563[2];
void* right_value675;
void* right_value676;
struct list$1charph* param_names_564;
void* right_value677;
void* right_value678;
struct list$1charph* param_default_parametors_565;
void* right_value679;
void* right_value680;
struct buffer* header_buf_566;
void* right_value681;
int i_567;
struct sType* param_type_568;
char* param_name_569;
void* right_value682;
_Bool _if_conditional518;
void* right_value683;
void* right_value684;
void* right_value685;
void* right_value686;
struct sFun* fun_570;
void* right_value687;
struct sFun* fun2_571;
_Bool _if_conditional519;
void* right_value688;
void* right_value689;
void* right_value690;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value694;
struct sNode* node_573;
_Bool _if_conditional526;
struct buffer* __dec_obj160;
char* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
void* right_value695;
void* right_value696;
struct tuple2$2sFunpcharph* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_535, 0, sizeof(char*));
memset(&last_code2_536, 0, sizeof(char*));
memset(&last_code3_537, 0, sizeof(char*));
memset(&current_stack_frame_struct_538, 0, sizeof(struct sClass*));
memset(&equaler_539, 0, sizeof(struct sFun*));
right_value660 = (void*)0;
memset(&real_fun_name_540, 0, sizeof(char*));
right_value661 = (void*)0;
memset(&type2_541, 0, sizeof(struct sType*));
memset(&klass_542, 0, sizeof(struct sClass*));
right_value662 = (void*)0;
right_value663 = (void*)0;
memset(&source_543, 0, sizeof(struct buffer*));
memset(&name_544, 0, sizeof(char*));
memset(&o2_saved_546, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_547, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_548, 0, sizeof(char*));
memset(&field_type_549, 0, sizeof(struct sType*));
memset(&name_548, 0, sizeof(char*));
memset(&field_type_549, 0, sizeof(struct sType*));
memset(&p_551, 0, sizeof(char*));
memset(&sline_552, 0, sizeof(int));
memset(&sname_553, 0, sizeof(char*));
memset(&head_554, 0, sizeof(char*));
memset(&source3_555, 0, sizeof(struct buffer*));
right_value664 = (void*)0;
right_value665 = (void*)0;
memset(&block_556, 0, sizeof(struct sBlock*));
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&result_type_557, 0, sizeof(struct sType*));
right_value668 = (void*)0;
memset(&name_558, 0, sizeof(char*));
right_value669 = (void*)0;
memset(&left_type_559, 0, sizeof(struct sType*));
right_value670 = (void*)0;
memset(&right_type_560, 0, sizeof(struct sType*));
right_value671 = (void*)0;
right_value672 = (void*)0;
memset(&param_types_562, 0, sizeof(struct list$1sTypeph*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
right_value676 = (void*)0;
memset(&param_names_564, 0, sizeof(struct list$1charph*));
right_value677 = (void*)0;
right_value678 = (void*)0;
memset(&param_default_parametors_565, 0, sizeof(struct list$1charph*));
right_value679 = (void*)0;
right_value680 = (void*)0;
memset(&header_buf_566, 0, sizeof(struct buffer*));
right_value681 = (void*)0;
memset(&i_567, 0, sizeof(int));
memset(&param_type_568, 0, sizeof(struct sType*));
memset(&param_name_569, 0, sizeof(char*));
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
right_value686 = (void*)0;
memset(&fun_570, 0, sizeof(struct sFun*));
right_value687 = (void*)0;
memset(&fun2_571, 0, sizeof(struct sFun*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value694 = (void*)0;
memset(&node_573, 0, sizeof(struct sNode*));
right_value695 = (void*)0;
right_value696 = (void*)0;
    last_code_535=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj153=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_536=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj154=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_537=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj155=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_538=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_539=((void*)0);
    real_fun_name_540=(char*)come_increment_ref_count(((char*)(right_value660=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_541=(struct sType*)come_increment_ref_count(((struct sType*)(right_value661=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_541;
    klass_542=type->mClass;
    if(_if_conditional515=type->mPointerNum>0&&!klass_542->mNumber,    _if_conditional515) {
        source_543=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value663=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value662=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1981, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_543,123);
        if(klass_542->mProtocol) {
            name_544="_protocol_obj";
            char source2_545[1024];
            memset(&source2_545, 0, sizeof(char)            *(1024)            );
            snprintf(source2_545,1024,"return left.%s.equals(right.%s);\n",name_544,name_544);
            buffer_append_str(source_543,source2_545);
        }
        else {
            klass_542=map$2charphsClassphp_operator_load_element(info->classes,klass_542->mName);
            for(            o2_saved_546=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_542->mFields)),it_547=list$1tuple2$2charphsTypephph_begin((o2_saved_546));            !list$1tuple2$2charphsTypephph_end((o2_saved_546));            it_547=list$1tuple2$2charphsTypephph_next((o2_saved_546))            ){
                multiple_assign_var12=it_547;
                name_548=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_549=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional517=string_operator_equals(type->mClass->mName,field_type_549->mClass->mName)&&type->mPointerNum==field_type_549->mPointerNum&&field_type_549->mHeap,                _if_conditional517) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_550[1024];
                memset(&source2_550, 0, sizeof(char)                *(1024)                );
                snprintf(source2_550,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_548,name_548);
                buffer_append_str(source_543,source2_550);
                name_548 = come_decrement_ref_count2(name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_549, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_546, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_543,"return true;");
        buffer_append_char(source_543,125);
        p_551=info->p;
        sline_552=info->sline;
        sname_553=(char*)come_increment_ref_count(info->sname);
        head_554=info->head;
        source3_555=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj156=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_543);
        come_call_finalizer2(buffer_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_543->buf;
        info->head=source_543->buf;
        __dec_obj157=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value664=__builtin_string(real_fun_name_540))));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_556=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value665=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_557=(struct sType*)come_increment_ref_count(((struct sType*)(right_value667=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value666=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2027, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_558=(char*)come_increment_ref_count(((char*)(right_value668=string_clone(real_fun_name_540))));
        right_value668 = come_decrement_ref_count2(right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_559=(struct sType*)come_increment_ref_count(((struct sType*)(right_value669=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_559->mHeap=(_Bool)0;
        right_type_560=(struct sType*)come_increment_ref_count(((struct sType*)(right_value670=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_560->mHeap=(_Bool)0;
        {__list_values25___561[0]=come_increment_ref_count(left_type_559);
__list_values25___561[1]=come_increment_ref_count(right_type_560);
}        param_types_562=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value672=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value671=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2033, "struct list$1sTypeph")))),2,__list_values25___561))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___563[0]=come_increment_ref_count(((char*)(right_value673=__builtin_string("left"))));
__list_values26___563[1]=come_increment_ref_count(((char*)(right_value674=__builtin_string("right"))));
}        param_names_564=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value676=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value675=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2034, "struct list$1charph")))),2,__list_values26___563))));
        right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value674 = come_decrement_ref_count2(right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_565=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value678=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value677=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2035, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_565,((void*)0));
        list$1charph_push_back(param_default_parametors_565,((void*)0));
        header_buf_566=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value680=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value679=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2039, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_566,((char*)(right_value681=make_come_type_name_string(result_type_557,info))));
        right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_566," ");
        buffer_append_str(header_buf_566,real_fun_name_540);
        buffer_append_str(header_buf_566,"(");
        for(        i_567=0;        i_567<list$1sTypeph_length(param_types_562);        i_567++        ){
            param_type_568=list$1sTypephp_operator_load_element(param_types_562,i_567);
            param_name_569=list$1charphp_operator_load_element(param_names_564,i_567);
            buffer_append_str(header_buf_566,((char*)(right_value682=make_come_type_name_string(param_type_568,info))));
            right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_566," ");
            buffer_append_str(header_buf_566,param_name_569);
            if(_if_conditional518=i_567!=list$1sTypeph_length(param_types_562)-1,            _if_conditional518) {
                buffer_append_str(header_buf_566,",");
            }
        }
        buffer_append_str(header_buf_566,")");
        result_type_557->mStatic=(_Bool)0;
        fun_570=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value686=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value683=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2062, "sFun")))),(char*)come_increment_ref_count(name_558),(struct sType*)come_increment_ref_count(result_type_557),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_564),(struct list$1charph*)come_increment_ref_count(param_default_parametors_565),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_556),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value684=buffer_to_string(header_buf_566)))),(char*)come_increment_ref_count(((char*)(right_value685=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_571=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value687=__builtin_string(fun_name))));
        right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional519=fun2_571==((void*)0)||fun2_571->mExternal,        _if_conditional519) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value688=string_clone(name_558)))),(struct sFun*)come_increment_ref_count(fun_570));
            right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_539=fun_570;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2078, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value690=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value689=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2078, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_570),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_573=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional526=!node_compile(node_573,info),        _if_conditional526) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj160=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_555);
        come_call_finalizer2(buffer_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_551;
        info->head=head_554;
        info->sline=sline_552;
        __dec_obj161=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_553);
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_543, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_553 = come_decrement_ref_count2(sname_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_555, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_556, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_557, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_558 = come_decrement_ref_count2(name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_559, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_560, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_562, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_564, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_565, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_566, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_573) { node_573 = come_decrement_ref_count2(node_573, ((struct sNode*)node_573)->finalize, ((struct sNode*)node_573)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_538;
    __dec_obj162=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_535);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj163=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_536);
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_537);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result205__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value696=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value695=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2098, "struct tuple2$2sFunpcharph")))),equaler_539,(char*)come_increment_ref_count(real_fun_name_540))));
    last_code_535 = come_decrement_ref_count2(last_code_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_536 = come_decrement_ref_count2(last_code2_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_537 = come_decrement_ref_count2(last_code3_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_540 = come_decrement_ref_count2(real_fun_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result205__;
    last_code_535 = come_decrement_ref_count2(last_code_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_536 = come_decrement_ref_count2(last_code2_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_537 = come_decrement_ref_count2(last_code3_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_540 = come_decrement_ref_count2(real_fun_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_574;
char* __dec_obj165;
char* last_code2_575;
char* __dec_obj166;
char* last_code3_576;
char* __dec_obj167;
struct sClass* current_stack_frame_struct_577;
struct sFun* equaler_578;
void* right_value697;
char* real_fun_name_579;
void* right_value698;
struct sType* type2_580;
struct sClass* klass_581;
_Bool _if_conditional527;
void* right_value699;
void* right_value700;
struct buffer* source_582;
_Bool _if_conditional528;
char* name_583;
int i_586;
struct list$1tuple2$2charphsTypephph* o2_saved_587;
struct tuple2$2charphsTypeph* it_588;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_589;
struct sType* field_type_590;
_Bool _if_conditional529;
_Bool _if_conditional530;
char* p_594;
int sline_595;
char* sname_596;
char* head_597;
struct buffer* source3_598;
struct buffer* __dec_obj168;
void* right_value701;
char* __dec_obj169;
void* right_value702;
struct sBlock* block_599;
void* right_value703;
void* right_value704;
struct sType* result_type_600;
void* right_value705;
char* name_601;
void* right_value706;
struct sType* left_type_602;
void* right_value707;
struct sType* right_type_603;
struct sType* __list_values27___604[2];
void* right_value708;
void* right_value709;
struct list$1sTypeph* param_types_605;
void* right_value710;
void* right_value711;
char* __list_values28___606[2];
void* right_value712;
void* right_value713;
struct list$1charph* param_names_607;
void* right_value714;
void* right_value715;
struct list$1charph* param_default_parametors_608;
void* right_value716;
void* right_value717;
struct buffer* header_buf_609;
void* right_value718;
int i_610;
struct sType* param_type_611;
char* param_name_612;
void* right_value719;
_Bool _if_conditional531;
void* right_value720;
void* right_value721;
void* right_value722;
void* right_value723;
struct sFun* fun_613;
void* right_value724;
struct sFun* fun2_614;
_Bool _if_conditional532;
void* right_value725;
void* right_value726;
void* right_value727;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value731;
struct sNode* node_616;
_Bool _if_conditional539;
struct buffer* __dec_obj172;
char* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
char* __dec_obj176;
void* right_value732;
void* right_value733;
struct tuple2$2sFunpcharph* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_574, 0, sizeof(char*));
memset(&last_code2_575, 0, sizeof(char*));
memset(&last_code3_576, 0, sizeof(char*));
memset(&current_stack_frame_struct_577, 0, sizeof(struct sClass*));
memset(&equaler_578, 0, sizeof(struct sFun*));
right_value697 = (void*)0;
memset(&real_fun_name_579, 0, sizeof(char*));
right_value698 = (void*)0;
memset(&type2_580, 0, sizeof(struct sType*));
memset(&klass_581, 0, sizeof(struct sClass*));
right_value699 = (void*)0;
right_value700 = (void*)0;
memset(&source_582, 0, sizeof(struct buffer*));
memset(&name_583, 0, sizeof(char*));
memset(&i_586, 0, sizeof(int));
memset(&o2_saved_587, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_588, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_589, 0, sizeof(char*));
memset(&field_type_590, 0, sizeof(struct sType*));
memset(&name_589, 0, sizeof(char*));
memset(&field_type_590, 0, sizeof(struct sType*));
memset(&p_594, 0, sizeof(char*));
memset(&sline_595, 0, sizeof(int));
memset(&sname_596, 0, sizeof(char*));
memset(&head_597, 0, sizeof(char*));
memset(&source3_598, 0, sizeof(struct buffer*));
right_value701 = (void*)0;
right_value702 = (void*)0;
memset(&block_599, 0, sizeof(struct sBlock*));
right_value703 = (void*)0;
right_value704 = (void*)0;
memset(&result_type_600, 0, sizeof(struct sType*));
right_value705 = (void*)0;
memset(&name_601, 0, sizeof(char*));
right_value706 = (void*)0;
memset(&left_type_602, 0, sizeof(struct sType*));
right_value707 = (void*)0;
memset(&right_type_603, 0, sizeof(struct sType*));
right_value708 = (void*)0;
right_value709 = (void*)0;
memset(&param_types_605, 0, sizeof(struct list$1sTypeph*));
right_value710 = (void*)0;
right_value711 = (void*)0;
right_value712 = (void*)0;
right_value713 = (void*)0;
memset(&param_names_607, 0, sizeof(struct list$1charph*));
right_value714 = (void*)0;
right_value715 = (void*)0;
memset(&param_default_parametors_608, 0, sizeof(struct list$1charph*));
right_value716 = (void*)0;
right_value717 = (void*)0;
memset(&header_buf_609, 0, sizeof(struct buffer*));
right_value718 = (void*)0;
memset(&i_610, 0, sizeof(int));
memset(&param_type_611, 0, sizeof(struct sType*));
memset(&param_name_612, 0, sizeof(char*));
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value722 = (void*)0;
right_value723 = (void*)0;
memset(&fun_613, 0, sizeof(struct sFun*));
right_value724 = (void*)0;
memset(&fun2_614, 0, sizeof(struct sFun*));
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
right_value731 = (void*)0;
memset(&node_616, 0, sizeof(struct sNode*));
right_value732 = (void*)0;
right_value733 = (void*)0;
    last_code_574=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj165=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_575=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj166=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_576=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj167=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_577=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_578=((void*)0);
    real_fun_name_579=(char*)come_increment_ref_count(((char*)(right_value697=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_580=(struct sType*)come_increment_ref_count(((struct sType*)(right_value698=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_580;
    klass_581=type->mClass;
    if(_if_conditional527=type->mPointerNum>0&&!klass_581->mNumber,    _if_conditional527) {
        source_582=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value700=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2123, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_582,123);
        if(klass_581->mProtocol) {
            name_583="_protocol_obj";
            char source2_584[1024];
            memset(&source2_584, 0, sizeof(char)            *(1024)            );
            snprintf(source2_584,1024,"return !left.%s.equals(right.%s);\n",name_583,name_583);
            buffer_append_str(source_582,source2_584);
        }
        else {
            char source2_585[1024];
            memset(&source2_585, 0, sizeof(char)            *(1024)            );
            snprintf(source2_585,1024,"return !(");
            buffer_append_str(source_582,source2_585);
            i_586=0;
            klass_581=map$2charphsClassphp_operator_load_element(info->classes,klass_581->mName);
            for(            o2_saved_587=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_581->mFields)),it_588=list$1tuple2$2charphsTypephph_begin((o2_saved_587));            !list$1tuple2$2charphsTypephph_end((o2_saved_587));            it_588=list$1tuple2$2charphsTypephph_next((o2_saved_587))            ){
                multiple_assign_var13=it_588;
                name_589=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_590=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional529=string_operator_equals(type->mClass->mName,field_type_590->mClass->mName)&&type->mPointerNum==field_type_590->mPointerNum&&field_type_590->mHeap,                _if_conditional529) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_591[1024];
                memset(&source2_591, 0, sizeof(char)                *(1024)                );
                snprintf(source2_591,1024,"left.%s.equals(right.%s)",name_589,name_589);
                buffer_append_str(source_582,source2_591);
                if(_if_conditional530=i_586==list$1tuple2$2charphsTypephph_length(klass_581->mFields)-1,                _if_conditional530) {
                    char source2_592[1024];
                    memset(&source2_592, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_592,1024,");");
                    buffer_append_str(source_582,source2_592);
                }
                else {
                    char source2_593[1024];
                    memset(&source2_593, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_593,1024," && ");
                    buffer_append_str(source_582,source2_593);
                }
                i_586++;
                name_589 = come_decrement_ref_count2(name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_590, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_587, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_582,125);
        p_594=info->p;
        sline_595=info->sline;
        sname_596=(char*)come_increment_ref_count(info->sname);
        head_597=info->head;
        source3_598=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj168=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_582);
        come_call_finalizer2(buffer_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_582->buf;
        info->head=source_582->buf;
        __dec_obj169=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value701=__builtin_string(real_fun_name_579))));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_599=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value702=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_600=(struct sType*)come_increment_ref_count(((struct sType*)(right_value704=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value703=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2186, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_601=(char*)come_increment_ref_count(((char*)(right_value705=string_clone(real_fun_name_579))));
        right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_602=(struct sType*)come_increment_ref_count(((struct sType*)(right_value706=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_602->mHeap=(_Bool)0;
        right_type_603=(struct sType*)come_increment_ref_count(((struct sType*)(right_value707=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_603->mHeap=(_Bool)0;
        {__list_values27___604[0]=come_increment_ref_count(left_type_602);
__list_values27___604[1]=come_increment_ref_count(right_type_603);
}        param_types_605=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value709=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value708=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2192, "struct list$1sTypeph")))),2,__list_values27___604))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___606[0]=come_increment_ref_count(((char*)(right_value710=__builtin_string("left"))));
__list_values28___606[1]=come_increment_ref_count(((char*)(right_value711=__builtin_string("right"))));
}        param_names_607=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value713=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value712=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2193, "struct list$1charph")))),2,__list_values28___606))));
        right_value710 = come_decrement_ref_count2(right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_608=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value715=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value714=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2194, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_608,((void*)0));
        list$1charph_push_back(param_default_parametors_608,((void*)0));
        header_buf_609=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value717=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value716=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2198, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_609,((char*)(right_value718=make_come_type_name_string(result_type_600,info))));
        right_value718 = come_decrement_ref_count2(right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_609," ");
        buffer_append_str(header_buf_609,real_fun_name_579);
        buffer_append_str(header_buf_609,"(");
        for(        i_610=0;        i_610<list$1sTypeph_length(param_types_605);        i_610++        ){
            param_type_611=list$1sTypephp_operator_load_element(param_types_605,i_610);
            param_name_612=list$1charphp_operator_load_element(param_names_607,i_610);
            buffer_append_str(header_buf_609,((char*)(right_value719=make_come_type_name_string(param_type_611,info))));
            right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_609," ");
            buffer_append_str(header_buf_609,param_name_612);
            if(_if_conditional531=i_610!=list$1sTypeph_length(param_types_605)-1,            _if_conditional531) {
                buffer_append_str(header_buf_609,",");
            }
        }
        buffer_append_str(header_buf_609,")");
        result_type_600->mStatic=(_Bool)0;
        fun_613=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value723=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value720=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2221, "sFun")))),(char*)come_increment_ref_count(name_601),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_605),(struct list$1charph*)come_increment_ref_count(param_names_607),(struct list$1charph*)come_increment_ref_count(param_default_parametors_608),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_599),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value721=buffer_to_string(header_buf_609)))),(char*)come_increment_ref_count(((char*)(right_value722=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_614=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value724=__builtin_string(fun_name))));
        right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional532=fun2_614==((void*)0)||fun2_614->mExternal,        _if_conditional532) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value725=string_clone(name_601)))),(struct sFun*)come_increment_ref_count(fun_613));
            right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_578=fun_613;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2237, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value727=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value726=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2237, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_613),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_616=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value731=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value731) { right_value731 = come_decrement_ref_count2(right_value731, ((struct sNode*)right_value731)->finalize, ((struct sNode*)right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional539=!node_compile(node_616,info),        _if_conditional539) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj172=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_598);
        come_call_finalizer2(buffer_finalize,__dec_obj172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_594;
        info->head=head_597;
        info->sline=sline_595;
        __dec_obj173=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_596);
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_582, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_596 = come_decrement_ref_count2(sname_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_598, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_599, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_600, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_603, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_605, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_607, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_608, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_609, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_577;
    __dec_obj174=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_574);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_575);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj176=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_576);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result209__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value733=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value732=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2257, "struct tuple2$2sFunpcharph")))),equaler_578,(char*)come_increment_ref_count(real_fun_name_579))));
    last_code_574 = come_decrement_ref_count2(last_code_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_575 = come_decrement_ref_count2(last_code2_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_576 = come_decrement_ref_count2(last_code3_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_579 = come_decrement_ref_count2(real_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value732 = come_decrement_ref_count2(right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value733, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result209__;
    last_code_574 = come_decrement_ref_count2(last_code_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_575 = come_decrement_ref_count2(last_code2_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_576 = come_decrement_ref_count2(last_code3_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_579 = come_decrement_ref_count2(real_fun_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result206__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result206__ = self->len;
                    return __result206__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_617;
char* __dec_obj177;
char* last_code2_618;
char* __dec_obj178;
char* last_code3_619;
char* __dec_obj179;
struct sClass* current_stack_frame_struct_620;
struct sFun* equaler_621;
void* right_value734;
char* real_fun_name_622;
void* right_value735;
struct sType* type2_623;
struct sClass* klass_624;
_Bool _if_conditional540;
void* right_value736;
void* right_value737;
struct buffer* source_625;
_Bool _if_conditional541;
char* name_626;
struct list$1tuple2$2charphsTypephph* o2_saved_628;
struct tuple2$2charphsTypeph* it_629;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_630;
struct sType* field_type_631;
_Bool _if_conditional542;
char* p_633;
int sline_634;
char* sname_635;
char* head_636;
struct buffer* source3_637;
struct buffer* __dec_obj180;
void* right_value738;
char* __dec_obj181;
void* right_value739;
struct sBlock* block_638;
void* right_value740;
void* right_value741;
struct sType* result_type_639;
void* right_value742;
char* name_640;
void* right_value743;
struct sType* left_type_641;
void* right_value744;
struct sType* right_type_642;
struct sType* __list_values29___643[2];
void* right_value745;
void* right_value746;
struct list$1sTypeph* param_types_644;
void* right_value747;
void* right_value748;
char* __list_values30___645[2];
void* right_value749;
void* right_value750;
struct list$1charph* param_names_646;
void* right_value751;
void* right_value752;
struct list$1charph* param_default_parametors_647;
void* right_value753;
void* right_value754;
struct buffer* header_buf_648;
void* right_value755;
int i_649;
struct sType* param_type_650;
char* param_name_651;
void* right_value756;
_Bool _if_conditional543;
void* right_value757;
void* right_value758;
void* right_value759;
void* right_value760;
struct sFun* fun_652;
void* right_value761;
struct sFun* fun2_653;
_Bool _if_conditional544;
void* right_value762;
void* right_value763;
void* right_value764;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value768;
struct sNode* node_655;
_Bool _if_conditional551;
struct buffer* __dec_obj184;
char* __dec_obj185;
char* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
void* right_value769;
void* right_value770;
struct tuple2$2sFunpcharph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_617, 0, sizeof(char*));
memset(&last_code2_618, 0, sizeof(char*));
memset(&last_code3_619, 0, sizeof(char*));
memset(&current_stack_frame_struct_620, 0, sizeof(struct sClass*));
memset(&equaler_621, 0, sizeof(struct sFun*));
right_value734 = (void*)0;
memset(&real_fun_name_622, 0, sizeof(char*));
right_value735 = (void*)0;
memset(&type2_623, 0, sizeof(struct sType*));
memset(&klass_624, 0, sizeof(struct sClass*));
right_value736 = (void*)0;
right_value737 = (void*)0;
memset(&source_625, 0, sizeof(struct buffer*));
memset(&name_626, 0, sizeof(char*));
memset(&o2_saved_628, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_629, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_630, 0, sizeof(char*));
memset(&field_type_631, 0, sizeof(struct sType*));
memset(&name_630, 0, sizeof(char*));
memset(&field_type_631, 0, sizeof(struct sType*));
memset(&p_633, 0, sizeof(char*));
memset(&sline_634, 0, sizeof(int));
memset(&sname_635, 0, sizeof(char*));
memset(&head_636, 0, sizeof(char*));
memset(&source3_637, 0, sizeof(struct buffer*));
right_value738 = (void*)0;
right_value739 = (void*)0;
memset(&block_638, 0, sizeof(struct sBlock*));
right_value740 = (void*)0;
right_value741 = (void*)0;
memset(&result_type_639, 0, sizeof(struct sType*));
right_value742 = (void*)0;
memset(&name_640, 0, sizeof(char*));
right_value743 = (void*)0;
memset(&left_type_641, 0, sizeof(struct sType*));
right_value744 = (void*)0;
memset(&right_type_642, 0, sizeof(struct sType*));
right_value745 = (void*)0;
right_value746 = (void*)0;
memset(&param_types_644, 0, sizeof(struct list$1sTypeph*));
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
right_value750 = (void*)0;
memset(&param_names_646, 0, sizeof(struct list$1charph*));
right_value751 = (void*)0;
right_value752 = (void*)0;
memset(&param_default_parametors_647, 0, sizeof(struct list$1charph*));
right_value753 = (void*)0;
right_value754 = (void*)0;
memset(&header_buf_648, 0, sizeof(struct buffer*));
right_value755 = (void*)0;
memset(&i_649, 0, sizeof(int));
memset(&param_type_650, 0, sizeof(struct sType*));
memset(&param_name_651, 0, sizeof(char*));
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value759 = (void*)0;
right_value760 = (void*)0;
memset(&fun_652, 0, sizeof(struct sFun*));
right_value761 = (void*)0;
memset(&fun2_653, 0, sizeof(struct sFun*));
right_value762 = (void*)0;
right_value763 = (void*)0;
right_value764 = (void*)0;
right_value768 = (void*)0;
memset(&node_655, 0, sizeof(struct sNode*));
right_value769 = (void*)0;
right_value770 = (void*)0;
    last_code_617=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj177=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_618=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj178=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_619=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj179=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_620=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_621=((void*)0);
    real_fun_name_622=(char*)come_increment_ref_count(((char*)(right_value734=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value734 = come_decrement_ref_count2(right_value734, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_623=(struct sType*)come_increment_ref_count(((struct sType*)(right_value735=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value735, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_623;
    klass_624=type->mClass;
    if(_if_conditional540=type->mPointerNum>0&&!klass_624->mNumber,    _if_conditional540) {
        source_625=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value737=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value736=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2282, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value736, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_625,123);
        if(klass_624->mProtocol) {
            name_626="_protocol_obj";
            char source2_627[1024];
            memset(&source2_627, 0, sizeof(char)            *(1024)            );
            snprintf(source2_627,1024,"return left.%s.equals(right.%s);\n",name_626,name_626);
            buffer_append_str(source_625,source2_627);
        }
        else {
            klass_624=map$2charphsClassphp_operator_load_element(info->classes,klass_624->mName);
            for(            o2_saved_628=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_624->mFields)),it_629=list$1tuple2$2charphsTypephph_begin((o2_saved_628));            !list$1tuple2$2charphsTypephph_end((o2_saved_628));            it_629=list$1tuple2$2charphsTypephph_next((o2_saved_628))            ){
                multiple_assign_var14=it_629;
                name_630=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_631=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional542=string_operator_equals(type->mClass->mName,field_type_631->mClass->mName)&&type->mPointerNum==field_type_631->mPointerNum&&field_type_631->mHeap,                _if_conditional542) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_632[1024];
                memset(&source2_632, 0, sizeof(char)                *(1024)                );
                snprintf(source2_632,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_630,name_630);
                buffer_append_str(source_625,source2_632);
                name_630 = come_decrement_ref_count2(name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_631, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_628, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_625,"return true;\n");
        buffer_append_char(source_625,125);
        p_633=info->p;
        sline_634=info->sline;
        sname_635=(char*)come_increment_ref_count(info->sname);
        head_636=info->head;
        source3_637=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj180=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_625);
        come_call_finalizer2(buffer_finalize,__dec_obj180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_625->buf;
        info->head=source_625->buf;
        __dec_obj181=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value738=__builtin_string(real_fun_name_622))));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value738 = come_decrement_ref_count2(right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_638=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value739=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_639=(struct sType*)come_increment_ref_count(((struct sType*)(right_value741=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value740=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2328, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_640=(char*)come_increment_ref_count(((char*)(right_value742=string_clone(real_fun_name_622))));
        right_value742 = come_decrement_ref_count2(right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_641=(struct sType*)come_increment_ref_count(((struct sType*)(right_value743=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value743, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_641->mHeap=(_Bool)0;
        right_type_642=(struct sType*)come_increment_ref_count(((struct sType*)(right_value744=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_642->mHeap=(_Bool)0;
        {__list_values29___643[0]=come_increment_ref_count(left_type_641);
__list_values29___643[1]=come_increment_ref_count(right_type_642);
}        param_types_644=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value746=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value745=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2334, "struct list$1sTypeph")))),2,__list_values29___643))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___645[0]=come_increment_ref_count(((char*)(right_value747=__builtin_string("left"))));
__list_values30___645[1]=come_increment_ref_count(((char*)(right_value748=__builtin_string("right"))));
}        param_names_646=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value750=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value749=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2335, "struct list$1charph")))),2,__list_values30___645))));
        right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value748 = come_decrement_ref_count2(right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_647=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value752=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value751=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2336, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value752, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_647,((void*)0));
        list$1charph_push_back(param_default_parametors_647,((void*)0));
        header_buf_648=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value754=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value753=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2340, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value753, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_648,((char*)(right_value755=make_come_type_name_string(result_type_639,info))));
        right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_648," ");
        buffer_append_str(header_buf_648,real_fun_name_622);
        buffer_append_str(header_buf_648,"(");
        for(        i_649=0;        i_649<list$1sTypeph_length(param_types_644);        i_649++        ){
            param_type_650=list$1sTypephp_operator_load_element(param_types_644,i_649);
            param_name_651=list$1charphp_operator_load_element(param_names_646,i_649);
            buffer_append_str(header_buf_648,((char*)(right_value756=make_come_type_name_string(param_type_650,info))));
            right_value756 = come_decrement_ref_count2(right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_648," ");
            buffer_append_str(header_buf_648,param_name_651);
            if(_if_conditional543=i_649!=list$1sTypeph_length(param_types_644)-1,            _if_conditional543) {
                buffer_append_str(header_buf_648,",");
            }
        }
        buffer_append_str(header_buf_648,")");
        result_type_639->mStatic=(_Bool)0;
        fun_652=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value760=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value757=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2363, "sFun")))),(char*)come_increment_ref_count(name_640),(struct sType*)come_increment_ref_count(result_type_639),(struct list$1sTypeph*)come_increment_ref_count(param_types_644),(struct list$1charph*)come_increment_ref_count(param_names_646),(struct list$1charph*)come_increment_ref_count(param_default_parametors_647),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_638),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value758=buffer_to_string(header_buf_648)))),(char*)come_increment_ref_count(((char*)(right_value759=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value758 = come_decrement_ref_count2(right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value760, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_653=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value761=__builtin_string(fun_name))));
        right_value761 = come_decrement_ref_count2(right_value761, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional544=fun2_653==((void*)0)||fun2_653->mExternal,        _if_conditional544) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value762=string_clone(name_640)))),(struct sFun*)come_increment_ref_count(fun_652));
            right_value762 = come_decrement_ref_count2(right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_621=fun_652;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2379, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value764=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value763=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2379, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_652),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_655=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value768=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value763, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value768) { right_value768 = come_decrement_ref_count2(right_value768, ((struct sNode*)right_value768)->finalize, ((struct sNode*)right_value768)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional551=!node_compile(node_655,info),        _if_conditional551) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj184=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_637);
        come_call_finalizer2(buffer_finalize,__dec_obj184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_633;
        info->head=head_636;
        info->sline=sline_634;
        __dec_obj185=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_635);
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_625, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_635 = come_decrement_ref_count2(sname_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_637, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_639, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_640 = come_decrement_ref_count2(name_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_641, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_642, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_644, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_646, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_647, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_648, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_652, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_655) { node_655 = come_decrement_ref_count2(node_655, ((struct sNode*)node_655)->finalize, ((struct sNode*)node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_620;
    __dec_obj186=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_617);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj187=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_618);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_619);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result212__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value770=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value769=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2399, "struct tuple2$2sFunpcharph")))),equaler_621,(char*)come_increment_ref_count(real_fun_name_622))));
    last_code_617 = come_decrement_ref_count2(last_code_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_618 = come_decrement_ref_count2(last_code2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_619 = come_decrement_ref_count2(last_code3_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_622 = come_decrement_ref_count2(real_fun_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value769 = come_decrement_ref_count2(right_value769, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value770, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result212__;
    last_code_617 = come_decrement_ref_count2(last_code_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_618 = come_decrement_ref_count2(last_code2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_619 = come_decrement_ref_count2(last_code3_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_622 = come_decrement_ref_count2(real_fun_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_656;
char* __dec_obj189;
char* last_code2_657;
char* __dec_obj190;
char* last_code3_658;
char* __dec_obj191;
struct sClass* current_stack_frame_struct_659;
struct sFun* cloner_660;
void* right_value771;
char* real_fun_name_661;
void* right_value772;
struct sType* type2_662;
struct sClass* klass_663;
_Bool _if_conditional552;
void* right_value773;
void* right_value774;
struct buffer* source_664;
void* right_value775;
void* right_value776;
_Bool _if_conditional553;
char* name_665;
struct list$1tuple2$2charphsTypephph* o2_saved_667;
struct tuple2$2charphsTypeph* it_668;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_669;
struct sType* field_type_670;
_Bool _if_conditional554;
_Bool _if_conditional555;
_Bool _if_conditional556;
struct list$1tuple2$2charphsTypephph* o2_saved_673;
struct tuple2$2charphsTypeph* it_674;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_675;
struct sType* field_type_676;
_Bool _if_conditional557;
_Bool _if_conditional558;
_Bool _if_conditional559;
void* right_value777;
char* p_680;
int sline_681;
char* sname_682;
struct buffer* source3_683;
char* head_684;
struct buffer* __dec_obj192;
void* right_value778;
char* __dec_obj193;
void* right_value779;
struct sBlock* block_685;
void* right_value780;
struct sType* result_type_686;
void* right_value781;
char* name_687;
void* right_value782;
struct sType* self_type_688;
struct sType* __list_values31___689[1];
void* right_value783;
void* right_value784;
struct list$1sTypeph* param_types_690;
void* right_value785;
char* __list_values32___691[1];
void* right_value786;
void* right_value787;
struct list$1charph* param_names_692;
void* right_value788;
void* right_value789;
struct list$1charph* param_default_parametors_693;
void* right_value790;
void* right_value791;
struct buffer* header_buf_694;
void* right_value792;
int i_695;
struct sType* param_type_696;
char* param_name_697;
void* right_value793;
_Bool _if_conditional560;
void* right_value794;
void* right_value795;
void* right_value796;
void* right_value797;
struct sFun* fun_698;
void* right_value798;
struct sFun* fun2_699;
_Bool _if_conditional561;
void* right_value799;
void* right_value800;
void* right_value801;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value805;
struct sNode* node_701;
_Bool _if_conditional568;
char* __dec_obj196;
struct buffer* __dec_obj197;
char* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
void* right_value806;
void* right_value807;
struct tuple2$2sFunpcharph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_656, 0, sizeof(char*));
memset(&last_code2_657, 0, sizeof(char*));
memset(&last_code3_658, 0, sizeof(char*));
memset(&current_stack_frame_struct_659, 0, sizeof(struct sClass*));
memset(&cloner_660, 0, sizeof(struct sFun*));
right_value771 = (void*)0;
memset(&real_fun_name_661, 0, sizeof(char*));
right_value772 = (void*)0;
memset(&type2_662, 0, sizeof(struct sType*));
memset(&klass_663, 0, sizeof(struct sClass*));
right_value773 = (void*)0;
right_value774 = (void*)0;
memset(&source_664, 0, sizeof(struct buffer*));
right_value775 = (void*)0;
right_value776 = (void*)0;
memset(&name_665, 0, sizeof(char*));
memset(&o2_saved_667, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_668, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_669, 0, sizeof(char*));
memset(&field_type_670, 0, sizeof(struct sType*));
memset(&name_669, 0, sizeof(char*));
memset(&field_type_670, 0, sizeof(struct sType*));
memset(&o2_saved_673, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_674, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
memset(&name_675, 0, sizeof(char*));
memset(&field_type_676, 0, sizeof(struct sType*));
right_value777 = (void*)0;
memset(&p_680, 0, sizeof(char*));
memset(&sline_681, 0, sizeof(int));
memset(&sname_682, 0, sizeof(char*));
memset(&source3_683, 0, sizeof(struct buffer*));
memset(&head_684, 0, sizeof(char*));
right_value778 = (void*)0;
right_value779 = (void*)0;
memset(&block_685, 0, sizeof(struct sBlock*));
right_value780 = (void*)0;
memset(&result_type_686, 0, sizeof(struct sType*));
right_value781 = (void*)0;
memset(&name_687, 0, sizeof(char*));
right_value782 = (void*)0;
memset(&self_type_688, 0, sizeof(struct sType*));
right_value783 = (void*)0;
right_value784 = (void*)0;
memset(&param_types_690, 0, sizeof(struct list$1sTypeph*));
right_value785 = (void*)0;
right_value786 = (void*)0;
right_value787 = (void*)0;
memset(&param_names_692, 0, sizeof(struct list$1charph*));
right_value788 = (void*)0;
right_value789 = (void*)0;
memset(&param_default_parametors_693, 0, sizeof(struct list$1charph*));
right_value790 = (void*)0;
right_value791 = (void*)0;
memset(&header_buf_694, 0, sizeof(struct buffer*));
right_value792 = (void*)0;
memset(&i_695, 0, sizeof(int));
memset(&param_type_696, 0, sizeof(struct sType*));
memset(&param_name_697, 0, sizeof(char*));
right_value793 = (void*)0;
right_value794 = (void*)0;
right_value795 = (void*)0;
right_value796 = (void*)0;
right_value797 = (void*)0;
memset(&fun_698, 0, sizeof(struct sFun*));
right_value798 = (void*)0;
memset(&fun2_699, 0, sizeof(struct sFun*));
right_value799 = (void*)0;
right_value800 = (void*)0;
right_value801 = (void*)0;
right_value805 = (void*)0;
memset(&node_701, 0, sizeof(struct sNode*));
right_value806 = (void*)0;
right_value807 = (void*)0;
    last_code_656=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj189=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_657=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj190=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_658=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj191=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_659=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_660=((void*)0);
    real_fun_name_661=(char*)come_increment_ref_count(((char*)(right_value771=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value771 = come_decrement_ref_count2(right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_662=(struct sType*)come_increment_ref_count(((struct sType*)(right_value772=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_662;
    klass_663=type->mClass;
    if(_if_conditional552=type->mPointerNum>0&&!klass_663->mNumber,    _if_conditional552) {
        source_664=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value774=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value773=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2424, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value773, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value774, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_664,"{\n");
        buffer_append_str(source_664,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_664,((char*)(right_value776=xsprintf("var result = new %s;\n",((char*)(right_value775=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value775 = come_decrement_ref_count2(right_value775, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value776 = come_decrement_ref_count2(right_value776, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_663->mProtocol) {
            name_665="_protocol_obj";
            char source2_666[1024];
            memset(&source2_666, 0, sizeof(char)            *(1024)            );
            snprintf(source2_666,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_664,source2_666);
            klass_663=map$2charphsClassphp_operator_load_element(info->classes,klass_663->mName);
            for(            o2_saved_667=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_663->mFields)),it_668=list$1tuple2$2charphsTypephph_begin((o2_saved_667));            !list$1tuple2$2charphsTypephph_end((o2_saved_667));            it_668=list$1tuple2$2charphsTypephph_next((o2_saved_667))            ){
                multiple_assign_var15=it_668;
                name_669=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_670=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional554=string_operator_equals(type->mClass->mName,field_type_670->mClass->mName)&&type->mPointerNum==field_type_670->mPointerNum&&field_type_670->mHeap,                _if_conditional554) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional555=string_operator_equals(name_669,"_protocol_obj"),                _if_conditional555) {
                }
                else {
                    if(_if_conditional556=list$1sNodeph_length(field_type_670->mArrayNum)>0,                    _if_conditional556) {
                        char source2_671[1024];
                        memset(&source2_671, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_671,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_669,name_669,name_669);
                        buffer_append_str(source_664,source2_671);
                    }
                    else {
                        char source2_672[1024];
                        memset(&source2_672, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_672,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_669,name_669);
                        buffer_append_str(source_664,source2_672);
                    }
                }
                name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_670, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_667, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_663=map$2charphsClassphp_operator_load_element(info->classes,klass_663->mName);
            for(            o2_saved_673=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_663->mFields)),it_674=list$1tuple2$2charphsTypephph_begin((o2_saved_673));            !list$1tuple2$2charphsTypephph_end((o2_saved_673));            it_674=list$1tuple2$2charphsTypephph_next((o2_saved_673))            ){
                multiple_assign_var16=it_674;
                name_675=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_676=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional557=string_operator_equals(type->mClass->mName,field_type_676->mClass->mName)&&type->mPointerNum==field_type_676->mPointerNum&&field_type_676->mHeap,                _if_conditional557) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_676->mHeap) {
                    char source2_677[1024];
                    memset(&source2_677, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_677,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_675,name_675,name_675);
                    buffer_append_str(source_664,source2_677);
                }
                else {
                    if(_if_conditional559=list$1sNodeph_length(field_type_676->mArrayNum)>0,                    _if_conditional559) {
                        char source2_678[1024];
                        memset(&source2_678, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_678,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_675,name_675,name_675);
                        buffer_append_str(source_664,source2_678);
                    }
                    else {
                        char source2_679[1024];
                        memset(&source2_679, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_679,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_675,name_675);
                        buffer_append_str(source_664,source2_679);
                    }
                }
                name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_676, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_673, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_664,((char*)(right_value777=xsprintf("return result;"))));
        right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_664,125);
        p_680=info->p;
        sline_681=info->sline;
        sname_682=(char*)come_increment_ref_count(info->sname);
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        head_684=info->head;
        __dec_obj192=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_664);
        come_call_finalizer2(buffer_finalize,__dec_obj192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj193=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value778=__builtin_string(real_fun_name_661))));
        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value778 = come_decrement_ref_count2(right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_685=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value779=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value779, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_686=(struct sType*)come_increment_ref_count(((struct sType*)(right_value780=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_687=(char*)come_increment_ref_count(((char*)(right_value781=string_clone(real_fun_name_661))));
        right_value781 = come_decrement_ref_count2(right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_688=(struct sType*)come_increment_ref_count(((struct sType*)(right_value782=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_688->mHeap=(_Bool)0;
        {__list_values31___689[0]=come_increment_ref_count(self_type_688);
}        param_types_690=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value784=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value783=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2518, "struct list$1sTypeph")))),1,__list_values31___689))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value784, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values32___691[0]=come_increment_ref_count(((char*)(right_value785=__builtin_string("self"))));
}        param_names_692=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value787=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value786=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2519, "struct list$1charph")))),1,__list_values32___691))));
        right_value785 = come_decrement_ref_count2(right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value786, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_693=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value789=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value788=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2520, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value788, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value789, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_693,((void*)0));
        header_buf_694=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value791=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value790=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2523, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value791, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694,((char*)(right_value792=make_come_type_name_string(result_type_686,info))));
        right_value792 = come_decrement_ref_count2(right_value792, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694," ");
        buffer_append_str(header_buf_694,real_fun_name_661);
        buffer_append_str(header_buf_694,"(");
        for(        i_695=0;        i_695<list$1sTypeph_length(param_types_690);        i_695++        ){
            param_type_696=list$1sTypephp_operator_load_element(param_types_690,i_695);
            param_name_697=list$1charphp_operator_load_element(param_names_692,i_695);
            buffer_append_str(header_buf_694,((char*)(right_value793=make_come_type_name_string(param_type_696,info))));
            right_value793 = come_decrement_ref_count2(right_value793, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_694," ");
            buffer_append_str(header_buf_694,param_name_697);
            if(_if_conditional560=i_695!=list$1sTypeph_length(param_types_690)-1,            _if_conditional560) {
                buffer_append_str(header_buf_694,",");
            }
        }
        buffer_append_str(header_buf_694,")");
        result_type_686->mStatic=(_Bool)0;
        fun_698=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value797=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value794=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2546, "sFun")))),(char*)come_increment_ref_count(name_687),(struct sType*)come_increment_ref_count(result_type_686),(struct list$1sTypeph*)come_increment_ref_count(param_types_690),(struct list$1charph*)come_increment_ref_count(param_names_692),(struct list$1charph*)come_increment_ref_count(param_default_parametors_693),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_685),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value795=buffer_to_string(header_buf_694)))),(char*)come_increment_ref_count(((char*)(right_value796=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value794, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value795 = come_decrement_ref_count2(right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value796 = come_decrement_ref_count2(right_value796, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value797, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_698->mCloner=(_Bool)1;
        fun2_699=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value798=__builtin_string(fun_name))));
        right_value798 = come_decrement_ref_count2(right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional561=fun2_699==((void*)0)||fun2_699->mExternal,        _if_conditional561) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value799=string_clone(name_687)))),(struct sFun*)come_increment_ref_count(fun_698));
            right_value799 = come_decrement_ref_count2(right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_660=fun_698;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2563, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value801=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value800=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2563, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_698),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_701=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value805=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value800, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value801, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value805) { right_value805 = come_decrement_ref_count2(right_value805, ((struct sNode*)right_value805)->finalize, ((struct sNode*)right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional568=!node_compile(node_701,info),        _if_conditional568) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj196=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_682);
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_681;
        __dec_obj197=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        come_call_finalizer2(buffer_finalize,__dec_obj197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_680;
        info->head=head_684;
        info->sline=sline_681;
        come_call_finalizer2(buffer_finalize,source_664, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_682 = come_decrement_ref_count2(sname_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_683, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_685, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_686, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_687 = come_decrement_ref_count2(name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_688, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_690, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_692, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_693, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_694, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_698, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_701) { node_701 = come_decrement_ref_count2(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_659;
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_656);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_657);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj200=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_658);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result215__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value807=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value806=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2585, "struct tuple2$2sFunpcharph")))),cloner_660,(char*)come_increment_ref_count(real_fun_name_661))));
    last_code_656 = come_decrement_ref_count2(last_code_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_657 = come_decrement_ref_count2(last_code2_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_658 = come_decrement_ref_count2(last_code3_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_662, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value806 = come_decrement_ref_count2(right_value806, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value807, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result215__;
    last_code_656 = come_decrement_ref_count2(last_code_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_657 = come_decrement_ref_count2(last_code2_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_658 = come_decrement_ref_count2(last_code3_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_661 = come_decrement_ref_count2(real_fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_662, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional562;
_Bool _if_conditional563;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional562=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional562) {
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional563=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional563) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional564;
struct sFunNode* __result213__;
void* right_value802;
struct sFunNode* result_700;
_Bool _if_conditional565;
void* right_value803;
struct sFun* __dec_obj194;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value804;
char* __dec_obj195;
struct sFunNode* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value802 = (void*)0;
memset(&result_700, 0, sizeof(struct sFunNode*));
right_value803 = (void*)0;
right_value804 = (void*)0;
            if(_if_conditional564=self==(void*)0,            _if_conditional564) {
                __result213__ = __result_obj__ = (void*)0;
                return __result213__;
            }
            result_700=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value802=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value802, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional565=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional565) {
                __dec_obj194=result_700->mFun;
                result_700->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value803=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value803, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional566=self!=((void*)0),            _if_conditional566) {
                result_700->sline=self->sline;
            }
            if(_if_conditional567=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional567) {
                __dec_obj195=result_700->sname;
                result_700->sname=(char*)come_increment_ref_count(((char*)(right_value804=string_clone(self->sname))));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value804 = come_decrement_ref_count2(right_value804, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result214__ = __result_obj__ = result_700;
            come_call_finalizer2(sFunNode_finalize,result_700, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result214__;
            come_call_finalizer2(sFunNode_finalize,result_700, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

