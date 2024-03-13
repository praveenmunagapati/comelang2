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
typedef long int ptrdiff_t;
typedef long double max_align_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(long int);
extern void* (*GC_oom_fn)(long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY8 { GC_EVENT_START
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
typedef enum anonymous_typeY8 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY8);
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
enum anonymous_typeY9 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY9 GC_ToggleRefStatus;
typedef enum anonymous_typeY9 (*GC_toggleref_func)(void*);
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
typedef int (*GC_has_static_roots_func)(const char*,void*,long int);
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
    long int size;
    int allocated;
    char* class_name;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    long int size;
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

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

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

char* basename(char* anonymous_var_nameX401);

char* dirname(char* anonymous_var_nameX402);

char* basename_r(const char* anonymous_var_nameX403, char* anonymous_var_nameX404);

char* dirname_r(const char* anonymous_var_nameX405, char* anonymous_var_nameX406);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX408)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX410)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX412)(enum anonymous_typeY8));

void (*GC_get_on_collection_event())(enum anonymous_typeY8);

void GC_set_find_leak(int anonymous_var_nameX413);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX414);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX415);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX416);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX417)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX418);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX419);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX420);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX421);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX422);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX423);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX424);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX425);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX426);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX427);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX428);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX429);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX430);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX431);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX432);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX433);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX434);

void* GC_malloc_atomic(long int anonymous_var_nameX435);

char* GC_strdup(const char* anonymous_var_nameX436);

char* GC_strndup(const char* anonymous_var_nameX437, long int anonymous_var_nameX438);

void* GC_malloc_uncollectable(long int anonymous_var_nameX439);

void* GC_malloc_stubborn(long int anonymous_var_nameX440);

void* GC_memalign(long int anonymous_var_nameX441, long int anonymous_var_nameX442);

int GC_posix_memalign(void** anonymous_var_nameX443, long int anonymous_var_nameX444, long int anonymous_var_nameX445);

void GC_free(void* anonymous_var_nameX446);

void GC_change_stubborn(const void* anonymous_var_nameX447);

void GC_end_stubborn_change(const void* anonymous_var_nameX448);

void* GC_base(void* anonymous_var_nameX449);

int GC_is_heap_ptr(const void* anonymous_var_nameX450);

long int GC_size(const void* anonymous_var_nameX451);

void* GC_realloc(void* anonymous_var_nameX452, long int anonymous_var_nameX453);

int GC_expand_hp(long int anonymous_var_nameX454);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX455);

void GC_exclude_static_roots(void* anonymous_var_nameX456, void* anonymous_var_nameX457);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX458, void* anonymous_var_nameX459);

void GC_remove_roots(void* anonymous_var_nameX460, void* anonymous_var_nameX461);

void GC_register_displacement(long int anonymous_var_nameX462);

void GC_debug_register_displacement(long int anonymous_var_nameX463);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX464)());

void GC_set_stop_func(int (*anonymous_var_nameX465)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX466, unsigned long int* anonymous_var_nameX467, unsigned long int* anonymous_var_nameX468, unsigned long int* anonymous_var_nameX469, unsigned long int* anonymous_var_nameX470);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX471, long int anonymous_var_nameX472);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX473);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX474);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX475);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX476);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX477, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX478, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX479, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX480, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX481, long int anonymous_var_nameX482, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX483, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX484, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX485, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX486, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX487);

void* GC_debug_realloc(void* anonymous_var_nameX488, long int anonymous_var_nameX489, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX490);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX491);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX492);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX493, long int anonymous_var_nameX494);

void GC_register_finalizer(void* anonymous_var_nameX497, void (*anonymous_var_nameX498)(void*,void*), void* anonymous_var_nameX499, void (*anonymous_var_nameX500)(void*,void*), void** anonymous_var_nameX501);

void GC_debug_register_finalizer(void* anonymous_var_nameX502, void (*anonymous_var_nameX503)(void*,void*), void* anonymous_var_nameX504, void (*anonymous_var_nameX505)(void*,void*), void** anonymous_var_nameX506);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX507, void (*anonymous_var_nameX508)(void*,void*), void* anonymous_var_nameX509, void (*anonymous_var_nameX510)(void*,void*), void** anonymous_var_nameX511);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX512, void (*anonymous_var_nameX513)(void*,void*), void* anonymous_var_nameX514, void (*anonymous_var_nameX515)(void*,void*), void** anonymous_var_nameX516);

void GC_register_finalizer_no_order(void* anonymous_var_nameX517, void (*anonymous_var_nameX518)(void*,void*), void* anonymous_var_nameX519, void (*anonymous_var_nameX520)(void*,void*), void** anonymous_var_nameX521);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX522, void (*anonymous_var_nameX523)(void*,void*), void* anonymous_var_nameX524, void (*anonymous_var_nameX525)(void*,void*), void** anonymous_var_nameX526);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX527, void (*anonymous_var_nameX528)(void*,void*), void* anonymous_var_nameX529, void (*anonymous_var_nameX530)(void*,void*), void** anonymous_var_nameX531);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX532, void (*anonymous_var_nameX533)(void*,void*), void* anonymous_var_nameX534, void (*anonymous_var_nameX535)(void*,void*), void** anonymous_var_nameX536);

int GC_register_disappearing_link(void** anonymous_var_nameX537);

int GC_general_register_disappearing_link(void** anonymous_var_nameX538, const void* anonymous_var_nameX539);

int GC_move_disappearing_link(void** anonymous_var_nameX540, void** anonymous_var_nameX541);

int GC_unregister_disappearing_link(void** anonymous_var_nameX542);

int GC_register_long_link(void** anonymous_var_nameX543, const void* anonymous_var_nameX544);

int GC_move_long_link(void** anonymous_var_nameX545, void** anonymous_var_nameX546);

int GC_unregister_long_link(void** anonymous_var_nameX547);

void GC_set_toggleref_func(enum anonymous_typeY9 (*anonymous_var_nameX549)(void*));

enum anonymous_typeY9 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX550, int anonymous_var_nameX551);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX553)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX554);

void GC_set_warn_proc(void (*anonymous_var_nameX557)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX558, unsigned long int anonymous_var_nameX559);

void GC_set_log_fd(int anonymous_var_nameX560);

void GC_set_abort_func(void (*anonymous_var_nameX562)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX564)(void*), void* anonymous_var_nameX565);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX568)(struct GC_stack_base*,void*), void* anonymous_var_nameX569);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX570)(void*), void* anonymous_var_nameX571);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX572)(void*), void* anonymous_var_nameX573);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX574);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX575);

void GC_set_stackbottom(void* anonymous_var_nameX576, const struct GC_stack_base* anonymous_var_nameX577);

void* GC_same_obj(void* anonymous_var_nameX578, void* anonymous_var_nameX579);

void* GC_pre_incr(void** anonymous_var_nameX580, long int anonymous_var_nameX581);

void* GC_post_incr(void** anonymous_var_nameX582, long int anonymous_var_nameX583);

void* GC_is_visible(void* anonymous_var_nameX584);

void* GC_is_valid_displacement(void* anonymous_var_nameX585);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX586);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX587, const void* anonymous_var_nameX588);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX589, const void* anonymous_var_nameX590);

void* GC_malloc_many(long int anonymous_var_nameX611);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX615)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX616);

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

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(char* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name);

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

struct buffer* buffer_append(struct buffer* self, char* mem, long int size);

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

_Bool size_t_equals(long int self, long int right);

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

unsigned int size_t_get_hash_key(long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

long int size_t_clone(long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(int c);

_Bool xiswblank(int c);

_Bool xiswdigit(int c);

_Bool xiswalnum(int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(int c);

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

int size_t_compare(long int left, long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct __sFILE* f);

int FILE_write(struct __sFILE* f, char* str);

int FILE_fclose(struct __sFILE* f);

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct __sFILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1948, "smart_pointer$1char");
    result_0->memory=buffer_clone(self);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_1;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1958, "smart_pointer$1char");
    result_1->memory=buffer_clone(self);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_2;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 1968, "smart_pointer$1short");
    result_2->memory=buffer_clone(self);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_3;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 1978, "smart_pointer$1int");
    result_3->memory=buffer_clone(self);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_4;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 1988, "smart_pointer$1long");
    result_4->memory=buffer_clone(self);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    __result7__ = __result_obj__ = xsprintf(msg,self);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = __result_obj__ = xsprintf(msg,self);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    __result9__ = __result_obj__ = xsprintf(msg,self);
    return __result9__;
}

// body function









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
struct buffer* buf_5;
int i_6;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&i_6, 0, sizeof(int));
    buf_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 44, "buffer"));
    buffer_append_str(buf_5,xsprintf("%s %d\n",sname,sline));
    for(    i_6=gNumComeStackFrame-2;    i_6>=0;    i_6--    ){
        buffer_append_str(buf_5,xsprintf("%s %d #%d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6],gComeStackFrameID[i_6]));
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_5));
}

void exception_stackframe(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
int i_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_7, 0, sizeof(int));
    for(    i_7=gNumComeStackFrame-1;    i_7>=0;    i_7--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7],gComeStackFrameID[i_7]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
char* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    return __result10__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional4;
void* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional4=mem==((void*)0),    _if_conditional4) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result11__ = __result_obj__ = mem;
    return __result11__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
void* __result12__;
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
    __result12__ = __result_obj__ = mem;
    return __result12__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool __result13__;
_Bool __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional8=!self,    _if_conditional8) {
        block(parent);
        if(_if_conditional9=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional9) {
            __result13__ = self;
            return __result13__;
        }
        stackframe();
        exit(1);
    }
    __result14__ = self;
    return __result14__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    __result15__ = self;
    return __result15__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional10;
_Bool _if_conditional11;
int __result16__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional10=self<0,    _if_conditional10) {
        block(parent);
        if(_if_conditional11=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional11) {
            __result16__ = self;
            return __result16__;
        }
    }
    __result17__ = self;
    return __result17__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional13;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional12=self<0,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result18__ = self;
            return __result18__;
        }
        stackframe();
        exit(1);
    }
    __result19__ = self;
    return __result19__;
}

