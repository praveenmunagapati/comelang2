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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
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
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

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




struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
struct sCurrentNode* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result10__ = __result_obj__ = self;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = self->sline;
    return __result11__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value14;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result12__ = __result_obj__ = ((char*)(right_value14=__builtin_string(self->sname)));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
}

_Bool sCurrentNode_terminated(){
void* __result_obj__;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = (_Bool)0;
    return __result13__;
}

char* sCurrentNode_kind(){
void* __result_obj__;
void* right_value15;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result14__ = __result_obj__ = ((char*)(right_value15=__builtin_string("sCurrentNode")));
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result14__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value16;
char* class_name_5;
void* right_value17;
void* right_value18;
struct sClass* current_stack_6;
void* right_value19;
void* right_value20;
void* right_value21;
void* right_value22;
void* right_value23;
struct tuple2$2charphsTypeph* result_kind_15;
void* right_value65;
void* right_value66;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
struct tuple2$2charphsTypeph* return_value_38;
void* right_value71;
struct sVarTable* vtable_39;
struct map$2charphsVarph* o2_saved_40;
char* it_43;
char* key_46;
struct sVar* value_50;
void* right_value72;
struct sType* type2_51;
void* right_value73;
void* right_value74;
void* right_value75;
struct tuple2$2charphsTypeph* item_52;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value76;
struct sType* type3_53;
void* right_value77;
void* right_value78;
void* right_value79;
struct tuple2$2charphsTypeph* item2_56;
void* right_value80;
void* right_value81;
static int num_current_stack_105=0;
struct map$2charphsVarph* o2_saved_106;
char* it_107;
char* key_108;
struct sVar* value_109;
void* right_value88;
struct sType* type2_110;
void* right_value89;
void* right_value90;
struct tuple2$2charphsTypeph* item_111;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value91;
struct CVALUE* come_value_112;
void* right_value92;
char* __dec_obj37;
void* right_value93;
void* right_value94;
struct sType* __dec_obj38;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&class_name_5, 0, sizeof(char*));
right_value17 = (void*)0;
right_value18 = (void*)0;
memset(&current_stack_6, 0, sizeof(struct sClass*));
right_value19 = (void*)0;
right_value20 = (void*)0;
right_value21 = (void*)0;
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&result_kind_15, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
memset(&return_value_38, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value71 = (void*)0;
memset(&vtable_39, 0, sizeof(struct sVarTable*));
memset(&o2_saved_40, 0, sizeof(struct map$2charphsVarph*));
memset(&it_43, 0, sizeof(char*));
memset(&key_46, 0, sizeof(char*));
memset(&value_50, 0, sizeof(struct sVar*));
right_value72 = (void*)0;
memset(&type2_51, 0, sizeof(struct sType*));
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&item_52, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value76 = (void*)0;
memset(&type3_53, 0, sizeof(struct sType*));
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&item2_56, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&o2_saved_106, 0, sizeof(struct map$2charphsVarph*));
memset(&it_107, 0, sizeof(char*));
memset(&key_108, 0, sizeof(char*));
memset(&value_109, 0, sizeof(struct sVar*));
right_value88 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&item_111, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value91 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
    info->current_stack_num++;
    class_name_5=(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    current_stack_6=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value18=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value17=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40, "sClass")))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer2(sClass_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_kind_15=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value23=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value22=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value19=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42, "sType")))),"int",(_Bool)0,info))))))));
    right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value65=tuple2$2charphsTypephp_clone(result_kind_15)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return_value_38=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value70=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value69=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value66=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value67=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45, "sType")))),"void*",(_Bool)0,info))))))));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value71=tuple2$2charphsTypephp_clone(return_value_38)))));
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    vtable_39=info->lv_table;
    while(vtable_39) {
        for(        o2_saved_40=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_43=map$2charphsVarph_begin((o2_saved_40));        !map$2charphsVarph_end((o2_saved_40));        it_43=map$2charphsVarph_next((o2_saved_40))        ){
            key_46=it_43;
            value_50=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_46);
            type2_51=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(value_50->mType))));
            come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_51->mPointerNum++;
            item_52=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value75=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value74=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type2_51)))));
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional119=value_50->mCValueName!=((void*)0),            _if_conditional119) {
                if(_if_conditional120=strcmp(value_50->mCValueName,"__list_values")==0,                _if_conditional120) {
                }
                else {
                    if(_if_conditional121=strcmp(value_50->mCValueName,"__map_keys")==0,                    _if_conditional121) {
                    }
                    else {
                        if(_if_conditional122=strcmp(value_50->mCValueName,"__map_element")==0,                        _if_conditional122) {
                        }
                        else {
                            if(_if_conditional123=string_operator_equals(value_50->mType->mClass->mName,"va_list")||string_operator_equals(value_50->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional123) {
                            }
                            else {
                                if(_if_conditional124=list$1sNodeph_length(type2_51->mArrayNum)==1,                                _if_conditional124) {
                                    type3_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(type2_51))));
                                    come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1sNodeph_reset(type3_53->mArrayNum);
                                    type3_53->mPointerNum++;
                                    item2_56=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value78=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value77=__builtin_string(value_50->mCValueName)))),(struct sType*)come_increment_ref_count(type3_53)))));
                                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value80=tuple2$2charphsTypephp_clone(item2_56)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,type3_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,item2_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value81=tuple2$2charphsTypephp_clone(item_52)))));
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        vtable_39=vtable_39->mParent;
    }
    output_struct(current_stack_6,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6));
    num_current_stack_105++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_105);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_105,class_name_5);
    vtable_39=info->lv_table;
    while(vtable_39) {
        for(        o2_saved_106=(struct map$2charphsVarph*)come_increment_ref_count((vtable_39->mVars)),it_107=map$2charphsVarph_begin((o2_saved_106));        !map$2charphsVarph_end((o2_saved_106));        it_107=map$2charphsVarph_next((o2_saved_106))        ){
            key_108=it_107;
            value_109=map$2charphsVarphp_operator_load_element(vtable_39->mVars,key_108);
            type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(value_109->mType))));
            come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            item_111=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value90=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_109->mCValueName),(struct sType*)come_increment_ref_count(type2_110)))));
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional176=value_109->mCValueName!=((void*)0),            _if_conditional176) {
                if(_if_conditional177=strcmp(value_109->mCValueName,"__list_values")==0,                _if_conditional177) {
                }
                else {
                    if(_if_conditional178=strcmp(value_109->mCValueName,"__map_keys")==0,                    _if_conditional178) {
                    }
                    else {
                        if(_if_conditional179=strcmp(value_109->mCValueName,"__map_element")==0,                        _if_conditional179) {
                        }
                        else {
                            if(_if_conditional180=string_operator_equals(value_109->mType->mClass->mName,"va_list")||string_operator_equals(value_109->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional180) {
                            }
                            else {
                                if(_if_conditional181=string_operator_equals(type2_110->mClass->mName,"lambda"),                                _if_conditional181) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_105,value_109->mCValueName,value_109->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_105,value_109->mCValueName,value_109->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        vtable_39=vtable_39->mParent;
    }
    come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj37=come_value_112->c_value;
    come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("&__current_stack%d__",num_current_stack_105))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj38=come_value_112->type;
    come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140, "sType")))),class_name_5,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_112->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_112->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
    info->num_current_stack=num_current_stack_105;
    __result75__ = (_Bool)1;
    class_name_5 = come_decrement_ref_count2(class_name_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result75__;
    class_name_5 = come_decrement_ref_count2(class_name_5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,result_kind_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2charphsTypephp_finalize,return_value_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional6) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional7) {
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional28) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_7;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_7=self->head;
                while(_while_condtional1=it_7!=((void*)0),                _while_condtional1) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional8) {
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional9) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional10) {
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional11=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional11) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional13=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional13) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional15=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional15) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional16=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional16) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional17=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional17) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional18) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional20) {
                                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional21) {
                                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional23) {
                                            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional24) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional25) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional26) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional27) {
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                                                it_9=self->head;
                                                while(_while_condtional2=it_9!=((void*)0),                                                _while_condtional2) {
                                                    prev_it_10=it_9;
                                                    it_9=it_9->next;
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional12) {
                                                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional14) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_11;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                                                it_11=self->head;
                                                while(_while_condtional3=it_11!=((void*)0),                                                _while_condtional3) {
                                                    prev_it_12=it_11;
                                                    it_11=it_11->next;
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional19) {
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_13;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                                                it_13=self->head;
                                                while(_while_condtional4=it_13!=((void*)0),                                                _while_condtional4) {
                                                    prev_it_14=it_13;
                                                    it_13=it_13->next;
                                                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional22) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj7;
struct sType* __dec_obj8;
struct tuple2$2charphsTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj7=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj8=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(v2);
        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result15__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional29;
void* right_value24;
struct list_item$1tuple2$2charphsTypephph* litem_16;
struct tuple2$2charphsTypeph* __dec_obj9;
_Bool _if_conditional32;
void* right_value25;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj10;
void* right_value26;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj11;
struct list$1tuple2$2charphsTypephph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value25 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value26 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional29=self->len==0,        _if_conditional29) {
            litem_16=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value24=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_16->prev=((void*)0);
            litem_16->next=((void*)0);
            __dec_obj9=litem_16->item;
            litem_16->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_16;
            self->head=litem_16;
        }
        else {
            if(_if_conditional32=self->len==1,            _if_conditional32) {
                litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value25=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_17->prev=self->head;
                litem_17->next=((void*)0);
                __dec_obj10=litem_17->item;
                litem_17->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_17;
                self->head->next=litem_17;
            }
            else {
                litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value26=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_18->prev=self->tail;
                litem_18->next=((void*)0);
                __dec_obj11=litem_18->item;
                litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_18;
                self->tail=litem_18;
            }
        }
        self->len++;
        __result16__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result16__;
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional30) {
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional31) {
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional33;
struct tuple2$2charphsTypeph* __result17__;
void* right_value27;
struct tuple2$2charphsTypeph* result_19;
_Bool _if_conditional34;
void* right_value28;
char* __dec_obj12;
_Bool _if_conditional35;
void* right_value64;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
memset(&result_19, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value28 = (void*)0;
right_value64 = (void*)0;
        if(_if_conditional33=self==(void*)0,        _if_conditional33) {
            __result17__ = __result_obj__ = (void*)0;
            return __result17__;
        }
        result_19=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value27=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional34=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional34) {
            __dec_obj12=result_19->v1;
            result_19->v1=(char*)come_increment_ref_count(((char*)(right_value28=string_clone(self->v1))));
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional35) {
            __dec_obj36=result_19->v2;
            result_19->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(self->v2))));
            come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result36__ = __result_obj__ = result_19;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result36__;
        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional36;
struct sType* __result18__;
void* right_value29;
struct sType* result_20;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value36;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional42;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional46;
void* right_value40;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional47;
void* right_value41;
char* __dec_obj20;
_Bool _if_conditional48;
void* right_value42;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional49;
void* right_value50;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value51;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional64;
void* right_value58;
struct list$1charph* __dec_obj30;
_Bool _if_conditional68;
void* right_value59;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value60;
struct sNode* __dec_obj32;
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
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value61;
struct sNode* __dec_obj33;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value62;
char* __dec_obj34;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
void* right_value63;
char* __dec_obj35;
struct sType* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value36 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
                if(_if_conditional36=self==(void*)0,                _if_conditional36) {
                    __result18__ = __result_obj__ = (void*)0;
                    return __result18__;
                }
                result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value29=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer2(sType_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional37=self!=((void*)0),                _if_conditional37) {
                    result_20->mClass=self->mClass;
                }
                if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional38) {
                    __dec_obj16=result_20->mMultipleTypes;
                    result_20->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value36=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional42) {
                    __dec_obj18=result_20->mNoSolvedGenericsType;
                    result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional46) {
                    __dec_obj19=result_20->mOriginalLoadVarType;
                    result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value40=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional47) {
                    __dec_obj20=result_20->mGenericsName;
                    result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value41=string_clone(self->mGenericsName))));
                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional48) {
                    __dec_obj21=result_20->mGenericsTypes;
                    result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value42=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional49) {
                    __dec_obj25=result_20->mArrayNum;
                    result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value50=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional62=self!=((void*)0),                _if_conditional62) {
                    result_20->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional63) {
                    __dec_obj26=result_20->mParamTypes;
                    result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional64) {
                    __dec_obj30=result_20->mParamNames;
                    result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional68) {
                    __dec_obj31=result_20->mResultType;
                    result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional69=self!=((void*)0),                _if_conditional69) {
                    result_20->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional70) {
                    __dec_obj32=result_20->mAlignas;
                    result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value60=sNode_clone(self->mAlignas))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value60) { right_value60 = come_decrement_ref_count2(right_value60, ((struct sNode*)right_value60)->finalize, ((struct sNode*)right_value60)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional71=self!=((void*)0),                _if_conditional71) {
                    result_20->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional72=self!=((void*)0),                _if_conditional72) {
                    result_20->mShort=self->mShort;
                }
                if(_if_conditional73=self!=((void*)0),                _if_conditional73) {
                    result_20->mLong=self->mLong;
                }
                if(_if_conditional74=self!=((void*)0),                _if_conditional74) {
                    result_20->mLongLong=self->mLongLong;
                }
                if(_if_conditional75=self!=((void*)0),                _if_conditional75) {
                    result_20->mConstant=self->mConstant;
                }
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    result_20->mRegister=self->mRegister;
                }
                if(_if_conditional77=self!=((void*)0),                _if_conditional77) {
                    result_20->mVolatile=self->mVolatile;
                }
                if(_if_conditional78=self!=((void*)0),                _if_conditional78) {
                    result_20->mStatic=self->mStatic;
                }
                if(_if_conditional79=self!=((void*)0),                _if_conditional79) {
                    result_20->mExtern=self->mExtern;
                }
                if(_if_conditional80=self!=((void*)0),                _if_conditional80) {
                    result_20->mRestrict=self->mRestrict;
                }
                if(_if_conditional81=self!=((void*)0),                _if_conditional81) {
                    result_20->mImmutable=self->mImmutable;
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_20->mHeap=self->mHeap;
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_20->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional84=self!=((void*)0),                _if_conditional84) {
                    result_20->mDelegate=self->mDelegate;
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_20->mShare=self->mShare;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_20->mClone=self->mClone;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_20->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_20->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_20->mRefference=self->mRefference;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_20->mException=self->mException;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_20->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional94=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional94) {
                    __dec_obj33=result_20->mSizeNum;
                    result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(self->mSizeNum))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value61) { right_value61 = come_decrement_ref_count2(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_20->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_20->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional97=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional97) {
                    __dec_obj34=result_20->mOriginalTypeName;
                    result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value62=string_clone(self->mOriginalTypeName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_20->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_20->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_20->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_20->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_20->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_20->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_20->mInline=self->mInline;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_20->mNullValue=self->mNullValue;
                }
                if(_if_conditional106=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional106) {
                    __dec_obj35=result_20->mAsmName;
                    result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mAsmName))));
                    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result35__ = __result_obj__ = result_20;
                come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result35__;
                come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result19__;
