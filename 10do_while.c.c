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
struct sDoWhileNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
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

struct sDoWhileNode* sDoWhileNode_initialize(struct sDoWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sDoWhileNode_terminated();

char* sDoWhileNode_kind();

_Bool sDoWhileNode_compile(struct sDoWhileNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sDoWhileNode_sline(struct sDoWhileNode* self, struct sInfo* info);

char* sDoWhileNode_sname(struct sDoWhileNode* self, struct sInfo* info);

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);

static void sDoWhileNode_finalize(struct sDoWhileNode* self);
static struct sDoWhileNode* sDoWhileNode_clone(struct sDoWhileNode* self);
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




struct sDoWhileNode* sDoWhileNode_initialize(struct sDoWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
void* right_value15;
struct sNode* __dec_obj7;
void* right_value42;
struct sBlock* __dec_obj16;
struct sDoWhileNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value15 = (void*)0;
right_value42 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value15=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, ((struct sNode*)right_value15)->finalize, ((struct sNode*)right_value15)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj16=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value42=sBlock_clone(block))));
    come_call_finalizer2(sBlock_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result48__ = __result_obj__ = self;
    come_call_finalizer2(sDoWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result48__;
    come_call_finalizer2(sDoWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result10__;
void* right_value14;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result10__ = __result_obj__ = (void*)0;
            return __result10__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value14) { right_value14 = come_decrement_ref_count2(right_value14, ((struct sNode*)right_value14)->finalize, ((struct sNode*)right_value14)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            result_5->finalize=self->finalize;
        }
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            result_5->clone=self->clone;
        }
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            result_5->compile=self->compile;
        }
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            result_5->sline=self->sline;
        }
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            result_5->sname=self->sname;
        }
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            result_5->terminated=self->terminated;
        }
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            result_5->kind=self->kind;
        }
        __result11__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result11__;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional14;