int int_value(int self){
void* __result_obj__;
int __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = self;
    return __result20__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result21__;
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result21__ = self;
            return __result21__;
        }
    }
    __result22__ = self;
    return __result22__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool __result23__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional16=!self,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result23__ = self;
            return __result23__;
        }
    }
    __result24__ = self;
    return __result24__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional18=!self,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result25__ = self;
            return __result25__;
        }
    }
    __result26__ = self;
    return __result26__;
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

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional23;
void* result_8;
struct sMemHeader* it_9;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* __result27__;
void* result_10;
struct sMemHeaderTiny* it_11;
_Bool _if_conditional27;
_Bool _if_conditional28;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(void*));
memset(&it_9, 0, sizeof(struct sMemHeader*));
memset(&result_10, 0, sizeof(void*));
memset(&it_11, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_8=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_8,0,size+sizeof(struct sMemHeader));
        it_9=result_8;
        it_9->allocated=177783;
        it_9->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional24=gNumComeStackFrame<16,        _if_conditional24) {
            memcpy(it_9->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_9->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_9->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_9->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_9->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_9->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_9->next=gAllocMem;
        it_9->prev=((void*)0);
        if(class_name) {
            it_9->class_name=GC_strdup(class_name);
        }
        else {
            it_9->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_9;
        }
        gAllocMem=it_9;
        __result27__ = __result_obj__ = (char*)result_8+sizeof(struct sMemHeader);
        return __result27__;
    }
    else {
        result_10=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_10,0,size+sizeof(struct sMemHeaderTiny));
        it_11=result_10;
        it_11->allocated=177783;
        if(class_name) {
            it_11->class_name=GC_strdup(class_name);
        }
        else {
            it_11->class_name=((void*)0);
        }
        it_11->size=size+sizeof(struct sMemHeaderTiny);
        it_11->next=(struct sMemHeaderTiny*)gAllocMem;
        it_11->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_11;
        }
        gAllocMem=(struct sMemHeader*)it_11;
        __result28__ = __result_obj__ = (char*)result_10+sizeof(struct sMemHeaderTiny);
        return __result28__;
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
struct sMemHeaderTiny* it_12;
_Bool _if_conditional31;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct sMemHeaderTiny*));
    it_12=(struct sMemHeaderTiny*)((char*)mem-sizeof(long int)-sizeof(long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional31=it_12->allocated!=177783,    _if_conditional31) {
        fprintf(__stderrp,"invalid heap object(%p)\n",it_12);
        exit(2);
    }
    __result29__ = __result_obj__ = it_12->class_name;
    return __result29__;
}

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_13;
long int* ref_count_14;
long int* size2_15;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_13, 0, sizeof(char*));
memset(&ref_count_14, 0, sizeof(long int*));
memset(&size2_15, 0, sizeof(long int*));
    mem_13=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline,class_name);
    ref_count_14=(long int*)mem_13;
    *ref_count_14=0;
    size2_15=(long int*)(mem_13+sizeof(long int));
    *size2_15=size*count+sizeof(long int)+sizeof(long int);
    __result30__ = __result_obj__ = mem_13+sizeof(long int)+sizeof(long int);
    return __result30__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional32;
long int* ref_count_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_16, 0, sizeof(long int*));
    if(_if_conditional32=mem==((void*)0),    _if_conditional32) {
        return;
    }
    ref_count_16=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_16);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional33;
long int* ref_count_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_17, 0, sizeof(long int*));
    if(_if_conditional33=mem==((void*)0),    _if_conditional33) {
        return;
    }
    ref_count_17=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_17);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional34;
void* __result31__;
char* mem_18;
long int* size_p_19;
long int size_20;
void* result_21;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_18, 0, sizeof(char*));
memset(&size_p_19, 0, sizeof(long int*));
memset(&size_20, 0, sizeof(long int));
memset(&result_21, 0, sizeof(void*));
    if(_if_conditional34=!block,    _if_conditional34) {
        __result31__ = __result_obj__ = ((void*)0);
        return __result31__;
    }
    mem_18=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_19=(long int*)(mem_18+sizeof(long int));
    size_20=*size_p_19-sizeof(long int)-sizeof(long int);
    result_21=come_calloc(1,size_20,sname,sline,class_name);
    memcpy(result_21,block,size_20);
    __result32__ = __result_obj__ = result_21;
    return __result32__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional35;
void* __result33__;
long int* ref_count_22;
void* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_22, 0, sizeof(long int*));
    if(_if_conditional35=mem==((void*)0),    _if_conditional35) {
        __result33__ = __result_obj__ = mem;
        return __result33__;
    }
    ref_count_22=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_22)++;
    __result34__ = __result_obj__ = mem;
    return __result34__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional36;
void* __result35__;
long int* ref_count_23;
void* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_23, 0, sizeof(long int*));
    if(_if_conditional36=mem==((void*)0),    _if_conditional36) {
        __result35__ = __result_obj__ = mem;
        return __result35__;
    }
    ref_count_23=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_23);
    __result36__ = __result_obj__ = mem;
    return __result36__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional37;
void* __result37__;
long int* ref_count_24;
_Bool _if_conditional38;
long int count_25;
_Bool _if_conditional39;
_Bool _if_conditional40;
void (*finalizer_26)(void*);
void* __result38__;
void* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_24, 0, sizeof(long int*));
memset(&count_25, 0, sizeof(long int));
memset(&finalizer_26, 0, sizeof(void (*)(void*)));
    if(_if_conditional37=mem==((void*)0),    _if_conditional37) {
        __result37__ = __result_obj__ = ((void*)0);
        return __result37__;
    }
    ref_count_24=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional38=!no_decrement,    _if_conditional38) {
        (*ref_count_24)--;
    }
    count_25=*ref_count_24;
    if(_if_conditional39=!no_free&&(count_25<=0||force_delete_),    _if_conditional39) {
        if(_if_conditional40=protocol_obj&&protocol_fun,        _if_conditional40) {
            finalizer_26=protocol_fun;
            finalizer_26(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result38__ = __result_obj__ = ((void*)0);
        return __result38__;
    }
    __result39__ = __result_obj__ = mem;
    return __result39__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
void (*finalizer_27)(void*);
void (*finalizer_28)(void*);
long int* ref_count_29;
_Bool _if_conditional45;
long int count_30;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void (*finalizer_31)(void*);
_Bool _if_conditional49;
void (*finalizer_32)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_27, 0, sizeof(void (*)(void*)));
memset(&finalizer_28, 0, sizeof(void (*)(void*)));
memset(&ref_count_29, 0, sizeof(long int*));
memset(&count_30, 0, sizeof(long int));
memset(&finalizer_31, 0, sizeof(void (*)(void*)));
memset(&finalizer_32, 0, sizeof(void (*)(void*)));
    if(_if_conditional41=mem==((void*)0),    _if_conditional41) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional44=protocol_obj&&protocol_fun,            _if_conditional44) {
                finalizer_27=protocol_fun;
                finalizer_27(protocol_obj);
            }
            finalizer_28=fun;
            finalizer_28(mem);
        }
    }
    else {
        ref_count_29=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional45=!no_decrement,        _if_conditional45) {
            (*ref_count_29)--;
        }
        count_30=*ref_count_29;
        if(_if_conditional46=!no_free&&(count_30<=0||force_delete_),        _if_conditional46) {
            if(mem) {
                if(_if_conditional48=protocol_obj&&protocol_fun,                _if_conditional48) {
                    finalizer_31=protocol_fun;
                    finalizer_31(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_32=fun;
                    finalizer_32(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional50;
char* __result40__;
int len_33;
char* result_34;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_33, 0, sizeof(int));
memset(&result_34, 0, sizeof(char*));
    if(_if_conditional50=str==((void*)0),    _if_conditional50) {
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    len_33=strlen(str)+1;
    result_34=(char*)come_calloc(1, sizeof(char)*(1*(len_33)), "libcomelang2-gc.c", 524, "char");
    strncpy(result_34,str,len_33);
    __result41__ = __result_obj__ = result_34;
    return __result41__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_35;
int i_36;
_Bool _if_conditional51;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_35, 0, sizeof(_Bool));
memset(&i_36, 0, sizeof(int));
    found_35=(_Bool)0;
    for(    i_36=0;    i_36<len;    i_36++    ){
        if(_if_conditional51=array[i_36]==element,        _if_conditional51) {
            found_35=(_Bool)1;
            break;
        }
    }
    __result42__ = found_35;
    return __result42__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
struct buffer* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 549, "char");
    self->buf[0]=0;
    self->len=0;
    __result43__ = __result_obj__ = self;
    return __result43__;
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
struct buffer* __result44__;
struct buffer* result_37;
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct buffer*));
    if(_if_conditional54=self==((void*)0),    _if_conditional54) {
        __result44__ = __result_obj__ = ((void*)0);
        return __result44__;
    }
    result_37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 571, "buffer");
    result_37->size=self->size;
    result_37->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 574, "char");
    result_37->len=self->len;
    memcpy(result_37->buf,self->buf,self->len);
    __result45__ = __result_obj__ = result_37;
    return __result45__;
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional55;
int __result46__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional55=self==((void*)0),    _if_conditional55) {
        __result46__ = 0;
        return __result46__;
    }
    __result47__ = self->len;
    return __result47__;
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

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool _if_conditional58;
struct buffer* __result48__;
_Bool _if_conditional59;
char* old_buf_38;
int old_len_39;
int new_size_40;
struct buffer* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_38, 0, sizeof(char*));
memset(&old_len_39, 0, sizeof(int));
memset(&new_size_40, 0, sizeof(int));
    if(_if_conditional58=self==((void*)0)||mem==((void*)0),    _if_conditional58) {
        __result48__ = __result_obj__ = self;
        return __result48__;
    }
    if(_if_conditional59=self->len+size+1+1>=self->size,    _if_conditional59) {
        old_buf_38=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 613, "char");
        memcpy(old_buf_38,self->buf,self->size);
        old_len_39=self->len;
        new_size_40=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_40)), "libcomelang2-gc.c", 617, "char");
        memcpy(self->buf,old_buf_38,old_len_39);
        self->buf[old_len_39]=0;
        self->size=new_size_40;
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result49__ = __result_obj__ = self;
    return __result49__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional60;