void* right_value30;
void* right_value31;
struct list$1sTypeph* result_21;
struct list_item$1sTypeph* it_22;
_Bool _while_condtional5;
void* right_value35;
struct list$1sTypeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value31 = (void*)0;
memset(&result_21, 0, sizeof(struct list$1sTypeph*));
memset(&it_22, 0, sizeof(struct list_item$1sTypeph*));
right_value35 = (void*)0;
                        if(_if_conditional39=self==((void*)0),                        _if_conditional39) {
                            __result19__ = __result_obj__ = ((void*)0);
                            return __result19__;
                        }
                        result_21=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_22=self->head;
                        while(_while_condtional5=it_22!=((void*)0),                        _while_condtional5) {
                            list$1sTypeph_add(result_21,(struct sType*)come_increment_ref_count(((struct sType*)(right_value35=sType_clone(it_22->item)))));
                            come_call_finalizer2(sType_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_22=it_22->next;
                        }
                        __result22__ = __result_obj__ = result_21;
                        come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result22__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result20__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result20__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value32;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj13;
_Bool _if_conditional41;
void* right_value33;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj14;
void* right_value34;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj15;
struct list$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value34 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional40=self->len==0,                                _if_conditional40) {
                                    litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_23->prev=((void*)0);
                                    litem_23->next=((void*)0);
                                    __dec_obj13=litem_23->item;
                                    litem_23->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_23;
                                    self->head=litem_23;
                                }
                                else {
                                    if(_if_conditional41=self->len==1,                                    _if_conditional41) {
                                        litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_24->prev=self->head;
                                        litem_24->next=((void*)0);
                                        __dec_obj14=litem_24->item;
                                        litem_24->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_24;
                                        self->head->next=litem_24;
                                    }
                                    else {
                                        litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_25->prev=self->tail;
                                        litem_25->next=((void*)0);
                                        __dec_obj15=litem_25->item;
                                        litem_25->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_25;
                                        self->tail=litem_25;
                                    }
                                }
                                self->len++;
                                __result21__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result21__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result23__;
void* right_value37;
struct tuple1$1sTypeph* result_26;
_Bool _if_conditional45;
void* right_value38;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&result_26, 0, sizeof(struct tuple1$1sTypeph*));
right_value38 = (void*)0;
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            __result23__ = __result_obj__ = (void*)0;
                            return __result23__;
                        }
                        result_26=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value37=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional45) {
                            __dec_obj17=result_26->v1;
                            result_26->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value38=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result24__ = __result_obj__ = result_26;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result24__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional44) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result25__;
void* right_value43;
void* right_value44;
struct list$1sNodeph* result_27;
struct list_item$1sNodeph* it_28;
_Bool _while_condtional6;
void* right_value49;
struct list$1sNodeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct list_item$1sNodeph*));
right_value49 = (void*)0;
                        if(_if_conditional50=self==((void*)0),                        _if_conditional50) {
                            __result25__ = __result_obj__ = ((void*)0);
                            return __result25__;
                        }
                        result_27=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 142, "list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_28=self->head;
                        while(_while_condtional6=it_28!=((void*)0),                        _while_condtional6) {
                            list$1sNodeph_add(result_27,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(it_28->item)))));
                            if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_28=it_28->next;
                        }
                        __result30__ = __result_obj__ = result_27;
                        come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result30__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result26__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result26__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value45;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj22;
_Bool _if_conditional52;
void* right_value46;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj23;
void* right_value47;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value45 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
right_value46 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value47 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional51=self->len==0,                                _if_conditional51) {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value45=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_29->prev=((void*)0);
                                    litem_29->next=((void*)0);
                                    __dec_obj22=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_29;
                                    self->head=litem_29;
                                }
                                else {
                                    if(_if_conditional52=self->len==1,                                    _if_conditional52) {
                                        litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_30->prev=self->head;
                                        litem_30->next=((void*)0);
                                        __dec_obj23=litem_30->item;
                                        litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_30;
                                        self->head->next=litem_30;
                                    }
                                    else {
                                        litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_31->prev=self->tail;
                                        litem_31->next=((void*)0);
                                        __dec_obj24=litem_31->item;
                                        litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_31;
                                        self->tail=litem_31;
                                    }
                                }
                                self->len++;
                                __result27__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result27__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sNode* __result28__;
void* right_value48;
struct sNode* result_32;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sNode* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&result_32, 0, sizeof(struct sNode*));
                                if(_if_conditional53=self==(void*)0,                                _if_conditional53) {
                                    __result28__ = __result_obj__ = (void*)0;
                                    return __result28__;
                                }
                                result_32=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional54) {
                                    result_32->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional55=self!=((void*)0),                                _if_conditional55) {
                                    result_32->finalize=self->finalize;
                                }
                                if(_if_conditional56=self!=((void*)0),                                _if_conditional56) {
                                    result_32->clone=self->clone;
                                }
                                if(_if_conditional57=self!=((void*)0),                                _if_conditional57) {
                                    result_32->compile=self->compile;
                                }
                                if(_if_conditional58=self!=((void*)0),                                _if_conditional58) {
                                    result_32->sline=self->sline;
                                }
                                if(_if_conditional59=self!=((void*)0),                                _if_conditional59) {
                                    result_32->sname=self->sname;
                                }
                                if(_if_conditional60=self!=((void*)0),                                _if_conditional60) {
                                    result_32->terminated=self->terminated;
                                }
                                if(_if_conditional61=self!=((void*)0),                                _if_conditional61) {
                                    result_32->kind=self->kind;
                                }
                                __result29__ = __result_obj__ = result_32;
                                if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result29__;
                                if(result_32) { result_32 = come_decrement_ref_count2(result_32, ((struct sNode*)result_32)->finalize, ((struct sNode*)result_32)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result31__;
void* right_value52;
void* right_value53;
struct list$1charph* result_33;
struct list_item$1charph* it_34;
_Bool _while_condtional7;
void* right_value57;
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1charph*));
memset(&it_34, 0, sizeof(struct list_item$1charph*));
right_value57 = (void*)0;
                        if(_if_conditional65=self==((void*)0),                        _if_conditional65) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_33=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value52=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 142, "list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_34=self->head;
                        while(_while_condtional7=it_34!=((void*)0),                        _while_condtional7) {
                            list$1charph_add(result_33,(char*)come_increment_ref_count(((char*)(right_value57=string_clone(it_34->item)))));
                            right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_34=it_34->next;
                        }
                        __result34__ = __result_obj__ = result_33;
                        come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result34__;
                        come_call_finalizer2(list$1charphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result32__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result32__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value54;
struct list_item$1charph* litem_35;
char* __dec_obj27;
_Bool _if_conditional67;
void* right_value55;
struct list_item$1charph* litem_36;
char* __dec_obj28;
void* right_value56;
struct list_item$1charph* litem_37;
char* __dec_obj29;
struct list$1charph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
right_value55 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
right_value56 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional66=self->len==0,                                _if_conditional66) {
                                    litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value54=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_35->prev=((void*)0);
                                    litem_35->next=((void*)0);
                                    __dec_obj27=litem_35->item;
                                    litem_35->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_35;
                                    self->head=litem_35;
                                }
                                else {
                                    if(_if_conditional67=self->len==1,                                    _if_conditional67) {
                                        litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_36->prev=self->head;
                                        litem_36->next=((void*)0);
                                        __dec_obj28=litem_36->item;
                                        litem_36->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_36;
                                        self->head->next=litem_36;
                                    }
                                    else {
                                        litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_37->prev=self->tail;
                                        litem_37->next=((void*)0);
                                        __dec_obj29=litem_37->item;
                                        litem_37->item=(char*)come_increment_ref_count(item);
                                        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_37;
                                        self->tail=litem_37;
                                    }
                                }
                                self->len++;
                                __result33__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result33__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional107;
char* result_41;
char* __result37__;
_Bool _if_conditional108;
char* __result38__;
char* result_42;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_41, 0, sizeof(char*));
memset(&result_42, 0, sizeof(char*));
            if(_if_conditional107=self==((void*)0),            _if_conditional107) {
                memset(&result_41,0,sizeof(char*));
                __result37__ = __result_obj__ = result_41;
                return __result37__;
            }
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                __result38__ = __result_obj__ = self->key_list->it->item;
                return __result38__;
            }
            memset(&result_42,0,sizeof(char*));
            __result39__ = __result_obj__ = result_42;
            return __result39__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
            __result40__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result40__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional109;
char* result_44;
char* __result41__;
_Bool _if_conditional110;
char* __result42__;
char* result_45;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_44, 0, sizeof(char*));
memset(&result_45, 0, sizeof(char*));
            if(_if_conditional109=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional109) {
                memset(&result_44,0,sizeof(char*));
                __result41__ = __result_obj__ = result_44;
                return __result41__;
            }
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                __result42__ = __result_obj__ = self->key_list->it->item;
                return __result42__;
            }
            memset(&result_45,0,sizeof(char*));
            __result43__ = __result_obj__ = result_45;
            return __result43__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_47;
unsigned int hash_48;
unsigned int it_49;
_Bool _while_condtional8;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct sVar* __result44__;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sVar* __result45__;
struct sVar* __result46__;
struct sVar* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_47, 0, sizeof(struct sVar*));
memset(&hash_48, 0, sizeof(unsigned int));
memset(&it_49, 0, sizeof(unsigned int));
                memset(&default_value_47,0,sizeof(struct sVar*));
                hash_48=string_get_hash_key(((char*)key))%self->size;
                it_49=hash_48;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional111=self->item_existance[it_49],                    _if_conditional111) {
                        if(_if_conditional112=string_equals(self->keys[it_49],key),                        _if_conditional112) {
                            __result44__ = __result_obj__ = self->items[it_49];
                            come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result44__;
                        }
                        it_49++;
                        if(_if_conditional117=it_49>=self->size,                        _if_conditional117) {
                            it_49=0;
                        }
                        else {
                            if(_if_conditional118=it_49==hash_48,                            _if_conditional118) {
                                __result45__ = __result_obj__ = default_value_47;
                                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result45__;
                            }
                        }
                    }
                    else {
                        __result46__ = __result_obj__ = default_value_47;
                        come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result46__;
                    }
                }
                __result47__ = __result_obj__ = default_value_47;
                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result47__;
                come_call_finalizer2(sVar_finalize,default_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional113=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional113) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional114) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional115) {
                                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional116) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result48__ = self->len;
                                    return __result48__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_54;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_55;
