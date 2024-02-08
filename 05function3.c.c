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
struct sIntNode
{
    int value;
    int sline;
    char* sname;
};
struct sUIntNode
{
    unsigned int value;
    int sline;
    char* sname;
};
struct sLongNode
{
    long value;
    int sline;
    char* sname;
};
struct sULongNode
{
    unsigned long int value;
    int sline;
    char* sname;
};
struct sFloatNode
{
    float value;
    int sline;
    char* sname;
};
struct sDoubleNode
{
    double value;
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

struct optional$2intbool* FILE_write(struct __sFILE* f, char* str);

struct optional$2charphbool* FILE_read(struct __sFILE* f);

struct optional$2intbool* FILE_fclose(struct __sFILE* f);

struct optional$2intpbool* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

struct optional$2list$1charphphbool* FILE_readlines(struct __sFILE* f);

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind();

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
_Bool sIntNode_terminated();

int sIntNode_sline(struct sIntNode* self, struct sInfo* info);

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info);

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated();

char* sUIntNode_kind();

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info);

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind();

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated();

int sLongNode_sline(struct sLongNode* self, struct sInfo* info);

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind();

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated();

int sULongNode_sline(struct sULongNode* self, struct sInfo* info);

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind();

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated();

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info);

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind();

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated();

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info);

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2000, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 2010, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 2020, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 2030, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 2040, "struct smart_pointer$1long"))));
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
struct sIntNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result7__;
    if(self && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sIntNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result8__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sIntNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11;
    __freed_obj__ = 0;
    return __result8__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
struct CVALUE* come_value_5;
void* right_value13;
char* __dec_obj7;
void* right_value14;
void* right_value15;
struct sType* __dec_obj8;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&come_value_5, 0, sizeof(struct CVALUE*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
    come_value_5=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value12=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 27, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    __dec_obj7=come_value_5->c_value;
    come_value_5->c_value=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("%d",self->value))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    __dec_obj8=come_value_5->type;
    come_value_5->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 30, "struct sType")))),"int",(_Bool)0,info))));
    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value15;
    __freed_obj__ = 0;
    come_value_5->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_5));
    add_come_last_code(info,"%s;\n",come_value_5->c_value);
    __result10__ = (_Bool)1;
    if(come_value_5 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result10__;
    if(come_value_5 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional6) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional7=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional7) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional8=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional8) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional10=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional10) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional11=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional11) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional12=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional12) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional14=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional14) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional16=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional16) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional17=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional17) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional19=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional19) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional20=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional20) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional21=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional21) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional22=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional22) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional23=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional23) {
                    if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional9) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                        it_6=self->head;
                        while(_while_condtional1=it_6!=((void*)0),                        _while_condtional1) {
                            prev_it_7=it_6;
                            it_6=it_6->next;
                            if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional13) {
                                    if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                        it_8=self->head;
                        while(_while_condtional2=it_8!=((void*)0),                        _while_condtional2) {
                            prev_it_9=it_8;
                            it_8=it_8->next;
                            if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional15=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional15) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                        it_10=self->head;
                        while(_while_condtional3=it_10!=((void*)0),                        _while_condtional3) {
                            prev_it_11=it_10;
                            it_10=it_10->next;
                            if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional18) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
void* right_value16;
struct list_item$1CVALUEph* litem_12;
struct CVALUE* __dec_obj9;
_Bool _if_conditional26;
void* right_value17;
struct list_item$1CVALUEph* litem_13;
struct CVALUE* __dec_obj10;
void* right_value18;
struct list_item$1CVALUEph* litem_14;
struct CVALUE* __dec_obj11;
struct list$1CVALUEph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional24=self->len==0,        _if_conditional24) {
            litem_12=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value16=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 282, "struct list_item$1CVALUEph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
            litem_12->prev=((void*)0);
            litem_12->next=((void*)0);
            __dec_obj9=litem_12->item;
            litem_12->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj9) { come_call_finalizer(CVALUE_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_12;
            self->head=litem_12;
        }
        else {
            if(_if_conditional26=self->len==1,            _if_conditional26) {
                litem_13=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value17=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 292, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value17;
                __freed_obj__ = 0;
                litem_13->prev=self->head;
                litem_13->next=((void*)0);
                __dec_obj10=litem_13->item;
                litem_13->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj10) { come_call_finalizer(CVALUE_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_13;
                self->head->next=litem_13;
            }
            else {
                litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value18=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 302, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value18;
                __freed_obj__ = 0;
                litem_14->prev=self->tail;
                litem_14->next=((void*)0);
                __dec_obj11=litem_14->item;
                litem_14->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj11) { come_call_finalizer(CVALUE_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_14;
                self->tail=litem_14;
            }
        }
        self->len++;
        __result9__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result9__;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional25) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

_Bool sIntNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result11__ = (_Bool)0;
    return __result11__;
}

int sIntNode_sline(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = self->sline;
    return __result12__;
}

char* sIntNode_sname(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value19;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value19, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((char*)(right_value19=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19;
    __freed_obj__ = 0;
    return __result13__;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value20;
char* __dec_obj12;
struct sUIntNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value20=__builtin_string(info->sname))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
    if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value20;
    __freed_obj__ = 0;
    __result14__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result14__;
    if(self && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sUIntNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result15__ = (_Bool)0;
    return __result15__;
}

char* sUIntNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value21;
char* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
    __result16__ = __result_obj__ = ((char*)(right_value21=__builtin_string("sUIntNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value21;
    __freed_obj__ = 0;
    return __result16__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value22;
struct CVALUE* come_value_15;
void* right_value23;
char* __dec_obj13;
void* right_value24;
void* right_value25;
struct sType* __dec_obj14;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&come_value_15, 0, sizeof(struct CVALUE*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
    come_value_15=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value22=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 84, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value22;
    __freed_obj__ = 0;
    __dec_obj13=come_value_15->c_value;
    come_value_15->c_value=(char*)come_increment_ref_count(((char*)(right_value23=xsprintf("%u",self->value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23;
    __freed_obj__ = 0;
    __dec_obj14=come_value_15->type;
    come_value_15->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value24=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 87, "struct sType")))),"int",(_Bool)0,info))));
    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value25;
    __freed_obj__ = 0;
    come_value_15->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_15));
    add_come_last_code(info,"%s;\n",come_value_15->c_value);
    __result17__ = (_Bool)1;
    if(come_value_15 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result17__;
    if(come_value_15 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sUIntNode_sline(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result18__ = self->sline;
    return __result18__;
}

char* sUIntNode_sname(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value26;
char* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((char*)(right_value26=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value26;
    __freed_obj__ = 0;
    return __result19__;
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value27;
char* __dec_obj15;
struct sLongNode* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj15=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value27=__builtin_string(info->sname))));
    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value27;
    __freed_obj__ = 0;
    __result20__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result20__;
    if(self && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sLongNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value28;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((char*)(right_value28=__builtin_string("sLongNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
    if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value28;
    __freed_obj__ = 0;
    return __result21__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value29;
struct CVALUE* come_value_16;
void* right_value30;
char* __dec_obj16;
void* right_value31;
void* right_value32;
struct sType* __dec_obj17;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&come_value_16, 0, sizeof(struct CVALUE*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
    come_value_16=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value29=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 131, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value29;
    __freed_obj__ = 0;
    __dec_obj16=come_value_16->c_value;
    come_value_16->c_value=(char*)come_increment_ref_count(((char*)(right_value30=xsprintf("%ld",self->value))));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value30;
    __freed_obj__ = 0;
    __dec_obj17=come_value_16->type;
    come_value_16->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value32=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 134, "struct sType")))),"long",(_Bool)0,info))));
    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value31;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value32;
    __freed_obj__ = 0;
    come_value_16->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_16));
    add_come_last_code(info,"%s;\n",come_value_16->c_value);
    __result22__ = (_Bool)1;
    if(come_value_16 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result22__;
    if(come_value_16 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_16, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sLongNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result23__ = (_Bool)0;
    return __result23__;
}

int sLongNode_sline(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result24__ = self->sline;
    return __result24__;
}

char* sLongNode_sname(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value33;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
    __result25__ = __result_obj__ = ((char*)(right_value33=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value33;
    __freed_obj__ = 0;
    return __result25__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
char* __dec_obj18;
struct sULongNode* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value34=__builtin_string(info->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
    __result26__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result26__;
    if(self && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sULongNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
    __result27__ = __result_obj__ = ((char*)(right_value35=__builtin_string("sULongNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = 0;
    return __result27__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value36;
struct CVALUE* come_value_17;
void* right_value37;
char* __dec_obj19;
void* right_value38;
void* right_value39;
struct sType* __dec_obj20;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&come_value_17, 0, sizeof(struct CVALUE*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
    come_value_17=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value36=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 183, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36;
    __freed_obj__ = 0;
    __dec_obj19=come_value_17->c_value;
    come_value_17->c_value=(char*)come_increment_ref_count(((char*)(right_value37=xsprintf("%lu",self->value))));
    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37;
    __freed_obj__ = 0;
    __dec_obj20=come_value_17->type;
    come_value_17->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value39=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value38=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 186, "struct sType")))),"long",(_Bool)0,info))));
    if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value38;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value39;
    __freed_obj__ = 0;
    come_value_17->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_17));
    add_come_last_code(info,"%s;\n",come_value_17->c_value);
    __result28__ = (_Bool)1;
    if(come_value_17 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result28__;
    if(come_value_17 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sULongNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result29__ = (_Bool)0;
    return __result29__;
}

int sULongNode_sline(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result30__ = self->sline;
    return __result30__;
}

char* sULongNode_sname(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value40;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
    __result31__ = __result_obj__ = ((char*)(right_value40=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value40;
    __freed_obj__ = 0;
    return __result31__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value41;
char* __dec_obj21;
struct sFloatNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(info->sname))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = 0;
    __result32__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result32__;
    if(self && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sFloatNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value42;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value42=__builtin_string("sFloatNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value42;
    __freed_obj__ = 0;
    return __result33__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value43;
struct CVALUE* come_value_18;
void* right_value44;
char* __dec_obj22;
void* right_value45;
void* right_value46;
struct sType* __dec_obj23;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&come_value_18, 0, sizeof(struct CVALUE*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
    come_value_18=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value43=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 235, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = 0;
    __dec_obj22=come_value_18->c_value;
    come_value_18->c_value=(char*)come_increment_ref_count(((char*)(right_value44=xsprintf("%f",self->value))));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    __dec_obj23=come_value_18->type;
    come_value_18->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 238, "struct sType")))),"float",(_Bool)0,info))));
    if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    come_value_18->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_18));
    add_come_last_code(info,"%s;\n",come_value_18->c_value);
    __result34__ = (_Bool)1;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result34__;
    if(come_value_18 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sFloatNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result35__ = (_Bool)0;
    return __result35__;
}