struct buffer* __result50__;
_Bool _if_conditional61;
char* old_buf_41;
int old_len_42;
int new_size_43;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_buf_41, 0, sizeof(char*));
memset(&old_len_42, 0, sizeof(int));
memset(&new_size_43, 0, sizeof(int));
    if(_if_conditional60=self==((void*)0),    _if_conditional60) {
        __result50__ = __result_obj__ = ((void*)0);
        return __result50__;
    }
    if(_if_conditional61=self->len+1+1+1>=self->size,    _if_conditional61) {
        old_buf_41=charp_clone(self->buf);
        old_len_42=self->len;
        new_size_43=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_43)), "libcomelang2-gc.c", 640, "char");
        memcpy(self->buf,old_buf_41,old_len_42);
        self->buf[old_len_42]=0;
        self->size=new_size_43;
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional62;
struct buffer* __result52__;
int size_44;
_Bool _if_conditional63;
char* old_buf_45;
int old_len_46;
int new_size_47;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_44, 0, sizeof(int));
memset(&old_buf_45, 0, sizeof(char*));
memset(&old_len_46, 0, sizeof(int));
memset(&new_size_47, 0, sizeof(int));
    if(_if_conditional62=self==((void*)0)||mem==((void*)0),    _if_conditional62) {
        __result52__ = __result_obj__ = self;
        return __result52__;
    }
    size_44=strlen(mem);
    if(_if_conditional63=self->len+size_44+1+1>=self->size,    _if_conditional63) {
        old_buf_45=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 662, "char");
        memcpy(old_buf_45,self->buf,self->size);
        old_len_46=self->len;
        new_size_47=(self->size+size_44+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_47)), "libcomelang2-gc.c", 666, "char");
        memcpy(self->buf,old_buf_45,old_len_46);
        self->buf[old_len_46]=0;
        self->size=new_size_47;
    }
    memcpy(self->buf+self->len,mem,size_44);
    self->len+=size_44;
    self->buf[self->len]=0;
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional64;
struct buffer* __result54__;
int size_48;
_Bool _if_conditional65;
char* old_buf_49;
int old_len_50;
int new_size_51;
struct buffer* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_48, 0, sizeof(int));
memset(&old_buf_49, 0, sizeof(char*));
memset(&old_len_50, 0, sizeof(int));
memset(&new_size_51, 0, sizeof(int));
    if(_if_conditional64=self==((void*)0)||mem==((void*)0),    _if_conditional64) {
        __result54__ = __result_obj__ = self;
        return __result54__;
    }
    size_48=strlen(mem)+1;
    if(_if_conditional65=self->len+size_48+1+1+1>=self->size,    _if_conditional65) {
        old_buf_49=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 686, "char");
        memcpy(old_buf_49,self->buf,self->size);
        old_len_50=self->len;
        new_size_51=(self->size+size_48+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_51)), "libcomelang2-gc.c", 690, "char");
        memcpy(self->buf,old_buf_49,old_len_50);
        self->buf[old_len_50]=0;
        self->size=new_size_51;
    }
    memcpy(self->buf+self->len,mem,size_48);
    self->len+=size_48;
    self->buf[self->len]=0;
    self->len++;
    __result55__ = __result_obj__ = self;
    return __result55__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional66;
struct buffer* __result56__;
int* mem_52;
int size_53;
_Bool _if_conditional67;
char* old_buf_54;
int old_len_55;
int new_size_56;
struct buffer* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_52, 0, sizeof(int*));
memset(&size_53, 0, sizeof(int));
memset(&old_buf_54, 0, sizeof(char*));
memset(&old_len_55, 0, sizeof(int));
memset(&new_size_56, 0, sizeof(int));
    if(_if_conditional66=self==((void*)0),    _if_conditional66) {
        __result56__ = __result_obj__ = ((void*)0);
        return __result56__;
    }
    mem_52=&value;
    size_53=sizeof(int);
    if(_if_conditional67=self->len+size_53+1+1>=self->size,    _if_conditional67) {
        old_buf_54=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 713, "char");
        memcpy(old_buf_54,self->buf,self->size);
        old_len_55=self->len;
        new_size_56=(self->size+size_53+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_56)), "libcomelang2-gc.c", 717, "char");
        memcpy(self->buf,old_buf_54,old_len_55);
        self->buf[old_len_55]=0;
        self->size=new_size_56;
    }
    memcpy(self->buf+self->len,mem_52,size_53);
    self->len+=size_53;
    self->buf[self->len]=0;
    __result57__ = __result_obj__ = self;
    return __result57__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_57;
int size_58;
_Bool _if_conditional68;
char* old_buf_59;
int old_len_60;
int new_size_61;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_57, 0, sizeof(long*));
memset(&size_58, 0, sizeof(int));
memset(&old_buf_59, 0, sizeof(char*));
memset(&old_len_60, 0, sizeof(int));
memset(&new_size_61, 0, sizeof(int));
    mem_57=&value;
    size_58=sizeof(long);
    if(_if_conditional68=self->len+size_58+1+1>=self->size,    _if_conditional68) {
        old_buf_59=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 736, "char");
        memcpy(old_buf_59,self->buf,self->size);
        old_len_60=self->len;
        new_size_61=(self->size+size_58+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_61)), "libcomelang2-gc.c", 740, "char");
        memcpy(self->buf,old_buf_59,old_len_60);
        self->buf[old_len_60]=0;
        self->size=new_size_61;
    }
    memcpy(self->buf+self->len,mem_57,size_58);
    self->len+=size_58;
    self->buf[self->len]=0;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional69;
struct buffer* __result59__;
short short* mem_62;
int size_63;
_Bool _if_conditional70;
char* old_buf_64;
int old_len_65;
int new_size_66;
struct buffer* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_62, 0, sizeof(short short*));
memset(&size_63, 0, sizeof(int));
memset(&old_buf_64, 0, sizeof(char*));
memset(&old_len_65, 0, sizeof(int));
memset(&new_size_66, 0, sizeof(int));
    if(_if_conditional69=self==((void*)0),    _if_conditional69) {
        __result59__ = __result_obj__ = ((void*)0);
        return __result59__;
    }
    mem_62=&value;
    size_63=sizeof(short short);
    if(_if_conditional70=self->len+size_63+1+1>=self->size,    _if_conditional70) {
        old_buf_64=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2-gc.c", 763, "char");
        memcpy(old_buf_64,self->buf,self->size);
        old_len_65=self->len;
        new_size_66=(self->size+size_63+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_66)), "libcomelang2-gc.c", 767, "char");
        memcpy(self->buf,old_buf_64,old_len_65);
        self->buf[old_len_65]=0;
        self->size=new_size_66;
    }
    memcpy(self->buf+self->len,mem_62,size_63);
    self->len+=size_63;
    self->buf[self->len]=0;
    __result60__ = __result_obj__ = self;
    return __result60__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional71;
struct buffer* __result61__;
int len_67;
_Bool _if_conditional72;
int new_size_68;
int i_69;
struct buffer* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_67, 0, sizeof(int));
memset(&new_size_68, 0, sizeof(int));
memset(&i_69, 0, sizeof(int));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result61__ = __result_obj__ = ((void*)0);
        return __result61__;
    }
    len_67=self->len;
    len_67=(len_67+3)&~3;
    if(_if_conditional72=len_67>=self->size,    _if_conditional72) {
        new_size_68=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_68)), "libcomelang2-gc.c", 791, "char");
        self->size=new_size_68;
    }
    for(    i_69=self->len;    i_69<len_67;    i_69++    ){
        self->buf[i_69]=0;
    }
    self->len=len_67;
    __result62__ = __result_obj__ = self;
    return __result62__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional73;
int __result63__;
_Bool _if_conditional74;
int __result64__;
_Bool _if_conditional75;
int __result65__;
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional73=left==((void*)0)&&right==((void*)0),    _if_conditional73) {
        __result63__ = 0;
        return __result63__;
    }
    else {
        if(_if_conditional74=left==((void*)0),        _if_conditional74) {
            __result64__ = -1;
            return __result64__;
        }
        else {
            if(_if_conditional75=right==((void*)0),            _if_conditional75) {
                __result65__ = 1;
                return __result65__;
            }
        }
    }
    __result66__ = strcmp(left->buf,right->buf);
    return __result66__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_70;
_Bool _if_conditional76;
struct buffer* __result67__;
struct buffer* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(struct buffer*));
    result_70=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 821, "buffer"));
    if(_if_conditional76=self==((void*)0),    _if_conditional76) {
        __result67__ = __result_obj__ = result_70;
        return __result67__;
    }
    buffer_append_str(result_70,self);
    __result68__ = __result_obj__ = result_70;
    return __result68__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
struct buffer* result_71;
_Bool _if_conditional77;
struct buffer* __result69__;
struct buffer* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct buffer*));
    result_71=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 834, "buffer"));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result69__ = __result_obj__ = result_71;
        return __result69__;
    }
    buffer_append_str(result_71,self);
    __result70__ = __result_obj__ = result_71;
    return __result70__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional78;
char* __result71__;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional78=self==((void*)0),    _if_conditional78) {
        __result71__ = __result_obj__ = __builtin_string("");
        return __result71__;
    }
    __result72__ = __result_obj__ = __builtin_string(self->buf);
    return __result72__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = self==right;
    return __result73__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = self==right;
    return __result74__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = self==right;
    return __result75__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    __result76__ = self==right;
    return __result76__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = self==right;
    return __result77__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self==right;
    return __result78__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = self==right;
    return __result79__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self==right;
    return __result80__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional79;