struct list$1sNodeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1sNodeph*));
                                        it_54=self->head;
                                        while(_while_condtional9=it_54!=((void*)0),                                        _while_condtional9) {
                                            prev_it_55=it_54;
                                            it_54=it_54->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result49__ = __result_obj__ = self;
                                        return __result49__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_57;
_Bool _if_conditional125;
_Bool _if_conditional126;
int i_58;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
            for(            i_57=0;            i_57<self->size;            i_57++            ){
                if(_if_conditional125=self->item_existance[i_57],                _if_conditional125) {
                    if(_if_conditional126=1,                    _if_conditional126) {
                        come_call_finalizer2(sVar_finalize,self->items[i_57], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_58=0;            i_58<self->size;            i_58++            ){
                if(_if_conditional127=self->item_existance[i_58],                _if_conditional127) {
                    if(_if_conditional128=1,                    _if_conditional128) {
                        self->keys[i_58] = come_decrement_ref_count2(self->keys[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_59;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charp*));
                it_59=self->head;
                while(_while_condtional10=it_59!=((void*)0),                _while_condtional10) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional129;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional13;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool same_key_exist_96;
char* it2_99;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct map$2charphsClassph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
memset(&same_key_exist_96, 0, sizeof(_Bool));
memset(&it2_99, 0, sizeof(char*));
        if(_if_conditional129=self->len*10>=self->size,        _if_conditional129) {
            map$2charphsClassph_rehash(self);
        }
        hash_78=string_get_hash_key(key)%self->size;
        it_79=hash_78;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional141=self->item_existance[it_79],            _if_conditional141) {
                if(_if_conditional142=string_equals(self->keys[it_79],key),                _if_conditional142) {
                    if(_if_conditional143=1,                    _if_conditional143) {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        self->keys[it_79] = come_decrement_ref_count2(self->keys[it_79], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_79]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_79]);
                        self->keys[it_79]=key;
                    }
                    if(_if_conditional163=1,                    _if_conditional163) {
                        come_call_finalizer2(sClass_finalize,self->items[it_79], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_79]=item;
                    }
                    break;
                }
                it_79++;
                if(_if_conditional164=it_79>=self->size,                _if_conditional164) {
                    it_79=0;
                }
                else {
                    if(_if_conditional165=it_79==hash_78,                    _if_conditional165) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_79]=(_Bool)1;
                if(_if_conditional166=1,                _if_conditional166) {
                    self->keys[it_79]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_79]=key;
                }
                if(_if_conditional167=1,                _if_conditional167) {
                    self->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_79]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_96=(_Bool)0;
        for(        it2_99=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_99=list$1charp_next(self->key_list)        ){
            if(_if_conditional172=string_equals(it2_99,key),            _if_conditional172) {
                puts("SAME KEY");
                same_key_exist_96=(_Bool)1;
            }
        }
        if(_if_conditional173=!same_key_exist_96,        _if_conditional173) {
            list$1charp_push_back(self->key_list,key);
        }
        __result73__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result73__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_61;
void* right_value82;
char** keys_62;
void* right_value83;
struct sClass** items_63;
void* right_value84;
_Bool* item_existance_64;
int len_65;
char* it_68;
struct sClass* default_value_71;
struct sClass* it2_74;
unsigned int hash_75;
int n_76;
_Bool _while_condtional12;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct sClass* default_value_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_61, 0, sizeof(int));
right_value82 = (void*)0;
memset(&keys_62, 0, sizeof(char**));
right_value83 = (void*)0;
memset(&items_63, 0, sizeof(struct sClass**));
right_value84 = (void*)0;
memset(&item_existance_64, 0, sizeof(_Bool*));
memset(&len_65, 0, sizeof(int));
memset(&it_68, 0, sizeof(char*));
memset(&default_value_71, 0, sizeof(struct sClass*));
memset(&it2_74, 0, sizeof(struct sClass*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&n_76, 0, sizeof(int));
memset(&default_value_77, 0, sizeof(struct sClass*));
                size_61=self->size*10;
                keys_62=(char**)come_increment_ref_count(((char**)(right_value82=(char**)come_calloc(1, sizeof(char*)*(1*(size_61)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_63=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value83=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_61)), "/usr/local/include/comelang2.h", 1336, "sClass*%"))));
                come_call_finalizer2(sClass_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_64=(_Bool*)come_increment_ref_count(((_Bool*)(right_value84=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_61)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_65=0;
                for(                it_68=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_68=map$2charphsClassph_next(self)                ){
                    memset(&default_value_71,0,sizeof(struct sClass*));
                    it2_74=map$2charphsClassph_at(self,it_68,default_value_71);
                    hash_75=string_get_hash_key(it_68)%size_61;
                    n_76=hash_75;
                    while(_while_condtional12=(_Bool)1,                    _while_condtional12) {
                        if(_if_conditional138=item_existance_64[n_76],                        _if_conditional138) {
                            n_76++;
                            if(_if_conditional139=n_76>=size_61,                            _if_conditional139) {
                                n_76=0;
                            }
                            else {
                                if(_if_conditional140=n_76==hash_75,                                _if_conditional140) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_64[n_76]=(_Bool)1;
                            keys_62[n_76]=it_68;
                            items_63[n_76]=map$2charphsClassph_at(self,it_68,default_value_77);
                            len_65++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_62;
                self->items=items_63;
                self->item_existance=item_existance_64;
                self->size=size_61;
                self->len=len_65;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional130;
char* result_66;
char* __result50__;
_Bool _if_conditional131;
char* __result51__;
char* result_67;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(char*));
memset(&result_67, 0, sizeof(char*));
                    if(_if_conditional130=self==((void*)0),                    _if_conditional130) {
                        memset(&result_66,0,sizeof(char*));
                        __result50__ = __result_obj__ = result_66;
                        return __result50__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result51__ = __result_obj__ = self->key_list->it->item;
                        return __result51__;
                    }
                    memset(&result_67,0,sizeof(char*));
                    __result52__ = __result_obj__ = result_67;
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
_Bool _if_conditional132;
char* result_69;
char* __result54__;
_Bool _if_conditional133;
char* __result55__;
char* result_70;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(_if_conditional132=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional132) {
                        memset(&result_69,0,sizeof(char*));
                        __result54__ = __result_obj__ = result_69;
                        return __result54__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result55__ = __result_obj__ = self->key_list->it->item;
                        return __result55__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result56__ = __result_obj__ = result_70;
                    return __result56__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_72;
unsigned int it_73;
_Bool _while_condtional11;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sClass* __result57__;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct sClass* __result58__;
struct sClass* __result59__;
struct sClass* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_72, 0, sizeof(unsigned int));
memset(&it_73, 0, sizeof(unsigned int));
                        hash_72=string_get_hash_key(((char*)key))%self->size;
                        it_73=hash_72;
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            if(_if_conditional134=self->item_existance[it_73],                            _if_conditional134) {
                                if(_if_conditional135=string_equals(self->keys[it_73],key),                                _if_conditional135) {
                                    __result57__ = __result_obj__ = self->items[it_73];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result57__;
                                }
                                it_73++;
                                if(_if_conditional136=it_73>=self->size,                                _if_conditional136) {
                                    it_73=0;
                                }
                                else {
                                    if(_if_conditional137=it_73==hash_72,                                    _if_conditional137) {
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
int it2_80;
struct list_item$1charp* it_81;
_Bool _while_condtional14;
_Bool _if_conditional144;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_80, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
                            it2_80=0;
                            it_81=self->head;
                            while(_while_condtional14=it_81!=((void*)0),                            _while_condtional14) {
                                if(_if_conditional144=string_equals(it_81->item,item),                                _if_conditional144) {
                                    list$1charp_delete(self,it2_80,it2_80+1);
                                    break;
                                }
                                it2_80++;
                                it_81=it_81->next;
                            }
                            __result64__ = __result_obj__ = self;
                            return __result64__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
int tmp_82;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list$1charp* __result61__;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list_item$1charp* it_85;
int i_86;
_Bool _while_condtional16;
_Bool _if_conditional153;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional17;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* prev_it_90;
struct list_item$1charp* it_91;
struct list_item$1charp* head_prev_it_92;
struct list_item$1charp* tail_it_93;
int i_94;
_Bool _while_condtional18;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* prev_it_95;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_82, 0, sizeof(int));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_92, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_93, 0, sizeof(struct list_item$1charp*));
memset(&i_94, 0, sizeof(int));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional145=head<0,                                        _if_conditional145) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional146=tail<0,                                        _if_conditional146) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional147=head>tail,                                        _if_conditional147) {
                                            tmp_82=tail;
                                            tail=head;
                                            head=tmp_82;
                                        }
                                        if(_if_conditional148=head<0,                                        _if_conditional148) {
                                            head=0;
                                        }
                                        if(_if_conditional149=tail>self->len,                                        _if_conditional149) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional150=head==tail,                                        _if_conditional150) {
                                            __result61__ = __result_obj__ = self;
                                            return __result61__;
                                        }
                                        if(_if_conditional151=head==0&&tail==self->len,                                        _if_conditional151) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional152=head==0,                                            _if_conditional152) {
                                                it_85=self->head;
                                                i_86=0;
                                                while(_while_condtional16=it_85!=((void*)0),                                                _while_condtional16) {
                                                    if(_if_conditional153=i_86<tail,                                                    _if_conditional153) {
                                                        prev_it_87=it_85;
                                                        it_85=it_85->next;
                                                        i_86++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional154=i_86==tail,                                                        _if_conditional154) {
                                                            self->head=it_85;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_85=it_85->next;
                                                            i_86++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional155=tail==self->len,                                                _if_conditional155) {
                                                    it_88=self->head;
                                                    i_89=0;
                                                    while(_while_condtional17=it_88!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional156=i_89==head,                                                        _if_conditional156) {
                                                            self->tail=it_88->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional157=i_89>=head,                                                        _if_conditional157) {
                                                            prev_it_90=it_88;
                                                            it_88=it_88->next;
                                                            i_89++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_88=it_88->next;
                                                            i_89++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_91=self->head;
                                                    head_prev_it_92=((void*)0);
                                                    tail_it_93=((void*)0);
                                                    i_94=0;
                                                    while(_while_condtional18=it_91!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional158=i_94==head,                                                        _if_conditional158) {
                                                            head_prev_it_92=it_91->prev;
                                                        }
                                                        if(_if_conditional159=i_94==tail,                                                        _if_conditional159) {
                                                            tail_it_93=it_91;
                                                        }
                                                        if(_if_conditional160=i_94>=head&&i_94<tail,                                                        _if_conditional160) {
                                                            prev_it_95=it_91;
                                                            it_91=it_91->next;
                                                            i_94++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_91=it_91->next;
                                                            i_94++;
                                                        }
                                                    }
                                                    if(_if_conditional161=head_prev_it_92!=((void*)0),                                                    _if_conditional161) {
                                                        head_prev_it_92->next=tail_it_93;
                                                    }
                                                    if(_if_conditional162=tail_it_93!=((void*)0),                                                    _if_conditional162) {
                                                        tail_it_93->prev=head_prev_it_92;
                                                    }
                                                }
                                            }
                                        }
                                        __result63__ = __result_obj__ = self;
                                        return __result63__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_83;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_84;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_84, 0, sizeof(struct list_item$1charp*));
                                                it_83=self->head;
                                                while(_while_condtional15=it_83!=((void*)0),                                                _while_condtional15) {
                                                    prev_it_84=it_83;
                                                    it_83=it_83->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result62__ = __result_obj__ = self;
                                                return __result62__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional168;
char* result_97;
char* __result65__;
_Bool _if_conditional169;
char* __result66__;
char* result_98;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
            if(_if_conditional168=self==((void*)0),            _if_conditional168) {
                memset(&result_97,0,sizeof(char*));
                __result65__ = __result_obj__ = result_97;
                return __result65__;
            }
            self->it=self->head;
            if(self->it) {
                __result66__ = __result_obj__ = self->it->item;
                return __result66__;
            }
            memset(&result_98,0,sizeof(char*));
            __result67__ = __result_obj__ = result_98;
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
_Bool _if_conditional170;
char* result_100;
char* __result69__;
_Bool _if_conditional171;
char* __result70__;
char* result_101;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
            if(_if_conditional170=self==((void*)0)||self->it==((void*)0),            _if_conditional170) {
                memset(&result_100,0,sizeof(char*));
                __result69__ = __result_obj__ = result_100;
                return __result69__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result70__ = __result_obj__ = self->it->item;
                return __result70__;
            }
            memset(&result_101,0,sizeof(char*));
            __result71__ = __result_obj__ = result_101;
            return __result71__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional174;
void* right_value85;
struct list_item$1charp* litem_102;
_Bool _if_conditional175;
void* right_value86;
struct list_item$1charp* litem_103;
void* right_value87;
struct list_item$1charp* litem_104;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1charp*));
right_value86 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1charp*));
right_value87 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional174=self->len==0,                _if_conditional174) {
                    litem_102=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value85=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_102->prev=((void*)0);
                    litem_102->next=((void*)0);
                    litem_102->item=item;
                    self->tail=litem_102;
                    self->head=litem_102;
                }
                else {
                    if(_if_conditional175=self->len==1,                    _if_conditional175) {
                        litem_103=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value86=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_103->prev=self->head;
                        litem_103->next=((void*)0);
                        litem_103->item=item;
                        self->tail=litem_103;
                        self->head->next=litem_103;
                    }
                    else {
                        litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value87=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_104->prev=self->tail;
                        litem_104->next=((void*)0);
                        litem_104->item=item;
                        self->tail->next=litem_104;
                        self->tail=litem_104;
                    }
                }
                self->len++;
                __result72__ = __result_obj__ = self;
                return __result72__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional182=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional182) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional183=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional183) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional184;
void* right_value95;
struct list_item$1CVALUEph* litem_113;
struct CVALUE* __dec_obj39;
_Bool _if_conditional186;
void* right_value96;
struct list_item$1CVALUEph* litem_114;
struct CVALUE* __dec_obj40;
void* right_value97;
struct list_item$1CVALUEph* litem_115;
struct CVALUE* __dec_obj41;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1CVALUEph*));
right_value96 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1CVALUEph*));
right_value97 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional184=self->len==0,        _if_conditional184) {
            litem_113=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value95=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_113->prev=((void*)0);
            litem_113->next=((void*)0);
            __dec_obj39=litem_113->item;
            litem_113->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_113;
            self->head=litem_113;
        }
        else {
            if(_if_conditional186=self->len==1,            _if_conditional186) {
                litem_114=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value96=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_114->prev=self->head;
                litem_114->next=((void*)0);
                __dec_obj40=litem_114->item;
                litem_114->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_114;
                self->head->next=litem_114;
            }
            else {
                litem_115=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value97=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_115->prev=self->tail;
                litem_115->next=((void*)0);
                __dec_obj41=litem_115->item;
                litem_115->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_115;
                self->tail=litem_115;
            }
        }
        self->len++;
        __result74__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional185=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional185) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value98;
struct sNode* __dec_obj42;
void* right_value99;
char* __dec_obj43;
void* right_value109;
struct list$1tuple2$2charphsNodephph* __dec_obj49;
void* right_value110;
struct buffer* __dec_obj50;
void* right_value111;
char* __dec_obj51;
void* right_value112;
struct list$1sTypeph* __dec_obj52;
struct sMethodCallNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
    __dec_obj42=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=sNode_clone(obj))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj43=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string(fun_name))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj49=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value109=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value110=buffer_clone(method_block))));
    come_call_finalizer2(buffer_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->method_block_sline=method_block_sline;
    __dec_obj52=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer2(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct list$1tuple2$2charphsNodephph* __result76__;
void* right_value100;
void* right_value101;
struct list$1tuple2$2charphsNodephph* result_118;
struct list_item$1tuple2$2charphsNodephph* it_119;
_Bool _while_condtional20;
void* right_value108;
struct list$1tuple2$2charphsNodephph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&result_118, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_119, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value108 = (void*)0;
        if(_if_conditional187=self==((void*)0),        _if_conditional187) {
            __result76__ = __result_obj__ = ((void*)0);
            return __result76__;
        }
        result_118=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value101=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value100=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 142, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_119=self->head;
        while(_while_condtional20=it_119!=((void*)0),        _while_condtional20) {
            list$1tuple2$2charphsNodephph_add(result_118,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value108=tuple2$2charphsNodephp_clone(it_119->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_119=it_119->next;
        }
        __result81__ = __result_obj__ = result_118;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result81__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result77__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result77__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_116;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsNodephph* prev_it_117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_116=self->head;
                while(_while_condtional19=it_116!=((void*)0),                _while_condtional19) {
                    prev_it_117=it_116;
                    it_116=it_116->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional188=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional188) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional189;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional189=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional189) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional190=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional190) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value102;
struct list_item$1tuple2$2charphsNodephph* litem_120;
struct tuple2$2charphsNodeph* __dec_obj44;
_Bool _if_conditional194;
void* right_value103;
struct list_item$1tuple2$2charphsNodephph* litem_121;
struct tuple2$2charphsNodeph* __dec_obj45;
void* right_value104;
struct list_item$1tuple2$2charphsNodephph* litem_122;
struct tuple2$2charphsNodeph* __dec_obj46;
struct list$1tuple2$2charphsNodephph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value103 = (void*)0;
memset(&litem_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value104 = (void*)0;
memset(&litem_122, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional191=self->len==0,                _if_conditional191) {
                    litem_120=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value102=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 156, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_120->prev=((void*)0);
                    litem_120->next=((void*)0);
                    __dec_obj44=litem_120->item;
                    litem_120->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_120;
                    self->head=litem_120;
                }
                else {
                    if(_if_conditional194=self->len==1,                    _if_conditional194) {
                        litem_121=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value103=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 166, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_121->prev=self->head;
                        litem_121->next=((void*)0);
                        __dec_obj45=litem_121->item;
                        litem_121->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_121;
                        self->head->next=litem_121;
                    }
                    else {
                        litem_122=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value104=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 176, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_122->prev=self->tail;
                        litem_122->next=((void*)0);
                        __dec_obj46=litem_122->item;
                        litem_122->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_122;
                        self->tail=litem_122;
                    }
                }
                self->len++;
                __result78__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result78__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional192;
_Bool _if_conditional193;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional192=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional192) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional193=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional193) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional195;
struct tuple2$2charphsNodeph* __result79__;
void* right_value105;
struct tuple2$2charphsNodeph* result_123;
_Bool _if_conditional196;
void* right_value106;
char* __dec_obj47;
_Bool _if_conditional197;
void* right_value107;
struct sNode* __dec_obj48;
struct tuple2$2charphsNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value106 = (void*)0;
right_value107 = (void*)0;
                if(_if_conditional195=self==(void*)0,                _if_conditional195) {
                    __result79__ = __result_obj__ = (void*)0;
                    return __result79__;
                }
                result_123=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value105=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional196=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional196) {
                    __dec_obj47=result_123->v1;
                    result_123->v1=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(self->v1))));
                    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional197=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional197) {
                    __dec_obj48=result_123->v2;
                    result_123->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(self->v2))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result80__ = __result_obj__ = result_123;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = self->sline;
    return __result83__;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value113=__builtin_string(self->sname)));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value114;
char* none_generics_name_124;
void* right_value115;
char* fun_name2_125;
void* right_value116;
char* fun_name3_126;
struct sGenericsFun* generics_fun_129;
_Bool _if_conditional218;
void* right_value117;
_Bool _if_conditional219;
void* right_value118;
char* __result89__;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&none_generics_name_124, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&fun_name2_125, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&fun_name3_126, 0, sizeof(char*));
memset(&generics_fun_129, 0, sizeof(struct sGenericsFun*));
right_value117 = (void*)0;
right_value118 = (void*)0;
    none_generics_name_124=(char*)come_increment_ref_count(((char*)(right_value114=get_none_generics_name(type->mClass->mName))));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name2_125=(char*)come_increment_ref_count(((char*)(right_value115=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name3_126=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s_%s",none_generics_name_124,fun_name))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    generics_fun_129=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_126,((void*)0));
    if(generics_fun_129) {
        if(_if_conditional219=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(fun_name2_125)))),generics_fun_129,type,info),        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional219) {
            err_msg(info,"%s not found",fun_name3_126);
            __result89__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result89__;
        }
    }
    __result90__ = __result_obj__ = fun_name2_125;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result90__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_124 = come_decrement_ref_count2(none_generics_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_125 = come_decrement_ref_count2(fun_name2_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_126 = come_decrement_ref_count2(fun_name3_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional21;
_Bool _if_conditional204;
_Bool _if_conditional205;
struct sGenericsFun* __result85__;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sGenericsFun* __result86__;
struct sGenericsFun* __result87__;
struct sGenericsFun* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
        hash_127=string_get_hash_key(((char*)key))%self->size;
        it_128=hash_127;
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            if(_if_conditional204=self->item_existance[it_128],            _if_conditional204) {
                if(_if_conditional205=string_equals(self->keys[it_128],key),                _if_conditional205) {
                    __result85__ = __result_obj__ = self->items[it_128];
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                }
                it_128++;
                if(_if_conditional216=it_128>=self->size,                _if_conditional216) {
                    it_128=0;
                }
                else {
                    if(_if_conditional217=it_128==hash_127,                    _if_conditional217) {
                        __result86__ = __result_obj__ = default_value;
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                    }
                }
            }
            else {
                __result87__ = __result_obj__ = default_value;
                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
            }
        }
        __result88__ = __result_obj__ = default_value;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result88__;
        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional206=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional206) {
                            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional207=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional207) {
                            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional208=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional208) {
                            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional209=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional209) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional210=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional210) {
                            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional211=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional211) {
                            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional212=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional212) {
                            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional213=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional213) {
                            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional214=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional214) {
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional215=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional215) {
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional220;
_Bool __result91__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->method_block) {
        __result91__ = (_Bool)1;
        return __result91__;
    }
    else {
        __result92__ = (_Bool)0;
        return __result92__;
    }
}