struct sBlock* __result12__;
void* right_value16;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value23;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value41;
struct sVarTable* __dec_obj15;
struct sBlock* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_6, 0, sizeof(struct sBlock*));
right_value23 = (void*)0;
right_value41 = (void*)0;
        if(_if_conditional14=self==(void*)0,        _if_conditional14) {
            __result12__ = __result_obj__ = (void*)0;
            return __result12__;
        }
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value16=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer2(sBlock_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional18=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional18) {
            __dec_obj11=result_6->mNodes;
            result_6->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional22=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional22) {
            __dec_obj15=result_6->mVarTable;
            result_6->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value41=sVarTable_clone(self->mVarTable))));
            come_call_finalizer2(sVarTable_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sVarTable_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result47__ = __result_obj__ = result_6;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional15=self!=((void*)0)&&self->mNodes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mVarTable!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=self->head;
                    while(_while_condtional1=it_7!=((void*)0),                    _while_condtional1) {
                        prev_it_8=it_7;
                        it_7=it_7->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
struct list$1sNodeph* __result13__;
void* right_value17;
void* right_value18;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value22;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
right_value22 = (void*)0;
                if(_if_conditional19=self==((void*)0),                _if_conditional19) {
                    __result13__ = __result_obj__ = ((void*)0);
                    return __result13__;
                }
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value18=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value17=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_10=self->head;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    list$1sNodeph_add(result_9,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value22=sNode_clone(it_10->item)))));
                    if(right_value22) { right_value22 = come_decrement_ref_count2(right_value22, ((struct sNode*)right_value22)->finalize, ((struct sNode*)right_value22)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_10=it_10->next;
                }
                __result16__ = __result_obj__ = result_9;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result16__;
                come_call_finalizer2(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result14__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result14__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional20;
void* right_value19;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value20;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value21;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
right_value20 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
right_value21 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=self->len==0,                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_11->prev=((void*)0);
                            litem_11->next=((void*)0);
                            __dec_obj8=litem_11->item;
                            litem_11->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count2(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_11;
                            self->head=litem_11;
                        }
                        else {
                            if(_if_conditional21=self->len==1,                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value20=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_12->prev=self->head;
                                litem_12->next=((void*)0);
                                __dec_obj9=litem_12->item;
                                litem_12->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_12;
                                self->head->next=litem_12;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value21=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_13->prev=self->tail;
                                litem_13->next=((void*)0);
                                __dec_obj10=litem_13->item;
                                litem_13->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count2(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_13;
                                self->tail=litem_13;
                            }
                        }
                        self->len++;
                        __result15__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result15__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional23;
struct sVarTable* __result17__;
void* right_value24;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value40;
struct map$2charphsVarph* __dec_obj14;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sVarTable* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&result_14, 0, sizeof(struct sVarTable*));
right_value40 = (void*)0;
                if(_if_conditional23=self==(void*)0,                _if_conditional23) {
                    __result17__ = __result_obj__ = (void*)0;
                    return __result17__;
                }
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value24=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer2(sVarTable_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional24=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional24) {
                    __dec_obj14=result_14->mVars;
                    result_14->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value40=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphsVarphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_14->mGlobal=self->mGlobal;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_14->mParent=self->mParent;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_14->mID=self->mID;
                }
                __result46__ = __result_obj__ = result_14;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct map$2charphsVarph* __result18__;
void* right_value25;
void* right_value31;
struct map$2charphsVarph* result_24;
void* right_value32;
void* right_value33;
struct list$1charp* __dec_obj13;
char* it_27;
struct sVar* default_value_30;
struct sVar* it2_33;
struct map$2charphsVarph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value31 = (void*)0;
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&it2_33, 0, sizeof(struct sVar*));
                        if(_if_conditional25=self==((void*)0),                        _if_conditional25) {
                            __result18__ = __result_obj__ = ((void*)0);
                            return __result18__;
                        }
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value31=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value25=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang2.h", 1178, "map$2charphsVarph"))))))));
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(map$2charphsVarphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj13=result_24->key_list;
                        result_24->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value33=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value32=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1180, "list$1charp"))))))));
                        come_call_finalizer2(list$1charp_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charpp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charpp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        for(                        it_27=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_27=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            it2_33=map$2charphsVarph_at(self,it_27,default_value_30);
                            map$2charphsVarph_insert2(result_24,it_27,it2_33);
                        }
                        __result45__ = __result_obj__ = result_24;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result45__;
                        come_call_finalizer2(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value26;
void* right_value27;
void* right_value28;
int i_19;
void* right_value29;
void* right_value30;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_19, 0, sizeof(int));
right_value29 = (void*)0;
right_value30 = (void*)0;
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value26=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1084, "char*%"))));
                            right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value27=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "/usr/local/include/comelang2.h", 1085, "sVar*%"))));
                            come_call_finalizer2(sVar_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value28=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1086, "bool"))));
                            right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_19=0;                            i_19<1024;                            i_19++                            ){
                                self->item_existance[i_19]=(_Bool)0;
                            }
                            self->size=1024;
                            self->len=0;
                            __dec_obj12=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value30=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value29=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1096, "list$1charp"))))))));
                            come_call_finalizer2(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charpp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charpp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result20__ = __result_obj__ = self;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result20__;
                            come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional26) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional27) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional28) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional45=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional45) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional29=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional29) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional31) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional33) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional34) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional35) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional36) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional37) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional38=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional38) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional40) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional41) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional42) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional43=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional43) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional44=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional44) {
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=self->head;
                                                while(_while_condtional3=it_15!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    it_15=it_15->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional30) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional32) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=self->head;
                                                while(_while_condtional4=it_17!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    it_17=it_17->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional39=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional39) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result19__ = __result_obj__ = self;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result19__;
                                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=self->head;
                                    while(_while_condtional5=it_20!=((void*)0),                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        it_20=it_20->next;
                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
int i_22;
_Bool _if_conditional46;
_Bool _if_conditional47;
int i_23;
_Bool _if_conditional48;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(                                i_22=0;                                i_22<self->size;                                i_22++                                ){
                                    if(_if_conditional46=self->item_existance[i_22],                                    _if_conditional46) {
                                        if(_if_conditional47=1,                                        _if_conditional47) {
                                            come_call_finalizer2(sVar_finalize,self->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_23=0;                                i_23<self->size;                                i_23++                                ){
                                    if(_if_conditional48=self->item_existance[i_23],                                    _if_conditional48) {
                                        if(_if_conditional49=1,                                        _if_conditional49) {
                                            self->keys[i_23] = come_decrement_ref_count2(self->keys[i_23], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional50;
char* result_25;
char* __result21__;
_Bool _if_conditional51;
char* __result22__;
char* result_26;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional50=self==((void*)0),                            _if_conditional50) {
                                memset(&result_25,0,sizeof(char*));
                                __result21__ = __result_obj__ = result_25;
                                return __result21__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result22__ = __result_obj__ = self->key_list->it->item;
                                return __result22__;
                            }
                            memset(&result_26,0,sizeof(char*));
                            __result23__ = __result_obj__ = result_26;
                            return __result23__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result24__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result24__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional52;
char* result_28;
char* __result25__;
_Bool _if_conditional53;
char* __result26__;
char* result_29;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional52=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional52) {
                                memset(&result_28,0,sizeof(char*));
                                __result25__ = __result_obj__ = result_28;
                                return __result25__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result26__ = __result_obj__ = self->key_list->it->item;
                                return __result26__;
                            }
                            memset(&result_29,0,sizeof(char*));
                            __result27__ = __result_obj__ = result_29;
                            return __result27__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sVar* __result28__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result29__;
struct sVar* __result30__;
struct sVar* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
                                hash_31=string_get_hash_key(((char*)key))%self->size;
                                it_32=hash_31;
                                while(_while_condtional6=(_Bool)1,                                _while_condtional6) {
                                    if(_if_conditional54=self->item_existance[it_32],                                    _if_conditional54) {
                                        if(_if_conditional55=string_equals(self->keys[it_32],key),                                        _if_conditional55) {
                                            __result28__ = __result_obj__ = self->items[it_32];
                                            come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result28__;
                                        }
                                        it_32++;
                                        if(_if_conditional56=it_32>=self->size,                                        _if_conditional56) {
                                            it_32=0;
                                        }
                                        else {
                                            if(_if_conditional57=it_32==hash_31,                                            _if_conditional57) {
                                                __result29__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result29__;
                                            }
                                        }
                                    }
                                    else {
                                        __result30__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result30__;
                                    }
                                }
                                __result31__ = __result_obj__ = default_value;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result31__;
                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional58;
unsigned int hash_45;
int it_46;
_Bool _while_condtional8;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool same_key_exist_63;
char* it2_66;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_45, 0, sizeof(unsigned int));
memset(&it_46, 0, sizeof(int));
memset(&same_key_exist_63, 0, sizeof(_Bool));
memset(&it2_66, 0, sizeof(char*));
                                if(_if_conditional58=self->len*2>=self->size,                                _if_conditional58) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_45=string_get_hash_key(key)%self->size;
                                it_46=hash_45;
                                while(_while_condtional8=(_Bool)1,                                _while_condtional8) {
                                    if(_if_conditional62=self->item_existance[it_46],                                    _if_conditional62) {
                                        if(_if_conditional63=string_equals(self->keys[it_46],key),                                        _if_conditional63) {
                                            if(_if_conditional64=1,                                            _if_conditional64) {
                                                self->keys[it_46] = come_decrement_ref_count2(self->keys[it_46], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_46]);
                                                self->keys[it_46]=key;
                                            }
                                            if(_if_conditional84=1,                                            _if_conditional84) {
                                                come_call_finalizer2(sVar_finalize,self->items[it_46], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                self->items[it_46]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_46]=item;
                                            }
                                            break;
                                        }
                                        it_46++;
                                        if(_if_conditional85=it_46>=self->size,                                        _if_conditional85) {
                                            it_46=0;
                                        }
                                        else {
                                            if(_if_conditional86=it_46==hash_45,                                            _if_conditional86) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_46]=(_Bool)1;
                                        if(_if_conditional87=1,                                        _if_conditional87) {
                                            self->keys[it_46]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_46]=key;
                                        }
                                        if(_if_conditional88=1,                                        _if_conditional88) {
                                            self->items[it_46]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_46]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_63=(_Bool)0;
                                for(                                it2_66=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_66=list$1charp_next(self->key_list)                                ){
                                    if(_if_conditional93=string_equals(it2_66,key),                                    _if_conditional93) {
                                        same_key_exist_63=(_Bool)1;
                                    }
                                }
                                if(_if_conditional94=!same_key_exist_63,                                _if_conditional94) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result44__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result44__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_34;
void* right_value34;
char** keys_35;
void* right_value35;
struct sVar** items_36;
void* right_value36;
_Bool* item_existance_37;
int len_38;
char* it_39;
struct sVar* default_value_40;
struct sVar* it2_41;
unsigned int hash_42;
int n_43;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_34, 0, sizeof(int));
right_value34 = (void*)0;
memset(&keys_35, 0, sizeof(char**));
right_value35 = (void*)0;
memset(&items_36, 0, sizeof(struct sVar**));
right_value36 = (void*)0;
memset(&item_existance_37, 0, sizeof(_Bool*));
memset(&len_38, 0, sizeof(int));
memset(&it_39, 0, sizeof(char*));
memset(&default_value_40, 0, sizeof(struct sVar*));
memset(&it2_41, 0, sizeof(struct sVar*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&n_43, 0, sizeof(int));
memset(&default_value_44, 0, sizeof(struct sVar*));
                                        size_34=self->size*10;
                                        keys_35=(char**)come_increment_ref_count(((char**)(right_value34=(char**)come_calloc(1, sizeof(char*)*(1*(size_34)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                                        right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_36=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value35=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_34)), "/usr/local/include/comelang2.h", 1336, "sVar*%"))));
                                        come_call_finalizer2(sVar_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        item_existance_37=(_Bool*)come_increment_ref_count(((_Bool*)(right_value36=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_34)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                                        right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_38=0;
                                        for(                                        it_39=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_39=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_40,0,sizeof(struct sVar*));
                                            it2_41=map$2charphsVarph_at(self,it_39,default_value_40);
                                            hash_42=string_get_hash_key(it_39)%size_34;
                                            n_43=hash_42;
                                            while(_while_condtional7=(_Bool)1,                                            _while_condtional7) {
                                                if(_if_conditional59=item_existance_37[n_43],                                                _if_conditional59) {
                                                    n_43++;
                                                    if(_if_conditional60=n_43>=size_34,                                                    _if_conditional60) {
                                                        n_43=0;
                                                    }
                                                    else {
                                                        if(_if_conditional61=n_43==hash_42,                                                        _if_conditional61) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_37[n_43]=(_Bool)1;
                                                    keys_35[n_43]=it_39;
                                                    items_36[n_43]=map$2charphsVarph_at(self,it_39,default_value_44);
                                                    len_38++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_35;
                                        self->items=items_36;
                                        self->item_existance=item_existance_37;
                                        self->size=size_34;
                                        self->len=len_38;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_47;
struct list_item$1charp* it_48;
_Bool _while_condtional9;
_Bool _if_conditional65;
struct list$1charp* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_47, 0, sizeof(int));
memset(&it_48, 0, sizeof(struct list_item$1charp*));
                                                    it2_47=0;
                                                    it_48=self->head;
                                                    while(_while_condtional9=it_48!=((void*)0),                                                    _while_condtional9) {
                                                        if(_if_conditional65=string_equals(it_48->item,item),                                                        _if_conditional65) {
                                                            list$1charp_delete(self,it2_47,it2_47+1);
                                                            break;
                                                        }
                                                        it2_47++;
                                                        it_48=it_48->next;
                                                    }
                                                    __result35__ = __result_obj__ = self;
                                                    return __result35__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
int tmp_49;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1charp* __result32__;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list_item$1charp* it_52;
int i_53;
_Bool _while_condtional11;
_Bool _if_conditional74;
struct list_item$1charp* prev_it_54;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_55;
int i_56;
_Bool _while_condtional12;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* prev_it_57;
struct list_item$1charp* it_58;
struct list_item$1charp* head_prev_it_59;
struct list_item$1charp* tail_it_60;
int i_61;
_Bool _while_condtional13;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_62;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_49, 0, sizeof(int));
memset(&it_52, 0, sizeof(struct list_item$1charp*));
memset(&i_53, 0, sizeof(int));
memset(&prev_it_54, 0, sizeof(struct list_item$1charp*));
memset(&it_55, 0, sizeof(struct list_item$1charp*));
memset(&i_56, 0, sizeof(int));
memset(&prev_it_57, 0, sizeof(struct list_item$1charp*));
memset(&it_58, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_59, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_60, 0, sizeof(struct list_item$1charp*));
memset(&i_61, 0, sizeof(int));
memset(&prev_it_62, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional66=head<0,                                                                _if_conditional66) {
                                                                    head+=self->len;
                                                                }
                                                                if(_if_conditional67=tail<0,                                                                _if_conditional67) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(_if_conditional68=head>tail,                                                                _if_conditional68) {
                                                                    tmp_49=tail;
                                                                    tail=head;
                                                                    head=tmp_49;
                                                                }
                                                                if(_if_conditional69=head<0,                                                                _if_conditional69) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional70=tail>self->len,                                                                _if_conditional70) {
                                                                    tail=self->len;
                                                                }
                                                                if(_if_conditional71=head==tail,                                                                _if_conditional71) {
                                                                    __result32__ = __result_obj__ = self;
                                                                    return __result32__;
                                                                }
                                                                if(_if_conditional72=head==0&&tail==self->len,                                                                _if_conditional72) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(_if_conditional73=head==0,                                                                    _if_conditional73) {
                                                                        it_52=self->head;
                                                                        i_53=0;
                                                                        while(_while_condtional11=it_52!=((void*)0),                                                                        _while_condtional11) {
                                                                            if(_if_conditional74=i_53<tail,                                                                            _if_conditional74) {
                                                                                prev_it_54=it_52;
                                                                                it_52=it_52->next;
                                                                                i_53++;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional75=i_53==tail,                                                                                _if_conditional75) {
                                                                                    self->head=it_52;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_52=it_52->next;
                                                                                    i_53++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional76=tail==self->len,                                                                        _if_conditional76) {
                                                                            it_55=self->head;
                                                                            i_56=0;
                                                                            while(_while_condtional12=it_55!=((void*)0),                                                                            _while_condtional12) {
                                                                                if(_if_conditional77=i_56==head,                                                                                _if_conditional77) {
                                                                                    self->tail=it_55->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional78=i_56>=head,                                                                                _if_conditional78) {
                                                                                    prev_it_57=it_55;
                                                                                    it_55=it_55->next;
                                                                                    i_56++;
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_55=it_55->next;
                                                                                    i_56++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_58=self->head;
                                                                            head_prev_it_59=((void*)0);
                                                                            tail_it_60=((void*)0);
                                                                            i_61=0;
                                                                            while(_while_condtional13=it_58!=((void*)0),                                                                            _while_condtional13) {
                                                                                if(_if_conditional79=i_61==head,                                                                                _if_conditional79) {
                                                                                    head_prev_it_59=it_58->prev;
                                                                                }
                                                                                if(_if_conditional80=i_61==tail,                                                                                _if_conditional80) {
                                                                                    tail_it_60=it_58;
                                                                                }
                                                                                if(_if_conditional81=i_61>=head&&i_61<tail,                                                                                _if_conditional81) {
                                                                                    prev_it_62=it_58;
                                                                                    it_58=it_58->next;
                                                                                    i_61++;
                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_58=it_58->next;
                                                                                    i_61++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional82=head_prev_it_59!=((void*)0),                                                                            _if_conditional82) {
                                                                                head_prev_it_59->next=tail_it_60;
                                                                            }
                                                                            if(_if_conditional83=tail_it_60!=((void*)0),                                                                            _if_conditional83) {
                                                                                tail_it_60->prev=head_prev_it_59;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result34__ = __result_obj__ = self;
                                                                return __result34__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_50;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_51;
struct list$1charp* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_51, 0, sizeof(struct list_item$1charp*));
                                                                        it_50=self->head;
                                                                        while(_while_condtional10=it_50!=((void*)0),                                                                        _while_condtional10) {
                                                                            prev_it_51=it_50;
                                                                            it_50=it_50->next;
                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result33__ = __result_obj__ = self;
                                                                        return __result33__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional89;
char* result_64;
char* __result36__;
_Bool _if_conditional90;
char* __result37__;
char* result_65;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(char*));
memset(&result_65, 0, sizeof(char*));
                                    if(_if_conditional89=self==((void*)0),                                    _if_conditional89) {
                                        memset(&result_64,0,sizeof(char*));
                                        __result36__ = __result_obj__ = result_64;
                                        return __result36__;
                                    }
                                    self->it=self->head;
                                    if(self->it) {
                                        __result37__ = __result_obj__ = self->it->item;
                                        return __result37__;
                                    }
                                    memset(&result_65,0,sizeof(char*));
                                    __result38__ = __result_obj__ = result_65;
                                    return __result38__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result39__ = self==((void*)0)||self->it==((void*)0);
                                    return __result39__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional91;
char* result_67;
char* __result40__;
_Bool _if_conditional92;
char* __result41__;
char* result_68;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(char*));
memset(&result_68, 0, sizeof(char*));
                                    if(_if_conditional91=self==((void*)0)||self->it==((void*)0),                                    _if_conditional91) {
                                        memset(&result_67,0,sizeof(char*));
                                        __result40__ = __result_obj__ = result_67;
                                        return __result40__;
                                    }
                                    self->it=self->it->next;
                                    if(self->it) {
                                        __result41__ = __result_obj__ = self->it->item;
                                        return __result41__;
                                    }
                                    memset(&result_68,0,sizeof(char*));
                                    __result42__ = __result_obj__ = result_68;
                                    return __result42__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional95;
void* right_value37;
struct list_item$1charp* litem_69;
_Bool _if_conditional96;
void* right_value38;
struct list_item$1charp* litem_70;
void* right_value39;
struct list_item$1charp* litem_71;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1charp*));
right_value38 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
right_value39 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional95=self->len==0,                                        _if_conditional95) {
                                            litem_69=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value37=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                                            come_call_finalizer2(list_item$1charpp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            litem_69->prev=((void*)0);
                                            litem_69->next=((void*)0);
                                            litem_69->item=item;
                                            self->tail=litem_69;
                                            self->head=litem_69;
                                        }
                                        else {
                                            if(_if_conditional96=self->len==1,                                            _if_conditional96) {
                                                litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value38=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_70->prev=self->head;
                                                litem_70->next=((void*)0);
                                                litem_70->item=item;
                                                self->tail=litem_70;
                                                self->head->next=litem_70;
                                            }
                                            else {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value39=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                                                come_call_finalizer2(list_item$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                litem_71->prev=self->tail;
                                                litem_71->next=((void*)0);
                                                litem_71->item=item;
                                                self->tail->next=litem_71;
                                                self->tail=litem_71;
                                            }
                                        }
                                        self->len++;
                                        __result43__ = __result_obj__ = self;
                                        return __result43__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional97=self!=((void*)0)&&self->key_list!=((void*)0),                        _if_conditional97) {
                            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

_Bool sDoWhileNode_terminated(){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = (_Bool)1;
    return __result49__;
}

char* sDoWhileNode_kind(){
void* __result_obj__;
void* right_value43;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value43=__builtin_string("sDoWhileNode")));
    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

_Bool sDoWhileNode_compile(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool in_loop_72;
struct sBlock* block_73;
struct sNode* expression_node_74;
_Bool _if_conditional104;
_Bool __result51__;
_Bool normal_if_75;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value44;
struct CVALUE* conditional_value_76;
void* right_value45;
struct CVALUE* conditional_value_77;
static int num_while_condtional_78=0;
int num_while_conditional_stack_79;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&in_loop_72, 0, sizeof(_Bool));
memset(&block_73, 0, sizeof(struct sBlock*));
memset(&expression_node_74, 0, sizeof(struct sNode*));
memset(&normal_if_75, 0, sizeof(_Bool));
right_value44 = (void*)0;
memset(&conditional_value_76, 0, sizeof(struct CVALUE*));
right_value45 = (void*)0;
memset(&conditional_value_77, 0, sizeof(struct CVALUE*));
memset(&num_while_conditional_stack_79, 0, sizeof(int));
    in_loop_72=info->in_loop;
    info->in_loop=(_Bool)1;
    block_73=self->mBlock;
    add_come_code(info,"do {\n");
    transpile_block(block_73,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    expression_node_74=self->mExpressionNode;
    info->writing_source_file_position=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    if(_if_conditional104=!node_compile(expression_node_74,info),    _if_conditional104) {
        __result51__ = (_Bool)0;
        return __result51__;
    }
    info->without_semicolon=(_Bool)0;
    normal_if_75=(_Bool)1;
    if(_if_conditional105=info->module->mLastCode||info->module->mLastCode2||info->module->mLastCode3,    _if_conditional105) {
        normal_if_75=(_Bool)0;
    }
    if(_if_conditional106=existance_free_right_value_objects(info),    _if_conditional106) {
        normal_if_75=(_Bool)0;
    }
    if(normal_if_75) {
        conditional_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value44=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code(info,"} while(%s);\n",conditional_value_76->c_value);
        come_call_finalizer2(CVALUE_finalize,conditional_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        conditional_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value45=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        add_come_code_at_function_head(info,"_Bool _do_while_condtional%d;\n",++num_while_condtional_78);
        num_while_conditional_stack_79=num_while_condtional_78;
        add_come_code(info,"} while(_do_while_condtional%d=%s,",num_while_condtional_78,conditional_value_77->c_value);
        add_last_code_to_source_with_comma(info);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_do_while_condtional%d);\n",num_while_conditional_stack_79);
        come_call_finalizer2(CVALUE_finalize,conditional_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpiler_clear_last_code(info);
    info->in_loop=in_loop_72;
    __result52__ = (_Bool)1;
    return __result52__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional108;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional108=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional108) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional109=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional109) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

int sDoWhileNode_sline(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = self->sline;
    return __result53__;
}

char* sDoWhileNode_sname(struct sDoWhileNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value46;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value46=__builtin_string(self->sname)));
    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional110;
void* right_value47;
char* sname_80;
int sline_81;
void* right_value48;
struct sBlock* block_82;
void* right_value49;
char* buf2_83;
_Bool _if_conditional111;
void* right_value50;
struct sNode* expression_node_84;
void* right_value51;
void* right_value52;
struct sNode* _inf_value1;
struct sDoWhileNode* _inf_obj_value1;
void* right_value57;
struct sNode* __result57__;
void* right_value58;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&sname_80, 0, sizeof(char*));
memset(&sline_81, 0, sizeof(int));
right_value48 = (void*)0;
memset(&block_82, 0, sizeof(struct sBlock*));
right_value49 = (void*)0;
memset(&buf2_83, 0, sizeof(char*));
right_value50 = (void*)0;
memset(&expression_node_84, 0, sizeof(struct sNode*));
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
    if(_if_conditional110=charp_operator_equals(buf,"do"),    _if_conditional110) {
        sname_80=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(info->sname))));
        right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        sline_81=info->sline;
        block_82=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value48=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buf2_83=(char*)come_increment_ref_count(((char*)(right_value49=parse_word(info))));
        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional111=string_operator_not_equals(buf2_83,"while"),        _if_conditional111) {
            err_msg(info,"require while");
            exit(2);
        }
        expected_next_character(40,info);
        expression_node_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=expression_v13(info))));
        if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        expected_next_character(41,info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "10do_while.c", 122, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sDoWhileNode*)(right_value52=sDoWhileNode_initialize((struct sDoWhileNode*)come_increment_ref_count(((struct sDoWhileNode*)(right_value51=(struct sDoWhileNode*)come_calloc(1, sizeof(struct sDoWhileNode)*(1), "10do_while.c", 122, "sDoWhileNode")))),(struct sNode*)come_increment_ref_count(expression_node_84),block_82,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sDoWhileNode_finalize;
        _inf_value1->clone=(void*)sDoWhileNode_clone;
        _inf_value1->compile=(void*)sDoWhileNode_compile;
        _inf_value1->sline=(void*)sDoWhileNode_sline;
        _inf_value1->sname=(void*)sDoWhileNode_sname;
        _inf_value1->terminated=(void*)sDoWhileNode_terminated;
        _inf_value1->kind=(void*)sDoWhileNode_kind;
        __result57__ = __result_obj__ = ((struct sNode*)(right_value57=_inf_value1));
        sname_80 = come_decrement_ref_count2(sname_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buf2_83 = come_decrement_ref_count2(buf2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_84) { expression_node_84 = come_decrement_ref_count2(expression_node_84, ((struct sNode*)expression_node_84)->finalize, ((struct sNode*)expression_node_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sDoWhileNode_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sDoWhileNode_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value57) { right_value57 = come_decrement_ref_count2(right_value57, ((struct sNode*)right_value57)->finalize, ((struct sNode*)right_value57)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result57__;
        sname_80 = come_decrement_ref_count2(sname_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buf2_83 = come_decrement_ref_count2(buf2_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_84) { expression_node_84 = come_decrement_ref_count2(expression_node_84, ((struct sNode*)expression_node_84)->finalize, ((struct sNode*)expression_node_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result58__ = __result_obj__ = ((struct sNode*)(right_value58=string_node_v9(buf,head,head_sline,info)));
    if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, ((struct sNode*)right_value58)->finalize, ((struct sNode*)right_value58)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result58__;
}

static void sDoWhileNode_finalize(struct sDoWhileNode* self){
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional112=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional112) {
                if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional113=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional113) {
                come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional114=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional114) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sDoWhileNode* sDoWhileNode_clone(struct sDoWhileNode* self){
void* __result_obj__;
_Bool _if_conditional115;
struct sDoWhileNode* __result55__;
void* right_value53;
struct sDoWhileNode* result_85;
_Bool _if_conditional116;
void* right_value54;
struct sNode* __dec_obj17;
_Bool _if_conditional117;
void* right_value55;
struct sBlock* __dec_obj18;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value56;
char* __dec_obj19;
struct sDoWhileNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_85, 0, sizeof(struct sDoWhileNode*));
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
            if(_if_conditional115=self==(void*)0,            _if_conditional115) {
                __result55__ = __result_obj__ = (void*)0;
                return __result55__;
            }
            result_85=(struct sDoWhileNode*)come_increment_ref_count(((struct sDoWhileNode*)(right_value53=(struct sDoWhileNode*)come_calloc(1, sizeof(struct sDoWhileNode)*(1), "sDoWhileNode_clone", 3, "sDoWhileNode"))));
            come_call_finalizer2(sDoWhileNode_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional116=self!=((void*)0)&&self->mExpressionNode!=((void*)0),            _if_conditional116) {
                __dec_obj17=result_85->mExpressionNode;
                result_85->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(self->mExpressionNode))));
                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value54) { right_value54 = come_decrement_ref_count2(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),            _if_conditional117) {
                __dec_obj18=result_85->mBlock;
                result_85->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value55=sBlock_clone(self->mBlock))));
                come_call_finalizer2(sBlock_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sBlock_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_85->sline=self->sline;
            }
            if(_if_conditional119=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional119) {
                __dec_obj19=result_85->sname;
                result_85->sname=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->sname))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result56__ = __result_obj__ = result_85;
            come_call_finalizer2(sDoWhileNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result56__;
            come_call_finalizer2(sDoWhileNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