_Bool __result81__;
_Bool _if_conditional80;
_Bool __result82__;
_Bool _if_conditional81;
_Bool __result83__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0)&&right==((void*)0),    _if_conditional79) {
        __result81__ = (_Bool)1;
        return __result81__;
    }
    else {
        if(_if_conditional80=self==((void*)0),        _if_conditional80) {
            __result82__ = (_Bool)0;
            return __result82__;
        }
        else {
            if(_if_conditional81=right==((void*)0),            _if_conditional81) {
                __result83__ = (_Bool)0;
                return __result83__;
            }
        }
    }
    __result84__ = strcmp(self,right)==0;
    return __result84__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional82;
_Bool __result85__;
_Bool _if_conditional83;
_Bool __result86__;
_Bool _if_conditional84;
_Bool __result87__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional82=self==((void*)0)&&right==((void*)0),    _if_conditional82) {
        __result85__ = (_Bool)1;
        return __result85__;
    }
    else {
        if(_if_conditional83=self==((void*)0),        _if_conditional83) {
            __result86__ = (_Bool)0;
            return __result86__;
        }
        else {
            if(_if_conditional84=right==((void*)0),            _if_conditional84) {
                __result87__ = (_Bool)0;
                return __result87__;
            }
        }
    }
    __result88__ = strcmp(self,right)==0;
    return __result88__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional85;
_Bool __result89__;
_Bool _if_conditional86;
_Bool __result90__;
_Bool _if_conditional87;
_Bool __result91__;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional85=self==((void*)0)&&right==((void*)0),    _if_conditional85) {
        __result89__ = (_Bool)1;
        return __result89__;
    }
    else {
        if(_if_conditional86=self==((void*)0),        _if_conditional86) {
            __result90__ = (_Bool)0;
            return __result90__;
        }
        else {
            if(_if_conditional87=right==((void*)0),            _if_conditional87) {
                __result91__ = (_Bool)0;
                return __result91__;
            }
        }
    }
    __result92__ = strcmp(self,right)==0;
    return __result92__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional88;
_Bool __result93__;
_Bool _if_conditional89;
_Bool __result94__;
_Bool _if_conditional90;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional88=self==((void*)0)&&right==((void*)0),    _if_conditional88) {
        __result93__ = (_Bool)1;
        return __result93__;
    }
    else {
        if(_if_conditional89=self==((void*)0),        _if_conditional89) {
            __result94__ = (_Bool)0;
            return __result94__;
        }
        else {
            if(_if_conditional90=right==((void*)0),            _if_conditional90) {
                __result95__ = (_Bool)0;
                return __result95__;
            }
        }
    }
    __result96__ = strcmp(self,right)==0;
    return __result96__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional91;
_Bool __result97__;
_Bool _if_conditional92;
_Bool __result98__;
_Bool _if_conditional93;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional91=self==((void*)0)&&right==((void*)0),    _if_conditional91) {
        __result97__ = (_Bool)0;
        return __result97__;
    }
    else {
        if(_if_conditional92=self==((void*)0),        _if_conditional92) {
            __result98__ = (_Bool)1;
            return __result98__;
        }
        else {
            if(_if_conditional93=right==((void*)0),            _if_conditional93) {
                __result99__ = (_Bool)1;
                return __result99__;
            }
        }
    }
    __result100__ = strcmp(self,right)!=0;
    return __result100__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional94;
_Bool __result101__;
_Bool _if_conditional95;
_Bool __result102__;
_Bool _if_conditional96;
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional94=self==((void*)0)&&right==((void*)0),    _if_conditional94) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    else {
        if(_if_conditional95=self==((void*)0),        _if_conditional95) {
            __result102__ = (_Bool)1;
            return __result102__;
        }
        else {
            if(_if_conditional96=right==((void*)0),            _if_conditional96) {
                __result103__ = (_Bool)1;
                return __result103__;
            }
        }
    }
    __result104__ = strcmp(self,right)!=0;
    return __result104__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional97;
char* __result105__;
int len_72;
char* result_73;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_72, 0, sizeof(int));
memset(&result_73, 0, sizeof(char*));
    if(_if_conditional97=self==((void*)0)||right==((void*)0),    _if_conditional97) {
        __result105__ = __result_obj__ = __builtin_string("");
        return __result105__;
    }
    len_72=strlen(self)+strlen(right);
    result_73=(char*)come_calloc(1, sizeof(char)*(1*(len_72+1)), "libcomelang2-gc.c", 995, "char");
    strncpy(result_73,self,len_72+1);
    strncat(result_73,right,len_72+1);
    __result106__ = __result_obj__ = result_73;
    return __result106__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional98;
char* __result107__;
int len_74;
char* result_75;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_74, 0, sizeof(int));
memset(&result_75, 0, sizeof(char*));
    if(_if_conditional98=self==((void*)0)||right==((void*)0),    _if_conditional98) {
        __result107__ = __result_obj__ = __builtin_string("");
        return __result107__;
    }
    len_74=strlen(self)+strlen(right);
    result_75=(char*)come_calloc(1, sizeof(char)*(1*(len_74+1)), "libcomelang2-gc.c", 1010, "char");
    strncpy(result_75,self,len_74+1);
    strncat(result_75,right,len_74+1);
    __result108__ = __result_obj__ = result_75;
    return __result108__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional99;
char* __result109__;
struct buffer* buf_76;
int i_77;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_76, 0, sizeof(struct buffer*));
memset(&i_77, 0, sizeof(int));
    if(_if_conditional99=self==((void*)0),    _if_conditional99) {
        __result109__ = __result_obj__ = __builtin_string("");
        return __result109__;
    }
    buf_76=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1023, "buffer"));
    for(    i_77=0;    i_77<right;    i_77++    ){
        buffer_append_str(buf_76,self);
    }
    __result110__ = __result_obj__ = buffer_to_string(buf_76);
    return __result110__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional100;
char* __result111__;
struct buffer* buf_78;
int i_79;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_78, 0, sizeof(struct buffer*));
memset(&i_79, 0, sizeof(int));
    if(_if_conditional100=self==((void*)0),    _if_conditional100) {
        __result111__ = __result_obj__ = __builtin_string("");
        return __result111__;
    }
    buf_78=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1037, "buffer"));
    for(    i_79=0;    i_79<right;    i_79++    ){
        buffer_append_str(buf_78,self);
    }
    __result112__ = __result_obj__ = buffer_to_string(buf_78);
    return __result112__;
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = (int_get_hash_key(((int)value)));
    return __result113__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = value;
    return __result114__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = value;
    return __result115__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = value;
    return __result116__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = value;
    return __result117__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = value;
    return __result118__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = (unsigned int)value;
    return __result119__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (unsigned int)value;
    return __result120__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional101;
unsigned int __result121__;
int result_80;
char* p_81;
_Bool _while_condtional1;
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(int));
memset(&p_81, 0, sizeof(char*));
    if(_if_conditional101=value==((void*)0),    _if_conditional101) {
        __result121__ = 0;
        return __result121__;
    }
    result_80=0;
    p_81=value;
    while(_while_condtional1=*p_81,    _while_condtional1) {
        result_80+=(*p_81);
        p_81++;
    }
    __result122__ = result_80;
    return __result122__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional102;
unsigned int __result123__;
int result_82;
char* p_83;
_Bool _while_condtional2;
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(int));
memset(&p_83, 0, sizeof(char*));
    if(_if_conditional102=value==((void*)0),    _if_conditional102) {
        __result123__ = 0;
        return __result123__;
    }
    result_82=0;
    p_83=value;
    while(_while_condtional2=*p_83,    _while_condtional2) {
        result_82+=(*p_83);
        p_83++;
    }
    __result124__ = result_82;
    return __result124__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = self;
    return __result125__;
}

char char_clone(char self){
void* __result_obj__;
char __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = self;
    return __result126__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = self;
    return __result127__;
}

int int_clone(int self){
void* __result_obj__;
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = self;
    return __result128__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = self;
    return __result129__;
}

long int size_t_clone(long int self){
void* __result_obj__;
long int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = self;
    return __result130__;
}

double double_clone(double self){
void* __result_obj__;
double __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = self;
    return __result131__;
}

float float_clone(float self){
void* __result_obj__;
float __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = self;
    return __result132__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional103;
char* __result133__;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional103=self==((void*)0),    _if_conditional103) {
        __result133__ = __result_obj__ = ((void*)0);
        return __result133__;
    }
    __result134__ = __result_obj__ = __builtin_string(self);
    return __result134__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional104;
char* __result135__;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional104=self==((void*)0),    _if_conditional104) {
        __result135__ = __result_obj__ = ((void*)0);
        return __result135__;
    }
    __result136__ = __result_obj__ = __builtin_string(self);
    return __result136__;
}

_Bool xiswalpha(int c){
void* __result_obj__;
_Bool result_84;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(_Bool));
    result_84=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result137__ = result_84;
    return __result137__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = c==32||c==9;
    return __result138__;
}

_Bool xiswdigit(int c){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = (c>=48&&c<=57);
    return __result139__;
}

_Bool xiswalnum(int c){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = xiswalpha(c)||xiswdigit(c);
    return __result140__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_85;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(_Bool));
    result_85=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result141__ = result_85;
    return __result141__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = c==32||c==9;
    return __result142__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = (c>=48&&c<=57);
    return __result143__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = xisalpha(c)||xisdigit(c);
    return __result144__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_86;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(_Bool));
    result_86=(c>=32&&c<=126);
    __result145__ = result_86;
    return __result145__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool result_87;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_87, 0, sizeof(_Bool));
    result_87=(c>=32&&c<=126);
    __result146__ = result_87;
    return __result146__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional105;
int __result147__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional105=str==((void*)0),    _if_conditional105) {
        __result147__ = 0;
        return __result147__;
    }
    __result148__ = strlen(str);
    return __result148__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional106;