char* sMethodCallNode_kind(){
void* __result_obj__;
void* right_value119;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sMethodCallNode")));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_130;
struct list$1tuple2$2charphsNodephph* params_131;
struct sNode* obj_132;
struct buffer* method_block_133;
int method_block_sline_134;
struct list$1sTypeph* method_generics_types_135;
void* right_value120;
struct list$1sTypeph* __dec_obj53;
_Bool _if_conditional221;
_Bool __result94__;
void* right_value121;
struct CVALUE* obj_value_136;
void* right_value122;
struct sType* obj_type_137;
struct sClass* klass_138;
_Bool calling_dynamic_method_139;
struct sType* lambda_type_140;
struct list$1tuple2$2charphsTypephph* o2_saved_141;
struct tuple2$2charphsTypeph* it_144;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_147;
struct sType* field_type_148;
_Bool _if_conditional226;
_Bool _if_conditional227;
void* right_value123;
struct sType* result_type_149;
void* right_value124;
void* right_value125;
struct list$1CVALUEph* come_params_152;
int i_153;
struct list$1tuple2$2charphsNodephph* o2_saved_154;
struct tuple2$2charphsNodeph* it_157;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_160;
struct sNode* node_161;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool __result110__;
void* right_value126;
struct CVALUE* come_value_162;
void* right_value127;
void* right_value128;
void* right_value129;
_Bool _if_conditional236;
void* right_value130;
void* right_value131;
struct buffer* buf_166;
void* right_value132;
int j_167;
struct list$1CVALUEph* o2_saved_168;
struct CVALUE* it_171;
_Bool _if_conditional241;
void* right_value133;
char* __dec_obj54;
_Bool _if_conditional242;
void* right_value134;
struct CVALUE* come_value2_174;
void* right_value135;
char* __dec_obj55;
void* right_value136;
struct sType* result_type2_175;
_Bool _if_conditional243;
void* right_value137;
void* right_value138;
char* __dec_obj56;
void* right_value139;
struct sType* __dec_obj57;
void* right_value140;
void* right_value141;
void* right_value142;
char* generics_fun_name_176;
struct sFun* fun_177;
int i_178;
void* right_value143;
char* new_fun_name_179;
_Bool _if_conditional263;
void* right_value144;
char* __dec_obj58;
_Bool _if_conditional264;
_Bool _if_conditional269;
void* right_value145;
void* right_value146;
char* __dec_obj59;
_Bool _if_conditional270;
_Bool __result129__;
void* right_value147;
struct sType* result_type_185;
void* right_value148;
struct sType* result_type2_186;
void* right_value149;
void* right_value150;
struct list$1sTypeph* param_types_187;
struct list$1sTypeph* o2_saved_188;
struct sType* it_191;
_Bool _if_conditional275;
void* right_value154;
struct sType* it2_197;
void* right_value155;
void* right_value156;
void* right_value157;
struct list$1CVALUEph* come_params_198;
void* right_value158;
void* right_value164;
struct map$2charphCVALUEph* label_params_202;
int i_203;
struct list$1tuple2$2charphsNodephph* o2_saved_204;
struct tuple2$2charphsNodeph* it_205;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_206;
struct sNode* node_207;
_Bool _if_conditional282;
void* right_value165;
void* right_value166;
void* right_value167;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional287;
_Bool __result142__;
void* right_value168;
struct CVALUE* come_value_211;
_Bool _if_conditional288;
int n_212;
struct list$1charph* o2_saved_213;
char* it_216;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value169;
void* right_value170;
void* right_value171;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value172;
void* right_value173;
void* right_value174;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value178;
_Bool _if_conditional321;
void* right_value179;
char* default_param_240;
char* param_name_241;
struct CVALUE* come_value_245;
_Bool _if_conditional326;
struct buffer* source_246;
char* p_247;
char* head_248;
int sline_249;
void* right_value180;
struct buffer* __dec_obj64;
void* right_value181;
struct sNode* node_250;
_Bool _if_conditional327;
_Bool __result168__;
struct buffer* __dec_obj65;
void* right_value182;
struct CVALUE* come_value_251;
_Bool _if_conditional328;
void* right_value183;
void* right_value184;
void* right_value185;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool __result169__;
_Bool _if_conditional331;
char* param_name_252;
struct CVALUE* come_value_253;
_Bool _if_conditional332;
void* right_value189;
_Bool _if_conditional340;
void* right_value190;
void* right_value191;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value194;
struct sNode* current_stack_frame_node_258;
_Bool _if_conditional345;
_Bool __result178__;
void* right_value195;
struct CVALUE* come_value_259;
void* right_value196;
void* right_value197;
struct buffer* method_block2_260;
void* right_value198;
struct sType* method_block_type_261;
void* right_value199;
char* class_name_262;
struct sClass* current_stack_frame_struct_266;
_Bool _if_conditional350;
_Bool __result183__;
void* right_value200;
struct sType* result_type_267;
struct list$1sTypeph* param_types_268;
struct list$1charph* param_names_269;
void* right_value201;
void* right_value202;
struct buffer* all_alhabet_sname_270;
char* p_271;
_Bool _while_condtional33;
_Bool _if_conditional351;
void* right_value203;
void* right_value204;
void* right_value205;
int i_272;
struct list$1sTypeph* o2_saved_273;
struct sType* it_274;
struct sType* param_type_275;
_Bool _if_conditional352;
void* right_value206;
char* param_name_276;
void* right_value207;
void* right_value208;
_Bool _if_conditional353;
void* right_value209;
char* param_name_277;
void* right_value210;
void* right_value211;
void* right_value212;
char* param_name_278;
void* right_value213;
void* right_value214;
_Bool _if_conditional354;
void* right_value215;
struct buffer* source3_279;
char* p_280;
char* head_281;
int sline_282;
struct buffer* __dec_obj70;
void* right_value216;
struct sNode* node_283;
_Bool _if_conditional355;
_Bool __result184__;
void* right_value217;
void* right_value218;
char* method_block_name_284;
void* right_value219;
struct CVALUE* come_value2_285;
struct sFun* fun2_286;
_Bool _if_conditional356;
_Bool __result185__;
struct sType* method_block_type2_287;
void* right_value220;
char* __dec_obj71;
void* right_value221;
struct sType* __dec_obj72;
struct buffer* __dec_obj73;
void* right_value222;
void* right_value223;
struct buffer* buf_288;
int j_289;
struct list$1CVALUEph* o2_saved_290;
struct CVALUE* it_291;
_Bool _if_conditional357;
void* right_value224;
struct CVALUE* come_value2_292;
void* right_value225;
char* __dec_obj74;
void* right_value226;
struct sType* __dec_obj75;
_Bool _if_conditional358;
void* right_value227;
char* __dec_obj76;
void* right_value228;
char* __dec_obj77;
_Bool _if_conditional359;
void* right_value229;
char* var_name_293;
void* right_value230;
struct sType* result_type_294;
void* right_value231;
struct sType* result_type2_295;
struct sType* result_type3_296;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
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
_Bool _if_conditional363;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
struct list$1sTypeph* __dec_obj78;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&params_131, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_132, 0, sizeof(struct sNode*));
memset(&method_block_133, 0, sizeof(struct buffer*));
memset(&method_block_sline_134, 0, sizeof(int));
memset(&method_generics_types_135, 0, sizeof(struct list$1sTypeph*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&obj_value_136, 0, sizeof(struct CVALUE*));
right_value122 = (void*)0;
memset(&obj_type_137, 0, sizeof(struct sType*));
memset(&klass_138, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_139, 0, sizeof(_Bool));
memset(&lambda_type_140, 0, sizeof(struct sType*));
memset(&o2_saved_141, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type_148, 0, sizeof(struct sType*));
memset(&field_name_147, 0, sizeof(char*));
memset(&field_type_148, 0, sizeof(struct sType*));
right_value123 = (void*)0;
memset(&result_type_149, 0, sizeof(struct sType*));
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&come_params_152, 0, sizeof(struct list$1CVALUEph*));
memset(&i_153, 0, sizeof(int));
memset(&o2_saved_154, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_157, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&label_160, 0, sizeof(char*));
memset(&node_161, 0, sizeof(struct sNode*));
right_value126 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
right_value132 = (void*)0;
memset(&j_167, 0, sizeof(int));
memset(&o2_saved_168, 0, sizeof(struct list$1CVALUEph*));
memset(&it_171, 0, sizeof(struct CVALUE*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&come_value2_174, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_type2_175, 0, sizeof(struct sType*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
memset(&fun_177, 0, sizeof(struct sFun*));
memset(&i_178, 0, sizeof(int));
right_value143 = (void*)0;
memset(&new_fun_name_179, 0, sizeof(char*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
right_value148 = (void*)0;
memset(&result_type2_186, 0, sizeof(struct sType*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&param_types_187, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_188, 0, sizeof(struct list$1sTypeph*));
memset(&it_191, 0, sizeof(struct sType*));
right_value154 = (void*)0;
memset(&it2_197, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&come_params_198, 0, sizeof(struct list$1CVALUEph*));
right_value158 = (void*)0;
right_value164 = (void*)0;
memset(&label_params_202, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_203, 0, sizeof(int));
memset(&o2_saved_204, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_205, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_206, 0, sizeof(char*));
memset(&node_207, 0, sizeof(struct sNode*));
memset(&label_206, 0, sizeof(char*));
memset(&node_207, 0, sizeof(struct sNode*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&come_value_211, 0, sizeof(struct CVALUE*));
memset(&n_212, 0, sizeof(int));
memset(&o2_saved_213, 0, sizeof(struct list$1charph*));
memset(&it_216, 0, sizeof(char*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&default_param_240, 0, sizeof(char*));
memset(&param_name_241, 0, sizeof(char*));
memset(&come_value_245, 0, sizeof(struct CVALUE*));
memset(&source_246, 0, sizeof(struct buffer*));
memset(&p_247, 0, sizeof(char*));
memset(&head_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&node_250, 0, sizeof(struct sNode*));
right_value182 = (void*)0;
memset(&come_value_251, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&param_name_252, 0, sizeof(char*));
memset(&come_value_253, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value194 = (void*)0;
memset(&current_stack_frame_node_258, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&come_value_259, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&method_block2_260, 0, sizeof(struct buffer*));
right_value198 = (void*)0;
memset(&method_block_type_261, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&class_name_262, 0, sizeof(char*));
memset(&current_stack_frame_struct_266, 0, sizeof(struct sClass*));
right_value200 = (void*)0;
memset(&result_type_267, 0, sizeof(struct sType*));
memset(&param_types_268, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_269, 0, sizeof(struct list$1charph*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&all_alhabet_sname_270, 0, sizeof(struct buffer*));
memset(&p_271, 0, sizeof(char*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&i_272, 0, sizeof(int));
memset(&o2_saved_273, 0, sizeof(struct list$1sTypeph*));
memset(&it_274, 0, sizeof(struct sType*));
memset(&param_type_275, 0, sizeof(struct sType*));
right_value206 = (void*)0;
memset(&param_name_276, 0, sizeof(char*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&param_name_277, 0, sizeof(char*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&param_name_278, 0, sizeof(char*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&source3_279, 0, sizeof(struct buffer*));
memset(&p_280, 0, sizeof(char*));
memset(&head_281, 0, sizeof(char*));
memset(&sline_282, 0, sizeof(int));
right_value216 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&method_block_name_284, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&come_value2_285, 0, sizeof(struct CVALUE*));
memset(&fun2_286, 0, sizeof(struct sFun*));
memset(&method_block_type2_287, 0, sizeof(struct sType*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&buf_288, 0, sizeof(struct buffer*));
memset(&j_289, 0, sizeof(int));
memset(&o2_saved_290, 0, sizeof(struct list$1CVALUEph*));
memset(&it_291, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
memset(&come_value2_292, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&var_name_293, 0, sizeof(char*));
right_value230 = (void*)0;
memset(&result_type_294, 0, sizeof(struct sType*));
right_value231 = (void*)0;
memset(&result_type2_295, 0, sizeof(struct sType*));
memset(&result_type3_296, 0, sizeof(struct sType*));
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
    fun_name_130=self->fun_name;
    params_131=self->params;
    obj_132=self->obj;
    method_block_133=self->method_block;
    method_block_sline_134=self->method_block_sline;
    method_generics_types_135=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj53=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional221=!node_compile(obj_132,info),    _if_conditional221) {
        __result94__ = (_Bool)0;
        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    obj_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    obj_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(obj_value_136->type))));
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_138=obj_type_137->mClass;
    calling_dynamic_method_139=(_Bool)0;
    lambda_type_140=((void*)0);
    for(    o2_saved_141=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_138->mFields)),it_144=list$1tuple2$2charphsTypephph_begin((o2_saved_141));    !list$1tuple2$2charphsTypephph_end((o2_saved_141));    it_144=list$1tuple2$2charphsTypephph_next((o2_saved_141))    ){
        multiple_assign_var1=it_144;
        field_name_147=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_148=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional226=string_operator_equals(field_name_147,fun_name_130)&&string_operator_equals(field_type_148->mClass->mName,"lambda"),        _if_conditional226) {
            calling_dynamic_method_139=(_Bool)1;
            lambda_type_140=field_type_148;
            field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_147 = come_decrement_ref_count2(field_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_139) {
        result_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(lambda_type_140->mResultType->v1))));
        come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_149->mStatic=(_Bool)0;
        come_params_152=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value125=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value124=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 265, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_153=0;
        for(        o2_saved_154=(params_131),it_157=list$1tuple2$2charphsNodephph_begin((o2_saved_154));        !list$1tuple2$2charphsNodephph_end((o2_saved_154));        it_157=list$1tuple2$2charphsNodephph_next((o2_saved_154))        ){
            multiple_assign_var2=it_157;
            label_160=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_161=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional232=i_153==0,            _if_conditional232) {
                list$1CVALUEph_push_back(come_params_152,(struct CVALUE*)come_increment_ref_count(obj_value_136));
                i_153++;
            }
            else {
                if(_if_conditional233=!node_compile(node_161,info),                _if_conditional233) {
                    __result110__ = (_Bool)0;
                    label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result110__;
                }
                come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value126=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                check_assign_type(((char*)(right_value129=xsprintf("\%s param num \%s is assinged to",((char*)(right_value127=charp_to_string(fun_name_130))),((char*)(right_value128=int_to_string(i_153)))))),list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1),come_value_162->type,come_value_162,(_Bool)0,(_Bool)1,info);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional236=list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1)->mHeap&&come_value_162->type->mHeap,                _if_conditional236) {
                    std_move(list$1sTypephp_operator_load_element(lambda_type_140->mParamTypes,i_153-1),come_value_162->type,come_value_162,info);
                }
                list$1CVALUEph_push_back(come_params_152,(struct CVALUE*)come_increment_ref_count(come_value_162));
                i_153++;
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_160 = come_decrement_ref_count2(label_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 295, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_166,((char*)(right_value132=xsprintf("%s->%s",obj_value_136->c_value,fun_name_130))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_166,"(");
        j_167=0;
        for(        o2_saved_168=(struct list$1CVALUEph*)come_increment_ref_count((come_params_152)),it_171=list$1CVALUEph_begin((o2_saved_168));        !list$1CVALUEph_end((o2_saved_168));        it_171=list$1CVALUEph_next((o2_saved_168))        ){
            if(_if_conditional241=j_167==0,            _if_conditional241) {
                __dec_obj54=it_171->c_value;
                it_171->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s->_protocol_obj",it_171->c_value))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            buffer_append_str(buf_166,it_171->c_value);
            if(_if_conditional242=j_167!=list$1CVALUEph_length(come_params_152)-1,            _if_conditional242) {
                buffer_append_str(buf_166,",");
            }
            j_167++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_166,")");
        come_value2_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 315, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj55=come_value2_174->c_value;
        come_value2_174->c_value=(char*)come_increment_ref_count(((char*)(right_value135=buffer_to_string(buf_166))));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type2_175=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=solve_generics(result_type_149,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(result_type2_175->mHeap) {
            __dec_obj56=come_value2_174->c_value;
            come_value2_174->c_value=(char*)come_increment_ref_count(((char*)(right_value138=append_object_to_right_values(((char*)(right_value137=buffer_to_string(buf_166))),(struct sType*)come_increment_ref_count(result_type2_175),info))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj57=come_value2_174->type;
        come_value2_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(result_type2_175))));
        come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_174->type->mStatic=(_Bool)0;
        come_value2_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_174));
        come_call_finalizer2(sType_finalize,result_type_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value142=string_to_string(((char*)(right_value141=make_generics_function(obj_type_137,(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(fun_name_130)))),info)))))));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_177=((void*)0);
        for(        i_178=128;        i_178>=1;        i_178--        ){
            new_fun_name_179=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s_v%d",generics_fun_name_176,i_178))));
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_177=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_179);
            if(_if_conditional263=fun_177!=((void*)0),            _if_conditional263) {
                __dec_obj58=generics_fun_name_176;
                generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(new_fun_name_179))));
                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_179 = come_decrement_ref_count2(new_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional264=fun_177==((void*)0),        _if_conditional264) {
            fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
            if(_if_conditional269=fun_177==((void*)0),            _if_conditional269) {
                __dec_obj59=generics_fun_name_176;
                generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value146=create_method_name(obj_type_137,(_Bool)0,((char*)(right_value145=__builtin_string(fun_name_130))),info))));
                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
                if(_if_conditional270=fun_177==((void*)0),                _if_conditional270) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_176,info->come_fun->mName);
                    __result129__ = (_Bool)1;
                    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result129__;
                }
            }
        }
        result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(fun_177->mResultType))));
        come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_185->mStatic=(_Bool)0;
        result_type2_186=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=solve_generics(result_type_185,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_187=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value150=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value149=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 369, "list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_188=(struct list$1sTypeph*)come_increment_ref_count((fun_177->mParamTypes)),it_191=list$1sTypeph_begin((o2_saved_188));        !list$1sTypeph_end((o2_saved_188));        it_191=list$1sTypeph_next((o2_saved_188))        ){
            if(_if_conditional275=it_191==((void*)0),            _if_conditional275) {
                list$1sTypeph_push_back(param_types_187,it_191);
            }
            else {
                it2_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=solve_generics(it_191,info->generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1sTypeph_push_back(param_types_187,(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(it2_197)))));
                come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,it2_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_params_198=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value157=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value156=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 381, "list$1CVALUEph"))))))));
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1CVALUEphp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        label_params_202=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value164=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value158=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 383, "map$2charphCVALUEph"))))))));
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        i_203=0;
        for(        o2_saved_204=(params_131),it_205=list$1tuple2$2charphsNodephph_begin((o2_saved_204));        !list$1tuple2$2charphsNodephph_end((o2_saved_204));        it_205=list$1tuple2$2charphsNodephph_next((o2_saved_204))        ){
            multiple_assign_var3=it_205;
            label_206=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_207=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(_if_conditional282=i_203==0,            _if_conditional282) {
                check_assign_type(((char*)(right_value167=xsprintf("\%s param num \%s is assinged to",((char*)(right_value165=charp_to_string(fun_name_130))),((char*)(right_value166=int_to_string(i_203)))))),list$1sTypephp_operator_load_element(param_types_187,i_203),obj_value_136->type,obj_value_136,(_Bool)0,(_Bool)1,info);
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional283=list$1sTypephp_operator_load_element(param_types_187,i_203)->mHeap&&obj_value_136->type->mHeap,                _if_conditional283) {
                    std_move(list$1sTypephp_operator_load_element(param_types_187,i_203),obj_value_136->type,obj_value_136,info);
                }
                else {
                    if(_if_conditional284=list$1sTypephp_operator_load_element(param_types_187,i_203)->mHeap&&!obj_value_136->type->mHeap&&!gComeGC,                    _if_conditional284) {
                        err_msg(info,"require heap parametor(%s)",list$1charphp_operator_load_element(fun_177->mParamNames,i_203));
                        exit(2);
                    }
                }
                list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(obj_value_136));
                i_203++;
            }
            else {
                if(_if_conditional287=!node_compile(node_207,info),                _if_conditional287) {
                    __result142__ = (_Bool)0;
                    label_206 = come_decrement_ref_count2(label_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_207) { node_207 = come_decrement_ref_count2(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result142__;
                }
                come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional288=label_206!=((void*)0),                _if_conditional288) {
                    n_212=0;
                    for(                    o2_saved_213=(struct list$1charph*)come_increment_ref_count((fun_177->mParamNames)),it_216=list$1charph_begin((o2_saved_213));                    !list$1charph_end((o2_saved_213));                    it_216=list$1charph_next((o2_saved_213))                    ){
                        if(_if_conditional293=string_operator_equals(label_206,it_216),                        _if_conditional293) {
                            break;
                        }
                        n_212++;
                    }
                    come_call_finalizer2(list$1charphp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional294=list$1sTypephp_operator_load_element(param_types_187,n_212),                    _if_conditional294) {
                        check_assign_type(((char*)(right_value171=xsprintf("\%s param num \%s is assinged to",((char*)(right_value169=charp_to_string(fun_name_130))),((char*)(right_value170=int_to_string(i_203)))))),list$1sTypephp_operator_load_element(param_types_187,n_212),come_value_211->type,come_value_211,(_Bool)0,(_Bool)1,info);
                        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional295=list$1sTypephp_operator_load_element(param_types_187,n_212)&&list$1sTypephp_operator_load_element(param_types_187,n_212)->mHeap&&come_value_211->type->mHeap,                    _if_conditional295) {
                        std_move(list$1sTypephp_operator_load_element(param_types_187,n_212),come_value_211->type,come_value_211,info);
                    }
                }
                else {
                    if(_if_conditional296=list$1sTypephp_operator_load_element(param_types_187,i_203),                    _if_conditional296) {
                        check_assign_type(((char*)(right_value174=xsprintf("\%s param num \%s is assinged to",((char*)(right_value172=charp_to_string(fun_name_130))),((char*)(right_value173=int_to_string(i_203)))))),list$1sTypephp_operator_load_element(param_types_187,i_203),come_value_211->type,come_value_211,(_Bool)0,(_Bool)1,info);
                        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional297=list$1sTypephp_operator_load_element(param_types_187,i_203)&&list$1sTypephp_operator_load_element(param_types_187,i_203)->mHeap&&come_value_211->type->mHeap,                    _if_conditional297) {
                        std_move(list$1sTypephp_operator_load_element(param_types_187,i_203),come_value_211->type,come_value_211,info);
                    }
                }
                if(_if_conditional298=label_206==((void*)0),                _if_conditional298) {
                    list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(come_value_211));
                    i_203++;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_202,(char*)come_increment_ref_count(((char*)(right_value178=__builtin_string(label_206)))),(struct CVALUE*)come_increment_ref_count(come_value_211));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                dec_stack_ptr(1,info);
                come_call_finalizer2(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            label_206 = come_decrement_ref_count2(label_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_207) { node_207 = come_decrement_ref_count2(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional321=list$1tuple2$2charphsNodephph_length(params_131)<list$1sTypeph_length(fun_177->mParamTypes)+(method_block_133?-2:0),        _if_conditional321) {
            for(            ;            i_203<list$1sTypeph_length(fun_177->mParamTypes)+(method_block_133?-2:0);            i_203++            ){
                default_param_240=(char*)come_increment_ref_count(((char*)(right_value179=string_clone(list$1charphp_operator_load_element(fun_177->mParamDefaultParametors,i_203)))));
                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_241=list$1charphp_operator_load_element(fun_177->mParamNames,i_203);
                come_value_245=map$2charphCVALUEphp_operator_load_element(label_params_202,param_name_241);
                if(_if_conditional326=default_param_240&&string_operator_not_equals(default_param_240,""),                _if_conditional326) {
                    source_246=(struct buffer*)come_increment_ref_count(info->source);
                    p_247=info->p;
                    head_248=info->head;
                    sline_249=info->sline;
                    __dec_obj64=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=string_to_buffer(default_param_240))));
                    come_call_finalizer2(buffer_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=expression_v13(info))));
                    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional327=!node_compile(node_250,info),                    _if_conditional327) {
                        __result168__ = (_Bool)0;
                        come_call_finalizer2(buffer_finalize,source_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(node_250) { node_250 = come_decrement_ref_count2(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_240 = come_decrement_ref_count2(default_param_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result168__;
                    }
                    __dec_obj65=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_246);
                    come_call_finalizer2(buffer_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    info->p=p_247;
                    info->head=head_248;
                    info->sline=sline_249;
                    come_value_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional328=list$1sTypephp_operator_load_element(param_types_187,i_203),                    _if_conditional328) {
                        check_assign_type(((char*)(right_value185=xsprintf("\%s param num \%s is assinged to",((char*)(right_value183=charp_to_string(fun_name_130))),((char*)(right_value184=int_to_string(i_203)))))),list$1sTypephp_operator_load_element(param_types_187,i_203),come_value_251->type,come_value_251,(_Bool)0,(_Bool)1,info);
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional329=list$1sTypephp_operator_load_element(param_types_187,i_203)&&list$1sTypephp_operator_load_element(param_types_187,i_203)->mHeap&&come_value_251->type->mHeap,                    _if_conditional329) {
                        std_move(list$1sTypephp_operator_load_element(param_types_187,i_203),come_value_251->type,come_value_251,info);
                    }
                    list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(come_value_251));
                    dec_stack_ptr(1,info);
                    come_call_finalizer2(buffer_finalize,source_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    if(node_250) { node_250 = come_decrement_ref_count2(node_250, ((struct sNode*)node_250)->finalize, ((struct sNode*)node_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(come_value_245) {
                        list$1CVALUEph_push_back(come_params_198,((void*)0));
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_177->mName);
                        __result169__ = (_Bool)0;
                        default_param_240 = come_decrement_ref_count2(default_param_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result169__;
                    }
                }
                default_param_240 = come_decrement_ref_count2(default_param_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional331=map$2charphCVALUEph_length(label_params_202)>0,        _if_conditional331) {
            for(            i_203=0;            i_203<list$1charph_length(fun_177->mParamNames)+(method_block_133?-2:0);            i_203++            ){
                param_name_252=list$1charphp_operator_load_element(fun_177->mParamNames,i_203);
                come_value_253=map$2charphCVALUEphp_operator_load_element(label_params_202,param_name_252);
                if(come_value_253) {
                    list$1CVALUEph_replace(come_params_198,i_203,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=CVALUE_clone(come_value_253)))));
                    come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(method_block_133) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 514, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value191=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value190=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 514, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=_inf_value1)));
            come_call_finalizer2(sCurrentNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCurrentNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional345=!node_compile(current_stack_frame_node_258,info),            _if_conditional345) {
                __result178__ = (_Bool)0;
                if(current_stack_frame_node_258) { current_stack_frame_node_258 = come_decrement_ref_count2(current_stack_frame_node_258, ((struct sNode*)current_stack_frame_node_258)->finalize, ((struct sNode*)current_stack_frame_node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result178__;
            }
            come_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(come_value_259));
            dec_stack_ptr(1,info);
            method_block2_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 524, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            method_block_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(list$1sTypephp_operator_load_element(fun_177->mParamTypes,-1)))));
            come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            class_name_262=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1sTypephp_operator_load_element(method_block_type_261->mParamTypes,0)->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_262);
            current_stack_frame_struct_266=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_262);
            info->num_method_block++;
            if(_if_conditional350=string_operator_not_equals(method_block_type_261->mClass->mName,"lambda"),            _if_conditional350) {
                err_msg(info,"This function does not have method block(%s)",fun_name_130);
                __result183__ = (_Bool)0;
                if(current_stack_frame_node_258) { current_stack_frame_node_258 = come_decrement_ref_count2(current_stack_frame_node_258, ((struct sNode*)current_stack_frame_node_258)->finalize, ((struct sNode*)current_stack_frame_node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_262 = come_decrement_ref_count2(class_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result183__;
            }
            result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(method_block_type_261->mResultType->v1))));
            come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_267->mStatic=(_Bool)0;
            param_types_268=method_block_type_261->mParamTypes;
            param_names_269=method_block_type_261->mParamNames;
            all_alhabet_sname_270=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 545, "buffer"))))))));
            come_call_finalizer2(buffer_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(buffer_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            {
                p_271=info->sname;
                while(_while_condtional33=*p_271,                _while_condtional33) {
                    if(_if_conditional351=xisalnum(*p_271),                    _if_conditional351) {
                        buffer_append_char(all_alhabet_sname_270,*p_271++);
                    }
                    else {
                        p_271++;
                    }
                }
            }
            buffer_append_str(method_block2_260,((char*)(right_value205=xsprintf("%s method_block%d_%s(",((char*)(right_value203=make_type_name_string(result_type_267,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value204=buffer_to_string(all_alhabet_sname_270)))))));
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_272=0;
            for(            o2_saved_273=(param_types_268),it_274=list$1sTypeph_begin((o2_saved_273));            !list$1sTypeph_end((o2_saved_273));            it_274=list$1sTypeph_next((o2_saved_273))            ){
                param_type_275=it_274;
                if(_if_conditional352=i_272==0,                _if_conditional352) {
                    param_name_276=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("parent"))));
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(method_block2_260,((char*)(right_value208=xsprintf("%s",((char*)(right_value207=make_define_var(param_type_275,param_name_276,(_Bool)0,info)))))));
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_276 = come_decrement_ref_count2(param_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional353=i_272==1,                    _if_conditional353) {
                        param_name_277=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("it"))));
                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_260,((char*)(right_value211=xsprintf("%s",((char*)(right_value210=make_define_var(param_type_275,param_name_277,(_Bool)0,info)))))));
                        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_277 = come_decrement_ref_count2(param_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_278=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("it%d",i_272))));
                        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_260,((char*)(right_value214=xsprintf("%s",((char*)(right_value213=make_define_var(param_type_275,param_name_278,(_Bool)0,info)))))));
                        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_278 = come_decrement_ref_count2(param_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional354=i_272!=list$1sTypeph_length(param_types_268)-1,                _if_conditional354) {
                    buffer_append_str(method_block2_260,",");
                }
                i_272++;
            }
            buffer_append_str(method_block2_260,")\n");
            buffer_append_str(method_block2_260,((char*)(right_value215=buffer_to_string(method_block_133))));
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            source3_279=(struct buffer*)come_increment_ref_count(info->source);
            p_280=info->p;
            head_281=info->head;
            sline_282=info->sline;
            __dec_obj70=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_260);
            come_call_finalizer2(buffer_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_134;
            node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=parse_function(info))));
            if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional355=!node_compile(node_283,info),            _if_conditional355) {
                __result184__ = (_Bool)0;
                if(current_stack_frame_node_258) { current_stack_frame_node_258 = come_decrement_ref_count2(current_stack_frame_node_258, ((struct sNode*)current_stack_frame_node_258)->finalize, ((struct sNode*)current_stack_frame_node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_262 = come_decrement_ref_count2(class_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result184__;
            }
            method_block_name_284=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value217=buffer_to_string(all_alhabet_sname_270)))))));
            right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_value2_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 609, "CVALUE"))));
            come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun2_286=map$2charphsFunph_at(info->funcs,method_block_name_284,((void*)0));
            if(_if_conditional356=fun2_286==((void*)0),            _if_conditional356) {
                err_msg(info,"method block function not found(%s)",method_block_name_284);
                __result185__ = (_Bool)1;
                if(current_stack_frame_node_258) { current_stack_frame_node_258 = come_decrement_ref_count2(current_stack_frame_node_258, ((struct sNode*)current_stack_frame_node_258)->finalize, ((struct sNode*)current_stack_frame_node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,method_block2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,method_block_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                class_name_262 = come_decrement_ref_count2(class_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,all_alhabet_sname_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,source3_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_284 = come_decrement_ref_count2(method_block_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,come_value2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result185__;
            }
            method_block_type2_287=fun2_286->mLambdaType;
            __dec_obj71=come_value2_285->c_value;
            come_value2_285->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("(void*)%s",method_block_name_284))));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj72=come_value2_285->type;
            come_value2_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(method_block_type2_287))));
            come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_value2_285->var=((void*)0);
            list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(come_value2_285));
            __dec_obj73=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_279);
            come_call_finalizer2(buffer_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            info->p=p_280;
            info->head=head_281;
            info->sline=sline_282;
            info->current_stack_frame_struct=current_stack_frame_struct_266;
            if(current_stack_frame_node_258) { current_stack_frame_node_258 = come_decrement_ref_count2(current_stack_frame_node_258, ((struct sNode*)current_stack_frame_node_258)->finalize, ((struct sNode*)current_stack_frame_node_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(CVALUE_finalize,come_value_259, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,method_block2_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,method_block_type_261, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            class_name_262 = come_decrement_ref_count2(class_name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,all_alhabet_sname_270, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source3_279, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_284 = come_decrement_ref_count2(method_block_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value2_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buf_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 634, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_288,generics_fun_name_176);
        buffer_append_str(buf_288,"(");
        j_289=0;
        for(        o2_saved_290=(struct list$1CVALUEph*)come_increment_ref_count((come_params_198)),it_291=list$1CVALUEph_begin((o2_saved_290));        !list$1CVALUEph_end((o2_saved_290));        it_291=list$1CVALUEph_next((o2_saved_290))        ){
            buffer_append_str(buf_288,it_291->c_value);
            if(_if_conditional357=j_289!=list$1CVALUEph_length(come_params_198)-1,            _if_conditional357) {
                buffer_append_str(buf_288,",");
            }
            j_289++;
        }
        come_call_finalizer2(list$1CVALUEphp_finalize,o2_saved_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_288,")");
        come_value2_292=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 652, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value2_292->c_value;
        come_value2_292->c_value=(char*)come_increment_ref_count(((char*)(right_value225=buffer_to_string(buf_288))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj75=come_value2_292->type;
        come_value2_292->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(result_type2_186))));
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_292->type->mStatic=(_Bool)0;
        come_value2_292->var=((void*)0);
        if(result_type2_186->mHeap) {
            __dec_obj76=come_value2_292->c_value;
            come_value2_292->c_value=(char*)come_increment_ref_count(((char*)(right_value227=append_object_to_right_values(come_value2_292->c_value,(struct sType*)come_increment_ref_count(result_type2_186),info))));
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj77=come_value2_292->c_value;
        come_value2_292->c_value=(char*)come_increment_ref_count(((char*)(right_value228=append_stackframe(come_value2_292->c_value,come_value2_292->type,info))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value2_292->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_292));
        if(method_block_133) {
            var_name_293=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_294=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type2_295=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=solve_generics(result_type_294,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type3_296=result_type2_295->mNoSolvedGenericsType->v1;
            if(result_type2_295->mNoSolvedGenericsType->v1) {
                result_type3_296=result_type2_295->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_296=result_type2_295;
            }
            if(info->in_loop) {
                if(_if_conditional362=string_operator_equals(result_type3_296->mClass->mName,"void")&&result_type3_296->mPointerNum==0,                _if_conditional362) {
                    add_come_last_code3(info,((char*)(right_value235=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value232=string_to_string(var_name_293))),((char*)(right_value233=string_to_string(var_name_293))),((char*)(right_value234=string_to_string(var_name_293)))))));
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value242=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value236=string_to_string(var_name_293))),((char*)(right_value237=string_to_string(var_name_293))),((char*)(right_value238=string_to_string(var_name_293))),((char*)(right_value240=string_to_string(((char*)(right_value239=make_type_name_string(result_type2_295,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value241=string_to_string(var_name_293)))))));
                    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional363=string_operator_equals(result_type3_296->mClass->mName,"void")&&result_type3_296->mPointerNum==0,                _if_conditional363) {
                    add_come_last_code3(info,((char*)(right_value244=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value243=string_to_string(var_name_293)))))));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    add_come_last_code3(info,((char*)(right_value249=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value245=string_to_string(var_name_293))),((char*)(right_value247=string_to_string(((char*)(right_value246=make_type_name_string(result_type2_295,(_Bool)0,(_Bool)0,(_Bool)0,info)))))),((char*)(right_value248=string_to_string(var_name_293)))))));
                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            var_name_293 = come_decrement_ref_count2(var_name_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_294, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type2_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type2_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1CVALUEphp_finalize,come_params_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(map$2charphCVALUEphp_finalize,label_params_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,buf_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,come_value2_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,info->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj78=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_135);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result186__ = (_Bool)1;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result186__;
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,obj_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,obj_type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional222;
struct tuple2$2charphsTypeph* result_142;
struct tuple2$2charphsTypeph* __result95__;
_Bool _if_conditional223;
struct tuple2$2charphsTypeph* __result96__;
struct tuple2$2charphsTypeph* result_143;
struct tuple2$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_143, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional222=self==((void*)0),        _if_conditional222) {
            memset(&result_142,0,sizeof(struct tuple2$2charphsTypeph*));
            __result95__ = __result_obj__ = result_142;
            return __result95__;
        }
        self->it=self->head;
        if(self->it) {
            __result96__ = __result_obj__ = self->it->item;
            return __result96__;
        }
        memset(&result_143,0,sizeof(struct tuple2$2charphsTypeph*));
        __result97__ = __result_obj__ = result_143;
        return __result97__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        __result98__ = self==((void*)0)||self->it==((void*)0);
        return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional224;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional224=self==((void*)0)||self->it==((void*)0),        _if_conditional224) {
            memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
            __result99__ = __result_obj__ = result_145;
            return __result99__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result100__ = __result_obj__ = self->it->item;
            return __result100__;
        }
        memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
        __result101__ = __result_obj__ = result_146;
        return __result101__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result102__ = __result_obj__ = self;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result102__;
            come_call_finalizer2(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_150;
_Bool _while_condtional22;
struct list_item$1CVALUEph* prev_it_151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_150, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_151, 0, sizeof(struct list_item$1CVALUEph*));
                it_150=self->head;
                while(_while_condtional22=it_150!=((void*)0),                _while_condtional22) {
                    prev_it_151=it_150;
                    it_150=it_150->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct tuple2$2charphsNodeph* result_155;
struct tuple2$2charphsNodeph* __result103__;
_Bool _if_conditional229;
struct tuple2$2charphsNodeph* __result104__;
struct tuple2$2charphsNodeph* result_156;
struct tuple2$2charphsNodeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_156, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional228=self==((void*)0),            _if_conditional228) {
                memset(&result_155,0,sizeof(struct tuple2$2charphsNodeph*));
                __result103__ = __result_obj__ = result_155;
                return __result103__;
            }
            self->it=self->head;
            if(self->it) {
                __result104__ = __result_obj__ = self->it->item;
                return __result104__;
            }
            memset(&result_156,0,sizeof(struct tuple2$2charphsNodeph*));
            __result105__ = __result_obj__ = result_156;
            return __result105__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
            __result106__ = self==((void*)0)||self->it==((void*)0);
            return __result106__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional230;