int sFloatNode_sline(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result36__ = self->sline;
    return __result36__;
}

char* sFloatNode_sname(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value47;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
    __result37__ = __result_obj__ = ((char*)(right_value47=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value47;
    __freed_obj__ = 0;
    return __result37__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value48;
char* __dec_obj24;
struct sDoubleNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value48, 0, sizeof(void*));
    self->value=value;
    self->sline=info->sline;
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(info->sname))));
    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    __result38__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result38__;
    if(self && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

char* sDoubleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value49;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value49=__builtin_string("sDoubleNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value49;
    __freed_obj__ = 0;
    return __result39__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value50;
struct CVALUE* come_value_19;
void* right_value51;
char* __dec_obj25;
void* right_value52;
void* right_value53;
struct sType* __dec_obj26;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value50, 0, sizeof(void*));
memset(&come_value_19, 0, sizeof(struct CVALUE*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
    come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value50=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function3.c", 287, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value50;
    __freed_obj__ = 0;
    __dec_obj25=come_value_19->c_value;
    come_value_19->c_value=(char*)come_increment_ref_count(((char*)(right_value51=xsprintf("%lf",self->value))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value51;
    __freed_obj__ = 0;
    __dec_obj26=come_value_19->type;
    come_value_19->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value52=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function3.c", 290, "struct sType")))),"double",(_Bool)0,info))));
    if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value52;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value53;
    __freed_obj__ = 0;
    come_value_19->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_19));
    add_come_last_code(info,"%s;\n",come_value_19->c_value);
    __result40__ = (_Bool)1;
    if(come_value_19 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result40__;
    if(come_value_19 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sDoubleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result41__ = (_Bool)0;
    return __result41__;
}

int sDoubleNode_sline(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result42__ = self->sline;
    return __result42__;
}

char* sDoubleNode_sname(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value54;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value54;
    __freed_obj__ = 0;
    return __result43__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
const int buf_size_20=128;
char* p2_22;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _while_condtional4;
_Bool _if_conditional34;
_Bool _if_conditional35;
char c_23;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _while_condtional5;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _while_condtional6;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value55;
void* right_value56;
struct sNode* _inf_value1;
struct sFloatNode* _inf_obj_value1;
void* right_value59;
struct sNode* __result46__;
_Bool _if_conditional54;
void* right_value60;
void* right_value61;
struct sNode* _inf_value2;
struct sDoubleNode* _inf_obj_value2;
void* right_value64;
struct sNode* __result49__;
void* right_value65;
void* right_value66;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value69;
struct sNode* __result52__;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
unsigned long int lont_27;
int value2_28;
void* right_value70;
void* right_value71;
struct sNode* _inf_value4;
struct sULongNode* _inf_obj_value4;
void* right_value74;
struct sNode* __result55__;
unsigned long int lont_30;
int value_31;
void* right_value75;
void* right_value76;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value79;
struct sNode* __result58__;
unsigned int value_33;
void* right_value80;
void* right_value81;
struct sNode* _inf_value6;
struct sUIntNode* _inf_obj_value6;
void* right_value84;
struct sNode* __result61__;
_Bool _if_conditional83;
_Bool _if_conditional84;
unsigned long long int value_35;
void* right_value85;
void* right_value86;
struct sNode* _inf_value7;
struct sLongNode* _inf_obj_value7;
void* right_value89;
struct sNode* __result64__;
_Bool _if_conditional90;
unsigned long long int value_37;
void* right_value90;
void* right_value91;
struct sNode* _inf_value8;
struct sULongNode* _inf_obj_value8;
void* right_value94;
struct sNode* __result67__;
unsigned long long int value_39;
void* right_value95;
void* right_value96;
struct sNode* _inf_value9;
struct sLongNode* _inf_obj_value9;
void* right_value99;
struct sNode* __result70__;
unsigned long int lont_41;
int value_42;
void* right_value100;
void* right_value101;
struct sNode* _inf_value10;
struct sIntNode* _inf_obj_value10;
void* right_value104;
struct sNode* __result73__;
struct sNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p2_22, 0, sizeof(char*));
memset(&c_23, 0, sizeof(char));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&lont_27, 0, sizeof(unsigned long int));
memset(&value2_28, 0, sizeof(int));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&lont_30, 0, sizeof(unsigned long int));
memset(&value_31, 0, sizeof(int));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&value_33, 0, sizeof(unsigned int));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&value_35, 0, sizeof(unsigned long long int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&value_37, 0, sizeof(unsigned long long int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&value_39, 0, sizeof(unsigned long long int));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&lont_41, 0, sizeof(unsigned long int));
memset(&value_42, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    char buf_21[128+1];
    memset(&buf_21, 0, sizeof(char)    *(128+1)    );
    p2_22=buf_21;
    if(_if_conditional32=minus,    _if_conditional32) {
        *p2_22=45;
        p2_22++;
    }
    if(_if_conditional33=xisdigit(*info->p),    _if_conditional33) {
        while(_while_condtional4=xisdigit(*info->p)||*info->p==95,        _while_condtional4) {
            if(_if_conditional34=*info->p==95,            _if_conditional34) {
                info->p++;
            }
            else {
                *p2_22++=*info->p;
                info->p++;
            }
            if(_if_conditional35=p2_22-buf_21>=buf_size_20,            _if_conditional35) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_22=0;
        skip_spaces_and_lf(info);
        c_23=*(info->p+1);
        if(_if_conditional36=*info->p==46&&xisdigit(c_23),        _if_conditional36) {
            *p2_22++=*info->p;
            if(_if_conditional37=p2_22-buf_21>=buf_size_20,            _if_conditional37) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(_while_condtional5=xisdigit(*info->p)||*info->p==95,            _while_condtional5) {
                if(_if_conditional38=*info->p==95,                _if_conditional38) {
                    info->p++;
                }
                else {
                    *p2_22++=*info->p;
                    info->p++;
                }
                if(_if_conditional39=p2_22-buf_21>=buf_size_20,                _if_conditional39) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(_if_conditional40=*info->p==101,            _if_conditional40) {
                *p2_22++=*info->p;
                info->p++;
                if(_if_conditional41=p2_22-buf_21>=buf_size_20,                _if_conditional41) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(_if_conditional42=*info->p==43,                _if_conditional42) {
                    *p2_22++=*info->p;
                    info->p++;
                    if(_if_conditional43=p2_22-buf_21>=buf_size_20,                    _if_conditional43) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    if(_if_conditional44=*info->p==45,                    _if_conditional44) {
                        *p2_22++=*info->p;
                        info->p++;
                        if(_if_conditional45=p2_22-buf_21>=buf_size_20,                        _if_conditional45) {
                            err_msg(info,"overflow node of number");
                            exit(2);
                        }
                    }
                    else {
                        err_msg(info,"invalid float value");
                        exit(2);
                    }
                }
                while(_while_condtional6=xisdigit(*info->p)||*info->p==95,                _while_condtional6) {
                    if(_if_conditional46=*info->p==95,                    _if_conditional46) {
                        info->p++;
                    }
                    else {
                        *p2_22++=*info->p;
                        info->p++;
                    }
                    if(_if_conditional47=p2_22-buf_21>=buf_size_20,                    _if_conditional47) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            *p2_22=0;
            skip_spaces_and_lf(info);
            if(_if_conditional48=*info->p==102||*info->p==70,            _if_conditional48) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 426, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sFloatNode*)(right_value56=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value55=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05function3.c", 426, "struct sFloatNode")))),strtof(buf_21,((void*)0)),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sFloatNode_finalize;
                _inf_value1->clone=(void*)sFloatNode_clone;
                _inf_value1->compile=(void*)sFloatNode_compile;
                _inf_value1->sline=(void*)sFloatNode_sline;
                _inf_value1->sname=(void*)sFloatNode_sname;
                _inf_value1->terminated=(void*)sFloatNode_terminated;
                _inf_value1->kind=(void*)sFloatNode_kind;
                __result46__ = __result_obj__ = ((struct sNode*)(right_value59=_inf_value1));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value56;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, ((struct sNode*)right_value59)->finalize, ((struct sNode*)right_value59)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value59;
                __freed_obj__ = 0;
                return __result46__;
            }
            else {
                if(_if_conditional54=*info->p==108||*info->p==76,                _if_conditional54) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 432, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count(((struct sDoubleNode*)(right_value61=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value60=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 432, "struct sDoubleNode")))),strtod(buf_21,((void*)0)),info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sDoubleNode_finalize;
                    _inf_value2->clone=(void*)sDoubleNode_clone;
                    _inf_value2->compile=(void*)sDoubleNode_compile;
                    _inf_value2->sline=(void*)sDoubleNode_sline;
                    _inf_value2->sname=(void*)sDoubleNode_sname;
                    _inf_value2->terminated=(void*)sDoubleNode_terminated;
                    _inf_value2->kind=(void*)sDoubleNode_kind;
                    __result49__ = __result_obj__ = ((struct sNode*)(right_value64=_inf_value2));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value61;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value64;
                    __freed_obj__ = 0;
                    return __result49__;
                }
                else {
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 435, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value66=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value65=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05function3.c", 435, "struct sDoubleNode")))),strtod(buf_21,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sDoubleNode_sline;
                    _inf_value3->sname=(void*)sDoubleNode_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result52__ = __result_obj__ = ((struct sNode*)(right_value69=_inf_value3));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value65;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value66;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value69;
                    __freed_obj__ = 0;
                    return __result52__;
                }
            }
        }
        else {
            if(_if_conditional65=*info->p==117||*info->p==85,            _if_conditional65) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional66=*info->p==76||*info->p==108,                _if_conditional66) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional67=*info->p==76||*info->p==108,                    _if_conditional67) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value2_28=strtoull(buf_21,((void*)0),0);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 455, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sULongNode*)(right_value71=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value70=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 455, "struct sULongNode")))),value2_28,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sULongNode_finalize;
                        _inf_value4->clone=(void*)sULongNode_clone;
                        _inf_value4->compile=(void*)sULongNode_compile;
                        _inf_value4->sline=(void*)sULongNode_sline;
                        _inf_value4->sname=(void*)sULongNode_sname;
                        _inf_value4->terminated=(void*)sULongNode_terminated;
                        _inf_value4->kind=(void*)sULongNode_kind;
                        __result55__ = __result_obj__ = ((struct sNode*)(right_value74=_inf_value4));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value70;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value71;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
                        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value74;
                        __freed_obj__ = 0;
                        return __result55__;
                    }
                    else {
                        value_31=strtoull(buf_21,((void*)0),0);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 459, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value76=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value75=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 459, "struct sULongNode")))),value_31,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sULongNode_sline;
                        _inf_value5->sname=(void*)sULongNode_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result58__ = __result_obj__ = ((struct sNode*)(right_value79=_inf_value5));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value75;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value76;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, ((struct sNode*)right_value79)->finalize, ((struct sNode*)right_value79)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value79;
                        __freed_obj__ = 0;
                        return __result58__;
                    }
                }
                else {
                    value_33=strtoul(buf_21,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 464, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sUIntNode*)(right_value81=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value80=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 464, "struct sUIntNode")))),value_33,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sUIntNode_finalize;
                    _inf_value6->clone=(void*)sUIntNode_clone;
                    _inf_value6->compile=(void*)sUIntNode_compile;
                    _inf_value6->sline=(void*)sUIntNode_sline;
                    _inf_value6->sname=(void*)sUIntNode_sname;
                    _inf_value6->terminated=(void*)sUIntNode_terminated;
                    _inf_value6->kind=(void*)sUIntNode_kind;
                    __result61__ = __result_obj__ = ((struct sNode*)(right_value84=_inf_value6));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value80;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value81;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value84);
                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value84;
                    __freed_obj__ = 0;
                    return __result61__;
                }
            }
            else {
                if(_if_conditional83=*info->p==76||*info->p==108,                _if_conditional83) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional84=*info->p==76||*info->p==108,                    _if_conditional84) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        value_35=strtoull(buf_21,((void*)0),0);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 478, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sLongNode*)(right_value86=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value85=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 478, "struct sLongNode")))),value_35,info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sLongNode_finalize;
                        _inf_value7->clone=(void*)sLongNode_clone;
                        _inf_value7->compile=(void*)sLongNode_compile;
                        _inf_value7->sline=(void*)sLongNode_sline;
                        _inf_value7->sname=(void*)sLongNode_sname;
                        _inf_value7->terminated=(void*)sLongNode_terminated;
                        _inf_value7->kind=(void*)sLongNode_kind;
                        __result64__ = __result_obj__ = ((struct sNode*)(right_value89=_inf_value7));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value85;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value86;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value89;
                        __freed_obj__ = 0;
                        return __result64__;
                    }
                    else {
                        if(_if_conditional90=*info->p==85||*info->p==117,                        _if_conditional90) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            value_37=strtoull(buf_21,((void*)0),0);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 487, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sULongNode*)(right_value91=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value90=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 487, "struct sULongNode")))),value_37,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sULongNode_finalize;
                            _inf_value8->clone=(void*)sULongNode_clone;
                            _inf_value8->compile=(void*)sULongNode_compile;
                            _inf_value8->sline=(void*)sULongNode_sline;
                            _inf_value8->sname=(void*)sULongNode_sname;
                            _inf_value8->terminated=(void*)sULongNode_terminated;
                            _inf_value8->kind=(void*)sULongNode_kind;
                            __result67__ = __result_obj__ = ((struct sNode*)(right_value94=_inf_value8));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value90;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value91;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value94);
                            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value94;
                            __freed_obj__ = 0;
                            return __result67__;
                        }
                        else {
                            value_39=strtoull(buf_21,((void*)0),0);
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 491, "struct sNode");
                            _inf_obj_value9=come_increment_ref_count(((struct sLongNode*)(right_value96=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value95=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 491, "struct sLongNode")))),value_39,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sLongNode_finalize;
                            _inf_value9->clone=(void*)sLongNode_clone;
                            _inf_value9->compile=(void*)sLongNode_compile;
                            _inf_value9->sline=(void*)sLongNode_sline;
                            _inf_value9->sname=(void*)sLongNode_sname;
                            _inf_value9->terminated=(void*)sLongNode_terminated;
                            _inf_value9->kind=(void*)sLongNode_kind;
                            __result70__ = __result_obj__ = ((struct sNode*)(right_value99=_inf_value9));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value95;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                            if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value96;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value99;
                            __freed_obj__ = 0;
                            return __result70__;
                        }
                    }
                }
                else {
                    value_42=strtoll(buf_21,((void*)0),0);
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 496, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sIntNode*)(right_value101=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value100=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 496, "struct sIntNode")))),value_42,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sIntNode_finalize;
                    _inf_value10->clone=(void*)sIntNode_clone;
                    _inf_value10->compile=(void*)sIntNode_compile;
                    _inf_value10->sline=(void*)sIntNode_sline;
                    _inf_value10->sname=(void*)sIntNode_sname;
                    _inf_value10->terminated=(void*)sIntNode_terminated;
                    _inf_value10->kind=(void*)sIntNode_kind;
                    __result73__ = __result_obj__ = ((struct sNode*)(right_value104=_inf_value10));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value101;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value104;
                    __freed_obj__ = 0;
                    return __result73__;
                }
            }
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result74__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result74__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional49=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional49) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
struct sFloatNode* __result44__;
void* right_value57;
struct sFloatNode* result_24;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value58;
char* __dec_obj27;
struct sFloatNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct sFloatNode*));
memset(&right_value58, 0, sizeof(void*));
                    if(_if_conditional50=self==(void*)0,                    _if_conditional50) {
                        __result44__ = __result_obj__ = (void*)0;
                        return __result44__;
                    }
                    result_24=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value57=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "struct sFloatNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = 0;
                    if(_if_conditional51=self!=((void*)0),                    _if_conditional51) {
                        result_24->value=self->value;
                    }
                    if(_if_conditional52=self!=((void*)0),                    _if_conditional52) {
                        result_24->sline=self->sline;
                    }
                    if(_if_conditional53=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional53) {
                        __dec_obj27=result_24->sname;
                        result_24->sname=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->sname))));
                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value58;
                        __freed_obj__ = 0;
                    }
                    __result45__ = __result_obj__ = result_24;
                    if(result_24 && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result45__;
                    if(result_24 && !__freed_obj__) { come_call_finalizer(sFloatNode_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional60=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional60) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional61;
struct sDoubleNode* __result50__;
void* right_value67;
struct sDoubleNode* result_26;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
void* right_value68;
char* __dec_obj29;
struct sDoubleNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&result_26, 0, sizeof(struct sDoubleNode*));
memset(&right_value68, 0, sizeof(void*));
                        if(_if_conditional61=self==(void*)0,                        _if_conditional61) {
                            __result50__ = __result_obj__ = (void*)0;
                            return __result50__;
                        }
                        result_26=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value67=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "struct sDoubleNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value67;
                        __freed_obj__ = 0;
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            result_26->value=self->value;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            result_26->sline=self->sline;
                        }
                        if(_if_conditional64=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional64) {
                            __dec_obj29=result_26->sname;
                            result_26->sname=(char*)come_increment_ref_count(((char*)(right_value68=string_clone(self->sname))));
                            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value68;
                            __freed_obj__ = 0;
                        }
                        __result51__ = __result_obj__ = result_26;
                        if(result_26 && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result51__;
                        if(result_26 && !__freed_obj__) { come_call_finalizer(sDoubleNode_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
void* right_value106;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value109;
struct sNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 509, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value106=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value105=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 509, "struct sIntNode")))),value,info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIntNode_finalize;
    _inf_value11->clone=(void*)sIntNode_clone;
    _inf_value11->compile=(void*)sIntNode_compile;
    _inf_value11->sline=(void*)sIntNode_sline;
    _inf_value11->sname=(void*)sIntNode_sname;
    _inf_value11->terminated=(void*)sIntNode_terminated;
    _inf_value11->kind=(void*)sIntNode_kind;
    __result77__ = __result_obj__ = ((struct sNode*)(right_value109=_inf_value11));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value106;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value109;
    __freed_obj__ = 0;
    return __result77__;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int buf_size_45;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