int __result149__;
int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional106=str==((void*)0),    _if_conditional106) {
        __result149__ = 0;
        return __result149__;
    }
    __result150__ = strlen(str);
    return __result150__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional107;
char* __result151__;
int len_88;
char* result_89;
int i_90;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_88, 0, sizeof(int));
memset(&result_89, 0, sizeof(char*));
memset(&i_90, 0, sizeof(int));
    if(_if_conditional107=str==((void*)0),    _if_conditional107) {
        __result151__ = __result_obj__ = __builtin_string("");
        return __result151__;
    }
    len_88=strlen(str);
    result_89=(char*)come_calloc(1, sizeof(char)*(1*(len_88+1)), "libcomelang2-gc.c", 1254, "char");
    for(    i_90=0;    i_90<len_88;    i_90++    ){
        result_89[i_90]=str[len_88-i_90-1];
    }
    result_89[len_88]=0;
    __result152__ = __result_obj__ = result_89;
    return __result152__;
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional108;
char* __result153__;
int len_91;
char* result_92;
int i_93;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_91, 0, sizeof(int));
memset(&result_92, 0, sizeof(char*));
memset(&i_93, 0, sizeof(int));
    if(_if_conditional108=str==((void*)0),    _if_conditional108) {
        __result153__ = __result_obj__ = __builtin_string("");
        return __result153__;
    }
    len_91=strlen(str);
    result_92=(char*)come_calloc(1, sizeof(char)*(1*(len_91+1)), "libcomelang2-gc.c", 1271, "char");
    for(    i_93=0;    i_93<len_91;    i_93++    ){
        result_92[i_93]=str[len_91-i_93-1];
    }
    result_92[len_91]=0;
    __result154__ = __result_obj__ = result_92;
    return __result154__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional109;
char* __result155__;
int len_94;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
char* __result156__;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
char* __result157__;
_Bool _if_conditional116;
char* __result158__;
char* result_95;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_94, 0, sizeof(int));
memset(&result_95, 0, sizeof(char*));
    if(_if_conditional109=str==((void*)0),    _if_conditional109) {
        __result155__ = __result_obj__ = __builtin_string("");
        return __result155__;
    }
    len_94=strlen(str);
    if(_if_conditional110=head<0,    _if_conditional110) {
        head+=len_94;
    }
    if(_if_conditional111=tail<0,    _if_conditional111) {
        tail+=len_94+1;
    }
    if(_if_conditional112=head>tail,    _if_conditional112) {
        __result156__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result156__;
    }
    if(_if_conditional113=head<0,    _if_conditional113) {
        head=0;
    }
    if(_if_conditional114=tail>=len_94,    _if_conditional114) {
        tail=len_94;
    }
    if(_if_conditional115=head==tail,    _if_conditional115) {
        __result157__ = __result_obj__ = __builtin_string("");
        return __result157__;
    }
    if(_if_conditional116=tail-head+1<1,    _if_conditional116) {
        __result158__ = __result_obj__ = __builtin_string("");
        return __result158__;
    }
    result_95=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1316, "char");
    memcpy(result_95,str+head,tail-head);
    result_95[tail-head]=0;
    __result159__ = __result_obj__ = result_95;
    return __result159__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional117;
char* __result160__;
int len_96;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
char* __result161__;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* __result162__;
_Bool _if_conditional124;
char* __result163__;
char* result_97;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_96, 0, sizeof(int));
memset(&result_97, 0, sizeof(char*));
    if(_if_conditional117=str==((void*)0),    _if_conditional117) {
        __result160__ = __result_obj__ = __builtin_string("");
        return __result160__;
    }
    len_96=strlen(str);
    if(_if_conditional118=head<0,    _if_conditional118) {
        head+=len_96;
    }
    if(_if_conditional119=tail<0,    _if_conditional119) {
        tail+=len_96+1;
    }
    if(_if_conditional120=head>tail,    _if_conditional120) {
        __result161__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result161__;
    }
    if(_if_conditional121=head<0,    _if_conditional121) {
        head=0;
    }
    if(_if_conditional122=tail>=len_96,    _if_conditional122) {
        tail=len_96;
    }
    if(_if_conditional123=head==tail,    _if_conditional123) {
        __result162__ = __result_obj__ = __builtin_string("");
        return __result162__;
    }
    if(_if_conditional124=tail-head+1<1,    _if_conditional124) {
        __result163__ = __result_obj__ = __builtin_string("");
        return __result163__;
    }
    result_97=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1359, "char");
    memcpy(result_97,str+head,tail-head);
    result_97[tail-head]=0;
    __result164__ = __result_obj__ = result_97;
    return __result164__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional125;
char* __result165__;
int len_98;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
char* __result166__;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
char* __result167__;
_Bool _if_conditional132;
char* __result168__;
char* result_99;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_98, 0, sizeof(int));
memset(&result_99, 0, sizeof(char*));
    if(_if_conditional125=str==((void*)0),    _if_conditional125) {
        __result165__ = __result_obj__ = __builtin_string("");
        return __result165__;
    }
    len_98=strlen(str);
    if(_if_conditional126=head<0,    _if_conditional126) {
        head+=len_98;
    }
    if(_if_conditional127=tail<0,    _if_conditional127) {
        tail+=len_98+1;
    }
    if(_if_conditional128=head>tail,    _if_conditional128) {
        __result166__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result166__;
    }
    if(_if_conditional129=head<0,    _if_conditional129) {
        head=0;
    }
    if(_if_conditional130=tail>=len_98,    _if_conditional130) {
        tail=len_98;
    }
    if(_if_conditional131=head==tail,    _if_conditional131) {
        __result167__ = __result_obj__ = __builtin_string("");
        return __result167__;
    }
    if(_if_conditional132=tail-head+1<1,    _if_conditional132) {
        __result168__ = __result_obj__ = __builtin_string("");
        return __result168__;
    }
    result_99=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1402, "char");
    memcpy(result_99,str+head,tail-head);
    result_99[tail-head]=0;
    __result169__ = __result_obj__ = result_99;
    return __result169__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional133;
char* __result170__;
int len_100;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
char* __result171__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
char* __result172__;
_Bool _if_conditional140;
char* __result173__;
char* result_101;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_100, 0, sizeof(int));
memset(&result_101, 0, sizeof(char*));
    if(_if_conditional133=str==((void*)0),    _if_conditional133) {
        __result170__ = __result_obj__ = __builtin_string("");
        return __result170__;
    }
    len_100=strlen(str);
    if(_if_conditional134=head<0,    _if_conditional134) {
        head+=len_100;
    }
    if(_if_conditional135=tail<0,    _if_conditional135) {
        tail+=len_100+1;
    }
    if(_if_conditional136=head>tail,    _if_conditional136) {
        __result171__ = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        return __result171__;
    }
    if(_if_conditional137=head<0,    _if_conditional137) {
        head=0;
    }
    if(_if_conditional138=tail>=len_100,    _if_conditional138) {
        tail=len_100;
    }
    if(_if_conditional139=head==tail,    _if_conditional139) {
        __result172__ = __result_obj__ = __builtin_string("");
        return __result172__;
    }
    if(_if_conditional140=tail-head+1<1,    _if_conditional140) {
        __result173__ = __result_obj__ = __builtin_string("");
        return __result173__;
    }
    result_101=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2-gc.c", 1445, "char");
    memcpy(result_101,str+head,tail-head);
    result_101[tail-head]=0;
    __result174__ = __result_obj__ = result_101;
    return __result174__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional141;
char* __result175__;
va_list args_102;
char* result_103;
int len_104;
_Bool _if_conditional142;
char* __result176__;
char* result2_105;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_102, 0, sizeof(va_list));
memset(&result_103, 0, sizeof(char*));
memset(&len_104, 0, sizeof(int));
memset(&result2_105, 0, sizeof(char*));
    if(_if_conditional141=msg==((void*)0),    _if_conditional141) {
        __result175__ = __result_obj__ = __builtin_string("");
        return __result175__;
    }
    __builtin_va_start(args_102,msg);
    len_104=vasprintf(&result_103,msg,args_102);
    __builtin_va_end(args_102);
    if(_if_conditional142=len_104<0,    _if_conditional142) {
        __result176__ = __result_obj__ = __builtin_string("");
        return __result176__;
    }
    result2_105=__builtin_string(result_103);
    free(result_103);
    __result177__ = __result_obj__ = result2_105;
    return __result177__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional143;
char* __result178__;
int len_106;
_Bool _if_conditional144;
char* __result179__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
char* __result180__;
_Bool _if_conditional149;
char* sub_str_107;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_106, 0, sizeof(int));
memset(&sub_str_107, 0, sizeof(char*));
    if(_if_conditional143=str==((void*)0),    _if_conditional143) {
        __result178__ = __result_obj__ = __builtin_string("");
        return __result178__;
    }
    len_106=strlen(str);
    if(_if_conditional144=strcmp(str,"")==0,    _if_conditional144) {
        __result179__ = __result_obj__ = __builtin_string(str);
        return __result179__;
    }
    if(_if_conditional145=head<0,    _if_conditional145) {
        head+=len_106;
    }
    if(_if_conditional146=tail<0,    _if_conditional146) {
        tail+=len_106+1;
    }
    if(_if_conditional147=head<0,    _if_conditional147) {
        head=0;
    }
    if(_if_conditional148=tail<0,    _if_conditional148) {
        __result180__ = __result_obj__ = __builtin_string(str);
        return __result180__;
    }
    if(_if_conditional149=tail>=len_106,    _if_conditional149) {
        tail=len_106;
    }
    sub_str_107=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_107,string_length(sub_str_107)+1);
    __result181__ = __result_obj__ = __builtin_string(str);
    return __result181__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional150;