struct tuple2$2charphsNodeph* result_158;
struct tuple2$2charphsNodeph* __result107__;
_Bool _if_conditional231;
struct tuple2$2charphsNodeph* __result108__;
struct tuple2$2charphsNodeph* result_159;
struct tuple2$2charphsNodeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_159, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional230=self==((void*)0)||self->it==((void*)0),            _if_conditional230) {
                memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*));
                __result107__ = __result_obj__ = result_158;
                return __result107__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result108__ = __result_obj__ = self->it->item;
                return __result108__;
            }
            memset(&result_159,0,sizeof(struct tuple2$2charphsNodeph*));
            __result109__ = __result_obj__ = result_159;
            return __result109__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional234;
struct list_item$1sTypeph* it_163;
int i_164;
_Bool _while_condtional23;
_Bool _if_conditional235;
struct sType* __result111__;
struct sType* default_value_165;
struct sType* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_163, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_164, 0, sizeof(int));
memset(&default_value_165, 0, sizeof(struct sType*));
                    if(_if_conditional234=position<0,                    _if_conditional234) {
                        position+=self->len;
                    }
                    it_163=self->head;
                    i_164=0;
                    while(_while_condtional23=it_163!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional235=position==i_164,                        _if_conditional235) {
                            __result111__ = __result_obj__ = it_163->item;
                            return __result111__;
                        }
                        it_163=it_163->next;
                        i_164++;
                    }
                    memset(&default_value_165,0,sizeof(struct sType*));
                    __result112__ = __result_obj__ = default_value_165;
                    come_call_finalizer2(sType_finalize,default_value_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result112__;
                    come_call_finalizer2(sType_finalize,default_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional237;
struct CVALUE* result_169;
struct CVALUE* __result113__;
_Bool _if_conditional238;
struct CVALUE* __result114__;
struct CVALUE* result_170;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct CVALUE*));
memset(&result_170, 0, sizeof(struct CVALUE*));
            if(_if_conditional237=self==((void*)0),            _if_conditional237) {
                memset(&result_169,0,sizeof(struct CVALUE*));
                __result113__ = __result_obj__ = result_169;
                return __result113__;
            }
            self->it=self->head;
            if(self->it) {
                __result114__ = __result_obj__ = self->it->item;
                return __result114__;
            }
            memset(&result_170,0,sizeof(struct CVALUE*));
            __result115__ = __result_obj__ = result_170;
            return __result115__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
            __result116__ = self==((void*)0)||self->it==((void*)0);
            return __result116__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct CVALUE* result_172;