unsigned long long int value_48;
_Bool _if_conditional116;
void* right_value110;
void* right_value111;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value114;
struct sNode* __result80__;
void* right_value115;
void* right_value116;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value119;
struct sNode* __result83__;
unsigned long long int value_51;
_Bool _if_conditional127;
void* right_value120;
void* right_value121;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value124;
struct sNode* __result86__;
void* right_value125;
void* right_value126;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value129;
struct sNode* __result89__;
unsigned int value_54;
_Bool _if_conditional138;
void* right_value130;
void* right_value131;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value134;
struct sNode* __result92__;
void* right_value135;
void* right_value136;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value139;
struct sNode* __result95__;
_Bool _if_conditional149;
_Bool _if_conditional150;
unsigned long long int value_57;
_Bool _if_conditional151;
void* right_value140;
void* right_value141;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value144;
struct sNode* __result98__;
void* right_value145;
void* right_value146;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value149;
struct sNode* __result101__;
_Bool _if_conditional162;
unsigned long long int value_60;
_Bool _if_conditional163;
void* right_value150;
void* right_value151;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value154;
struct sNode* __result104__;
void* right_value155;
void* right_value156;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value159;
struct sNode* __result107__;
unsigned long long int value_63;
_Bool _if_conditional174;
void* right_value160;
void* right_value161;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value164;
struct sNode* __result110__;
void* right_value165;
void* right_value166;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value169;
struct sNode* __result113__;
unsigned long long int value_66;
_Bool _if_conditional185;
void* right_value170;
void* right_value171;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value174;
struct sNode* __result116__;
void* right_value175;
void* right_value176;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value179;
struct sNode* __result119__;
struct sNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_size_45, 0, sizeof(int));
memset(&p_47, 0, sizeof(char*));
memset(&value_48, 0, sizeof(unsigned long long int));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&value_51, 0, sizeof(unsigned long long int));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&value_54, 0, sizeof(unsigned int));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&value_57, 0, sizeof(unsigned long long int));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&value_60, 0, sizeof(unsigned long long int));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&value_63, 0, sizeof(unsigned long long int));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&value_66, 0, sizeof(unsigned long long int));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    buf_size_45=128;
    char buf_46[128+1];
    memset(&buf_46, 0, sizeof(char)    *(128+1)    );
    p_47=buf_46;
    *p_47++=48;
    *p_47++=120;
    while(_while_condtional7=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional7) {
        if(_if_conditional111=*info->p==95,        _if_conditional111) {
            info->p++;
        }
        else {
            *p_47++=*info->p;
            info->p++;
        }
        if(_if_conditional112=p_47-buf_46>=buf_size_45-1,        _if_conditional112) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_47=0;
    skip_spaces_and_lf(info);
    if(_if_conditional113=*info->p==117||*info->p==85,    _if_conditional113) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional114=*info->p==76||*info->p==108,        _if_conditional114) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional115=*info->p==76||*info->p==108,            _if_conditional115) {
                info->p++;
                skip_spaces_and_lf(info);
                value_48=strtoull(buf_46,((void*)0),0);
                if(_if_conditional116=minus,                _if_conditional116) {
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 557, "struct sNode");
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value111=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value110=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 557, "struct sULongNode")))),-value_48,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sULongNode_sline;
                    _inf_value12->sname=(void*)sULongNode_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result80__ = __result_obj__ = ((struct sNode*)(right_value114=_inf_value12));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value111;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value114;
                    __freed_obj__ = 0;
                    return __result80__;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 560, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value116=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value115=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 560, "struct sULongNode")))),value_48,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sULongNode_sline;
                    _inf_value13->sname=(void*)sULongNode_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result83__ = __result_obj__ = ((struct sNode*)(right_value119=_inf_value13));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value116;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value119;
                    __freed_obj__ = 0;
                    return __result83__;
                }
            }
            else {
                value_51=strtoull(buf_46,((void*)0),0);
                if(_if_conditional127=minus,                _if_conditional127) {
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 567, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value121=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value120=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 567, "struct sULongNode")))),-value_51,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sULongNode_sline;
                    _inf_value14->sname=(void*)sULongNode_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result86__ = __result_obj__ = ((struct sNode*)(right_value124=_inf_value14));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value121;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value124;
                    __freed_obj__ = 0;
                    return __result86__;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 570, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value126=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value125=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 570, "struct sULongNode")))),value_51,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sULongNode_sline;
                    _inf_value15->sname=(void*)sULongNode_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result89__ = __result_obj__ = ((struct sNode*)(right_value129=_inf_value15));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value126;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
                    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value129;
                    __freed_obj__ = 0;
                    return __result89__;
                }
            }
        }
        else {
            value_54=strtoull(buf_46,((void*)0),0);
            if(_if_conditional138=minus,            _if_conditional138) {
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 578, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value131=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value130=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 578, "struct sUIntNode")))),-value_54,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sUIntNode_sline;
                _inf_value16->sname=(void*)sUIntNode_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result92__ = __result_obj__ = ((struct sNode*)(right_value134=_inf_value16));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value131;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value134;
                __freed_obj__ = 0;
                return __result92__;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 581, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value136=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value135=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 581, "struct sUIntNode")))),value_54,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sUIntNode_sline;
                _inf_value17->sname=(void*)sUIntNode_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result95__ = __result_obj__ = ((struct sNode*)(right_value139=_inf_value17));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value135;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value136;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value139;
                __freed_obj__ = 0;
                return __result95__;
            }
        }
    }
    else {
        if(_if_conditional149=*info->p==76||*info->p==108,        _if_conditional149) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional150=*info->p==76||*info->p==108,            _if_conditional150) {
                info->p++;
                skip_spaces_and_lf(info);
                value_57=strtoull(buf_46,((void*)0),0);
                if(_if_conditional151=minus,                _if_conditional151) {
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 596, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value141=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value140=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 596, "struct sLongNode")))),-value_57,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sLongNode_sline;
                    _inf_value18->sname=(void*)sLongNode_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result98__ = __result_obj__ = ((struct sNode*)(right_value144=_inf_value18));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value140;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
                    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value141;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value144;
                    __freed_obj__ = 0;
                    return __result98__;
                }
                else {
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 599, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value146=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value145=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 599, "struct sLongNode")))),value_57,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sLongNode_sline;
                    _inf_value19->sname=(void*)sLongNode_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result101__ = __result_obj__ = ((struct sNode*)(right_value149=_inf_value19));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value145;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value146;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value149;
                    __freed_obj__ = 0;
                    return __result101__;
                }
            }
            else {
                if(_if_conditional162=*info->p==85||*info->p==117,                _if_conditional162) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_60=strtoull(buf_46,((void*)0),0);
                    if(_if_conditional163=minus,                    _if_conditional163) {
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 609, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value151=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value150=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 609, "struct sULongNode")))),-value_60,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sULongNode_sline;
                        _inf_value20->sname=(void*)sULongNode_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result104__ = __result_obj__ = ((struct sNode*)(right_value154=_inf_value20));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value150;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value151;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
                        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value154;
                        __freed_obj__ = 0;
                        return __result104__;
                    }
                    else {
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 612, "struct sNode");
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value156=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value155=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 612, "struct sULongNode")))),value_60,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sULongNode_sline;
                        _inf_value21->sname=(void*)sULongNode_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result107__ = __result_obj__ = ((struct sNode*)(right_value159=_inf_value21));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value155;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value156;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value159;
                        __freed_obj__ = 0;
                        return __result107__;
                    }
                }
                else {
                    value_63=strtoull(buf_46,((void*)0),0);
                    if(_if_conditional174=minus,                    _if_conditional174) {
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 618, "struct sNode");
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value161=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value160=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 618, "struct sLongNode")))),-value_63,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sLongNode_sline;
                        _inf_value22->sname=(void*)sLongNode_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result110__ = __result_obj__ = ((struct sNode*)(right_value164=_inf_value22));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value160;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
                        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value161;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value164);
                        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value164;
                        __freed_obj__ = 0;
                        return __result110__;
                    }
                    else {
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 621, "struct sNode");
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value166=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value165=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 621, "struct sLongNode")))),value_63,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sLongNode_sline;
                        _inf_value23->sname=(void*)sLongNode_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result113__ = __result_obj__ = ((struct sNode*)(right_value169=_inf_value23));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value165;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
                        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value166;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value169);
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value169;
                        __freed_obj__ = 0;
                        return __result113__;
                    }
                }
            }
        }
        else {
            value_66=strtoll(buf_46,((void*)0),0);
            if(_if_conditional185=minus,            _if_conditional185) {
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 628, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value171=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value170=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 628, "struct sIntNode")))),-value_66,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sIntNode_sline;
                _inf_value24->sname=(void*)sIntNode_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result116__ = __result_obj__ = ((struct sNode*)(right_value174=_inf_value24));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value171;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value174;
                __freed_obj__ = 0;
                return __result116__;
            }
            else {
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 631, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value176=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value175=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 631, "struct sIntNode")))),value_66,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sIntNode_sline;
                _inf_value25->sname=(void*)sIntNode_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result119__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value25));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value175;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value176;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value179;
                __freed_obj__ = 0;
                return __result119__;
            }
        }
    }
    __result120__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result120__;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int buf_size_69;