char* __result182__;
int len_108;
_Bool _if_conditional151;
char* __result183__;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
char* __result184__;
_Bool _if_conditional156;
char* sub_str_109;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_108, 0, sizeof(int));
memset(&sub_str_109, 0, sizeof(char*));
    if(_if_conditional150=str==((void*)0),    _if_conditional150) {
        __result182__ = __result_obj__ = __builtin_string("");
        return __result182__;
    }
    len_108=strlen(str);
    if(_if_conditional151=strcmp(str,"")==0,    _if_conditional151) {
        __result183__ = __result_obj__ = __builtin_string(str);
        return __result183__;
    }
    if(_if_conditional152=head<0,    _if_conditional152) {
        head+=len_108;
    }
    if(_if_conditional153=tail<0,    _if_conditional153) {
        tail+=len_108+1;
    }
    if(_if_conditional154=head<0,    _if_conditional154) {
        head=0;
    }
    if(_if_conditional155=tail<0,    _if_conditional155) {
        __result184__ = __result_obj__ = __builtin_string(str);
        return __result184__;
    }
    if(_if_conditional156=tail>=len_108,    _if_conditional156) {
        tail=len_108;
    }
    sub_str_109=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_109,string_length(sub_str_109)+1);
    __result185__ = __result_obj__ = __builtin_string(str);
    return __result185__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional157;
struct list$1charph* __result187__;
struct list$1charph* result_110;
struct buffer* str_111;
int i_112;
_Bool _if_conditional158;
_Bool _if_conditional161;
struct list$1charph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct list$1charph*));
memset(&str_111, 0, sizeof(struct buffer*));
memset(&i_112, 0, sizeof(int));
    if(_if_conditional157=self==((void*)0),    _if_conditional157) {
        __result187__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1556, "list$1charph"));
        return __result187__;
    }
    result_110=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1559, "list$1charph"));
    str_111=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1561, "buffer"));
    for(    i_112=0;    i_112<charp_length(self);    i_112++    ){
        if(_if_conditional158=self[i_112]==c,        _if_conditional158) {
            list$1charph_push_back(result_110,__builtin_string(str_111->buf));
            buffer_reset(str_111);
        }
        else {
            buffer_append_char(str_111,self[i_112]);
        }
    }
    if(_if_conditional161=buffer_length(str_111)!=0,    _if_conditional161) {
        list$1charph_push_back(result_110,__builtin_string(str_111->buf));
    }
    __result189__ = __result_obj__ = result_110;
    return __result189__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result186__ = __result_obj__ = self;
            return __result186__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional159;
struct list_item$1charph* litem_113;
_Bool _if_conditional160;
struct list_item$1charph* litem_114;
struct list_item$1charph* litem_115;
struct list$1charph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional159=self->len==0,                _if_conditional159) {
                    litem_113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charph");
                    litem_113->prev=((void*)0);
                    litem_113->next=((void*)0);
                    litem_113->item=item;
                    self->tail=litem_113;
                    self->head=litem_113;
                }
                else {
                    if(_if_conditional160=self->len==1,                    _if_conditional160) {
                        litem_114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charph");
                        litem_114->prev=self->head;
                        litem_114->next=((void*)0);
                        litem_114->item=item;
                        self->tail=litem_114;
                        self->head->next=litem_114;
                    }
                    else {
                        litem_115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charph");
                        litem_115->prev=self->tail;
                        litem_115->next=((void*)0);
                        litem_115->item=item;
                        self->tail->next=litem_115;
                        self->tail=litem_115;
                    }
                }
                self->len++;
                __result188__ = __result_obj__ = self;
                return __result188__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional162;
struct list$1charph* __result190__;
struct list$1charph* result_116;
struct buffer* str_117;
int i_118;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1charph* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(struct list$1charph*));
memset(&str_117, 0, sizeof(struct buffer*));
memset(&i_118, 0, sizeof(int));
    if(_if_conditional162=self==((void*)0),    _if_conditional162) {
        __result190__ = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1582, "list$1charph"));
        return __result190__;
    }
    result_116=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 1585, "list$1charph"));
    str_117=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1587, "buffer"));
    for(    i_118=0;    i_118<charp_length(self);    i_118++    ){
        if(_if_conditional163=self[i_118]==c,        _if_conditional163) {
            list$1charph_push_back(result_116,__builtin_string(str_117->buf));
            buffer_reset(str_117);
        }
        else {
            buffer_append_char(str_117,self[i_118]);
        }
    }
    if(_if_conditional164=buffer_length(str_117)!=0,    _if_conditional164) {
        list$1charph_push_back(result_116,__builtin_string(str_117->buf));
    }
    __result191__ = __result_obj__ = result_116;
    return __result191__;
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional165;
char* __result192__;
char* p_119;
_Bool _while_condtional3;
_Bool _if_conditional166;
_Bool _if_conditional167;
char* __result193__;
char* __result194__;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_119, 0, sizeof(char*));
    if(_if_conditional165=path==((void*)0),    _if_conditional165) {
        __result192__ = __result_obj__ = __builtin_string("");
        return __result192__;
    }
    p_119=path+strlen(path);
    while(_while_condtional3=p_119>=path,    _while_condtional3) {
        if(_if_conditional166=*p_119==47,        _if_conditional166) {
            break;
        }
        else {
            p_119--;
        }
    }
    if(_if_conditional167=p_119<path,    _if_conditional167) {
        __result193__ = __result_obj__ = __builtin_string(path);
        return __result193__;
    }
    else {
        __result194__ = __result_obj__ = __builtin_string(p_119+1);
        return __result194__;
    }
    __result195__ = __result_obj__ = __builtin_string("");
    return __result195__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional168;
char* __result196__;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional168=path==((void*)0),    _if_conditional168) {
        __result196__ = __result_obj__ = __builtin_string("");
        return __result196__;
    }
    __result197__ = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    return __result197__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional169;
char* __result198__;
char* path2_120;
char* p_121;
_Bool _while_condtional4;
_Bool _if_conditional170;
_Bool _if_conditional171;
char* __result199__;
char* __result200__;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&path2_120, 0, sizeof(char*));
memset(&p_121, 0, sizeof(char*));
    if(_if_conditional169=path==((void*)0),    _if_conditional169) {
        __result198__ = __result_obj__ = __builtin_string("");
        return __result198__;
    }
    path2_120=xbasename(path);
    p_121=path2_120+strlen(path2_120);
    while(_while_condtional4=p_121>=path2_120,    _while_condtional4) {
        if(_if_conditional170=*p_121==46,        _if_conditional170) {
            break;
        }
        else {
            p_121--;
        }
    }
    if(_if_conditional171=p_121<path2_120,    _if_conditional171) {
        __result199__ = __result_obj__ = __builtin_string(path2_120);
        return __result199__;
    }
    else {
        __result200__ = __result_obj__ = string_substring(path2_120,0,p_121-path2_120);
        return __result200__;
    }
    __result201__ = __result_obj__ = __builtin_string("");
    return __result201__;
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional172;
char* __result202__;
char* p_122;
_Bool _while_condtional5;
_Bool _if_conditional173;
_Bool _if_conditional174;
char* __result203__;
char* __result204__;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_122, 0, sizeof(char*));
    if(_if_conditional172=path==((void*)0),    _if_conditional172) {
        __result202__ = __result_obj__ = __builtin_string("");
        return __result202__;
    }
    p_122=path+strlen(path);
    while(_while_condtional5=p_122>=path,    _while_condtional5) {
        if(_if_conditional173=*p_122==46,        _if_conditional173) {
            break;
        }
        else {
            p_122--;
        }
    }
    if(_if_conditional174=p_122<path,    _if_conditional174) {
        __result203__ = __result_obj__ = __builtin_string(path);
        return __result203__;
    }
    else {
        __result204__ = __result_obj__ = __builtin_string(p_122+1);
        return __result204__;
    }
    __result205__ = __result_obj__ = __builtin_string("");
    return __result205__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional175;
char* __result206__;
char* result_123;
char* result2_124;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(char*));
memset(&result2_124, 0, sizeof(char*));
    if(_if_conditional175=path==((void*)0),    _if_conditional175) {
        __result206__ = __result_obj__ = __builtin_string("");
        return __result206__;
    }
    result_123=realpath(path,((void*)0));
    result2_124=__builtin_string(result_123);
    free(result_123);
    __result207__ = __result_obj__ = result2_124;
    return __result207__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional176;
char* __result208__;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self) {
        __result208__ = __result_obj__ = __builtin_string("true");
        return __result208__;
    }
    else {
        __result209__ = __result_obj__ = __builtin_string("false");
        return __result209__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
    __result210__ = __result_obj__ = xsprintf("%c",self);
    return __result210__;
}

char* short_to_string(short short self){
void* __result_obj__;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
    __result211__ = __result_obj__ = xsprintf("%d",self);
    return __result211__;
}

char* int_to_string(int self){
void* __result_obj__;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
    __result212__ = __result_obj__ = xsprintf("%d",self);
    return __result212__;
}

char* long_to_string(long self){
void* __result_obj__;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    __result213__ = __result_obj__ = xsprintf("%ld",self);
    return __result213__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = __result_obj__ = xsprintf("%ld",self);
    return __result214__;
}

char* float_to_string(float self){
void* __result_obj__;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    __result215__ = __result_obj__ = xsprintf("%f",self);
    return __result215__;
}

char* double_to_string(double self){
void* __result_obj__;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
    __result216__ = __result_obj__ = xsprintf("%lf",self);
    return __result216__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional177;
char* __result217__;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional177=self==((void*)0),    _if_conditional177) {
        __result217__ = __result_obj__ = __builtin_string("");
        return __result217__;
    }
    __result218__ = __result_obj__ = __builtin_string(self);
    return __result218__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional178;
char* __result219__;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional178=self==((void*)0),    _if_conditional178) {
        __result219__ = __result_obj__ = __builtin_string("");
        return __result219__;
    }
    __result220__ = __result_obj__ = __builtin_string(self);
    return __result220__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional179;