struct CVALUE* __result117__;
_Bool _if_conditional240;
struct CVALUE* __result118__;
struct CVALUE* result_173;
struct CVALUE* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct CVALUE*));
memset(&result_173, 0, sizeof(struct CVALUE*));
            if(_if_conditional239=self==((void*)0)||self->it==((void*)0),            _if_conditional239) {
                memset(&result_172,0,sizeof(struct CVALUE*));
                __result117__ = __result_obj__ = result_172;
                return __result117__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result118__ = __result_obj__ = self->it->item;
                return __result118__;
            }
            memset(&result_173,0,sizeof(struct CVALUE*));
            __result119__ = __result_obj__ = result_173;
            return __result119__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                __result120__ = self->len;
                return __result120__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_180;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional24;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sFun* __result121__;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct sFun* __result122__;
struct sFun* __result123__;
struct sFun* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_180, 0, sizeof(struct sFun*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
                memset(&default_value_180,0,sizeof(struct sFun*));
                hash_181=string_get_hash_key(((char*)key))%self->size;
                it_182=hash_181;
                while(_while_condtional24=(_Bool)1,                _while_condtional24) {
                    if(_if_conditional244=self->item_existance[it_182],                    _if_conditional244) {
                        if(_if_conditional245=string_equals(self->keys[it_182],key),                        _if_conditional245) {
                            __result121__ = __result_obj__ = self->items[it_182];
                            come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result121__;
                        }
                        it_182++;
                        if(_if_conditional261=it_182>=self->size,                        _if_conditional261) {
                            it_182=0;
                        }
                        else {
                            if(_if_conditional262=it_182==hash_181,                            _if_conditional262) {
                                __result122__ = __result_obj__ = default_value_180;
                                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result122__;
                            }
                        }
                    }
                    else {
                        __result123__ = __result_obj__ = default_value_180;
                        come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result123__;
                    }
                }
                __result124__ = __result_obj__ = default_value_180;
                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result124__;
                come_call_finalizer2(sFun_finalize,default_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional246=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional246) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional247) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional248=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional248) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional249) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional251) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional252) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional255=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional255) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional256) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional257=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional257) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional258=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional258) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional259=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional259) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional260) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional253=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional253) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional254=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional254) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_183;
unsigned int it_184;
_Bool _while_condtional25;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sFun* __result125__;
_Bool _if_conditional267;
_Bool _if_conditional268;
struct sFun* __result126__;
struct sFun* __result127__;
struct sFun* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_183, 0, sizeof(unsigned int));
memset(&it_184, 0, sizeof(unsigned int));
                hash_183=string_get_hash_key(((char*)key))%self->size;
                it_184=hash_183;
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    if(_if_conditional265=self->item_existance[it_184],                    _if_conditional265) {
                        if(_if_conditional266=string_equals(self->keys[it_184],key),                        _if_conditional266) {
                            __result125__ = __result_obj__ = self->items[it_184];
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                        it_184++;
                        if(_if_conditional267=it_184>=self->size,                        _if_conditional267) {
                            it_184=0;
                        }
                        else {
                            if(_if_conditional268=it_184==hash_183,                            _if_conditional268) {
                                __result126__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result126__;
                            }
                        }
                    }
                    else {
                        __result127__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result127__;
                    }
                }
                __result128__ = __result_obj__ = default_value;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result128__;
                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sType* result_189;
struct sType* __result130__;
_Bool _if_conditional272;
struct sType* __result131__;
struct sType* result_190;
struct sType* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_189, 0, sizeof(struct sType*));
memset(&result_190, 0, sizeof(struct sType*));
            if(_if_conditional271=self==((void*)0),            _if_conditional271) {
                memset(&result_189,0,sizeof(struct sType*));
                __result130__ = __result_obj__ = result_189;
                return __result130__;
            }
            self->it=self->head;
            if(self->it) {
                __result131__ = __result_obj__ = self->it->item;
                return __result131__;
            }
            memset(&result_190,0,sizeof(struct sType*));
            __result132__ = __result_obj__ = result_190;
            return __result132__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
            __result133__ = self==((void*)0)||self->it==((void*)0);
            return __result133__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sType* result_192;
struct sType* __result134__;
_Bool _if_conditional274;
struct sType* __result135__;
struct sType* result_193;
struct sType* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_192, 0, sizeof(struct sType*));
memset(&result_193, 0, sizeof(struct sType*));
            if(_if_conditional273=self==((void*)0)||self->it==((void*)0),            _if_conditional273) {
                memset(&result_192,0,sizeof(struct sType*));
                __result134__ = __result_obj__ = result_192;
                return __result134__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result135__ = __result_obj__ = self->it->item;
                return __result135__;
            }
            memset(&result_193,0,sizeof(struct sType*));
            __result136__ = __result_obj__ = result_193;
            return __result136__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional276;
void* right_value151;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj60;
_Bool _if_conditional277;
void* right_value152;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj61;
void* right_value153;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj62;
struct list$1sTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
right_value152 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
right_value153 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional276=self->len==0,                    _if_conditional276) {
                        litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value151=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_194->prev=((void*)0);
                        litem_194->next=((void*)0);
                        __dec_obj60=litem_194->item;
                        litem_194->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_194;
                        self->head=litem_194;
                    }
                    else {
                        if(_if_conditional277=self->len==1,                        _if_conditional277) {
                            litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value152=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_195->prev=self->head;
                            litem_195->next=((void*)0);
                            __dec_obj61=litem_195->item;
                            litem_195->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_195;
                            self->head->next=litem_195;
                        }
                        else {
                            litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value153=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_196->prev=self->tail;
                            litem_196->next=((void*)0);
                            __dec_obj62=litem_196->item;
                            litem_196->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_196;
                            self->tail=litem_196;
                        }
                    }
                    self->len++;
                    __result137__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result137__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