char* p_71;
_Bool _while_condtional8;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
unsigned long long int value_72;
void* right_value180;
void* right_value181;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value184;
struct sNode* __result123__;
unsigned long long int value_74;
void* right_value185;
void* right_value186;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value189;
struct sNode* __result126__;
unsigned int value_76;
void* right_value190;
void* right_value191;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value194;
struct sNode* __result129__;
_Bool _if_conditional216;
_Bool _if_conditional217;
unsigned long long int value_78;
void* right_value195;
void* right_value196;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value199;
struct sNode* __result132__;
_Bool _if_conditional223;
unsigned long long int value_80;
void* right_value200;
void* right_value201;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value204;
struct sNode* __result135__;
unsigned long long int value_82;
void* right_value205;
void* right_value206;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value209;
struct sNode* __result138__;
unsigned long long int value_84;
void* right_value210;
void* right_value211;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value214;
struct sNode* __result141__;
struct sNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&buf_size_69, 0, sizeof(int));
memset(&p_71, 0, sizeof(char*));
memset(&value_72, 0, sizeof(unsigned long long int));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&value_74, 0, sizeof(unsigned long long int));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&value_76, 0, sizeof(unsigned int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&value_78, 0, sizeof(unsigned long long int));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&value_80, 0, sizeof(unsigned long long int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&value_82, 0, sizeof(unsigned long long int));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&value_84, 0, sizeof(unsigned long long int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    buf_size_69=128;
    char buf_70[128+1];
    memset(&buf_70, 0, sizeof(char)    *(128+1)    );
    p_71=buf_70;
    *p_71++=48;
    while(_while_condtional8=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional8) {
        if(_if_conditional196=*info->p==95,        _if_conditional196) {
            info->p++;
        }
        else {
            *p_71=*info->p;
            p_71++;
            info->p++;
        }
        if(_if_conditional197=p_71-buf_70>=buf_size_69-1,        _if_conditional197) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_71=0;
    skip_spaces_and_lf(info);
    if(_if_conditional198=*info->p==117||*info->p==85,    _if_conditional198) {
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional199=*info->p==76||*info->p==108,        _if_conditional199) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional200=*info->p==76||*info->p==108,            _if_conditional200) {
                info->p++;
                skip_spaces_and_lf(info);
                value_72=strtoull(buf_70,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 682, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value181=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value180=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 682, "struct sULongNode")))),value_72,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sULongNode_sline;
                _inf_value26->sname=(void*)sULongNode_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result123__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value26));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value181;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value184;
                __freed_obj__ = 0;
                return __result123__;
            }
            else {
                value_74=strtoull(buf_70,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 686, "struct sNode");
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value186=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value185=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 686, "struct sULongNode")))),value_74,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sULongNode_sline;
                _inf_value27->sname=(void*)sULongNode_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result126__ = __result_obj__ = ((struct sNode*)(right_value189=_inf_value27));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value185;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value186;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value189);
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value189;
                __freed_obj__ = 0;
                return __result126__;
            }
        }
        else {
            value_76=strtoul(buf_70,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 691, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value191=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value190=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05function3.c", 691, "struct sUIntNode")))),value_76,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sUIntNode_sline;
            _inf_value28->sname=(void*)sUIntNode_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result129__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value28));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
            if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value190;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value191;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value194;
            __freed_obj__ = 0;
            return __result129__;
        }
    }
    else {
        if(_if_conditional216=*info->p==76||*info->p==108,        _if_conditional216) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional217=*info->p==76||*info->p==108,            _if_conditional217) {
                info->p++;
                skip_spaces_and_lf(info);
                value_78=strtoull(buf_70,((void*)0),0);
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 704, "struct sNode");
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value196=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value195=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 704, "struct sLongNode")))),value_78,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sLongNode_sline;
                _inf_value29->sname=(void*)sLongNode_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result132__ = __result_obj__ = ((struct sNode*)(right_value199=_inf_value29));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value195;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
                if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value196;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value199);
                if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value199;
                __freed_obj__ = 0;
                return __result132__;
            }
            else {
                if(_if_conditional223=*info->p==85||*info->p==117,                _if_conditional223) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value_80=strtoull(buf_70,((void*)0),0);
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 712, "struct sNode");
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value201=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value200=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05function3.c", 712, "struct sULongNode")))),value_80,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sULongNode_sline;
                    _inf_value30->sname=(void*)sULongNode_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result135__ = __result_obj__ = ((struct sNode*)(right_value204=_inf_value30));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value201;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value204;
                    __freed_obj__ = 0;
                    return __result135__;
                }
                else {
                    value_82=strtoull(buf_70,((void*)0),0);
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 716, "struct sNode");
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value206=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value205=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05function3.c", 716, "struct sLongNode")))),value_82,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sLongNode_sline;
                    _inf_value31->sname=(void*)sLongNode_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result138__ = __result_obj__ = ((struct sNode*)(right_value209=_inf_value31));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value206;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value209;
                    __freed_obj__ = 0;
                    return __result138__;
                }
            }
        }
        else {
            value_84=strtoull(buf_70,((void*)0),0);
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function3.c", 721, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value211=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value210=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05function3.c", 721, "struct sIntNode")))),value_84,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sIntNode_sline;
            _inf_value32->sname=(void*)sIntNode_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result141__ = __result_obj__ = ((struct sNode*)(right_value214=_inf_value32));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value210;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value211;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value214;
            __freed_obj__ = 0;
            return __result141__;
        }
    }
    __result142__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result142__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional211) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