int __result221__;
_Bool _if_conditional180;
int __result222__;
_Bool _if_conditional181;
int __result223__;
int __result224__;
int __result225__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional179=!left&&right,    _if_conditional179) {
        __result221__ = -1;
        return __result221__;
    }
    else {
        if(_if_conditional180=left&&right,        _if_conditional180) {
            __result222__ = 0;
            return __result222__;
        }
        else {
            if(_if_conditional181=!left&&!right,            _if_conditional181) {
                __result223__ = 0;
                return __result223__;
            }
            else {
                __result224__ = 1;
                return __result224__;
            }
        }
    }
    __result225__ = 0;
    return __result225__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional182;
int __result226__;
_Bool _if_conditional183;
int __result227__;
int __result228__;
int __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional182=left<right,    _if_conditional182) {
        __result226__ = -1;
        return __result226__;
    }
    else {
        if(_if_conditional183=left>right,        _if_conditional183) {
            __result227__ = 1;
            return __result227__;
        }
        else {
            __result228__ = 0;
            return __result228__;
        }
    }
    __result229__ = 0;
    return __result229__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional184;
int __result230__;
_Bool _if_conditional185;
int __result231__;
int __result232__;
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=left<right,    _if_conditional184) {
        __result230__ = -1;
        return __result230__;
    }
    else {
        if(_if_conditional185=left>right,        _if_conditional185) {
            __result231__ = 1;
            return __result231__;
        }
        else {
            __result232__ = 0;
            return __result232__;
        }
    }
    __result233__ = 0;
    return __result233__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional186;
int __result234__;
_Bool _if_conditional187;
int __result235__;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional186=left<right,    _if_conditional186) {
        __result234__ = -1;
        return __result234__;
    }
    else {
        if(_if_conditional187=left>right,        _if_conditional187) {
            __result235__ = 1;
            return __result235__;
        }
        else {
            __result236__ = 0;
            return __result236__;
        }
    }
    __result237__ = 0;
    return __result237__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional188;
int __result238__;
_Bool _if_conditional189;
int __result239__;
int __result240__;
int __result241__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional188=left<right,    _if_conditional188) {
        __result238__ = -1;
        return __result238__;
    }
    else {
        if(_if_conditional189=left>right,        _if_conditional189) {
            __result239__ = 1;
            return __result239__;
        }
        else {
            __result240__ = 0;
            return __result240__;
        }
    }
    __result241__ = 0;
    return __result241__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool _if_conditional190;
int __result242__;
_Bool _if_conditional191;
int __result243__;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional190=left<right,    _if_conditional190) {
        __result242__ = -1;
        return __result242__;
    }
    else {
        if(_if_conditional191=left>right,        _if_conditional191) {
            __result243__ = 1;
            return __result243__;
        }
        else {
            __result244__ = 0;
            return __result244__;
        }
    }
    __result245__ = 0;
    return __result245__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional192;
int __result246__;
_Bool _if_conditional193;
int __result247__;
int __result248__;
int __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional192=left<right,    _if_conditional192) {
        __result246__ = -1;
        return __result246__;
    }
    else {
        if(_if_conditional193=left>right,        _if_conditional193) {
            __result247__ = 1;
            return __result247__;
        }
        else {
            __result248__ = 0;
            return __result248__;
        }
    }
    __result249__ = 0;
    return __result249__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional194;
int __result250__;
_Bool _if_conditional195;
int __result251__;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional194=left<right,    _if_conditional194) {
        __result250__ = -1;
        return __result250__;
    }
    else {
        if(_if_conditional195=left>right,        _if_conditional195) {
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

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional196;
int __result254__;
_Bool _if_conditional197;
int __result255__;
_Bool _if_conditional198;
int __result256__;
int __result257__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional196=left==((void*)0)&&right==((void*)0),    _if_conditional196) {
        __result254__ = 0;
        return __result254__;
    }
    else {
        if(_if_conditional197=left==((void*)0),        _if_conditional197) {
            __result255__ = -1;
            return __result255__;
        }
        else {
            if(_if_conditional198=right==((void*)0),            _if_conditional198) {
                __result256__ = 1;
                return __result256__;
            }
        }
    }
    __result257__ = strcmp(left,right);
    return __result257__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional199;
int __result258__;
_Bool _if_conditional200;
int __result259__;
_Bool _if_conditional201;
int __result260__;
int __result261__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional199=left==((void*)0)&&right==((void*)0),    _if_conditional199) {
        __result258__ = 0;
        return __result258__;
    }
    else {
        if(_if_conditional200=left==((void*)0),        _if_conditional200) {
            __result259__ = -1;
            return __result259__;
        }
        else {
            if(_if_conditional201=right==((void*)0),            _if_conditional201) {
                __result260__ = 1;
                return __result260__;
            }
        }
    }
    __result261__ = strcmp(left,right);
    return __result261__;
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__;
_Bool _if_conditional202;
char* __result262__;
struct buffer* buf_125;
_Bool _while_condtional6;
int size_127;
_Bool _if_conditional203;
char* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_125, 0, sizeof(struct buffer*));
memset(&size_127, 0, sizeof(int));
    if(_if_conditional202=f==((void*)0),    _if_conditional202) {
        __result262__ = __result_obj__ = __builtin_string("");
        return __result262__;
    }
    buf_125=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 1938, "buffer"));
    while(_while_condtional6=1,    _while_condtional6) {
        char buf2_126[1024];
        memset(&buf2_126, 0, sizeof(char)        *(1024)        );
        size_127=fread(buf2_126,1,1024,f);
        buffer_append(buf_125,buf2_126,size_127);
        if(_if_conditional203=size_127<1024,        _if_conditional203) {
            break;
        }
    }
    __result263__ = __result_obj__ = buffer_to_string(buf_125);
    return __result263__;
}

int FILE_write(struct __sFILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional204;
int __result264__;
int __result265__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional204=f==((void*)0)||str==((void*)0),    _if_conditional204) {
        __result264__ = -1;
        return __result264__;
    }
    __result265__ = fwrite(str,strlen(str),1,f);
    return __result265__;
}

int FILE_fclose(struct __sFILE* f){
void* __result_obj__;
_Bool _if_conditional205;
int __result266__;
int result_128;
_Bool _if_conditional206;
int __result267__;
int __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(int));
    if(_if_conditional205=f==((void*)0),    _if_conditional205) {
        __result266__ = -1;
        return __result266__;
    }
    result_128=fclose(f);
    if(_if_conditional206=result_128<0,    _if_conditional206) {
        __result267__ = result_128;
        return __result267__;
    }
    __result268__ = result_128;
    return __result268__;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional207;
struct __sFILE* __result269__;
va_list args_130;
int result_131;
_Bool _if_conditional208;
struct __sFILE* __result270__;
struct __sFILE* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_130, 0, sizeof(va_list));
memset(&result_131, 0, sizeof(int));
    if(_if_conditional207=f==((void*)0)||msg==((void*)0),    _if_conditional207) {
        __result269__ = __result_obj__ = f;
        return __result269__;
    }
    char msg2_129[1024*2*2*2];
    memset(&msg2_129, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_130,msg);
    vsnprintf(msg2_129,1024*2*2*2,msg,args_130);
    __builtin_va_end(args_130);
    result_131=fprintf(f,"%s",msg2_129);
    if(_if_conditional208=result_131<0,    _if_conditional208) {
        __result270__ = __result_obj__ = f;
        return __result270__;
    }
    __result271__ = __result_obj__ = f;
    return __result271__;
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional209;
int __result272__;
struct __sFILE* f_132;
_Bool _if_conditional210;
_Bool _if_conditional211;
int __result273__;
int result_133;
_Bool _if_conditional212;
int __result274__;
int result2_134;
_Bool _if_conditional213;
int __result275__;
int __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_132, 0, sizeof(struct __sFILE*));
memset(&result_133, 0, sizeof(int));
memset(&result2_134, 0, sizeof(int));
    if(_if_conditional209=self==((void*)0)||file_name==((void*)0),    _if_conditional209) {
        __result272__ = -1;
        return __result272__;
    }
    if(append) {
        f_132=fopen(file_name,"a");
    }
    else {
        f_132=fopen(file_name,"w");
    }
    if(_if_conditional211=f_132==((void*)0),    _if_conditional211) {
        __result273__ = -1;
        return __result273__;
    }
    result_133=fwrite(self,strlen(self),1,f_132);
    if(_if_conditional212=result_133<0,    _if_conditional212) {
        __result274__ = result_133;
        return __result274__;
    }
    result2_134=fclose(f_132);
    if(_if_conditional213=result2_134<0,    _if_conditional213) {
        __result275__ = result2_134;
        return __result275__;
    }
    __result276__ = result_133;
    return __result276__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional214;
int __result277__;
struct __sFILE* f_135;
_Bool _if_conditional215;
_Bool _if_conditional216;
int __result278__;
int result_136;
_Bool _if_conditional217;
int __result279__;
int result2_137;
_Bool _if_conditional218;
int __result280__;
int __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_135, 0, sizeof(struct __sFILE*));
memset(&result_136, 0, sizeof(int));
memset(&result2_137, 0, sizeof(int));
    if(_if_conditional214=self==((void*)0)||file_name==((void*)0),    _if_conditional214) {
        __result277__ = -1;
        return __result277__;
    }
    if(append) {
        f_135=fopen(file_name,"a");
    }
    else {
        f_135=fopen(file_name,"w");
    }
    if(_if_conditional216=f_135==((void*)0),    _if_conditional216) {
        __result278__ = -1;
        return __result278__;
    }
    result_136=fwrite(self,strlen(self),1,f_135);
    if(_if_conditional217=result_136<0,    _if_conditional217) {
        __result279__ = result_136;
        return __result279__;
    }
    result2_137=fclose(f_135);
    if(_if_conditional218=result2_137<0,    _if_conditional218) {
        __result280__ = result2_137;
        return __result280__;
    }
    __result281__ = result_136;
    return __result281__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional219;