void* __result_obj__;
void* right_value159;
void* right_value160;
void* right_value161;
int i_199;
void* right_value162;
void* right_value163;
struct list$1charp* __dec_obj63;
struct map$2charphCVALUEph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&i_199, 0, sizeof(int));
right_value162 = (void*)0;
right_value163 = (void*)0;
            self->keys=(char**)come_increment_ref_count(((char**)(right_value159=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1084, "char*%"))));
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value160=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "/usr/local/include/comelang2.h", 1085, "CVALUE*%"))));
            come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value161=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1086, "bool"))));
            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_199=0;            i_199<1024;            i_199++            ){
                self->item_existance[i_199]=(_Bool)0;
            }
            self->size=1024;
            self->len=0;
            __dec_obj63=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value163=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value162=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1096, "list$1charp"))))))));
            come_call_finalizer2(list$1charp_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charpp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charpp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result139__ = __result_obj__ = self;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result139__;
            come_call_finalizer2(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result138__ = __result_obj__ = self;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result138__;
                come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
void* __result_obj__;
int i_200;
_Bool _if_conditional278;
_Bool _if_conditional279;
int i_201;
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_200, 0, sizeof(int));
memset(&i_201, 0, sizeof(int));
                for(                i_200=0;                i_200<self->size;                i_200++                ){
                    if(_if_conditional278=self->item_existance[i_200],                    _if_conditional278) {
                        if(_if_conditional279=1,                        _if_conditional279) {
                            come_call_finalizer2(CVALUE_finalize,self->items[i_200], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_201=0;                i_201<self->size;                i_201++                ){
                    if(_if_conditional280=self->item_existance[i_201],                    _if_conditional280) {
                        if(_if_conditional281=1,                        _if_conditional281) {
                            self->keys[i_201] = come_decrement_ref_count2(self->keys[i_201], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional285;
struct list_item$1charph* it_208;
int i_209;
_Bool _while_condtional26;
_Bool _if_conditional286;
char* __result140__;
char* default_value_210;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_208, 0, sizeof(struct list_item$1charph*));
memset(&i_209, 0, sizeof(int));
memset(&default_value_210, 0, sizeof(char*));
                            if(_if_conditional285=position<0,                            _if_conditional285) {
                                position+=self->len;
                            }
                            it_208=self->head;
                            i_209=0;
                            while(_while_condtional26=it_208!=((void*)0),                            _while_condtional26) {
                                if(_if_conditional286=position==i_209,                                _if_conditional286) {
                                    __result140__ = __result_obj__ = it_208->item;
                                    return __result140__;
                                }
                                it_208=it_208->next;
                                i_209++;
                            }
                            memset(&default_value_210,0,sizeof(char*));
                            __result141__ = __result_obj__ = default_value_210;
                            default_value_210 = come_decrement_ref_count2(default_value_210, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result141__;
                            default_value_210 = come_decrement_ref_count2(default_value_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional289;
char* result_214;
char* __result143__;
_Bool _if_conditional290;
char* __result144__;
char* result_215;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_214, 0, sizeof(char*));
memset(&result_215, 0, sizeof(char*));
                        if(_if_conditional289=self==((void*)0),                        _if_conditional289) {
                            memset(&result_214,0,sizeof(char*));
                            __result143__ = __result_obj__ = result_214;
                            return __result143__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result144__ = __result_obj__ = self->it->item;
                            return __result144__;
                        }
                        memset(&result_215,0,sizeof(char*));
                        __result145__ = __result_obj__ = result_215;
                        return __result145__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result146__ = self==((void*)0)||self->it==((void*)0);
                        return __result146__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional291;
char* result_217;
char* __result147__;
_Bool _if_conditional292;
char* __result148__;
char* result_218;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(char*));
memset(&result_218, 0, sizeof(char*));
                        if(_if_conditional291=self==((void*)0)||self->it==((void*)0),                        _if_conditional291) {
                            memset(&result_217,0,sizeof(char*));
                            __result147__ = __result_obj__ = result_217;
                            return __result147__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result148__ = __result_obj__ = self->it->item;
                            return __result148__;
                        }
                        memset(&result_218,0,sizeof(char*));
                        __result149__ = __result_obj__ = result_218;
                        return __result149__;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional299;
unsigned int hash_236;
unsigned int it_237;
_Bool _while_condtional29;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
_Bool same_key_exist_238;
char* it2_239;
_Bool _if_conditional319;
_Bool _if_conditional320;
struct map$2charphCVALUEph* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_236, 0, sizeof(unsigned int));
memset(&it_237, 0, sizeof(unsigned int));
memset(&same_key_exist_238, 0, sizeof(_Bool));
memset(&it2_239, 0, sizeof(char*));
                        if(_if_conditional299=self->len*10>=self->size,                        _if_conditional299) {
                            map$2charphCVALUEph_rehash(self);
                        }
                        hash_236=string_get_hash_key(key)%self->size;
                        it_237=hash_236;
                        while(_while_condtional29=(_Bool)1,                        _while_condtional29) {
                            if(_if_conditional311=self->item_existance[it_237],                            _if_conditional311) {
                                if(_if_conditional312=string_equals(self->keys[it_237],key),                                _if_conditional312) {
                                    if(_if_conditional313=1,                                    _if_conditional313) {
                                        list$1charp_remove(self->key_list,self->keys[it_237]);
                                        self->keys[it_237] = come_decrement_ref_count2(self->keys[it_237], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        self->keys[it_237]=(char*)come_increment_ref_count(key);
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_237]);
                                        self->keys[it_237]=key;
                                    }
                                    if(_if_conditional314=1,                                    _if_conditional314) {
                                        come_call_finalizer2(CVALUE_finalize,self->items[it_237], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->items[it_237]=(struct CVALUE*)come_increment_ref_count(item);
                                    }
                                    else {
                                        self->items[it_237]=item;
                                    }
                                    break;
                                }
                                it_237++;
                                if(_if_conditional315=it_237>=self->size,                                _if_conditional315) {
                                    it_237=0;
                                }
                                else {
                                    if(_if_conditional316=it_237==hash_236,                                    _if_conditional316) {
                                        printf("unexpected error in map.insert\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                self->item_existance[it_237]=(_Bool)1;
                                if(_if_conditional317=1,                                _if_conditional317) {
                                    self->keys[it_237]=(char*)come_increment_ref_count(key);
                                }
                                else {
                                    self->keys[it_237]=key;
                                }
                                if(_if_conditional318=1,                                _if_conditional318) {
                                    self->items[it_237]=(struct CVALUE*)come_increment_ref_count(item);
                                }
                                else {
                                    self->items[it_237]=item;
                                }
                                self->len++;
                                break;
                            }
                        }
                        same_key_exist_238=(_Bool)0;
                        for(                        it2_239=list$1charp_begin(self->key_list);                        !list$1charp_end(self->key_list);                        it2_239=list$1charp_next(self->key_list)                        ){
                            if(_if_conditional319=string_equals(it2_239,key),                            _if_conditional319) {
                                puts("SAME KEY");
                                same_key_exist_238=(_Bool)1;
                            }
                        }
                        if(_if_conditional320=!same_key_exist_238,                        _if_conditional320) {
                            list$1charp_push_back(self->key_list,key);
                        }
                        __result161__ = __result_obj__ = self;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result161__;
                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
void* __result_obj__;
int size_219;
void* right_value175;
char** keys_220;
void* right_value176;
struct CVALUE** items_221;
void* right_value177;
_Bool* item_existance_222;
int len_223;
char* it_226;
struct CVALUE* default_value_229;
struct CVALUE* it2_232;
unsigned int hash_233;
int n_234;
_Bool _while_condtional28;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct CVALUE* default_value_235;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_219, 0, sizeof(int));
right_value175 = (void*)0;
memset(&keys_220, 0, sizeof(char**));
right_value176 = (void*)0;
memset(&items_221, 0, sizeof(struct CVALUE**));
right_value177 = (void*)0;
memset(&item_existance_222, 0, sizeof(_Bool*));
memset(&len_223, 0, sizeof(int));
memset(&it_226, 0, sizeof(char*));
memset(&default_value_229, 0, sizeof(struct CVALUE*));
memset(&it2_232, 0, sizeof(struct CVALUE*));
memset(&hash_233, 0, sizeof(unsigned int));
memset(&n_234, 0, sizeof(int));
memset(&default_value_235, 0, sizeof(struct CVALUE*));
                                size_219=self->size*10;
                                keys_220=(char**)come_increment_ref_count(((char**)(right_value175=(char**)come_calloc(1, sizeof(char*)*(1*(size_219)), "/usr/local/include/comelang2.h", 1335, "char*%"))));
                                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                items_221=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value176=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_219)), "/usr/local/include/comelang2.h", 1336, "CVALUE*%"))));
                                come_call_finalizer2(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                item_existance_222=(_Bool*)come_increment_ref_count(((_Bool*)(right_value177=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_219)), "/usr/local/include/comelang2.h", 1337, "bool"))));
                                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                len_223=0;
                                for(                                it_226=map$2charphCVALUEph_begin(self);                                !map$2charphCVALUEph_end(self);                                it_226=map$2charphCVALUEph_next(self)                                ){
                                    memset(&default_value_229,0,sizeof(struct CVALUE*));
                                    it2_232=map$2charphCVALUEph_at(self,it_226,default_value_229);
                                    hash_233=string_get_hash_key(it_226)%size_219;
                                    n_234=hash_233;
                                    while(_while_condtional28=(_Bool)1,                                    _while_condtional28) {
                                        if(_if_conditional308=item_existance_222[n_234],                                        _if_conditional308) {
                                            n_234++;
                                            if(_if_conditional309=n_234>=size_219,                                            _if_conditional309) {
                                                n_234=0;
                                            }
                                            else {
                                                if(_if_conditional310=n_234==hash_233,                                                _if_conditional310) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    stackframe();
                                                    exit(2);
                                                }
                                            }
                                        }
                                        else {
                                            item_existance_222[n_234]=(_Bool)1;
                                            keys_220[n_234]=it_226;
                                            items_221[n_234]=map$2charphCVALUEph_at(self,it_226,default_value_235);
                                            len_223++;
                                            break;
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_free((char*)self->keys);
                                self->keys=keys_220;
                                self->items=items_221;
                                self->item_existance=item_existance_222;
                                self->size=size_219;
                                self->len=len_223;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional300;
char* result_224;
char* __result150__;
_Bool _if_conditional301;
char* __result151__;
char* result_225;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_224, 0, sizeof(char*));
memset(&result_225, 0, sizeof(char*));
                                    if(_if_conditional300=self==((void*)0),                                    _if_conditional300) {
                                        memset(&result_224,0,sizeof(char*));
                                        __result150__ = __result_obj__ = result_224;
                                        return __result150__;
                                    }
                                    self->key_list->it=self->key_list->head;
                                    if(self->key_list->it) {
                                        __result151__ = __result_obj__ = self->key_list->it->item;
                                        return __result151__;
                                    }
                                    memset(&result_225,0,sizeof(char*));
                                    __result152__ = __result_obj__ = result_225;
                                    return __result152__;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result153__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    return __result153__;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
void* __result_obj__;
_Bool _if_conditional302;
char* result_227;
char* __result154__;
_Bool _if_conditional303;
char* __result155__;
char* result_228;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(char*));
memset(&result_228, 0, sizeof(char*));
                                    if(_if_conditional302=self==((void*)0)||self->key_list->it==((void*)0),                                    _if_conditional302) {
                                        memset(&result_227,0,sizeof(char*));
                                        __result154__ = __result_obj__ = result_227;
                                        return __result154__;
                                    }
                                    self->key_list->it=self->key_list->it->next;
                                    if(self->key_list->it) {
                                        __result155__ = __result_obj__ = self->key_list->it->item;
                                        return __result155__;
                                    }
                                    memset(&result_228,0,sizeof(char*));
                                    __result156__ = __result_obj__ = result_228;
                                    return __result156__;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