struct sUIntNode* __result127__;
void* right_value192;
struct sUIntNode* result_77;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value193;
char* __dec_obj54;
struct sUIntNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct sUIntNode*));
memset(&right_value193, 0, sizeof(void*));
                if(_if_conditional212=self==(void*)0,                _if_conditional212) {
                    __result127__ = __result_obj__ = (void*)0;
                    return __result127__;
                }
                result_77=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value192=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "struct sUIntNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value192;
                __freed_obj__ = 0;
                if(_if_conditional213=self!=((void*)0),                _if_conditional213) {
                    result_77->value=self->value;
                }
                if(_if_conditional214=self!=((void*)0),                _if_conditional214) {
                    result_77->sline=self->sline;
                }
                if(_if_conditional215=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional215) {
                    __dec_obj54=result_77->sname;
                    result_77->sname=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(self->sname))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                }
                __result128__ = __result_obj__ = result_77;
                if(result_77 && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result128__;
                if(result_77 && !__freed_obj__) { come_call_finalizer(sUIntNode_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional224=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional224) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct sULongNode* __result133__;
void* right_value202;
struct sULongNode* result_81;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
void* right_value203;
char* __dec_obj56;
struct sULongNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sULongNode*));
memset(&right_value203, 0, sizeof(void*));
                        if(_if_conditional225=self==(void*)0,                        _if_conditional225) {
                            __result133__ = __result_obj__ = (void*)0;
                            return __result133__;
                        }
                        result_81=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value202=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "struct sULongNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value202;
                        __freed_obj__ = 0;
                        if(_if_conditional226=self!=((void*)0),                        _if_conditional226) {
                            result_81->value=self->value;
                        }
                        if(_if_conditional227=self!=((void*)0),                        _if_conditional227) {
                            result_81->sline=self->sline;
                        }
                        if(_if_conditional228=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional228) {
                            __dec_obj56=result_81->sname;
                            result_81->sname=(char*)come_increment_ref_count(((char*)(right_value203=string_clone(self->sname))));
                            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value203;
                            __freed_obj__ = 0;
                        }
                        __result134__ = __result_obj__ = result_81;
                        if(result_81 && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result134__;
                        if(result_81 && !__freed_obj__) { come_call_finalizer(sULongNode_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional229) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
struct sLongNode* __result136__;
void* right_value207;
struct sLongNode* result_83;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value208;
char* __dec_obj57;
struct sLongNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sLongNode*));
memset(&right_value208, 0, sizeof(void*));
                        if(_if_conditional230=self==(void*)0,                        _if_conditional230) {
                            __result136__ = __result_obj__ = (void*)0;
                            return __result136__;
                        }
                        result_83=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value207=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "struct sLongNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value207;
                        __freed_obj__ = 0;
                        if(_if_conditional231=self!=((void*)0),                        _if_conditional231) {
                            result_83->value=self->value;
                        }
                        if(_if_conditional232=self!=((void*)0),                        _if_conditional232) {
                            result_83->sline=self->sline;
                        }
                        if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional233) {
                            __dec_obj57=result_83->sname;
                            result_83->sname=(char*)come_increment_ref_count(((char*)(right_value208=string_clone(self->sname))));
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value208;
                            __freed_obj__ = 0;
                        }
                        __result137__ = __result_obj__ = result_83;
                        if(result_83 && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result137__;
                        if(result_83 && !__freed_obj__) { come_call_finalizer(sLongNode_finalize,result_83, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional234=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional234) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
struct sIntNode* __result139__;
void* right_value212;
struct sIntNode* result_85;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value213;
char* __dec_obj58;
struct sIntNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
memset(&result_85, 0, sizeof(struct sIntNode*));
memset(&right_value213, 0, sizeof(void*));
                if(_if_conditional235=self==(void*)0,                _if_conditional235) {
                    __result139__ = __result_obj__ = (void*)0;
                    return __result139__;
                }
                result_85=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value212=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "struct sIntNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value212;
                __freed_obj__ = 0;
                if(_if_conditional236=self!=((void*)0),                _if_conditional236) {
                    result_85->value=self->value;
                }
                if(_if_conditional237=self!=((void*)0),                _if_conditional237) {
                    result_85->sline=self->sline;
                }
                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional238) {
                    __dec_obj58=result_85->sname;
                    result_85->sname=(char*)come_increment_ref_count(((char*)(right_value213=string_clone(self->sname))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value213;
                    __freed_obj__ = 0;
                }
                __result140__ = __result_obj__ = result_85;
                if(result_85 && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result140__;
                if(result_85 && !__freed_obj__) { come_call_finalizer(sIntNode_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0); }
}