char* __result282__;
struct __sFILE* f_138;
_Bool _if_conditional220;
char* __result283__;
struct buffer* buf_139;
_Bool _while_condtional7;
int size_141;
_Bool _if_conditional221;
char* result_142;
int result2_143;
_Bool _if_conditional222;
char* __result284__;
char* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_138, 0, sizeof(struct __sFILE*));
memset(&buf_139, 0, sizeof(struct buffer*));
memset(&size_141, 0, sizeof(int));
memset(&result_142, 0, sizeof(char*));
memset(&result2_143, 0, sizeof(int));
    if(_if_conditional219=file_name==((void*)0),    _if_conditional219) {
        __result282__ = __result_obj__ = __builtin_string("");
        return __result282__;
    }
    f_138=fopen(file_name,"r");
    if(_if_conditional220=f_138==((void*)0),    _if_conditional220) {
        __result283__ = __result_obj__ = __builtin_string("");
        return __result283__;
    }
    buf_139=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2078, "buffer"));
    while(_while_condtional7=1,    _while_condtional7) {
        char buf2_140[1024];
        memset(&buf2_140, 0, sizeof(char)        *(1024)        );
        size_141=fread(buf2_140,1,1024,f_138);
        buffer_append(buf_139,buf2_140,size_141);
        if(_if_conditional221=size_141<1024,        _if_conditional221) {
            break;
        }
    }
    result_142=buffer_to_string(buf_139);
    result2_143=fclose(f_138);
    if(_if_conditional222=result2_143<0,    _if_conditional222) {
        __result284__ = __result_obj__ = __builtin_string("");
        return __result284__;
    }
    __result285__ = __result_obj__ = result_142;
    return __result285__;
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional223;
char* __result286__;
struct __sFILE* f_144;
_Bool _if_conditional224;
char* __result287__;
struct buffer* buf_145;
_Bool _while_condtional8;
int size_147;
_Bool _if_conditional225;
char* result_148;
int result2_149;
_Bool _if_conditional226;
char* __result288__;
char* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_144, 0, sizeof(struct __sFILE*));
memset(&buf_145, 0, sizeof(struct buffer*));
memset(&size_147, 0, sizeof(int));
memset(&result_148, 0, sizeof(char*));
memset(&result2_149, 0, sizeof(int));
    if(_if_conditional223=file_name==((void*)0),    _if_conditional223) {
        __result286__ = __result_obj__ = __builtin_string("");
        return __result286__;
    }
    f_144=fopen(file_name,"r");
    if(_if_conditional224=f_144==((void*)0),    _if_conditional224) {
        __result287__ = __result_obj__ = __builtin_string("");
        return __result287__;
    }
    buf_145=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-gc.c", 2115, "buffer"));
    while(_while_condtional8=1,    _while_condtional8) {
        char buf2_146[1024];
        memset(&buf2_146, 0, sizeof(char)        *(1024)        );
        size_147=fread(buf2_146,1,1024,f_144);
        buffer_append(buf_145,buf2_146,size_147);
        if(_if_conditional225=size_147<1024,        _if_conditional225) {
            break;
        }
    }
    result_148=buffer_to_string(buf_145);
    result2_149=fclose(f_144);
    if(_if_conditional226=result2_149<0,    _if_conditional226) {
        __result288__ = __result_obj__ = __builtin_string("");
        return __result288__;
    }
    __result289__ = __result_obj__ = result_148;
    return __result289__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__;
struct list$1charph* result_150;
_Bool _if_conditional227;
struct list$1charph* __result290__;
_Bool _while_condtional9;
_Bool _if_conditional228;
struct list$1charph* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct list$1charph*));
    result_150=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-gc.c", 2142, "list$1charph"));
    if(_if_conditional227=f==((void*)0),    _if_conditional227) {
        __result290__ = __result_obj__ = result_150;
        return __result290__;
    }
    while(_while_condtional9=1,    _while_condtional9) {
        char buf_151[1024];
        memset(&buf_151, 0, sizeof(char)        *(1024)        );
        if(_if_conditional228=fgets(buf_151,1024,f)==((void*)0),        _if_conditional228) {
            break;
        }
        list$1charph_push_back(result_150,__builtin_string(buf_151));
    }
    __result291__ = __result_obj__ = result_150;
    return __result291__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
void* __result_obj__;
_Bool _if_conditional229;
int __result292__;
struct __sFILE* f_152;
_Bool _if_conditional230;
_Bool _if_conditional231;
int __result293__;
int __result294__;
int __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_152, 0, sizeof(struct __sFILE*));
    if(_if_conditional229=path==((void*)0)||mode==((void*)0),    _if_conditional229) {
        __result292__ = -1;
        return __result292__;
    }
    f_152=fopen(path,mode);
    if(f_152) {
        block(parent,f_152);
        if(_if_conditional231=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional231) {
            fclose(f_152);
            __result293__ = 0;
            return __result293__;
        }
        fclose(f_152);
        __result294__ = 0;
        return __result294__;
    }
    __result295__ = -1;
    return __result295__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional232;
char* __result296__;
char* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional232=self==((void*)0),    _if_conditional232) {
        __result296__ = __result_obj__ = __builtin_string("");
        return __result296__;
    }
    puts(self);
    __result297__ = __result_obj__ = __builtin_string(self);
    return __result297__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional233;
char* __result298__;
char* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional233=self==((void*)0),    _if_conditional233) {
        __result298__ = __result_obj__ = __builtin_string("");
        return __result298__;
    }
    printf("%s",self);
    __result299__ = __result_obj__ = __builtin_string(self);
    return __result299__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional234;
char* __result300__;
char* msg2_153;
va_list args_154;
char* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_153, 0, sizeof(char*));
memset(&args_154, 0, sizeof(va_list));
    if(_if_conditional234=self==((void*)0),    _if_conditional234) {
        __result300__ = __result_obj__ = __builtin_string("");
        return __result300__;
    }
    __builtin_va_start(args_154,self);
    vasprintf(&msg2_153,self,args_154);
    __builtin_va_end(args_154);
    printf("%s",msg2_153);
    free(msg2_153);
    __result301__ = __result_obj__ = __builtin_string(self);
    return __result301__;
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional235;
char* __result302__;
char* msg2_155;
va_list args_156;
char* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_155, 0, sizeof(char*));
memset(&args_156, 0, sizeof(va_list));
    if(_if_conditional235=self==((void*)0),    _if_conditional235) {
        __result302__ = __result_obj__ = __builtin_string("");
        return __result302__;
    }
    __builtin_va_start(args_156,self);
    vasprintf(&msg2_155,self,args_156);
    __builtin_va_end(args_156);
    printf("%s",msg2_155);
    free(msg2_155);
    __result303__ = __result_obj__ = __builtin_string(self);
    return __result303__;
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result304__;
memset(&__result_obj__, 0, sizeof(void*));
    printf(msg,self);
    __result304__ = self;
    return __result304__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional236;
char* __result305__;
char* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional236=self==((void*)0),    _if_conditional236) {
        __result305__ = __result_obj__ = __builtin_string("");
        return __result305__;
    }
    puts(self);
    __result306__ = __result_obj__ = __builtin_string(self);
    return __result306__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_157;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_157, 0, sizeof(int));
    for(    i_157=0;    i_157<self;    i_157++    ){
        block(parent,i_157);
        if(_if_conditional237=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional237) {
            return;
        }
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result307__ = __result_obj__ = self;
    return __result307__;
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result308__;
memset(&__result_obj__, 0, sizeof(void*));
    __result308__ = self->value;
    return __result308__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
struct integer* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
    __result309__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2293, "integer"),self);
    return __result309__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
struct integer* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
    __result310__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2298, "integer"),self);
    return __result310__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
struct integer* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
    __result311__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2303, "integer"),self);
    return __result311__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
struct integer* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
    __result312__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2308, "integer"),self);
    return __result312__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional238;
int __result313__;
_Bool _if_conditional239;
int __result314__;
int __result315__;
int __result316__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional238=left->value<right->value,    _if_conditional238) {
        __result313__ = -1;
        return __result313__;
    }
    else {
        if(_if_conditional239=left->value>right->value,        _if_conditional239) {
            __result314__ = 1;
            return __result314__;
        }
        else {
            __result315__ = 0;
            return __result315__;
        }
    }
    __result316__ = 0;
    return __result316__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result317__;
memset(&__result_obj__, 0, sizeof(void*));
    __result317__ = self->value==right->value;
    return __result317__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result318__;
memset(&__result_obj__, 0, sizeof(void*));
    __result318__ = self->value==right->value;
    return __result318__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result319__;
memset(&__result_obj__, 0, sizeof(void*));
    __result319__ = self->value!=right->value;
    return __result319__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
    __result320__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2343, "integer"),left->value+right->value);
    return __result320__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
    __result321__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2348, "integer"),left->value-right->value);
    return __result321__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
    __result322__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2353, "integer"),left->value*right->value);
    return __result322__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
    __result323__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2358, "integer"),left->value/right->value);
    return __result323__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
    __result324__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2363, "integer"),left->value%right->value);
    return __result324__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
    __result325__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2368, "integer"),left->value<<right->value);
    return __result325__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
    __result326__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2373, "integer"),left->value>>right->value);
    return __result326__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
    __result327__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2378, "integer"),left->value>=right->value);
    return __result327__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
    __result328__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2383, "integer"),left->value<=right->value);
    return __result328__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
    __result329__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2388, "integer"),left->value<right->value);
    return __result329__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
    __result330__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2393, "integer"),left->value>right->value);
    return __result330__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
    __result331__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2398, "integer"),left->value&right->value);
    return __result331__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
    __result332__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2403, "integer"),left->value^right->value);
    return __result332__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
    __result333__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2408, "integer"),left->value|right->value);
    return __result333__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
    __result334__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2413, "integer"),left->value&&right->value);
    return __result334__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
struct integer* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
    __result335__ = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang2-gc.c", 2418, "integer"),left->value||right->value);
    return __result335__;
}