void* __result_obj__;
unsigned int hash_230;
unsigned int it_231;
_Bool _while_condtional27;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct CVALUE* __result157__;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct CVALUE* __result158__;
struct CVALUE* __result159__;
struct CVALUE* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_230, 0, sizeof(unsigned int));
memset(&it_231, 0, sizeof(unsigned int));
                                        hash_230=string_get_hash_key(((char*)key))%self->size;
                                        it_231=hash_230;
                                        while(_while_condtional27=(_Bool)1,                                        _while_condtional27) {
                                            if(_if_conditional304=self->item_existance[it_231],                                            _if_conditional304) {
                                                if(_if_conditional305=string_equals(self->keys[it_231],key),                                                _if_conditional305) {
                                                    __result157__ = __result_obj__ = self->items[it_231];
                                                    come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result157__;
                                                }
                                                it_231++;
                                                if(_if_conditional306=it_231>=self->size,                                                _if_conditional306) {
                                                    it_231=0;
                                                }
                                                else {
                                                    if(_if_conditional307=it_231==hash_230,                                                    _if_conditional307) {
                                                        __result158__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result158__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result159__ = __result_obj__ = default_value;
                                                come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result159__;
                                            }
                                        }
                                        __result160__ = __result_obj__ = default_value;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result160__;
                                        come_call_finalizer2(CVALUE_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
            __result162__ = self->len;
            return __result162__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
            __result163__ = self->len;
            return __result163__;
}

static struct CVALUE* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
void* __result_obj__;
struct CVALUE* default_value_242;
unsigned int hash_243;
unsigned int it_244;
_Bool _while_condtional30;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct CVALUE* __result164__;
_Bool _if_conditional324;
_Bool _if_conditional325;
struct CVALUE* __result165__;
struct CVALUE* __result166__;
struct CVALUE* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_242, 0, sizeof(struct CVALUE*));
memset(&hash_243, 0, sizeof(unsigned int));
memset(&it_244, 0, sizeof(unsigned int));
                    memset(&default_value_242,0,sizeof(struct CVALUE*));
                    hash_243=string_get_hash_key(((char*)key))%self->size;
                    it_244=hash_243;
                    while(_while_condtional30=(_Bool)1,                    _while_condtional30) {
                        if(_if_conditional322=self->item_existance[it_244],                        _if_conditional322) {
                            if(_if_conditional323=string_equals(self->keys[it_244],key),                            _if_conditional323) {
                                __result164__ = __result_obj__ = self->items[it_244];
                                come_call_finalizer2(CVALUE_finalize,default_value_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result164__;
                            }
                            it_244++;
                            if(_if_conditional324=it_244>=self->size,                            _if_conditional324) {
                                it_244=0;
                            }
                            else {
                                if(_if_conditional325=it_244==hash_243,                                _if_conditional325) {
                                    __result165__ = __result_obj__ = default_value_242;
                                    come_call_finalizer2(CVALUE_finalize,default_value_242, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result165__;
                                }
                            }
                        }
                        else {
                            __result166__ = __result_obj__ = default_value_242;
                            come_call_finalizer2(CVALUE_finalize,default_value_242, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result166__;
                        }
                    }
                    __result167__ = __result_obj__ = default_value_242;
                    come_call_finalizer2(CVALUE_finalize,default_value_242, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result167__;
                    come_call_finalizer2(CVALUE_finalize,default_value_242, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
void* __result_obj__;
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
            __result170__ = self->len;
            return __result170__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
                __result171__ = self->len;
                return __result171__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct list$1CVALUEph* __result172__;
struct list_item$1CVALUEph* it_254;
int i_255;
_Bool _while_condtional31;
_Bool _if_conditional335;
struct CVALUE* __dec_obj66;
struct list$1CVALUEph* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_254, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_255, 0, sizeof(int));
                        if(_if_conditional333=position<0,                        _if_conditional333) {
                            position+=self->len;
                        }
                        if(_if_conditional334=position>=self->len,                        _if_conditional334) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result172__ = __result_obj__ = self;
                            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result172__;
                        }
                        it_254=self->head;
                        i_255=0;
                        while(_while_condtional31=it_254!=((void*)0),                        _while_condtional31) {
                            if(_if_conditional335=position==i_255,                            _if_conditional335) {
                                __dec_obj66=it_254->item;
                                it_254->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer2(CVALUE_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_254=it_254->next;
                            i_255++;
                        }
                        __result173__ = __result_obj__ = self;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result173__;
                        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional336;
struct CVALUE* __result174__;
void* right_value186;
struct CVALUE* result_256;
_Bool _if_conditional337;
void* right_value187;
char* __dec_obj67;
_Bool _if_conditional338;
void* right_value188;
struct sType* __dec_obj68;
_Bool _if_conditional339;
struct CVALUE* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&result_256, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
                        if(_if_conditional336=self==(void*)0,                        _if_conditional336) {
                            __result174__ = __result_obj__ = (void*)0;
                            return __result174__;
                        }
                        result_256=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
                        come_call_finalizer2(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional337=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional337) {
                            __dec_obj67=result_256->c_value;
                            result_256->c_value=(char*)come_increment_ref_count(((char*)(right_value187=string_clone(self->c_value))));
                            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional338=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional338) {
                            __dec_obj68=result_256->type;
                            result_256->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(self->type))));
                            come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional339=self!=((void*)0),                        _if_conditional339) {
                            result_256->var=self->var;
                        }
                        __result175__ = __result_obj__ = result_256;
                        come_call_finalizer2(CVALUE_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result175__;
                        come_call_finalizer2(CVALUE_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_263;
unsigned int hash_264;
unsigned int it_265;
_Bool _while_condtional32;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct sClass* __result179__;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct sClass* __result180__;
struct sClass* __result181__;
struct sClass* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_263, 0, sizeof(struct sClass*));
memset(&hash_264, 0, sizeof(unsigned int));
memset(&it_265, 0, sizeof(unsigned int));
                memset(&default_value_263,0,sizeof(struct sClass*));
                hash_264=string_get_hash_key(((char*)key))%self->size;
                it_265=hash_264;
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    if(_if_conditional346=self->item_existance[it_265],                    _if_conditional346) {
                        if(_if_conditional347=string_equals(self->keys[it_265],key),                        _if_conditional347) {
                            __result179__ = __result_obj__ = self->items[it_265];
                            come_call_finalizer2(sClass_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result179__;
                        }
                        it_265++;
                        if(_if_conditional348=it_265>=self->size,                        _if_conditional348) {
                            it_265=0;
                        }
                        else {
                            if(_if_conditional349=it_265==hash_264,                            _if_conditional349) {
                                __result180__ = __result_obj__ = default_value_263;
                                come_call_finalizer2(sClass_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result180__;
                            }
                        }
                    }
                    else {
                        __result181__ = __result_obj__ = default_value_263;
                        come_call_finalizer2(sClass_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result181__;
                    }
                }
                __result182__ = __result_obj__ = default_value_263;
                come_call_finalizer2(sClass_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result182__;
                come_call_finalizer2(sClass_finalize,default_value_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct list$1tuple2$2charphsNodephph* params_297;
void* right_value255;
void* right_value256;
void* right_value257;
_Bool _if_conditional366;
_Bool parse_method_generics_type_301;
char* p_302;
int sline_303;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value258;
char* word_304;
_Bool _if_conditional369;
void* right_value259;
void* right_value260;
struct list$1sTypeph* method_generics_types_305;
_Bool _if_conditional370;
_Bool _while_condtional34;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value261;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_306;
char* name_307;
_Bool err_308;
_Bool _if_conditional376;
void* right_value262;
_Bool _if_conditional377;
_Bool _while_condtional35;
_Bool _if_conditional378;
char* p_309;
int sline_310;
_Bool err_flag_311;
void* right_value263;
char* label_312;
_Bool _if_conditional379;
void* right_value264;
char* __dec_obj84;
_Bool _if_conditional380;
char* __dec_obj85;
_Bool no_comma_313;
void* right_value265;
struct sNode* node_314;
void* right_value266;
struct sNode* __dec_obj86;
void* right_value267;
void* right_value268;
_Bool _if_conditional381;
_Bool _if_conditional382;
struct buffer* method_block_315;
int method_block_sline_316;
_Bool _if_conditional383;
char* head_317;
void* right_value269;
char* tail_318;
void* right_value270;
void* right_value271;
struct buffer* __dec_obj87;
int len_319;
void* right_value272;
char* mem_320;
_Bool _if_conditional384;
void* right_value273;
void* right_value274;
void* right_value275;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value283;
struct sNode* node_322;
struct sNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&params_297, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&parse_method_generics_type_301, 0, sizeof(_Bool));
memset(&p_302, 0, sizeof(char*));
memset(&sline_303, 0, sizeof(int));
right_value258 = (void*)0;
memset(&word_304, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&method_generics_types_305, 0, sizeof(struct list$1sTypeph*));
right_value261 = (void*)0;
memset(&type_306, 0, sizeof(struct sType*));
memset(&name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
memset(&type_306, 0, sizeof(struct sType*));
memset(&name_307, 0, sizeof(char*));
memset(&err_308, 0, sizeof(_Bool));
right_value262 = (void*)0;
memset(&p_309, 0, sizeof(char*));
memset(&sline_310, 0, sizeof(int));
memset(&err_flag_311, 0, sizeof(_Bool));
right_value263 = (void*)0;
memset(&label_312, 0, sizeof(char*));
right_value264 = (void*)0;
memset(&no_comma_313, 0, sizeof(_Bool));
right_value265 = (void*)0;
memset(&node_314, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&method_block_315, 0, sizeof(struct buffer*));
memset(&method_block_sline_316, 0, sizeof(int));
memset(&head_317, 0, sizeof(char*));
right_value269 = (void*)0;
memset(&tail_318, 0, sizeof(char*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&len_319, 0, sizeof(int));
right_value272 = (void*)0;
memset(&mem_320, 0, sizeof(char*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value283 = (void*)0;
memset(&node_322, 0, sizeof(struct sNode*));
    params_297=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value251=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value250=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 745, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsNodephph_push_back(params_297,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value257=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value255=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 746, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(obj)))))))));
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional366=*info->p==45&&*(info->p+1)==62,    _if_conditional366) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_301=(_Bool)0;
    {
        p_302=info->p;
        sline_303=info->sline;
        if(_if_conditional367=*info->p==60,        _if_conditional367) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional368=xisalpha(*info->p)||*info->p==95,            _if_conditional368) {
                word_304=(char*)come_increment_ref_count(((char*)(right_value258=parse_word(info))));
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional369=is_type_name(word_304,info),                _if_conditional369) {
                    parse_method_generics_type_301=(_Bool)1;
                }
                word_304 = come_decrement_ref_count2(word_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_302;
        info->sline=sline_303;
    }
    method_generics_types_305=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value260=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value259=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 775, "list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional370=parse_method_generics_type_301&&*info->p==60,    _if_conditional370) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            if(_if_conditional371=*info->p==0,            _if_conditional371) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(_if_conditional372=*info->p==62,                _if_conditional372) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional373=*info->p==44,                    _if_conditional373) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value261=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_306=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                        name_307=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                        err_308=multiple_assign_var4->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional376=!err_308,                        _if_conditional376) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_305,(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_clone(type_306)))));
                        come_call_finalizer2(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type_306, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(_if_conditional377=*info->p!=123,    _if_conditional377) {
        expected_next_character(40,info);
        while(_while_condtional35=(_Bool)1,        _while_condtional35) {
            if(_if_conditional378=*info->p==41,            _if_conditional378) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_309=info->p;
            sline_310=info->sline;
            err_flag_311=(_Bool)0;
            label_312=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(""))));
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional379=xisalpha(*info->p)||*info->p==95,            _if_conditional379) {
                __dec_obj84=label_312;
                label_312=(char*)come_increment_ref_count(((char*)(right_value264=parse_word(info))));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_311=(_Bool)1;
            }
            if(_if_conditional380=err_flag_311==(_Bool)1&&*info->p==58,            _if_conditional380) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj85=label_312;
                label_312=((void*)0);
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_309;
                info->sline=sline_310;
            }
            no_comma_313=info->no_comma;
            info->no_comma=(_Bool)1;
            node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=expression_v13(info))));
            if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj86=node_314;
            node_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_314),info))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_313;
            list$1tuple2$2charphsNodephph_push_back(params_297,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value268=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value267=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 847, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_312),(struct sNode*)come_increment_ref_count(node_314))))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional381=*info->p==44,            _if_conditional381) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional382=*info->p==41,                _if_conditional382) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_312 = come_decrement_ref_count2(label_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_312 = come_decrement_ref_count2(label_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_315=((void*)0);
    method_block_sline_316=0;
    if(_if_conditional383=*info->p==123,    _if_conditional383) {
        head_317=info->p;
        method_block_sline_316=info->sline;
        ((char*)(right_value269=skip_block(info)));
        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_318=info->p;
        __dec_obj87=method_block_315;
        method_block_315=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 871, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        len_319=tail_318-head_317;
        mem_320=(char*)come_increment_ref_count(((char*)(right_value272=(char*)come_calloc(1, sizeof(char)*(1*(len_319+1)), "20method.c", 874, "char"))));
        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(mem_320,head_317,len_319);
        mem_320[len_319]=0;
        buffer_append_str(method_block_315,mem_320);
        buffer_append_str(method_block_315,"\n");
        mem_320 = come_decrement_ref_count2(mem_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    if(_if_conditional384=*info->p==60,    _if_conditional384) {
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 889, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value275=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value273=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 889, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_297),method_block_315,method_block_sline_316,method_generics_types_305,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value2)));
    come_call_finalizer2(sMethodCallNode_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer2(sMethodCallNode_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result191__ = __result_obj__ = node_322;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_322) { node_322 = come_decrement_ref_count2(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result191__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,params_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,method_generics_types_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,method_block_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_322) { node_322 = come_decrement_ref_count2(node_322, ((struct sNode*)node_322)->finalize, ((struct sNode*)node_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional364;
void* right_value252;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional365;
void* right_value253;
struct list_item$1tuple2$2charphsNodephph* litem_299;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value254;
struct list_item$1tuple2$2charphsNodephph* litem_300;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value253 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value254 = (void*)0;
memset(&litem_300, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional364=self->len==0,        _if_conditional364) {
            litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value252=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1tuple2$2charphsNodephph"))));
            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_298->prev=((void*)0);
            litem_298->next=((void*)0);
            __dec_obj79=litem_298->item;
            litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_298;
            self->head=litem_298;
        }
        else {
            if(_if_conditional365=self->len==1,            _if_conditional365) {
                litem_299=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value253=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_299->prev=self->head;
                litem_299->next=((void*)0);
                __dec_obj80=litem_299->item;
                litem_299->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_299;
                self->head->next=litem_299;
            }
            else {
                litem_300=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value254=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_300->prev=self->tail;
                litem_300->next=((void*)0);
                __dec_obj81=litem_300->item;
                litem_300->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_300;
                self->tail=litem_300;
            }
        }
        self->len++;
        __result187__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result187__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj82;
struct sNode* __dec_obj83;
struct tuple2$2charphsNodeph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj82=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj83=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
        __result188__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result188__;
        come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional374=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional374) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional375=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional375) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional385=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional385) {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional386=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional386) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional387=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional387) {
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional388=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional388) {
            come_call_finalizer2(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional389=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional389) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional390=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional390) {
            come_call_finalizer2(list$1sTypephp_finalize,self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional391;
struct sMethodCallNode* __result189__;
void* right_value276;
struct sMethodCallNode* result_321;
_Bool _if_conditional392;
void* right_value277;
struct sNode* __dec_obj88;
_Bool _if_conditional393;
void* right_value278;
char* __dec_obj89;
_Bool _if_conditional394;
void* right_value279;
struct list$1tuple2$2charphsNodephph* __dec_obj90;
_Bool _if_conditional395;
void* right_value280;
struct buffer* __dec_obj91;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value281;
char* __dec_obj92;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value282;
struct list$1sTypeph* __dec_obj93;
struct sMethodCallNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_321, 0, sizeof(struct sMethodCallNode*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
        if(_if_conditional391=self==(void*)0,        _if_conditional391) {
            __result189__ = __result_obj__ = (void*)0;
            return __result189__;
        }
        result_321=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value276=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer2(sMethodCallNode_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional392=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional392) {
            __dec_obj88=result_321->obj;
            result_321->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(self->obj))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional393=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional393) {
            __dec_obj89=result_321->fun_name;
            result_321->fun_name=(char*)come_increment_ref_count(((char*)(right_value278=string_clone(self->fun_name))));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional394=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional394) {
            __dec_obj90=result_321->params;
            result_321->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value279=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional395=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional395) {
            __dec_obj91=result_321->method_block;
            result_321->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_clone(self->method_block))));
            come_call_finalizer2(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional396=self!=((void*)0),        _if_conditional396) {
            result_321->sline=self->sline;
        }
        if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional397) {
            __dec_obj92=result_321->sname;
            result_321->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional398=self!=((void*)0),        _if_conditional398) {
            result_321->method_block_sline=self->method_block_sline;
        }
        if(_if_conditional399=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional399) {
            __dec_obj93=result_321->method_generics_types;
            result_321->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value282=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        __result190__ = __result_obj__ = result_321;
        come_call_finalizer2(sMethodCallNode_finalize,result_321, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result190__;
        come_call_finalizer2(sMethodCallNode_finalize,result_321, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional400;
void* right_value284;
void* right_value285;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value288;
struct sNode* __result194__;
void* right_value289;
struct sNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
    if(_if_conditional400=charp_operator_equals(buf,"__current__"),    _if_conditional400) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 897, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value285=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value284=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 897, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result194__ = __result_obj__ = ((struct sNode*)(right_value288=_inf_value3));
        come_call_finalizer2(sCurrentNode_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sCurrentNode_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result194__;
    }
    __result195__ = __result_obj__ = ((struct sNode*)(right_value289=string_node_v15(buf,head,head_sline,info)));
    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result195__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional401;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional401) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional402;
struct sCurrentNode* __result192__;
void* right_value286;
struct sCurrentNode* result_323;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value287;
char* __dec_obj94;
struct sCurrentNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
memset(&result_323, 0, sizeof(struct sCurrentNode*));
right_value287 = (void*)0;
            if(_if_conditional402=self==(void*)0,            _if_conditional402) {
                __result192__ = __result_obj__ = (void*)0;
                return __result192__;
            }
            result_323=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value286=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer2(sCurrentNode_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional403=self!=((void*)0),            _if_conditional403) {
                result_323->sline=self->sline;
            }
            if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional404) {
                __dec_obj94=result_323->sname;
                result_323->sname=(char*)come_increment_ref_count(((char*)(right_value287=string_clone(self->sname))));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result193__ = __result_obj__ = result_323;
            come_call_finalizer2(sCurrentNode_finalize,result_323, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result193__;
            come_call_finalizer2(sCurrentNode_finalize,result_323, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value290;
struct sNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
    __result196__ = __result_obj__ = ((struct sNode*)(right_value290=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result196__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

