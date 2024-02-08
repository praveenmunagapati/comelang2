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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
struct sClass* klass_30;
char* class_name_31;
char* fun_name2_32;
struct sFun* operator_fun_33;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional99;
void* right_value50;
_Bool _if_conditional100;
_Bool __result32__;
void* right_value54;
char* __dec_obj30;
int i_44;
_Bool _for_condtionalA1;
void* right_value55;
char* new_fun_name_45;
_Bool _if_conditional105;
void* right_value56;
char* __dec_obj31;
_Bool _if_conditional106;
_Bool result_46;
_Bool _if_conditional107;
void* right_value57;
struct CVALUE* come_value_47;
char* left_value2_48;
void* right_value58;
void* right_value59;
_Bool _if_conditional112;
void* right_value60;
char* __dec_obj32;
void* right_value61;
char* __dec_obj33;
char* middle_value2_52;
void* right_value62;
void* right_value63;
_Bool _if_conditional113;
void* right_value64;
char* __dec_obj34;
void* right_value65;
char* __dec_obj35;
char* right_value2_53;
void* right_value66;
void* right_value67;
_Bool _if_conditional114;
void* right_value68;
char* __dec_obj36;
void* right_value69;
char* __dec_obj37;
void* right_value70;
void* right_value71;
void* right_value72;
void* right_value73;
void* right_value74;
char* __dec_obj38;
void* right_value75;
struct sType* result_type1_54;
void* right_value76;
struct sType* result_type2_55;
void* right_value77;
struct sType* __dec_obj39;
_Bool _if_conditional115;
void* right_value78;
char* __dec_obj40;
void* right_value79;
char* __dec_obj41;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&fun_name2_32, 0, sizeof(char*));
memset(&operator_fun_33, 0, sizeof(struct sFun*));
memset(&right_value45, 0, sizeof(void*));
memset(&none_generics_name_34, 0, sizeof(char*));
memset(&right_value46, 0, sizeof(void*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&i_44, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&new_fun_name_45, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&result_46, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&come_value_47, 0, sizeof(struct CVALUE*));
memset(&left_value2_48, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&middle_value2_52, 0, sizeof(char*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value2_53, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&result_type1_54, 0, sizeof(struct sType*));
memset(&right_value76, 0, sizeof(void*));
memset(&result_type2_55, 0, sizeof(struct sType*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_33=((void*)0);
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(_if_conditional99=generics_fun_40,        _if_conditional99) {
            if(_if_conditional100=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_32)))),generics_fun_40,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50),
            (right_value50 && right_value50 != __result_obj__ && !__freed_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value50, 
            __freed_obj__ = 0, 
            _if_conditional100) {
                __result32__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
                return __result32__;
            }
        }
        operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32);
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value54=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54;
        __freed_obj__ = 0;
        for(
        i_44=128-1 ,        0;        _for_condtionalA1=        i_44>=1 ,        _for_condtionalA1;        i_44-- ,        0        ){
            new_fun_name_45=(char*)come_increment_ref_count(((char*)(right_value55=xsprintf("%s_v%d",fun_name2_32,i_44))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value55;
            __freed_obj__ = 0;
            operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_45);
            if(_if_conditional105=operator_fun_33,            _if_conditional105) {
                __dec_obj31=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value56=__builtin_string(new_fun_name_45))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
                if(new_fun_name_45 && !__freed_obj__) { new_fun_name_45 = come_decrement_ref_count(new_fun_name_45, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_45 && !__freed_obj__) { new_fun_name_45 = come_decrement_ref_count(new_fun_name_45, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional106=operator_fun_33==((void*)0),        _if_conditional106) {
            operator_fun_33=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32);
        }
    }
    result_46=(_Bool)0;
    if(_if_conditional107=operator_fun_33,    _if_conditional107) {
        come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value59=xsprintf("\%s is assigned to",((char*)(right_value58=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0),left_value->type,left_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value58;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value59;
        __freed_obj__ = 0;
        if(_if_conditional112=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional112) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj32=left_value2_48;
            left_value2_48=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s",left_value->c_value))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj33=left_value2_48;
            left_value2_48=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value61;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value63=xsprintf("\%s is assigned to",((char*)(right_value62=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1),middle_value->type,middle_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value63;
        __freed_obj__ = 0;
        if(_if_conditional113=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)->mHeap&&middle_value->type->mHeap,        _if_conditional113) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1),middle_value->type,middle_value,info);
            __dec_obj34=middle_value2_52;
            middle_value2_52=(char*)come_increment_ref_count(((char*)(right_value64=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj35=middle_value2_52;
            middle_value2_52=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(middle_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value67=xsprintf("\%s is assigned to",((char*)(right_value66=string_to_string(fun_name2_32)))))),list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2),right_value->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value67;
        __freed_obj__ = 0;
        if(_if_conditional114=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)->mHeap&&right_value->type->mHeap,        _if_conditional114) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2),right_value->type,right_value,info);
            __dec_obj36=right_value2_53;
            right_value2_53=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",right_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj37=right_value2_53;
            right_value2_53=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(right_value->c_value))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value69;
            __freed_obj__ = 0;
        }
        __dec_obj38=come_value_47->c_value;
        come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value70=string_to_string(fun_name2_32))),((char*)(right_value71=string_to_string(left_value2_48))),((char*)(right_value72=string_to_string(middle_value2_52))),((char*)(right_value73=string_to_string(right_value2_53)))))));
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value70;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value71;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value72;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value73;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value74;
        __freed_obj__ = 0;
        result_type1_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(operator_fun_33->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value75;
        __freed_obj__ = 0;
        result_type2_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=solve_generics(result_type1_54,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value76;
        __freed_obj__ = 0;
        __dec_obj39=come_value_47->type;
        come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(result_type2_55))));
        if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value77;
        __freed_obj__ = 0;
        come_value_47->var=((void*)0);
        if(_if_conditional115=result_type2_55->mHeap,        _if_conditional115) {
            __dec_obj40=come_value_47->c_value;
            come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value78=append_object_to_right_values(come_value_47->c_value,(struct sType*)come_increment_ref_count(result_type2_55),info))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
        }
        __dec_obj41=come_value_47->c_value;
        come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value79=append_exception_value(come_value_47->c_value,come_value_47->type,info))));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_47->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
        result_46=(_Bool)1;
        if(come_value_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_48 && !__freed_obj__) { left_value2_48 = come_decrement_ref_count(left_value2_48, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_52 && !__freed_obj__) { middle_value2_52 = come_decrement_ref_count(middle_value2_52, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_53 && !__freed_obj__) { right_value2_53 = come_decrement_ref_count(right_value2_53, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_54, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result41__ = result_46;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
    return __result41__;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sType* __result7__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
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
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30;
            __freed_obj__ = 0;
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mException=self->mException;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        __result24__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result24__;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
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
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
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
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
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
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                }
                __result9__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result9__;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct list$1sTypeph* __result10__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 198, "struct list$1sTypeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result13__;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result11__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 212, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 222, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 232, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result12__;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
struct list$1sNodeph* __result14__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 198, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result19__;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result15__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 212, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 222, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 232, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        return __result16__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
struct sNode* __result17__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        return __result18__;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct list$1charph* __result20__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 198, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result23__;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result21__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 212, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 222, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 232, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result22__;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value49;
_Bool _if_conditional96;
struct sGenericsFun* __result28__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result29__;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value49, 0, sizeof(void*));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value(((struct optional$2boolbool*)(right_value49=string_equals(self->keys[it_38],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result28__ = __result_obj__ = self->items[it_38];
                        return __result28__;
                    }
                    it_38++;
                    if(_if_conditional97=it_38>=self->size,                    _if_conditional97) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional98=it_38==hash_37,                        _if_conditional98) {
                            __result29__ = __result_obj__ = default_value;
                            return __result29__;
                        }
                    }
                }
                else {
                    __result30__ = __result_obj__ = default_value;
                    return __result30__;
                }
            }
            __result31__ = __result_obj__ = default_value;
            return __result31__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
_Bool default_value_39;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        _if_conditional95) {
                            memset(&default_value_39,0,sizeof(_Bool));
                            __result26__ = default_value_39;
                            return __result26__;
                        }
                        else {
                            __result27__ = self->v1;
                            return __result27__;
                        }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional101;
void* right_value51;
_Bool _if_conditional102;
struct sFun* __result33__;
_Bool _if_conditional103;
_Bool _if_conditional104;
struct sFun* __result34__;
struct sFun* __result35__;
void* right_value52;
void* right_value53;
struct sFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(struct sFun*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
            memset(&default_value_41,0,sizeof(struct sFun*));
            hash_42=string_get_hash_key(((char*)key))%self->size;
            it_43=hash_42;
            while(_while_condtional8=(_Bool)1,            _while_condtional8) {
                if(_if_conditional101=self->item_existance[it_43],                _if_conditional101) {
                    if(_if_conditional102=optional$2boolbool_value(((struct optional$2boolbool*)(right_value51=string_equals(self->keys[it_43],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
                    (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value51, 
                    __freed_obj__ = 0, 
                    _if_conditional102) {
                        __result33__ = __result_obj__ = self->items[it_43];
                        return __result33__;
                    }
                    it_43++;
                    if(_if_conditional103=it_43>=self->size,                    _if_conditional103) {
                        it_43=0;
                    }
                    else {
                        if(_if_conditional104=it_43==hash_42,                        _if_conditional104) {
                            __result34__ = __result_obj__ = default_value_41;
                            return __result34__;
                        }
                    }
                }
                else {
                    __result35__ = __result_obj__ = default_value_41;
                    return __result35__;
                }
            }
            __result37__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value53=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value52=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "/usr/local/include/comelang2.h", 1622, "struct optional$2sFunpbool"))),default_value_41,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value53;
            __freed_obj__ = 0;
            return __result37__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->v1=v1;
                self->v2=v2;
                __result36__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result36__;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
_Bool _if_conditional109;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional108=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional108) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional109=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional109) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional110;
struct list_item$1sTypeph* it_49;
int i_50;
_Bool _while_condtional9;
_Bool _if_conditional111;
struct sType* __result38__;
struct sType* default_value_51;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_50, 0, sizeof(int));
memset(&default_value_51, 0, sizeof(struct sType*));
            if(_if_conditional110=position<0,            _if_conditional110) {
                position+=self->len;
            }
            it_49=self->head;
            i_50=0;
            while(_while_condtional9=it_49!=((void*)0),            _while_condtional9) {
                if(_if_conditional111=position==i_50,                _if_conditional111) {
                    __result38__ = __result_obj__ = it_49->item;
                    return __result38__;
                }
                it_49=it_49->next;
                i_50++;
            }
            memset(&default_value_51,0,sizeof(struct sType*));
            __result39__ = __result_obj__ = default_value_51;
            if(default_value_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_51, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result39__;
            if(default_value_51 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
void* right_value80;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj42;
_Bool _if_conditional118;
void* right_value81;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj43;
void* right_value82;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj44;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional116=self->len==0,            _if_conditional116) {
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value80=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 282, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value80;
                __freed_obj__ = 0;
                litem_56->prev=((void*)0);
                litem_56->next=((void*)0);
                __dec_obj42=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_56;
                self->head=litem_56;
            }
            else {
                if(_if_conditional118=self->len==1,                _if_conditional118) {
                    litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value81=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 292, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value81;
                    __freed_obj__ = 0;
                    litem_57->prev=self->head;
                    litem_57->next=((void*)0);
                    __dec_obj43=litem_57->item;
                    litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_57;
                    self->head->next=litem_57;
                }
                else {
                    litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value82=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 302, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value82;
                    __freed_obj__ = 0;
                    litem_58->prev=self->tail;
                    litem_58->next=((void*)0);
                    __dec_obj44=litem_58->item;
                    litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj44) { come_call_finalizer(CVALUE_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_58;
                    self->tail=litem_58;
                }
            }
            self->len++;
            __result40__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result40__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional117=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional117) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __dec_obj45;
void* right_value84;
struct sNode* __dec_obj46;
void* right_value85;
struct sNode* __dec_obj47;
void* right_value86;
char* __dec_obj48;
struct sStoreFieldNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    __dec_obj46=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(left))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    __dec_obj47=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(right))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value85;
    __freed_obj__ = 0;
    __dec_obj48=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(name))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value86;
    __freed_obj__ = 0;
    __result42__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result42__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result43__ = (_Bool)0;
    return __result43__;
}

char* sStoreFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value87;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(right_value87=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value87;
    __freed_obj__ = 0;
    return __result44__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_59;
struct sNode* right_60;
void* right_value88;
char* name_61;
_Bool _if_conditional123;
_Bool __result45__;
void* right_value89;
struct CVALUE* left_value_62;
_Bool _if_conditional124;
_Bool __result46__;
void* right_value90;
struct CVALUE* right_value_63;
struct sType* right_type_64;
struct sType* left_type_65;
void* right_value91;
struct sType* left_type2_66;
struct sClass* klass_67;
struct sType* field_type_71;
int index_72;
char* child_field_name_73;
_Bool _if_conditional129;
_Bool __result52__;
struct list$1tuple2$2charphsTypephph* o2_saved_74;
struct tuple2$2charphsTypeph* field_77;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_80;
struct sType* field_type2_81;
_Bool _if_conditional134;
void* right_value95;
struct sType* __dec_obj49;
_Bool _if_conditional138;
struct list$1tuple2$2charphsTypephph* o2_saved_84;
struct tuple2$2charphsTypeph* field_85;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_86;
struct sType* field_type2_87;
struct sClass* klass2_88;
struct list$1tuple2$2charphsTypephph* o2_saved_89;
struct tuple2$2charphsTypeph* field2_90;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_91;
struct sType* field_type3_92;
_Bool _if_conditional139;
void* right_value96;
char* __dec_obj50;
void* right_value97;
struct sType* __dec_obj51;
_Bool _if_conditional140;
_Bool _if_conditional141;
void* right_value98;
struct sType* __dec_obj52;
_Bool _if_conditional142;
_Bool __result61__;
void* right_value99;
struct CVALUE* come_value_93;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool __result62__;
void* right_value100;
void* right_value101;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value102;
char* c_value_94;
void* right_value103;
char* __dec_obj53;
void* right_value104;
char* c_value_95;
void* right_value105;
char* __dec_obj54;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value106;
char* c_value_96;
void* right_value107;
char* __dec_obj55;
void* right_value108;
char* c_value_97;
void* right_value109;
char* __dec_obj56;
void* right_value110;
char* __dec_obj57;
_Bool __result63__;
int right_value_id_98;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value111;
char* c_value_99;
void* right_value112;
char* __dec_obj58;
void* right_value113;
char* c_value_100;
void* right_value114;
char* __dec_obj59;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value115;
char* c_value_101;
void* right_value116;
char* __dec_obj60;
void* right_value117;
char* c_value_102;
void* right_value118;
char* __dec_obj61;
_Bool __result64__;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value119;
char* __dec_obj62;
void* right_value120;
char* __dec_obj63;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value121;
char* __dec_obj64;
void* right_value122;
char* __dec_obj65;
_Bool __result65__;
void* right_value123;
struct sType* __dec_obj66;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_59, 0, sizeof(struct sNode*));
memset(&right_60, 0, sizeof(struct sNode*));
memset(&right_value88, 0, sizeof(void*));
memset(&name_61, 0, sizeof(char*));
memset(&right_value89, 0, sizeof(void*));
memset(&left_value_62, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value_63, 0, sizeof(struct CVALUE*));
memset(&right_type_64, 0, sizeof(struct sType*));
memset(&left_type_65, 0, sizeof(struct sType*));
memset(&right_value91, 0, sizeof(void*));
memset(&left_type2_66, 0, sizeof(struct sType*));
memset(&klass_67, 0, sizeof(struct sClass*));
memset(&field_type_71, 0, sizeof(struct sType*));
memset(&index_72, 0, sizeof(int));
memset(&child_field_name_73, 0, sizeof(char*));
memset(&o2_saved_74, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_77, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_80, 0, sizeof(char*));
memset(&field_type2_81, 0, sizeof(struct sType*));
memset(&field_name_80, 0, sizeof(char*));
memset(&field_type2_81, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&o2_saved_84, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_85, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_86, 0, sizeof(char*));
memset(&field_type2_87, 0, sizeof(struct sType*));
memset(&field_name_86, 0, sizeof(char*));
memset(&field_type2_87, 0, sizeof(struct sType*));
memset(&klass2_88, 0, sizeof(struct sClass*));
memset(&o2_saved_89, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_90, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_91, 0, sizeof(char*));
memset(&field_type3_92, 0, sizeof(struct sType*));
memset(&field_name2_91, 0, sizeof(char*));
memset(&field_type3_92, 0, sizeof(struct sType*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&come_value_93, 0, sizeof(struct CVALUE*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&c_value_94, 0, sizeof(char*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&c_value_95, 0, sizeof(char*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&c_value_96, 0, sizeof(char*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&c_value_97, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value_id_98, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&c_value_101, 0, sizeof(char*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&c_value_102, 0, sizeof(char*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
    left_59=self->mLeft;
    right_60=self->mRight;
    name_61=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    if(_if_conditional123=!node_compile(left_59,info),    _if_conditional123) {
        __result45__ = (_Bool)0;
        if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
        return __result45__;
    }
    left_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional124=!node_compile(right_60,info),    _if_conditional124) {
        __result46__ = (_Bool)0;
        if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result46__;
    }
    right_value_63=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_type_64=right_value_63->type;
    left_type_65=left_value_62->type;
    left_type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=solve_generics(left_type_65,left_type_65,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91;
    __freed_obj__ = 0;
    klass_67=left_type2_66->mClass;
    klass_67=map$2charphsClassphp_operator_load_element(info->classes,klass_67->mName);
    field_type_71=((void*)0);
    index_72=0;
    child_field_name_73=((void*)0);
    klass_67=map$2charphsClassphp_operator_load_element(info->classes,klass_67->mName);
    if(_if_conditional129=klass_67->mFields==((void*)0),    _if_conditional129) {
        err_msg(info,"%s fields are null",klass_67->mName);
        __result52__ = (_Bool)0;
        if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
        return __result52__;
    }
    for(
    o2_saved_74=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_67->mFields)),field_77=list$1tuple2$2charphsTypephph_begin((o2_saved_74)) ,    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end((o2_saved_74)) ,    _for_condtionalA2;    field_77=list$1tuple2$2charphsTypephph_next((o2_saved_74)) ,    0    ){
        multiple_assign_var1=field_77;
        field_name_80=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_81=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional134=string_operator_equals(field_name_80,name_61),        _if_conditional134) {
            __dec_obj49=field_type_71;
            field_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(field_type2_81))));
            if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value95;
            __freed_obj__ = 0;
            if(field_name_80 && !__freed_obj__) { field_name_80 = come_decrement_ref_count(field_name_80, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_72++;
        if(field_name_80 && !__freed_obj__) { field_name_80 = come_decrement_ref_count(field_name_80, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_74 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional138=index_72==list$1tuple2$2charphsTypephph_length(klass_67->mFields),    _if_conditional138) {
        index_72=0;
        for(
        o2_saved_84=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_67->mFields)),field_85=list$1tuple2$2charphsTypephph_begin((o2_saved_84)) ,        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_84)) ,        _for_condtionalA3;        field_85=list$1tuple2$2charphsTypephph_next((o2_saved_84)) ,        0        ){
            multiple_assign_var2=field_85;
            field_name_86=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_87=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_88=field_type2_87->mClass;
            for(
            o2_saved_89=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_88->mFields)),field2_90=list$1tuple2$2charphsTypephph_begin((o2_saved_89)) ,            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end((o2_saved_89)) ,            _for_condtionalA4;            field2_90=list$1tuple2$2charphsTypephph_next((o2_saved_89)) ,            0            ){
                multiple_assign_var3=field2_90;
                field_name2_91=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_92=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional139=string_operator_equals(field_name2_91,name_61),                _if_conditional139) {
                    __dec_obj50=child_field_name_73;
                    child_field_name_73=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(field_name_86))));
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value96;
                    __freed_obj__ = 0;
                    __dec_obj51=field_type_71;
                    field_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(field_type3_92))));
                    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value97;
                    __freed_obj__ = 0;
                    if(field_name2_91 && !__freed_obj__) { field_name2_91 = come_decrement_ref_count(field_name2_91, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_92, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_91 && !__freed_obj__) { field_name2_91 = come_decrement_ref_count(field_name2_91, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_92 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_92, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_89 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_89, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional140=child_field_name_73,            _if_conditional140) {
                if(field_name_86 && !__freed_obj__) { field_name_86 = come_decrement_ref_count(field_name_86, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional141=string_operator_equals(field_name_86,name_61),            _if_conditional141) {
                __dec_obj52=field_type_71;
                field_type_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(field_type2_87))));
                if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
                if(field_name_86 && !__freed_obj__) { field_name_86 = come_decrement_ref_count(field_name_86, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_72++;
            if(field_name_86 && !__freed_obj__) { field_name_86 = come_decrement_ref_count(field_name_86, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_87, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_84 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_84, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional142=index_72==list$1tuple2$2charphsTypephph_length(klass_67->mFields),        _if_conditional142) {
            err_msg(info,"field not found(%s) in %s(1)",name_61,klass_67->mName);
            __result61__ = (_Bool)0;
            if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
            return __result61__;
        }
    }
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 232, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    if(_if_conditional143=field_type_71->mHeap&&!right_type_64->mHeap,    _if_conditional143) {
        if(_if_conditional144=string_operator_equals(right_type_64->mClass->mName,"void")&&right_type_64->mPointerNum==1,        _if_conditional144) {
        }
        else {
            if(_if_conditional145=!right_type_64->mDelegate&&!right_type_64->mShare&&!gComeGC,            _if_conditional145) {
                err_msg(info,"require right value as heap object(%s)",name_61);
                __result62__ = (_Bool)0;
                if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result62__;
            }
        }
    }
    check_assign_type(((char*)(right_value101=xsprintf("\%s is assigned to",((char*)(right_value100=string_to_string(name_61)))))),field_type_71,right_type_64,right_value_63,(_Bool)0,info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value101;
    __freed_obj__ = 0;
    if(_if_conditional146=field_type_71->mHeap&&right_type_64->mHeap&&field_type_71->mPointerNum>0&&right_type_64->mPointerNum>0,    _if_conditional146) {
        if(_if_conditional147=left_value_62->type->mPointerNum==1,        _if_conditional147) {
            if(_if_conditional148=child_field_name_73,            _if_conditional148) {
                c_value_94=(char*)come_increment_ref_count(((char*)(right_value102=xsprintf("%s->%s.%s",left_value_62->c_value,child_field_name_73,name_61))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value102;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_71,c_value_94,info,(_Bool)0);
                std_move(field_type_71,right_type_64,right_value_63,info);
                __dec_obj53=come_value_93->c_value;
                come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%s->%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value103;
                __freed_obj__ = 0;
                if(c_value_94 && !__freed_obj__) { c_value_94 = come_decrement_ref_count(c_value_94, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_95=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s->%s",left_value_62->c_value,name_61))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value104;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_71,c_value_95,info,(_Bool)0);
                std_move(field_type_71,right_type_64,right_value_63,info);
                __dec_obj54=come_value_93->c_value;
                come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("%s->%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value105;
                __freed_obj__ = 0;
                if(c_value_95 && !__freed_obj__) { c_value_95 = come_decrement_ref_count(c_value_95, (void*)0, (void*)0, 0, 0, 0); }
            }
        }
        else {
            if(_if_conditional149=left_value_62->type->mPointerNum==0,            _if_conditional149) {
                if(_if_conditional150=child_field_name_73,                _if_conditional150) {
                    c_value_96=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("%s.%s.%s",left_value_62->c_value,child_field_name_73,name_61))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value106;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_71,c_value_96,info,(_Bool)0);
                    std_move(field_type_71,right_type_64,right_value_63,info);
                    __dec_obj55=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value107=xsprintf("%s.%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value107;
                    __freed_obj__ = 0;
                    if(c_value_96 && !__freed_obj__) { c_value_96 = come_decrement_ref_count(c_value_96, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_97=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("%s.%s",left_value_62->c_value,name_61))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value108;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_71,c_value_97,info,(_Bool)0);
                    __dec_obj56=right_value_63->c_value;
                    right_value_63->c_value=(char*)come_increment_ref_count(((char*)(right_value109=increment_ref_count_object(right_value_63->type,right_value_63->c_value,info))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value109;
                    __freed_obj__ = 0;
                    __dec_obj57=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s.%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110;
                    __freed_obj__ = 0;
                    if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_61,left_value_62->type->mPointerNum);
                __result63__ = (_Bool)0;
                if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result63__;
            }
        }
        right_value_id_98=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_63->c_value));
        if(_if_conditional151=right_value_id_98!=-1,        _if_conditional151) {
            remove_object_from_right_values(right_value_id_98,info);
        }
    }
    else {
        if(_if_conditional152=field_type_71->mHeap&&field_type_71->mPointerNum>0&&right_type_64->mPointerNum>0&&string_operator_equals(right_type_64->mClass->mName,"void"),        _if_conditional152) {
            if(_if_conditional153=left_value_62->type->mPointerNum==1,            _if_conditional153) {
                if(_if_conditional154=child_field_name_73,                _if_conditional154) {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("%s->%s.%s",left_value_62->c_value,child_field_name_73,name_61))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_71,c_value_99,info,(_Bool)0);
                    __dec_obj58=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value112=xsprintf("%s->%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value112;
                    __freed_obj__ = 0;
                    if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_100=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s->%s",left_value_62->c_value,name_61))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_71,c_value_100,info,(_Bool)0);
                    __dec_obj59=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value114=xsprintf("%s->%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                    if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                }
            }
            else {
                if(_if_conditional155=left_value_62->type->mPointerNum==0,                _if_conditional155) {
                    if(_if_conditional156=child_field_name_73,                    _if_conditional156) {
                        c_value_101=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%s.%s.%s",left_value_62->c_value,child_field_name_73,name_61))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value115;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_71,c_value_101,info,(_Bool)0);
                        __dec_obj60=come_value_93->c_value;
                        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value116=xsprintf("%s.%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value116;
                        __freed_obj__ = 0;
                        if(c_value_101 && !__freed_obj__) { c_value_101 = come_decrement_ref_count(c_value_101, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_102=(char*)come_increment_ref_count(((char*)(right_value117=xsprintf("%s.%s",left_value_62->c_value,name_61))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value117;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_71,c_value_102,info,(_Bool)0);
                        __dec_obj61=come_value_93->c_value;
                        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s.%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                        if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value118;
                        __freed_obj__ = 0;
                        if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_61,left_value_62->type->mPointerNum);
                    __result64__ = (_Bool)0;
                    if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result64__;
                }
            }
        }
        else {
            if(_if_conditional157=left_value_62->type->mPointerNum==1,            _if_conditional157) {
                if(_if_conditional158=child_field_name_73,                _if_conditional158) {
                    __dec_obj62=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value119=xsprintf("%s->%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj63=come_value_93->c_value;
                    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s->%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = 0;
                }
            }
            else {
                if(_if_conditional159=left_value_62->type->mPointerNum==0,                _if_conditional159) {
                    if(_if_conditional160=child_field_name_73,                    _if_conditional160) {
                        __dec_obj64=come_value_93->c_value;
                        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s.%s.%s=%s",left_value_62->c_value,child_field_name_73,name_61,right_value_63->c_value))));
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value121;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj65=come_value_93->c_value;
                        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s.%s=%s",left_value_62->c_value,name_61,right_value_63->c_value))));
                        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value122;
                        __freed_obj__ = 0;
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_61,left_value_62->type->mPointerNum);
                    __result65__ = (_Bool)0;
                    if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result65__;
                }
            }
        }
    }
    __dec_obj66=come_value_93->type;
    come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(field_type_71))));
    if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = 0;
    come_value_93->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
    add_come_last_code(info,"%s;\n",come_value_93->c_value);
    __result66__ = (_Bool)1;
    if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result66__;
    if(name_61 && !__freed_obj__) { name_61 = come_decrement_ref_count(name_61, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_73 && !__freed_obj__) { child_field_name_73 = come_decrement_ref_count(child_field_name_73, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_68;
unsigned int hash_69;
unsigned int it_70;
_Bool _while_condtional10;
_Bool _if_conditional125;
void* right_value92;
_Bool _if_conditional126;
struct sClass* __result47__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sClass* __result48__;
struct sClass* __result49__;
void* right_value93;
void* right_value94;
struct sClass* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_68, 0, sizeof(struct sClass*));
memset(&hash_69, 0, sizeof(unsigned int));
memset(&it_70, 0, sizeof(unsigned int));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
        memset(&default_value_68,0,sizeof(struct sClass*));
        hash_69=string_get_hash_key(((char*)key))%self->size;
        it_70=hash_69;
        while(_while_condtional10=(_Bool)1,        _while_condtional10) {
            if(_if_conditional125=self->item_existance[it_70],            _if_conditional125) {
                if(_if_conditional126=optional$2boolbool_value(((struct optional$2boolbool*)(right_value92=string_equals(self->keys[it_70],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92),
                (right_value92 && right_value92 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value92, 
                __freed_obj__ = 0, 
                _if_conditional126) {
                    __result47__ = __result_obj__ = self->items[it_70];
                    return __result47__;
                }
                it_70++;
                if(_if_conditional127=it_70>=self->size,                _if_conditional127) {
                    it_70=0;
                }
                else {
                    if(_if_conditional128=it_70==hash_69,                    _if_conditional128) {
                        __result48__ = __result_obj__ = default_value_68;
                        return __result48__;
                    }
                }
            }
            else {
                __result49__ = __result_obj__ = default_value_68;
                return __result49__;
            }
        }
        __result51__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value94=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value93=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "/usr/local/include/comelang2.h", 1622, "struct optional$2sClasspbool"))),default_value_68,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value94;
        __freed_obj__ = 0;
        return __result51__;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result50__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result50__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* result_75;
struct tuple2$2charphsTypeph* __result53__;
_Bool _if_conditional131;
struct tuple2$2charphsTypeph* __result54__;
struct tuple2$2charphsTypeph* result_76;
struct tuple2$2charphsTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_76, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional130=self==((void*)0),        _if_conditional130) {
            memset(&result_75,0,sizeof(struct tuple2$2charphsTypeph*));
            __result53__ = __result_obj__ = result_75;
            return __result53__;
        }
        self->it=self->head;
        if(_if_conditional131=self->it,        _if_conditional131) {
            __result54__ = __result_obj__ = self->it->item;
            return __result54__;
        }
        memset(&result_76,0,sizeof(struct tuple2$2charphsTypeph*));
        __result55__ = __result_obj__ = result_76;
        return __result55__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result56__ = self==((void*)0)||self->it==((void*)0);
        return __result56__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
struct tuple2$2charphsTypeph* result_78;
struct tuple2$2charphsTypeph* __result57__;
_Bool _if_conditional133;
struct tuple2$2charphsTypeph* __result58__;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional132=self==((void*)0)||self->it==((void*)0),        _if_conditional132) {
            memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*));
            __result57__ = __result_obj__ = result_78;
            return __result57__;
        }
        self->it=self->it->next;
        if(_if_conditional133=self->it,        _if_conditional133) {
            __result58__ = __result_obj__ = self->it->item;
            return __result58__;
        }
        memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
        __result59__ = __result_obj__ = result_79;
        return __result59__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_82;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_83;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_82, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_83, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_82=self->head;
        while(_while_condtional11=it_82!=((void*)0),        _while_condtional11) {
            prev_it_83=it_82;
            it_82=it_82->next;
            if(prev_it_83 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_83, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional135=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional135) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional136=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional136) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        if(_if_conditional137=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional137) {
                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result60__ = self->len;
        return __result60__;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result67__ = self->sline;
    return __result67__;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value124;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
    __result68__ = __result_obj__ = ((char*)(right_value124=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value124;
    __freed_obj__ = 0;
    return __result68__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __dec_obj67;
void* right_value126;
struct sNode* __dec_obj68;
struct sNullCheckNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125;
    __freed_obj__ = 0;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    self->mOnlyNullCecker=only_null_checker;
    __result69__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result69__;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = (_Bool)0;
    return __result70__;
}

char* sNullCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value127;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
    __result71__ = __result_obj__ = ((char*)(right_value127=__builtin_string("sNullCheckNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    return __result71__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_103;
_Bool _if_conditional163;
_Bool __result72__;
void* right_value128;
struct CVALUE* left_value_104;
_Bool _if_conditional164;
void* right_value129;
char* method_name_105;
_Bool _if_conditional169;
struct sType* obj_type_108;
_Bool _if_conditional170;
struct sType* obj_type2_109;
void* right_value131;
void* right_value132;
char* __dec_obj69;
struct sFun* fun_110;
_Bool _if_conditional171;
_Bool __result77__;
void* right_value133;
struct sType* type_111;
void* right_value134;
struct CVALUE* come_value_112;
void* right_value135;
char* __dec_obj70;
void* right_value136;
struct sType* __dec_obj71;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value137;
struct CVALUE* come_value_113;
void* right_value138;
void* right_value139;
char* __dec_obj72;
void* right_value140;
struct sType* __dec_obj73;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_103, 0, sizeof(struct sNode*));
memset(&right_value128, 0, sizeof(void*));
memset(&left_value_104, 0, sizeof(struct CVALUE*));
memset(&right_value129, 0, sizeof(void*));
memset(&method_name_105, 0, sizeof(char*));
memset(&obj_type_108, 0, sizeof(struct sType*));
memset(&obj_type2_109, 0, sizeof(struct sType*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&fun_110, 0, sizeof(struct sFun*));
memset(&right_value133, 0, sizeof(void*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&right_value134, 0, sizeof(void*));
memset(&come_value_112, 0, sizeof(struct CVALUE*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&come_value_113, 0, sizeof(struct CVALUE*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
    left_103=self->mLeft;
    if(_if_conditional163=!node_compile(left_103,info),    _if_conditional163) {
        __result72__ = (_Bool)0;
        return __result72__;
    }
    left_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value128;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional164=!self->mOnlyNullCecker&&left_value_104->type->mNoSolvedGenericsType&&left_value_104->type->mNoSolvedGenericsType->v1&&left_value_104->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_104->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional164) {
        method_name_105=(char*)come_increment_ref_count(((char*)(right_value129=create_method_name(left_value_104->type,(_Bool)0,"expect",info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value129;
        __freed_obj__ = 0;
        if(_if_conditional169=map$2charphsFunph_at(info->funcs,method_name_105,((void*)0))==((void*)0),        _if_conditional169) {
            obj_type_108=left_value_104->type->mNoSolvedGenericsType->v1;
            if(_if_conditional170=list$1sTypeph_length(obj_type_108->mGenericsTypes)>0,            _if_conditional170) {
                obj_type2_109=left_value_104->type;
                __dec_obj69=method_name_105;
                method_name_105=(char*)come_increment_ref_count(((char*)(right_value132=make_generics_function(obj_type2_109,(char*)come_increment_ref_count(((char*)(right_value131=__builtin_string("expect")))),info))));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value131;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value132;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_104->type->mClass->mName);
                exit(1);
            }
        }
        fun_110=map$2charphsFunphp_operator_load_element(info->funcs,method_name_105);
        if(_if_conditional171=fun_110==((void*)0),        _if_conditional171) {
            err_msg(info,"function not found(%s)",method_name_105);
            __result77__ = (_Bool)1;
            if(method_name_105 && !__freed_obj__) { method_name_105 = come_decrement_ref_count(method_name_105, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result77__;
        }
        type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=solve_generics(fun_110->mResultType,left_value_104->type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value133;
        __freed_obj__ = 0;
        come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 427, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134;
        __freed_obj__ = 0;
        __dec_obj70=come_value_112->c_value;
        come_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s(%s)",method_name_105,left_value_104->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value135;
        __freed_obj__ = 0;
        __dec_obj71=come_value_112->type;
        come_value_112->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type_111))));
        if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value136;
        __freed_obj__ = 0;
        come_value_112->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_112));
        add_come_last_code(info,"%s;\n",come_value_112->c_value);
        if(method_name_105 && !__freed_obj__) { method_name_105 = come_decrement_ref_count(method_name_105, (void*)0, (void*)0, 0, 0, 0); }
        if(type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional172=!gComeDebug,        _if_conditional172) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_104));
        }
        else {
            if(_if_conditional173=left_value_104->type->mPointerNum>0,            _if_conditional173) {
                come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 441, "struct CVALUE"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137;
                __freed_obj__ = 0;
                __dec_obj72=come_value_113->c_value;
                come_value_113->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",((char*)(right_value138=make_type_name_string(left_value_104->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_104->c_value,info->sname,info->sline))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value139;
                __freed_obj__ = 0;
                __dec_obj73=come_value_113->type;
                come_value_113->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(left_value_104->type))));
                if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value140;
                __freed_obj__ = 0;
                come_value_113->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
                add_come_last_code(info,"%s;\n",come_value_113->c_value);
                if(come_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_104));
            }
        }
    }
    __result78__ = (_Bool)1;
    if(left_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result78__;
    if(left_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_106;
unsigned int it_107;
_Bool _while_condtional12;
_Bool _if_conditional165;
void* right_value130;
_Bool _if_conditional166;
struct sFun* __result73__;
_Bool _if_conditional167;
_Bool _if_conditional168;
struct sFun* __result74__;
struct sFun* __result75__;
struct sFun* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_106, 0, sizeof(unsigned int));
memset(&it_107, 0, sizeof(unsigned int));
memset(&right_value130, 0, sizeof(void*));
            hash_106=string_get_hash_key(((char*)key))%self->size;
            it_107=hash_106;
            while(_while_condtional12=(_Bool)1,            _while_condtional12) {
                if(_if_conditional165=self->item_existance[it_107],                _if_conditional165) {
                    if(_if_conditional166=optional$2boolbool_value(((struct optional$2boolbool*)(right_value130=string_equals(self->keys[it_107],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130),
                    (right_value130 && right_value130 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value130, 
                    __freed_obj__ = 0, 
                    _if_conditional166) {
                        __result73__ = __result_obj__ = self->items[it_107];
                        return __result73__;
                    }
                    it_107++;
                    if(_if_conditional167=it_107>=self->size,                    _if_conditional167) {
                        it_107=0;
                    }
                    else {
                        if(_if_conditional168=it_107==hash_106,                        _if_conditional168) {
                            __result74__ = __result_obj__ = default_value;
                            return __result74__;
                        }
                    }
                }
                else {
                    __result75__ = __result_obj__ = default_value;
                    return __result75__;
                }
            }
            __result76__ = __result_obj__ = default_value;
            return __result76__;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = self->sline;
    return __result79__;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value141;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value141, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value141=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    return __result80__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
char* __dec_obj74;
void* right_value143;
struct sNode* __dec_obj75;
void* right_value144;
struct sNode* __dec_obj76;
void* right_value145;
struct sNode* __dec_obj77;
struct sRangeCheckNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value143;
    __freed_obj__ = 0;
    __dec_obj76=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(begin))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value144;
    __freed_obj__ = 0;
    __dec_obj77=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(end))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result81__;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sRangeCheckNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sRangeCheckNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sRangeCheckNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    return __result83__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_114;
_Bool _if_conditional178;
_Bool __result84__;
void* right_value147;
struct CVALUE* left_value_115;
struct sNode* begin_116;
_Bool _if_conditional179;
_Bool __result85__;
void* right_value148;
struct CVALUE* begin_value_117;
struct sNode* end_118;
_Bool _if_conditional180;
_Bool __result86__;
void* right_value149;
struct CVALUE* end_value_119;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value150;
struct CVALUE* come_value_120;
void* right_value151;
void* right_value152;
char* __dec_obj78;
void* right_value153;
struct sType* __dec_obj79;
void* right_value154;
struct CVALUE* come_value_121;
void* right_value155;
void* right_value156;
char* __dec_obj80;
void* right_value157;
struct sType* __dec_obj81;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_114, 0, sizeof(struct sNode*));
memset(&right_value147, 0, sizeof(void*));
memset(&left_value_115, 0, sizeof(struct CVALUE*));
memset(&begin_116, 0, sizeof(struct sNode*));
memset(&right_value148, 0, sizeof(void*));
memset(&begin_value_117, 0, sizeof(struct CVALUE*));
memset(&end_118, 0, sizeof(struct sNode*));
memset(&right_value149, 0, sizeof(void*));
memset(&end_value_119, 0, sizeof(struct CVALUE*));
memset(&right_value150, 0, sizeof(void*));
memset(&come_value_120, 0, sizeof(struct CVALUE*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&come_value_121, 0, sizeof(struct CVALUE*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
    left_114=self->mLeft;
    if(_if_conditional178=!node_compile(left_114,info),    _if_conditional178) {
        __result84__ = (_Bool)0;
        return __result84__;
    }
    left_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    begin_116=self->mBegin;
    if(_if_conditional179=!node_compile(begin_116,info),    _if_conditional179) {
        __result85__ = (_Bool)0;
        if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result85__;
    }
    begin_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    end_118=self->mEnd;
    if(_if_conditional180=!node_compile(end_118,info),    _if_conditional180) {
        __result86__ = (_Bool)0;
        if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(begin_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result86__;
    }
    end_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional181=left_value_115->type->mPointerNum>0,    _if_conditional181) {
        if(_if_conditional182=!gComeDebug,        _if_conditional182) {
            come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 531, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value150;
            __freed_obj__ = 0;
            __dec_obj78=come_value_120->c_value;
            come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("(*((%s)%s))",((char*)(right_value151=make_type_name_string(left_value_115->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_115->c_value))));
            if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
            if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value151;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value152;
            __freed_obj__ = 0;
            left_value_115->type->mPointerNum--;
            __dec_obj79=come_value_120->type;
            come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(left_value_115->type))));
            if(__dec_obj79) { come_call_finalizer(sType_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value153;
            __freed_obj__ = 0;
            come_value_120->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
            add_come_last_code(info,"%s;\n",come_value_120->c_value);
            if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 544, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
            if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value154;
            __freed_obj__ = 0;
            __dec_obj80=come_value_121->c_value;
            come_value_121->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value155=make_type_name_string(left_value_115->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_115->c_value,begin_value_117->c_value,end_value_119->c_value,info->sname,info->sline))));
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
            if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value155;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value156;
            __freed_obj__ = 0;
            left_value_115->type->mPointerNum--;
            __dec_obj81=come_value_121->type;
            come_value_121->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(left_value_115->type))));
            if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
            if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value157;
            __freed_obj__ = 0;
            come_value_121->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_121));
            add_come_last_code(info,"%s;\n",come_value_121->c_value);
            if(come_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_115));
    }
    __result87__ = (_Bool)1;
    if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result87__;
    if(left_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = self->sline;
    return __result88__;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value158;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value158, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(right_value158=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158;
    __freed_obj__ = 0;
    return __result89__;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __dec_obj82;
void* right_value160;
struct sNode* __dec_obj83;
struct sExceptionGetValueNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(info->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = 0;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result90__;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = (_Bool)0;
    return __result91__;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
struct CVALUE* left_value_122;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value162;
char* method_name_123;
_Bool _if_conditional187;
struct sType* obj_type_124;
_Bool _if_conditional188;
struct sType* obj_type2_125;
void* right_value163;
void* right_value164;
char* __dec_obj84;
struct sFun* fun_126;
_Bool _if_conditional189;
_Bool __result92__;
void* right_value165;
struct sType* type_127;
void* right_value166;
struct CVALUE* come_value_128;
void* right_value167;
char* __dec_obj85;
void* right_value168;
struct sType* __dec_obj86;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&left_value_122, 0, sizeof(struct CVALUE*));
memset(&right_value162, 0, sizeof(void*));
memset(&method_name_123, 0, sizeof(char*));
memset(&obj_type_124, 0, sizeof(struct sType*));
memset(&obj_type2_125, 0, sizeof(struct sType*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&fun_126, 0, sizeof(struct sFun*));
memset(&right_value165, 0, sizeof(void*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&right_value166, 0, sizeof(void*));
memset(&come_value_128, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
    left_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional185=left_value_122==((void*)0),    _if_conditional185) {
    }
    else {
        if(_if_conditional186=left_value_122->type->mNoSolvedGenericsType&&left_value_122->type->mNoSolvedGenericsType->v1&&left_value_122->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_122->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),        _if_conditional186) {
            method_name_123=(char*)come_increment_ref_count(((char*)(right_value162=create_method_name(left_value_122->type,(_Bool)0,"expect",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value162;
            __freed_obj__ = 0;
            if(_if_conditional187=map$2charphsFunph_at(info->funcs,method_name_123,((void*)0))==((void*)0),            _if_conditional187) {
                obj_type_124=left_value_122->type->mNoSolvedGenericsType->v1;
                if(_if_conditional188=list$1sTypeph_length(obj_type_124->mGenericsTypes)>0,                _if_conditional188) {
                    obj_type2_125=left_value_122->type;
                    __dec_obj84=method_name_123;
                    method_name_123=(char*)come_increment_ref_count(((char*)(right_value164=make_generics_function(obj_type2_125,(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string("value")))),info))));
                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value163;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value164;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",left_value_122->type->mClass->mName);
                    exit(1);
                }
            }
            fun_126=map$2charphsFunphp_operator_load_element(info->funcs,method_name_123);
            if(_if_conditional189=fun_126==((void*)0),            _if_conditional189) {
                err_msg(info,"function not found(%s)",method_name_123);
                __result92__ = (_Bool)1;
                if(method_name_123 && !__freed_obj__) { method_name_123 = come_decrement_ref_count(method_name_123, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result92__;
            }
            type_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=solve_generics(fun_126->mResultType,left_value_122->type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value165;
            __freed_obj__ = 0;
            come_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 627, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value166;
            __freed_obj__ = 0;
            __dec_obj85=come_value_128->c_value;
            come_value_128->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s(%s)",method_name_123,left_value_122->c_value))));
            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value167;
            __freed_obj__ = 0;
            __dec_obj86=come_value_128->type;
            come_value_128->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(type_127))));
            if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value168;
            __freed_obj__ = 0;
            come_value_128->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
            add_come_last_code(info,"%s;\n",come_value_128->c_value);
            if(method_name_123 && !__freed_obj__) { method_name_123 = come_decrement_ref_count(method_name_123, (void*)0, (void*)0, 0, 0, 0); }
            if(type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_122));
            add_come_last_code(info,"%s;\n",left_value_122->c_value);
        }
    }
    __result93__ = (_Bool)1;
    if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result93__;
    if(left_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value169;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = 0;
    return __result94__;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_129;
_Bool _if_conditional190;
_Bool __result95__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_129, 0, sizeof(struct sNode*));
    left_129=self->mLeft;
    if(_if_conditional190=!node_compile(left_129,info),    _if_conditional190) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    __result96__ = compiletime_get_exception_value(info);
    return __result96__;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = self->sline;
    return __result97__;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value170;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value170=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    return __result98__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value171;
void* right_value172;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value178;
struct sNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 674, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value172=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value171=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 674, "struct sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result101__ = __result_obj__ = ((struct sNode*)(right_value178=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value171;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value172;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value178;
    __freed_obj__ = 0;
    return __result101__;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __dec_obj91;
void* right_value180;
struct sNode* __dec_obj92;
void* right_value181;
char* __dec_obj93;
struct sLoadFieldNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179;
    __freed_obj__ = 0;
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    __dec_obj93=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(name))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = 0;
    __result102__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    return __result102__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = (_Bool)0;
    return __result103__;
}

char* sLoadFieldNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value182;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value182=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    return __result104__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_131;
void* right_value183;
char* name_132;
_Bool _if_conditional204;
_Bool __result105__;
void* right_value184;
struct CVALUE* left_value_133;
struct sType* left_type_134;
void* right_value185;
struct sType* left_type2_135;
struct sClass* klass_136;
struct sType* field_type_137;
int index_138;
char* child_field_name_139;
struct list$1tuple2$2charphsTypephph* o2_saved_140;
struct tuple2$2charphsTypeph* field_141;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_142;
struct sType* field_type2_143;
_Bool _if_conditional205;
void* right_value186;
struct sType* __dec_obj94;
_Bool _if_conditional206;
struct list$1tuple2$2charphsTypephph* o2_saved_144;
struct tuple2$2charphsTypeph* field_145;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_146;
struct sType* field_type2_147;
struct sClass* klass2_148;
struct list$1tuple2$2charphsTypephph* o2_saved_149;
struct tuple2$2charphsTypeph* field2_150;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_151;
struct sType* field_type3_152;
_Bool _if_conditional207;
void* right_value187;
char* __dec_obj95;
void* right_value188;
struct sType* __dec_obj96;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value189;
struct sType* __dec_obj97;
_Bool _if_conditional210;
_Bool __result106__;
void* right_value190;
struct CVALUE* come_value_153;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value191;
char* __dec_obj98;
void* right_value192;
char* __dec_obj99;
_Bool _if_conditional213;
void* right_value193;
char* __dec_obj100;
void* right_value194;
char* __dec_obj101;
void* right_value195;
struct sType* __dec_obj102;
_Bool _if_conditional214;
_Bool __result107__;
_Bool _if_conditional215;
void* right_value196;
struct sType* __dec_obj103;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_131, 0, sizeof(struct sNode*));
memset(&right_value183, 0, sizeof(void*));
memset(&name_132, 0, sizeof(char*));
memset(&right_value184, 0, sizeof(void*));
memset(&left_value_133, 0, sizeof(struct CVALUE*));
memset(&left_type_134, 0, sizeof(struct sType*));
memset(&right_value185, 0, sizeof(void*));
memset(&left_type2_135, 0, sizeof(struct sType*));
memset(&klass_136, 0, sizeof(struct sClass*));
memset(&field_type_137, 0, sizeof(struct sType*));
memset(&index_138, 0, sizeof(int));
memset(&child_field_name_139, 0, sizeof(char*));
memset(&o2_saved_140, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_141, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_142, 0, sizeof(char*));
memset(&field_type2_143, 0, sizeof(struct sType*));
memset(&field_name_142, 0, sizeof(char*));
memset(&field_type2_143, 0, sizeof(struct sType*));
memset(&right_value186, 0, sizeof(void*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_146, 0, sizeof(char*));
memset(&field_type2_147, 0, sizeof(struct sType*));
memset(&field_name_146, 0, sizeof(char*));
memset(&field_type2_147, 0, sizeof(struct sType*));
memset(&klass2_148, 0, sizeof(struct sClass*));
memset(&o2_saved_149, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_150, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_151, 0, sizeof(char*));
memset(&field_type3_152, 0, sizeof(struct sType*));
memset(&field_name2_151, 0, sizeof(char*));
memset(&field_type3_152, 0, sizeof(struct sType*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&come_value_153, 0, sizeof(struct CVALUE*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
    left_131=self->mLeft;
    name_132=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value183;
    __freed_obj__ = 0;
    if(_if_conditional204=!node_compile(left_131,info),    _if_conditional204) {
        __result105__ = (_Bool)0;
        if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
        return __result105__;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_134=left_value_133->type;
    left_type2_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=solve_generics(left_type_134,left_type_134,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185;
    __freed_obj__ = 0;
    klass_136=left_type2_135->mClass;
    klass_136=map$2charphsClassphp_operator_load_element(info->classes,klass_136->mName);
    field_type_137=((void*)0);
    index_138=0;
    child_field_name_139=((void*)0);
    klass_136=map$2charphsClassphp_operator_load_element(info->classes,klass_136->mName);
    for(
    o2_saved_140=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_136->mFields)),field_141=list$1tuple2$2charphsTypephph_begin((o2_saved_140)) ,    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end((o2_saved_140)) ,    _for_condtionalA5;    field_141=list$1tuple2$2charphsTypephph_next((o2_saved_140)) ,    0    ){
        multiple_assign_var4=field_141;
        field_name_142=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_143=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional205=string_operator_equals(field_name_142,name_132),        _if_conditional205) {
            __dec_obj94=field_type_137;
            field_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value186=sType_clone(field_type2_143))));
            if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
            if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value186;
            __freed_obj__ = 0;
            if(field_name_142 && !__freed_obj__) { field_name_142 = come_decrement_ref_count(field_name_142, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
        }
        index_138++;
        if(field_name_142 && !__freed_obj__) { field_name_142 = come_decrement_ref_count(field_name_142, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_140 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(_if_conditional206=index_138==list$1tuple2$2charphsTypephph_length(klass_136->mFields),    _if_conditional206) {
        index_138=0;
        for(
        o2_saved_144=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_136->mFields)),field_145=list$1tuple2$2charphsTypephph_begin((o2_saved_144)) ,        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end((o2_saved_144)) ,        _for_condtionalA6;        field_145=list$1tuple2$2charphsTypephph_next((o2_saved_144)) ,        0        ){
            multiple_assign_var5=field_145;
            field_name_146=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_147=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_148=field_type2_147->mClass;
            for(
            o2_saved_149=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_148->mFields)),field2_150=list$1tuple2$2charphsTypephph_begin((o2_saved_149)) ,            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end((o2_saved_149)) ,            _for_condtionalA7;            field2_150=list$1tuple2$2charphsTypephph_next((o2_saved_149)) ,            0            ){
                multiple_assign_var6=field2_150;
                field_name2_151=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_152=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional207=string_operator_equals(field_name2_151,name_132),                _if_conditional207) {
                    __dec_obj95=child_field_name_139;
                    child_field_name_139=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(field_name_146))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value187;
                    __freed_obj__ = 0;
                    __dec_obj96=field_type_137;
                    field_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(field_type3_152))));
                    if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value188;
                    __freed_obj__ = 0;
                    if(field_name2_151 && !__freed_obj__) { field_name2_151 = come_decrement_ref_count(field_name2_151, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                }
                if(field_name2_151 && !__freed_obj__) { field_name2_151 = come_decrement_ref_count(field_name2_151, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_152, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_149 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_149, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(_if_conditional208=child_field_name_139,            _if_conditional208) {
                if(field_name_146 && !__freed_obj__) { field_name_146 = come_decrement_ref_count(field_name_146, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            if(_if_conditional209=string_operator_equals(field_name_146,name_132),            _if_conditional209) {
                __dec_obj97=field_type_137;
                field_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(field_type2_147))));
                if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value189;
                __freed_obj__ = 0;
                if(field_name_146 && !__freed_obj__) { field_name_146 = come_decrement_ref_count(field_name_146, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
            }
            index_138++;
            if(field_name_146 && !__freed_obj__) { field_name_146 = come_decrement_ref_count(field_name_146, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_147, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(_if_conditional210=index_138==list$1tuple2$2charphsTypephph_length(klass_136->mFields),        _if_conditional210) {
            err_msg(info,"field not found(%s) in %s(2)",name_132,klass_136->mName);
            __result106__ = (_Bool)0;
            if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_139 && !__freed_obj__) { child_field_name_139 = come_decrement_ref_count(child_field_name_139, (void*)0, (void*)0, 0, 0, 0); }
            return __result106__;
        }
    }
    come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 776, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    if(_if_conditional211=left_value_133->type->mPointerNum>0,    _if_conditional211) {
        if(_if_conditional212=child_field_name_139,        _if_conditional212) {
            __dec_obj98=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s->%s.%s",left_value_133->c_value,child_field_name_139,name_132))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
            if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value191;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj99=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s->%s",left_value_133->c_value,name_132))));
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
            if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value192;
            __freed_obj__ = 0;
        }
    }
    else {
        if(_if_conditional213=child_field_name_139,        _if_conditional213) {
            __dec_obj100=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s.%s.%s",left_value_133->c_value,child_field_name_139,name_132))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
            if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value193;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj101=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s.%s",left_value_133->c_value,name_132))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value194;
            __freed_obj__ = 0;
        }
    }
    __dec_obj102=come_value_153->type;
    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(field_type_137))));
    if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    come_value_153->var=((void*)0);
    if(_if_conditional214=field_type_137==((void*)0),    _if_conditional214) {
        err_msg(info,"no field(%s)\n",name_132);
        __result107__ = (_Bool)0;
        if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_139 && !__freed_obj__) { child_field_name_139 = come_decrement_ref_count(child_field_name_139, (void*)0, (void*)0, 0, 0, 0); }
        if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result107__;
    }
    if(_if_conditional215=list$1sNodeph_length(come_value_153->type->mArrayNum)==1,    _if_conditional215) {
        __dec_obj103=come_value_153->type->mOriginalLoadVarType->v1;
        come_value_153->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(come_value_153->type))));
        if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value196;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_153->type->mArrayNum);
        come_value_153->type->mPointerNum++;
        come_value_153->type->mOriginalTypeNamePointerNum=come_value_153->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
    __result110__ = (_Bool)1;
    if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_139 && !__freed_obj__) { child_field_name_139 = come_decrement_ref_count(child_field_name_139, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result110__;
    if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_139 && !__freed_obj__) { child_field_name_139 = come_decrement_ref_count(child_field_name_139, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result108__ = self->len;
        return __result108__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_154;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_155;
struct list$1sNodeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_154, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_155, 0, sizeof(struct list_item$1sNodeph*));
            it_154=self->head;
            while(_while_condtional13=it_154!=((void*)0),            _while_condtional13) {
                prev_it_155=it_154;
                it_154=it_154->next;
                if(prev_it_155 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_155, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result109__ = __result_obj__ = self;
            return __result109__;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = self->sline;
    return __result111__;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value197=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    return __result112__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value198;
char* __dec_obj104;
void* right_value199;
struct sNode* __dec_obj105;
void* right_value200;
struct sNode* __dec_obj106;
void* right_value201;
struct list$1sNodeph* __dec_obj107;
struct sStoreArrayNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(info->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(left))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value199;
    __freed_obj__ = 0;
    __dec_obj106=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(right))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    __dec_obj107=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value201=list$1sNodephp_clone(array_num))));
    if(__dec_obj107) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result113__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result113__;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sStoreArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value202;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    return __result115__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_156;
struct sNode* right_157;
struct list$1sNodeph* array_num_nodes_158;
_Bool _if_conditional220;
_Bool __result116__;
void* right_value203;
struct CVALUE* left_value_159;
struct sType* left_type_160;
void* right_value204;
void* right_value205;
struct list$1CVALUEph* array_num_163;
struct list$1sNodeph* o2_saved_164;
struct sNode* it_167;
_Bool _for_condtionalA8;
_Bool _if_conditional225;
_Bool __result125__;
void* right_value206;
struct CVALUE* c_value_170;
_Bool _if_conditional226;
_Bool __result126__;
void* right_value207;
struct CVALUE* right_value_171;
struct sType* right_type_172;
struct sClass* klass_173;
void* right_value208;
struct sType* type_174;
char* fun_name_175;
_Bool calling_fun_176;
_Bool _if_conditional227;
_Bool _if_conditional230;
void* right_value209;
struct CVALUE* come_value_180;
_Bool _if_conditional231;
int i_181;
_Bool _for_condtionalA9;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value210;
void* right_value211;
struct buffer* buf_194;
struct list$1CVALUEph* o2_saved_195;
struct CVALUE* it_198;
_Bool _for_condtionalA10;
void* right_value212;
void* right_value213;
char* left_value_code_201;
void* right_value214;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value215;
char* __dec_obj108;
_Bool _if_conditional258;
void* right_value216;
char* __dec_obj109;
_Bool __result139__;
int right_value_id_202;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value217;
char* __dec_obj110;
_Bool _if_conditional261;
void* right_value218;
char* __dec_obj111;
_Bool __result140__;
void* right_value219;
struct sType* result_type_203;
void* right_value220;
void* right_value221;
struct list$1sNodeph* __dec_obj112;
struct sType* __dec_obj113;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_156, 0, sizeof(struct sNode*));
memset(&right_157, 0, sizeof(struct sNode*));
memset(&array_num_nodes_158, 0, sizeof(struct list$1sNodeph*));
memset(&right_value203, 0, sizeof(void*));
memset(&left_value_159, 0, sizeof(struct CVALUE*));
memset(&left_type_160, 0, sizeof(struct sType*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&array_num_163, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_164, 0, sizeof(struct list$1sNodeph*));
memset(&it_167, 0, sizeof(struct sNode*));
memset(&right_value206, 0, sizeof(void*));
memset(&c_value_170, 0, sizeof(struct CVALUE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value_171, 0, sizeof(struct CVALUE*));
memset(&right_type_172, 0, sizeof(struct sType*));
memset(&klass_173, 0, sizeof(struct sClass*));
memset(&right_value208, 0, sizeof(void*));
memset(&type_174, 0, sizeof(struct sType*));
memset(&fun_name_175, 0, sizeof(char*));
memset(&calling_fun_176, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
memset(&come_value_180, 0, sizeof(struct CVALUE*));
memset(&i_181, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&buf_194, 0, sizeof(struct buffer*));
memset(&o2_saved_195, 0, sizeof(struct list$1CVALUEph*));
memset(&it_198, 0, sizeof(struct CVALUE*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&left_value_code_201, 0, sizeof(char*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value_id_202, 0, sizeof(int));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&result_type_203, 0, sizeof(struct sType*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
    left_156=self->mLeft;
    right_157=self->mRight;
    array_num_nodes_158=self->mArrayNum;
    if(_if_conditional220=!node_compile(left_156,info),    _if_conditional220) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    left_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_160=left_value_159->type;
    array_num_163=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value205=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value204=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 874, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    for(
    o2_saved_164=(array_num_nodes_158),it_167=list$1sNodeph_begin((o2_saved_164)) ,    0;    _for_condtionalA8=    !list$1sNodeph_end((o2_saved_164)) ,    _for_condtionalA8;    it_167=list$1sNodeph_next((o2_saved_164)) ,    0    ){
        if(_if_conditional225=!node_compile(it_167,info),        _if_conditional225) {
            __result125__ = (_Bool)0;
            if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result125__;
        }
        c_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_163,(struct CVALUE*)come_increment_ref_count(c_value_170));
        if(c_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional226=!node_compile(right_157,info),    _if_conditional226) {
        __result126__ = (_Bool)0;
        if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result126__;
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value207;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_type_172=right_value_171->type;
    klass_173=left_value_159->type->mClass;
    type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(left_value_159->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    fun_name_175="operator_store_element";
    if(_if_conditional227=self->mQuote,    _if_conditional227) {
        calling_fun_176=(_Bool)0;
    }
    else {
        calling_fun_176=operator_overload_fun2(type_174,fun_name_175,left_value_159,list$1CVALUEphp_operator_load_element(array_num_163,0),right_value_171,info);
    }
    if(_if_conditional230=!calling_fun_176,    _if_conditional230) {
        come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 910, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value209;
        __freed_obj__ = 0;
        if(_if_conditional231=list$1sNodeph_length(left_type_160->mArrayNum)>0,        _if_conditional231) {
            for(
            i_181=0 ,            0;            _for_condtionalA9=            i_181<list$1CVALUEph_length(array_num_163) ,            _for_condtionalA9;            i_181++ ,            0            ){
                list$1sNodeph_delete(left_type_160->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional250=left_type_160->mPointerNum>0,            _if_conditional250) {
                left_type_160->mPointerNum-=list$1CVALUEph_length(array_num_163);
                if(_if_conditional251=left_type_160->mPointerNum<0,                _if_conditional251) {
                    left_type_160->mPointerNum=0;
                }
            }
        }
        buf_194=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 931, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211;
        __freed_obj__ = 0;
        buffer_append_str(buf_194,left_value_159->c_value);
        for(
        o2_saved_195=(struct list$1CVALUEph*)come_increment_ref_count((array_num_163)),it_198=list$1CVALUEph_begin((o2_saved_195)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_195)) ,        _for_condtionalA10;        it_198=list$1CVALUEph_next((o2_saved_195)) ,        0        ){
            buffer_append_str(buf_194,((char*)(right_value212=xsprintf("[%s]",it_198->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
            if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value212;
            __freed_obj__ = 0;
        }
        if(o2_saved_195 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_201=(char*)come_increment_ref_count(((char*)(right_value213=buffer_to_string(buf_194))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value214=xsprintf("array is assinged to"))),left_type_160,right_type_172,right_value_171,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = 0;
        if(_if_conditional256=left_type_160->mHeap&&right_type_172->mHeap&&left_type_160->mPointerNum>0&&right_type_172->mPointerNum>0,        _if_conditional256) {
            if(_if_conditional257=left_value_159->type->mPointerNum>=1,            _if_conditional257) {
                decrement_ref_count_object(left_type_160,left_value_code_201,info,(_Bool)0);
                std_move(left_type_160,right_type_172,right_value_171,info);
                __dec_obj108=come_value_180->c_value;
                come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("%s=%s",left_value_code_201,right_value_171->c_value))));
                if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value215;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional258=left_value_159->type->mPointerNum==0,                _if_conditional258) {
                    decrement_ref_count_object(left_type_160,left_value_code_201,info,(_Bool)0);
                    std_move(left_type_160,right_type_172,right_value_171,info);
                    __dec_obj109=come_value_180->c_value;
                    come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s=%s",left_value_code_201,right_value_171->c_value))));
                    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value216;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_201,left_value_159->type->mPointerNum);
                    __result139__ = (_Bool)0;
                    if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_194 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_201 && !__freed_obj__) { left_value_code_201 = come_decrement_ref_count(left_value_code_201, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result139__;
                }
            }
            right_value_id_202=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_171->c_value));
            if(_if_conditional259=right_value_id_202!=-1,            _if_conditional259) {
                remove_object_from_right_values(right_value_id_202,info);
            }
        }
        else {
            if(_if_conditional260=left_value_159->type->mPointerNum>=1,            _if_conditional260) {
                __dec_obj110=come_value_180->c_value;
                come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s=%s",left_value_code_201,right_value_171->c_value))));
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value217;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional261=left_value_159->type->mPointerNum==0,                _if_conditional261) {
                    __dec_obj111=come_value_180->c_value;
                    come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s=%s",left_value_code_201,right_value_171->c_value))));
                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value218;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_201,left_value_159->type->mPointerNum);
                    __result140__ = (_Bool)0;
                    if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_194 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_201 && !__freed_obj__) { left_value_code_201 = come_decrement_ref_count(left_value_code_201, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    return __result140__;
                }
            }
        }
        result_type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(left_type_160))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value219;
        __freed_obj__ = 0;
        __dec_obj112=result_type_203->mArrayNum;
        result_type_203->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value221=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value220=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 977, "struct list$1sNodeph"))))))));
        if(__dec_obj112) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value220;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value221;
        __freed_obj__ = 0;
        __dec_obj113=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(result_type_203);
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        come_value_180->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        add_come_last_code(info,"%s;\n",come_value_180->c_value);
        if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_194 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_201 && !__freed_obj__) { left_value_code_201 = come_decrement_ref_count(left_value_code_201, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result141__ = (_Bool)1;
    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result141__;
    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_163 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_174 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result117__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result117__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_161;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_161, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1CVALUEph*));
            it_161=self->head;
            while(_while_condtional14=it_161!=((void*)0),            _while_condtional14) {
                prev_it_162=it_161;
                it_161=it_161->next;
                if(prev_it_162 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
struct sNode* result_165;
struct sNode* __result118__;
_Bool _if_conditional222;
struct sNode* __result119__;
struct sNode* result_166;
struct sNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_165, 0, sizeof(struct sNode*));
memset(&result_166, 0, sizeof(struct sNode*));
        if(_if_conditional221=self==((void*)0),        _if_conditional221) {
            memset(&result_165,0,sizeof(struct sNode*));
            __result118__ = __result_obj__ = result_165;
            return __result118__;
        }
        self->it=self->head;
        if(_if_conditional222=self->it,        _if_conditional222) {
            __result119__ = __result_obj__ = self->it->item;
            return __result119__;
        }
        memset(&result_166,0,sizeof(struct sNode*));
        __result120__ = __result_obj__ = result_166;
        return __result120__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result121__ = self==((void*)0)||self->it==((void*)0);
        return __result121__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
struct sNode* result_168;
struct sNode* __result122__;
_Bool _if_conditional224;
struct sNode* __result123__;
struct sNode* result_169;
struct sNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(struct sNode*));
memset(&result_169, 0, sizeof(struct sNode*));
        if(_if_conditional223=self==((void*)0)||self->it==((void*)0),        _if_conditional223) {
            memset(&result_168,0,sizeof(struct sNode*));
            __result122__ = __result_obj__ = result_168;
            return __result122__;
        }
        self->it=self->it->next;
        if(_if_conditional224=self->it,        _if_conditional224) {
            __result123__ = __result_obj__ = self->it->item;
            return __result123__;
        }
        memset(&result_169,0,sizeof(struct sNode*));
        __result124__ = __result_obj__ = result_169;
        return __result124__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct list_item$1CVALUEph* it_177;
int i_178;
_Bool _while_condtional15;
_Bool _if_conditional229;
struct CVALUE* __result127__;
struct CVALUE* default_value_179;
struct CVALUE* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_177, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_178, 0, sizeof(int));
memset(&default_value_179, 0, sizeof(struct CVALUE*));
            if(_if_conditional228=position<0,            _if_conditional228) {
                position+=self->len;
            }
            it_177=self->head;
            i_178=0;
            while(_while_condtional15=it_177!=((void*)0),            _while_condtional15) {
                if(_if_conditional229=position==i_178,                _if_conditional229) {
                    __result127__ = __result_obj__ = it_177->item;
                    return __result127__;
                }
                it_177=it_177->next;
                i_178++;
            }
            memset(&default_value_179,0,sizeof(struct CVALUE*));
            __result128__ = __result_obj__ = default_value_179;
            if(default_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result128__;
            if(default_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result129__ = self->len;
                return __result129__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
int tmp_182;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct list$1sNodeph* __result130__;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct list_item$1sNodeph* it_183;
int i_184;
_Bool _while_condtional16;
_Bool _if_conditional240;
struct list_item$1sNodeph* prev_it_185;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct list_item$1sNodeph* it_186;
int i_187;
_Bool _while_condtional17;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct list_item$1sNodeph* prev_it_188;
struct list_item$1sNodeph* it_189;
struct list_item$1sNodeph* head_prev_it_190;
struct list_item$1sNodeph* tail_it_191;
int i_192;
_Bool _while_condtional18;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct list_item$1sNodeph* prev_it_193;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct list$1sNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_182, 0, sizeof(int));
memset(&it_183, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_186, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_187, 0, sizeof(int));
memset(&prev_it_188, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_191, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_192, 0, sizeof(int));
memset(&prev_it_193, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional232=head<0,                    _if_conditional232) {
                        head+=self->len;
                    }
                    if(_if_conditional233=tail<0,                    _if_conditional233) {
                        tail+=self->len+1;
                    }
                    if(_if_conditional234=head>tail,                    _if_conditional234) {
                        tmp_182=tail;
                        tail=head;
                        head=tmp_182;
                    }
                    if(_if_conditional235=head<0,                    _if_conditional235) {
                        head=0;
                    }
                    if(_if_conditional236=tail>self->len,                    _if_conditional236) {
                        tail=self->len;
                    }
                    if(_if_conditional237=head==tail,                    _if_conditional237) {
                        __result130__ = __result_obj__ = self;
                        return __result130__;
                    }
                    if(_if_conditional238=head==0&&tail==self->len,                    _if_conditional238) {
                        list$1sNodeph_reset(self);
                    }
                    else {
                        if(_if_conditional239=head==0,                        _if_conditional239) {
                            it_183=self->head;
                            i_184=0;
                            while(_while_condtional16=it_183!=((void*)0),                            _while_condtional16) {
                                if(_if_conditional240=i_184<tail,                                _if_conditional240) {
                                    prev_it_185=it_183;
                                    it_183=it_183->next;
                                    i_184++;
                                    if(prev_it_185 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    self->len--;
                                }
                                else {
                                    if(_if_conditional241=i_184==tail,                                    _if_conditional241) {
                                        self->head=it_183;
                                        self->head->prev=((void*)0);
                                        break;
                                    }
                                    else {
                                        it_183=it_183->next;
                                        i_184++;
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional242=tail==self->len,                            _if_conditional242) {
                                it_186=self->head;
                                i_187=0;
                                while(_while_condtional17=it_186!=((void*)0),                                _while_condtional17) {
                                    if(_if_conditional243=i_187==head,                                    _if_conditional243) {
                                        self->tail=it_186->prev;
                                        self->tail->next=((void*)0);
                                    }
                                    if(_if_conditional244=i_187>=head,                                    _if_conditional244) {
                                        prev_it_188=it_186;
                                        it_186=it_186->next;
                                        i_187++;
                                        if(prev_it_188 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_186=it_186->next;
                                        i_187++;
                                    }
                                }
                            }
                            else {
                                it_189=self->head;
                                head_prev_it_190=((void*)0);
                                tail_it_191=((void*)0);
                                i_192=0;
                                while(_while_condtional18=it_189!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional245=i_192==head,                                    _if_conditional245) {
                                        head_prev_it_190=it_189->prev;
                                    }
                                    if(_if_conditional246=i_192==tail,                                    _if_conditional246) {
                                        tail_it_191=it_189;
                                    }
                                    if(_if_conditional247=i_192>=head&&i_192<tail,                                    _if_conditional247) {
                                        prev_it_193=it_189;
                                        it_189=it_189->next;
                                        i_192++;
                                        if(prev_it_193 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        self->len--;
                                    }
                                    else {
                                        it_189=it_189->next;
                                        i_192++;
                                    }
                                }
                                if(_if_conditional248=head_prev_it_190!=((void*)0),                                _if_conditional248) {
                                    head_prev_it_190->next=tail_it_191;
                                }
                                if(_if_conditional249=tail_it_191!=((void*)0),                                _if_conditional249) {
                                    tail_it_191->prev=head_prev_it_190;
                                }
                            }
                        }
                    }
                    __result131__ = __result_obj__ = self;
                    return __result131__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
struct CVALUE* result_196;
struct CVALUE* __result132__;
_Bool _if_conditional253;
struct CVALUE* __result133__;
struct CVALUE* result_197;
struct CVALUE* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_196, 0, sizeof(struct CVALUE*));
memset(&result_197, 0, sizeof(struct CVALUE*));
            if(_if_conditional252=self==((void*)0),            _if_conditional252) {
                memset(&result_196,0,sizeof(struct CVALUE*));
                __result132__ = __result_obj__ = result_196;
                return __result132__;
            }
            self->it=self->head;
            if(_if_conditional253=self->it,            _if_conditional253) {
                __result133__ = __result_obj__ = self->it->item;
                return __result133__;
            }
            memset(&result_197,0,sizeof(struct CVALUE*));
            __result134__ = __result_obj__ = result_197;
            return __result134__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result135__ = self==((void*)0)||self->it==((void*)0);
            return __result135__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
struct CVALUE* result_199;
struct CVALUE* __result136__;
_Bool _if_conditional255;
struct CVALUE* __result137__;
struct CVALUE* result_200;
struct CVALUE* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_199, 0, sizeof(struct CVALUE*));
memset(&result_200, 0, sizeof(struct CVALUE*));
            if(_if_conditional254=self==((void*)0)||self->it==((void*)0),            _if_conditional254) {
                memset(&result_199,0,sizeof(struct CVALUE*));
                __result136__ = __result_obj__ = result_199;
                return __result136__;
            }
            self->it=self->it->next;
            if(_if_conditional255=self->it,            _if_conditional255) {
                __result137__ = __result_obj__ = self->it->item;
                return __result137__;
            }
            memset(&result_200,0,sizeof(struct CVALUE*));
            __result138__ = __result_obj__ = result_200;
            return __result138__;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = self->sline;
    return __result142__;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value222;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value222, 0, sizeof(void*));
    __result143__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    return __result143__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value223;
char* __dec_obj114;
void* right_value224;
struct list$1sNodeph* __dec_obj115;
void* right_value225;
struct sNode* __dec_obj116;
struct sLoadArrayNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(info->sname))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value223;
    __freed_obj__ = 0;
    __dec_obj115=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value224=list$1sNodephp_clone(array_num))));
    if(__dec_obj115) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value224;
    __freed_obj__ = 0;
    __dec_obj116=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(left))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value225;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result144__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result144__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result145__ = (_Bool)0;
    return __result145__;
}

char* sLoadArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    __result146__ = __result_obj__ = ((char*)(right_value226=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    return __result146__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_204;
struct list$1sNodeph* array_num_nodes_205;
_Bool _if_conditional265;
_Bool __result147__;
void* right_value227;
struct CVALUE* left_value_206;
void* right_value228;
struct sType* left_type_207;
void* right_value229;
void* right_value230;
struct list$1CVALUEph* array_num_208;
struct list$1sNodeph* o2_saved_209;
struct sNode* it_210;
_Bool _for_condtionalA11;
_Bool _if_conditional266;
_Bool __result148__;
void* right_value231;
struct CVALUE* c_value_211;
void* right_value232;
struct sType* type_212;
char* fun_name_213;
_Bool calling_fun_214;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value233;
struct CVALUE* come_value_215;
void* right_value234;
void* right_value235;
struct buffer* buf_216;
struct list$1CVALUEph* o2_saved_217;
struct CVALUE* it_218;
_Bool _for_condtionalA12;
void* right_value236;
void* right_value237;
char* left_value_code_219;
void* right_value238;
char* __dec_obj117;
void* right_value239;
struct sType* result_type_220;
_Bool _if_conditional269;
struct sType* __dec_obj118;
_Bool _if_conditional270;
int n_221;
_Bool _if_conditional271;
void* right_value240;
struct sType* __dec_obj119;
_Bool _if_conditional272;
void* right_value241;
struct sType* __dec_obj120;
_Bool _if_conditional273;
int i_222;
_Bool _for_condtionalA13;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value242;
struct sType* __dec_obj121;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_204, 0, sizeof(struct sNode*));
memset(&array_num_nodes_205, 0, sizeof(struct list$1sNodeph*));
memset(&right_value227, 0, sizeof(void*));
memset(&left_value_206, 0, sizeof(struct CVALUE*));
memset(&right_value228, 0, sizeof(void*));
memset(&left_type_207, 0, sizeof(struct sType*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&array_num_208, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_209, 0, sizeof(struct list$1sNodeph*));
memset(&it_210, 0, sizeof(struct sNode*));
memset(&right_value231, 0, sizeof(void*));
memset(&c_value_211, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&type_212, 0, sizeof(struct sType*));
memset(&fun_name_213, 0, sizeof(char*));
memset(&calling_fun_214, 0, sizeof(_Bool));
memset(&right_value233, 0, sizeof(void*));
memset(&come_value_215, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&buf_216, 0, sizeof(struct buffer*));
memset(&o2_saved_217, 0, sizeof(struct list$1CVALUEph*));
memset(&it_218, 0, sizeof(struct CVALUE*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&left_value_code_219, 0, sizeof(char*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&result_type_220, 0, sizeof(struct sType*));
memset(&n_221, 0, sizeof(int));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&i_222, 0, sizeof(int));
memset(&right_value242, 0, sizeof(void*));
    left_204=self->mLeft;
    array_num_nodes_205=self->mArrayNum;
    if(_if_conditional265=!node_compile(left_204,info),    _if_conditional265) {
        __result147__ = (_Bool)0;
        return __result147__;
    }
    left_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(left_value_206->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    array_num_208=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value229=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1046, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value230;
    __freed_obj__ = 0;
    for(
    o2_saved_209=(array_num_nodes_205),it_210=list$1sNodeph_begin((o2_saved_209)) ,    0;    _for_condtionalA11=    !list$1sNodeph_end((o2_saved_209)) ,    _for_condtionalA11;    it_210=list$1sNodeph_next((o2_saved_209)) ,    0    ){
        if(_if_conditional266=!node_compile(it_210,info),        _if_conditional266) {
            __result148__ = (_Bool)0;
            if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result148__;
        }
        c_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_208,(struct CVALUE*)come_increment_ref_count(c_value_211));
        if(c_value_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_212=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_value_206->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232;
    __freed_obj__ = 0;
    fun_name_213="operator_load_element";
    if(_if_conditional267=self->mQuote,    _if_conditional267) {
        calling_fun_214=(_Bool)0;
    }
    else {
        calling_fun_214=operator_overload_fun(type_212,fun_name_213,left_value_206,list$1CVALUEphp_operator_load_element(array_num_208,0),info);
    }
    if(_if_conditional268=!calling_fun_214,    _if_conditional268) {
        come_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1071, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value233;
        __freed_obj__ = 0;
        buf_216=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1073, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value234;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value235;
        __freed_obj__ = 0;
        buffer_append_str(buf_216,left_value_206->c_value);
        for(
        o2_saved_217=(struct list$1CVALUEph*)come_increment_ref_count((array_num_208)),it_218=list$1CVALUEph_begin((o2_saved_217)) ,        0;        _for_condtionalA12=        !list$1CVALUEph_end((o2_saved_217)) ,        _for_condtionalA12;        it_218=list$1CVALUEph_next((o2_saved_217)) ,        0        ){
            buffer_append_str(buf_216,((char*)(right_value236=xsprintf("[%s]",it_218->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value236;
            __freed_obj__ = 0;
        }
        if(o2_saved_217 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_217, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_219=(char*)come_increment_ref_count(((char*)(right_value237=buffer_to_string(buf_216))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = 0;
        __dec_obj117=come_value_215->c_value;
        come_value_215->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s",left_value_code_219))));
        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value238;
        __freed_obj__ = 0;
        result_type_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(left_type_207))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value239;
        __freed_obj__ = 0;
        if(_if_conditional269=result_type_220->mOriginalLoadVarType->v1,        _if_conditional269) {
            __dec_obj118=result_type_220;
            result_type_220=(struct sType*)come_increment_ref_count(result_type_220->mOriginalLoadVarType->v1);
            if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional270=list$1sNodeph_length(result_type_220->mArrayNum)>0,        _if_conditional270) {
            n_221=list$1sNodeph_length(result_type_220->mArrayNum)-list$1CVALUEph_length(array_num_208);
            if(_if_conditional271=n_221==0,            _if_conditional271) {
                __dec_obj119=result_type_220;
                result_type_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(left_type_207))));
                if(__dec_obj119) { come_call_finalizer(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value240;
                __freed_obj__ = 0;
                if(_if_conditional272=left_type_207->mOriginalLoadVarType->v1,                _if_conditional272) {
                    __dec_obj120=result_type_220;
                    result_type_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(left_type_207->mOriginalLoadVarType->v1))));
                    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value241;
                    __freed_obj__ = 0;
                }
                list$1sNodeph_reset(result_type_220->mArrayNum);
            }
            else {
                if(_if_conditional273=n_221>0,                _if_conditional273) {
                    for(
                    i_222=0 ,                    0;                    _for_condtionalA13=                    i_222<n_221 ,                    _for_condtionalA13;                    i_222++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_220->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional274=n_221<0,                    _if_conditional274) {
                        list$1sNodeph_reset(result_type_220->mArrayNum);
                        result_type_220->mPointerNum+=n_221;
                        if(_if_conditional275=result_type_220->mPointerNum<0,                        _if_conditional275) {
                            result_type_220->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional276=result_type_220->mPointerNum>0,            _if_conditional276) {
                result_type_220->mPointerNum-=list$1CVALUEph_length(array_num_208);
                if(_if_conditional277=result_type_220->mPointerNum<0,                _if_conditional277) {
                    result_type_220->mPointerNum=0;
                }
            }
        }
        __dec_obj121=come_value_215->type;
        come_value_215->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(result_type_220))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value242;
        __freed_obj__ = 0;
        come_value_215->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
        add_come_last_code(info,"%s;\n",come_value_215->c_value);
        if(come_value_215 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_215, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_216 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_216, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_219 && !__freed_obj__) { left_value_code_219 = come_decrement_ref_count(left_value_code_219, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result149__ = (_Bool)1;
    if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result149__;
    if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result150__ = self->sline;
    return __result150__;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value243;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
    __result151__ = __result_obj__ = ((char*)(right_value243=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = 0;
    return __result151__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value244;
char* __dec_obj122;
void* right_value245;
struct list$1sNodeph* __dec_obj123;
void* right_value246;
struct sNode* __dec_obj124;
struct sLoadRangeArrayNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244;
    __freed_obj__ = 0;
    __dec_obj123=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value245=list$1sNodephp_clone(array_num))));
    if(__dec_obj123) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value245;
    __freed_obj__ = 0;
    __dec_obj124=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(left))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result152__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result152__;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result153__ = (_Bool)0;
    return __result153__;
}

char* sLoadRangeArrayNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value247;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
    __result154__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247;
    __freed_obj__ = 0;
    return __result154__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_223;
struct list$1sNodeph* array_num_nodes_224;
_Bool _if_conditional281;
_Bool __result155__;
void* right_value248;
struct CVALUE* left_value_225;
void* right_value249;
struct sType* left_type_226;
void* right_value250;
void* right_value251;
struct list$1CVALUEph* array_num_227;
struct list$1sNodeph* o2_saved_228;
struct sNode* it_229;
_Bool _for_condtionalA14;
_Bool _if_conditional282;
_Bool __result156__;
void* right_value252;
struct CVALUE* c_value_230;
void* right_value253;
struct sType* type_231;
char* fun_name_232;
_Bool calling_fun_233;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value254;
struct CVALUE* come_value_234;
void* right_value255;
void* right_value256;
struct buffer* buf_235;
struct list$1CVALUEph* o2_saved_236;
struct CVALUE* it_237;
_Bool _for_condtionalA15;
void* right_value257;
void* right_value258;
char* left_value_code_238;
void* right_value259;
char* __dec_obj125;
void* right_value260;
struct sType* result_type_239;
_Bool _if_conditional285;
struct sType* __dec_obj126;
_Bool _if_conditional286;
int n_240;
_Bool _if_conditional287;
void* right_value261;
struct sType* __dec_obj127;
_Bool _if_conditional288;
void* right_value262;
struct sType* __dec_obj128;
_Bool _if_conditional289;
int i_241;
_Bool _for_condtionalA16;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value263;
struct sType* __dec_obj129;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_223, 0, sizeof(struct sNode*));
memset(&array_num_nodes_224, 0, sizeof(struct list$1sNodeph*));
memset(&right_value248, 0, sizeof(void*));
memset(&left_value_225, 0, sizeof(struct CVALUE*));
memset(&right_value249, 0, sizeof(void*));
memset(&left_type_226, 0, sizeof(struct sType*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&array_num_227, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_228, 0, sizeof(struct list$1sNodeph*));
memset(&it_229, 0, sizeof(struct sNode*));
memset(&right_value252, 0, sizeof(void*));
memset(&c_value_230, 0, sizeof(struct CVALUE*));
memset(&right_value253, 0, sizeof(void*));
memset(&type_231, 0, sizeof(struct sType*));
memset(&fun_name_232, 0, sizeof(char*));
memset(&calling_fun_233, 0, sizeof(_Bool));
memset(&right_value254, 0, sizeof(void*));
memset(&come_value_234, 0, sizeof(struct CVALUE*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&buf_235, 0, sizeof(struct buffer*));
memset(&o2_saved_236, 0, sizeof(struct list$1CVALUEph*));
memset(&it_237, 0, sizeof(struct CVALUE*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&left_value_code_238, 0, sizeof(char*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&result_type_239, 0, sizeof(struct sType*));
memset(&n_240, 0, sizeof(int));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&i_241, 0, sizeof(int));
memset(&right_value263, 0, sizeof(void*));
    left_223=self->mLeft;
    array_num_nodes_224=self->mArrayNum;
    if(_if_conditional281=!node_compile(left_223,info),    _if_conditional281) {
        __result155__ = (_Bool)0;
        return __result155__;
    }
    left_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value248;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    left_type_226=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(left_value_225->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value249;
    __freed_obj__ = 0;
    array_num_227=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value251=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value250=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1193, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value251;
    __freed_obj__ = 0;
    for(
    o2_saved_228=(array_num_nodes_224),it_229=list$1sNodeph_begin((o2_saved_228)) ,    0;    _for_condtionalA14=    !list$1sNodeph_end((o2_saved_228)) ,    _for_condtionalA14;    it_229=list$1sNodeph_next((o2_saved_228)) ,    0    ){
        if(_if_conditional282=!node_compile(it_229,info),        _if_conditional282) {
            __result156__ = (_Bool)0;
            if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_226 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_227, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result156__;
        }
        c_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_227,(struct CVALUE*)come_increment_ref_count(c_value_230));
        if(c_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(left_value_225->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value253;
    __freed_obj__ = 0;
    fun_name_232="operator_load_range_element";
    if(_if_conditional283=self->mQuote,    _if_conditional283) {
        calling_fun_233=(_Bool)0;
    }
    else {
        calling_fun_233=operator_overload_fun2(type_231,fun_name_232,left_value_225,list$1CVALUEphp_operator_load_element(array_num_227,0),list$1CVALUEphp_operator_load_element(array_num_227,1),info);
    }
    if(_if_conditional284=!calling_fun_233,    _if_conditional284) {
        come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1218, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        buf_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value256=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value255=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1220, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value255;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value256;
        __freed_obj__ = 0;
        buffer_append_str(buf_235,left_value_225->c_value);
        for(
        o2_saved_236=(struct list$1CVALUEph*)come_increment_ref_count((array_num_227)),it_237=list$1CVALUEph_begin((o2_saved_236)) ,        0;        _for_condtionalA15=        !list$1CVALUEph_end((o2_saved_236)) ,        _for_condtionalA15;        it_237=list$1CVALUEph_next((o2_saved_236)) ,        0        ){
            buffer_append_str(buf_235,((char*)(right_value257=xsprintf("[%s]",it_237->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
            if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value257;
            __freed_obj__ = 0;
        }
        if(o2_saved_236 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_236, (void*)0, (void*)0, 0, 0, 0, 0); }
        left_value_code_238=(char*)come_increment_ref_count(((char*)(right_value258=buffer_to_string(buf_235))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258;
        __freed_obj__ = 0;
        __dec_obj125=come_value_234->c_value;
        come_value_234->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s",left_value_code_238))));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value259;
        __freed_obj__ = 0;
        result_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(left_type_226))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value260;
        __freed_obj__ = 0;
        if(_if_conditional285=result_type_239->mOriginalLoadVarType->v1,        _if_conditional285) {
            __dec_obj126=result_type_239;
            result_type_239=(struct sType*)come_increment_ref_count(result_type_239->mOriginalLoadVarType->v1);
            if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional286=list$1sNodeph_length(result_type_239->mArrayNum)>0,        _if_conditional286) {
            n_240=list$1sNodeph_length(result_type_239->mArrayNum)-list$1CVALUEph_length(array_num_227);
            if(_if_conditional287=n_240==0,            _if_conditional287) {
                __dec_obj127=result_type_239;
                result_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(left_type_226))));
                if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value261;
                __freed_obj__ = 0;
                if(_if_conditional288=left_type_226->mOriginalLoadVarType->v1,                _if_conditional288) {
                    __dec_obj128=result_type_239;
                    result_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_clone(left_type_226->mOriginalLoadVarType->v1))));
                    if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value262;
                    __freed_obj__ = 0;
                }
                list$1sNodeph_reset(result_type_239->mArrayNum);
            }
            else {
                if(_if_conditional289=n_240>0,                _if_conditional289) {
                    for(
                    i_241=0 ,                    0;                    _for_condtionalA16=                    i_241<n_240 ,                    _for_condtionalA16;                    i_241++ ,                    0                    ){
                        list$1sNodeph_delete(result_type_239->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional290=n_240<0,                    _if_conditional290) {
                        list$1sNodeph_reset(result_type_239->mArrayNum);
                        result_type_239->mPointerNum+=n_240;
                        if(_if_conditional291=result_type_239->mPointerNum<0,                        _if_conditional291) {
                            result_type_239->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional292=result_type_239->mPointerNum>0,            _if_conditional292) {
                result_type_239->mPointerNum-=list$1CVALUEph_length(array_num_227);
                if(_if_conditional293=result_type_239->mPointerNum<0,                _if_conditional293) {
                    result_type_239->mPointerNum=0;
                }
            }
        }
        __dec_obj129=come_value_234->type;
        come_value_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(result_type_239))));
        if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263;
        __freed_obj__ = 0;
        come_value_234->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
        add_come_last_code(info,"%s;\n",come_value_234->c_value);
        if(come_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_235 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_235, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_238 && !__freed_obj__) { left_value_code_238 = come_decrement_ref_count(left_value_code_238, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result157__ = (_Bool)1;
    if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_226 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result157__;
    if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_226 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_227 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = self->sline;
    return __result158__;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value264;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value264, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264;
    __freed_obj__ = 0;
    return __result159__;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result160__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result161__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    return __result161__;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
char* p_242;
int sline_243;
_Bool _if_conditional295;
void* right_value265;
char* word_244;
_Bool _if_conditional296;
void* right_value266;
void* right_value267;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value271;
struct sNode* __dec_obj132;
void* right_value272;
void* right_value273;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value277;
struct sNode* __dec_obj135;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value278;
void* right_value279;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value283;
struct sNode* __dec_obj138;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_242, 0, sizeof(char*));
memset(&sline_243, 0, sizeof(int));
memset(&right_value265, 0, sizeof(void*));
memset(&word_244, 0, sizeof(char*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
    if(_if_conditional294=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),    _if_conditional294) {
        p_242=info->p;
        sline_243=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional295=xisalpha(*info->p)||*info->p==95,        _if_conditional295) {
            word_244=(char*)come_increment_ref_count(((char*)(right_value265=parse_word(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value265;
            __freed_obj__ = 0;
            if(_if_conditional296=(string_operator_equals(word_244,"expect")||string_operator_equals(word_244,"value")||string_operator_equals(word_244,"catch"))&&(*info->p==40||*info->p==123),            _if_conditional296) {
                info->p=p_242;
                info->sline=sline_243;
            }
            else {
                info->p=p_242;
                info->sline=sline_243;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1326, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value267=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value266=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1326, "struct sExceptionGetValueNode")))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj132=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=_inf_value2)));
                if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value266;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
                if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value267;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value271);
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value271;
                __freed_obj__ = 0;
            }
            if(word_244 && !__freed_obj__) { word_244 = come_decrement_ref_count(word_244, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_242;
            info->sline=sline_243;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1333, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value273=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value272=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1333, "struct sExceptionGetValueNode")))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj135=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=_inf_value3)));
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value272;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value273;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value277);
            if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value277;
            __freed_obj__ = 0;
        }
    }
    else {
        if(_if_conditional309=*info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=123,        _if_conditional309) {
        }
        else {
            if(_if_conditional310=node==((void*)0),            _if_conditional310) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1341, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value279=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value278=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1341, "struct sExceptionGetValueNode")))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj138=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value4)));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value278;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value279;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value283;
                __freed_obj__ = 0;
            }
        }
    }
    __result168__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result168__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional311=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional311) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional312) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
struct sExceptionGetValueNode* __result166__;
void* right_value280;
struct sExceptionGetValueNode* result_247;
_Bool _if_conditional314;
void* right_value281;
struct sNode* __dec_obj136;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value282;
char* __dec_obj137;
struct sExceptionGetValueNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
                    if(_if_conditional313=self==(void*)0,                    _if_conditional313) {
                        __result166__ = __result_obj__ = (void*)0;
                        return __result166__;
                    }
                    result_247=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value280=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3, "struct sExceptionGetValueNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value280;
                    __freed_obj__ = 0;
                    if(_if_conditional314=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional314) {
                        __dec_obj136=result_247->mLeft;
                        result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(self->mLeft))));
                        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value281;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional315=self!=((void*)0),                    _if_conditional315) {
                        result_247->sline=self->sline;
                    }
                    if(_if_conditional316=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional316) {
                        __dec_obj137=result_247->sname;
                        result_247->sname=(char*)come_increment_ref_count(((char*)(right_value282=string_clone(self->sname))));
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value282;
                        __freed_obj__ = 0;
                    }
                    __result167__ = __result_obj__ = result_247;
                    if(result_247 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result167__;
                    if(result_247 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional19;
_Bool range_array_248;
char* p_249;
int sline_250;
_Bool _if_conditional317;
_Bool no_comma_251;
_Bool no_output_err_252;
_Bool no_output_come_code_253;
void* right_value284;
struct sNode* exp_254;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool quote_255;
_Bool _if_conditional320;
void* right_value285;
void* right_value286;
struct list$1sNodeph* array_num_256;
void* right_value287;
struct sNode* node2_257;
_Bool _if_conditional323;
void* right_value291;
struct sNode* node3_261;
void* right_value292;
void* right_value293;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value298;
struct sNode* __dec_obj145;
_Bool _if_conditional333;
_Bool quote_263;
_Bool _if_conditional334;
_Bool range_264;
void* right_value299;
void* right_value300;
struct list$1sNodeph* array_num_265;
_Bool _while_condtional20;
_Bool range_array2_266;
char* p_267;
int sline_268;
_Bool _if_conditional335;
_Bool no_comma_269;
_Bool no_output_err_270;
_Bool no_output_come_code_271;
void* right_value301;
struct sNode* exp_272;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value302;
struct sNode* node2_273;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value303;
struct sNode* right_node_274;
void* right_value304;
void* right_value305;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value311;
struct sNode* __dec_obj150;
void* right_value312;
void* right_value313;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value318;
struct sNode* __dec_obj154;
void* right_value319;
struct sNode* __dec_obj155;
_Bool _if_conditional361;
_Bool no_comma_277;
void* right_value320;
struct sNode* begin_278;
void* right_value321;
struct sNode* end_279;
void* right_value322;
void* right_value323;
struct sNode* _inf_value8;
struct sRangeCheckNode* _inf_obj_value8;
void* right_value329;
struct sNode* __dec_obj160;
_Bool _if_conditional372;
void* right_value330;
void* right_value331;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value335;
struct sNode* __dec_obj163;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value336;
void* right_value337;
void* right_value338;
struct sNode* _inf_value10;
struct sNullCheckNode* _inf_obj_value10;
void* right_value342;
struct sNode* __dec_obj166;
void* right_value343;
char* field_name_283;
_Bool _if_conditional389;
void* right_value344;
struct sNode* right_node_284;
void* right_value345;
void* right_value346;
struct sNode* _inf_value11;
struct sStoreFieldNode* _inf_obj_value11;
void* right_value352;
struct sNode* __dec_obj171;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value353;
void* right_value354;
struct sNode* __dec_obj172;
_Bool _if_conditional402;
void* right_value355;
void* right_value356;
struct sNode* __dec_obj173;
void* right_value357;
void* right_value358;
struct sNode* __dec_obj174;
void* right_value359;
void* right_value360;
struct sNode* _inf_value12;
struct sLoadFieldNode* _inf_obj_value12;
void* right_value365;
struct sNode* __dec_obj178;
void* right_value366;
struct sNode* node2_287;
_Bool _if_conditional411;
struct sNode* __dec_obj179;
struct sNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&range_array_248, 0, sizeof(_Bool));
memset(&p_249, 0, sizeof(char*));
memset(&sline_250, 0, sizeof(int));
memset(&no_comma_251, 0, sizeof(_Bool));
memset(&no_output_err_252, 0, sizeof(_Bool));
memset(&no_output_come_code_253, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&exp_254, 0, sizeof(struct sNode*));
memset(&quote_255, 0, sizeof(_Bool));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&array_num_256, 0, sizeof(struct list$1sNodeph*));
memset(&right_value287, 0, sizeof(void*));
memset(&node2_257, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&node3_261, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&quote_263, 0, sizeof(_Bool));
memset(&range_264, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&array_num_265, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_266, 0, sizeof(_Bool));
memset(&p_267, 0, sizeof(char*));
memset(&sline_268, 0, sizeof(int));
memset(&no_comma_269, 0, sizeof(_Bool));
memset(&no_output_err_270, 0, sizeof(_Bool));
memset(&no_output_come_code_271, 0, sizeof(_Bool));
memset(&right_value301, 0, sizeof(void*));
memset(&exp_272, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&node2_273, 0, sizeof(struct sNode*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_node_274, 0, sizeof(struct sNode*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&no_comma_277, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
memset(&begin_278, 0, sizeof(struct sNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&end_279, 0, sizeof(struct sNode*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&field_name_283, 0, sizeof(char*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_node_284, 0, sizeof(struct sNode*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&node2_287, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        range_array_248=(_Bool)0;
        {
            p_249=info->p;
            sline_250=info->sline;
            if(_if_conditional317=*info->p==91,            _if_conditional317) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_251=info->no_comma;
                no_output_err_252=info->no_output_err;
                no_output_come_code_253=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value284;
                __freed_obj__ = 0;
                info->no_comma=no_comma_251;
                info->no_output_err=no_output_err_252;
                info->no_output_come_code=no_output_come_code_253;
                if(_if_conditional318=*info->p==46&&*(info->p+1)==46,                _if_conditional318) {
                    range_array_248=(_Bool)1;
                }
                if(exp_254 && !__freed_obj__) { exp_254 = come_decrement_ref_count(exp_254, ((struct sNode*)exp_254)->finalize, ((struct sNode*)exp_254)->_protocol_obj, 0, 0, 0); } 
            }
            info->p=p_249;
            info->sline=sline_250;
        }
        if(_if_conditional319=range_array_248&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional319) {
            quote_255=*info->p==92;
            if(_if_conditional320=quote_255,            _if_conditional320) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_256=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value286=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value285=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1387, "struct list$1sNodeph"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value285;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value286);
            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value286;
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            node2_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value287;
            __freed_obj__ = 0;
            list$1sNodeph_push_back(array_num_256,(struct sNode*)come_increment_ref_count(node2_257));
            if(_if_conditional323=*info->p==46&&*(info->p+1)==46,            _if_conditional323) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value291;
                __freed_obj__ = 0;
                list$1sNodeph_push_back(array_num_256,(struct sNode*)come_increment_ref_count(node3_261));
                expected_next_character(93,info);
                if(node3_261 && !__freed_obj__) { node3_261 = come_decrement_ref_count(node3_261, ((struct sNode*)node3_261)->finalize, ((struct sNode*)node3_261)->_protocol_obj, 0, 0, 0); } 
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1408, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value293=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value292=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1408, "struct sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_256),quote_255,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj145=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=_inf_value5)));
            if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value292;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value293;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value298;
            __freed_obj__ = 0;
            if(array_num_256 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_256, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node2_257 && !__freed_obj__) { node2_257 = come_decrement_ref_count(node2_257, ((struct sNode*)node2_257)->finalize, ((struct sNode*)node2_257)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional333=!range_array_248&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional333) {
                quote_263=*info->p==92;
                if(_if_conditional334=quote_263,                _if_conditional334) {
                    info->p++;
                }
                range_264=(_Bool)0;
                array_num_265=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value300=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value299=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1419, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value299;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value300);
                if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value300;
                __freed_obj__ = 0;
                while(_while_condtional20=1,                _while_condtional20) {
                    range_array2_266=(_Bool)0;
                    {
                        p_267=info->p;
                        sline_268=info->sline;
                        if(_if_conditional335=*info->p==91,                        _if_conditional335) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_269=info->no_comma;
                            no_output_err_270=info->no_output_err;
                            no_output_come_code_271=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value301;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_269;
                            info->no_output_err=no_output_err_270;
                            info->no_output_come_code=no_output_come_code_271;
                            if(_if_conditional336=*info->p==46&&*(info->p+1)==46,                            _if_conditional336) {
                                range_array2_266=(_Bool)1;
                            }
                            if(exp_272 && !__freed_obj__) { exp_272 = come_decrement_ref_count(exp_272, ((struct sNode*)exp_272)->finalize, ((struct sNode*)exp_272)->_protocol_obj, 0, 0, 0); } 
                        }
                        info->p=p_267;
                        info->sline=sline_268;
                    }
                    if(_if_conditional337=range_array2_266,                    _if_conditional337) {
                        break;
                    }
                    else {
                        if(_if_conditional338=*info->p==91,                        _if_conditional338) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value302;
                            __freed_obj__ = 0;
                            list$1sNodeph_push_back(array_num_265,(struct sNode*)come_increment_ref_count(node2_273));
                            if(_if_conditional339=*info->p==93,                            _if_conditional339) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_273 && !__freed_obj__) { node2_273 = come_decrement_ref_count(node2_273, ((struct sNode*)node2_273)->finalize, ((struct sNode*)node2_273)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                if(_if_conditional340=*info->p==61&&*(info->p+1)!=61,                _if_conditional340) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
                    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value303;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1487, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value305=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value304=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1487, "struct sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_274),(struct list$1sNodeph*)come_increment_ref_count(array_num_265),quote_263,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj150=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=_inf_value6)));
                    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value304;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value305);
                    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value305;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value311);
                    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value311;
                    __freed_obj__ = 0;
                    if(right_node_274 && !__freed_obj__) { right_node_274 = come_decrement_ref_count(right_node_274, ((struct sNode*)right_node_274)->finalize, ((struct sNode*)right_node_274)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1490, "struct sNode");
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value313=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value312=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1490, "struct sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_265),quote_263,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj154=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value7)));
                    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value312;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value313);
                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value313;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value318);
                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value318;
                    __freed_obj__ = 0;
                    __dec_obj155=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value319;
                    __freed_obj__ = 0;
                }
                if(array_num_265 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_265, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional361=*info->p==33&&*(info->p+1)==123,                _if_conditional361) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_277=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value320;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_277;
                    expected_next_character(44,info);
                    end_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
                    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value321;
                    __freed_obj__ = 0;
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1512, "struct sNode");
                    _inf_obj_value8=come_increment_ref_count(((struct sRangeCheckNode*)(right_value323=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value322=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1512, "struct sRangeCheckNode")))),node,begin_278,end_279,info))));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value8->clone=(void*)sRangeCheckNode_clone;
                    _inf_value8->compile=(void*)sRangeCheckNode_compile;
                    _inf_value8->sline=(void*)sRangeCheckNode_sline;
                    _inf_value8->sname=(void*)sRangeCheckNode_sname;
                    _inf_value8->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value8->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj160=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=_inf_value8)));
                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value322;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value323);
                    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value323;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value329);
                    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value329;
                    __freed_obj__ = 0;
                    if(begin_278 && !__freed_obj__) { begin_278 = come_decrement_ref_count(begin_278, ((struct sNode*)begin_278)->finalize, ((struct sNode*)begin_278)->_protocol_obj, 0, 0, 0); } 
                    if(end_279 && !__freed_obj__) { end_279 = come_decrement_ref_count(end_279, ((struct sNode*)end_279)->finalize, ((struct sNode*)end_279)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional372=*info->p==33&&*(info->p+1)!=61,                    _if_conditional372) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode");
                        _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value331=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value330=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1520, "struct sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value9->clone=(void*)sNullCheckNode_clone;
                        _inf_value9->compile=(void*)sNullCheckNode_compile;
                        _inf_value9->sline=(void*)sNullCheckNode_sline;
                        _inf_value9->sname=(void*)sNullCheckNode_sname;
                        _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value9->kind=(void*)sNullCheckNode_kind;
                        __dec_obj163=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=_inf_value9)));
                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value330;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value331;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
                        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value335;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional380=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        _if_conditional380) {
                            if(_if_conditional381=*info->p==46,                            _if_conditional381) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                            _inf_obj_value10=come_increment_ref_count(((struct sNullCheckNode*)(right_value338=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value336=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1532, "struct sNullCheckNode")))),((struct sNode*)(right_value337=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value10->clone=(void*)sNullCheckNode_clone;
                            _inf_value10->compile=(void*)sNullCheckNode_compile;
                            _inf_value10->sline=(void*)sNullCheckNode_sline;
                            _inf_value10->sname=(void*)sNullCheckNode_sname;
                            _inf_value10->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value10->kind=(void*)sNullCheckNode_kind;
                            __dec_obj166=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=_inf_value10)));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value336;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value337);
                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[1] = right_value337;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value338);
                            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value338;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value342);
                            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value342;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            field_name_283=(char*)come_increment_ref_count(((char*)(right_value343=parse_word(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                            if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value343;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            if(_if_conditional389=*info->p==61&&*(info->p+1)!=61,                            _if_conditional389) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                right_node_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value344;
                                __freed_obj__ = 0;
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1548, "struct sNode");
                                _inf_obj_value11=come_increment_ref_count(((struct sStoreFieldNode*)(right_value346=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value345=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1548, "struct sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_284),(char*)come_increment_ref_count(field_name_283),info))));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value11->clone=(void*)sStoreFieldNode_clone;
                                _inf_value11->compile=(void*)sStoreFieldNode_compile;
                                _inf_value11->sline=(void*)sStoreFieldNode_sline;
                                _inf_value11->sname=(void*)sStoreFieldNode_sname;
                                _inf_value11->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value11->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj171=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=_inf_value11)));
                                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value345;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value346);
                                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value346;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value352);
                                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value352;
                                __freed_obj__ = 0;
                                if(right_node_284 && !__freed_obj__) { right_node_284 = come_decrement_ref_count(right_node_284, ((struct sNode*)right_node_284)->finalize, ((struct sNode*)right_node_284)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional400=*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                _if_conditional400) {
                                    if(_if_conditional401=string_operator_equals(field_name_283,"if"),                                    _if_conditional401) {
                                        __dec_obj172=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(node)))),info))));
                                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value353;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value354);
                                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[1] = right_value354;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional402=string_operator_equals(field_name_283,"elif"),                                        _if_conditional402) {
                                            __dec_obj173=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(node)))),info))));
                                            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                                            if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value355;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value356);
                                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value356;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj174=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_283),info))));
                                            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                            if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value357;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
                                            if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value358;
                                            __freed_obj__ = 0;
                                        }
                                    }
                                }
                                else {
                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1562, "struct sNode");
                                    _inf_obj_value12=come_increment_ref_count(((struct sLoadFieldNode*)(right_value360=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value359=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1562, "struct sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_283),info))));
                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                    _inf_value12->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value12->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value12->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value12->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value12->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value12->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value12->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj178=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=_inf_value12)));
                                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value359;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value360);
                                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value360;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value365);
                                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value365;
                                    __freed_obj__ = 0;
                                }
                            }
                            if(field_name_283 && !__freed_obj__) { field_name_283 = come_decrement_ref_count(field_name_283, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            node2_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value366;
                            __freed_obj__ = 0;
                            if(_if_conditional411=node2_287==((void*)0),                            _if_conditional411) {
                                if(node2_287 && !__freed_obj__) { node2_287 = come_decrement_ref_count(node2_287, ((struct sNode*)node2_287)->finalize, ((struct sNode*)node2_287)->_protocol_obj, 0, 0, 0); } 
                                break;
                            }
                            __dec_obj179=node;
                            node=(struct sNode*)come_increment_ref_count(node2_287);
                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                            if(node2_287 && !__freed_obj__) { node2_287 = come_decrement_ref_count(node2_287, ((struct sNode*)node2_287)->finalize, ((struct sNode*)node2_287)->_protocol_obj, 0, 0, 0); } 
                        }
                    }
                }
            }
        }
    }
    __result186__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    return __result186__;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
void* right_value288;
struct list_item$1sNodeph* litem_258;
struct sNode* __dec_obj139;
_Bool _if_conditional322;
void* right_value289;
struct list_item$1sNodeph* litem_259;
struct sNode* __dec_obj140;
void* right_value290;
struct list_item$1sNodeph* litem_260;
struct sNode* __dec_obj141;
struct list$1sNodeph* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value288, 0, sizeof(void*));
memset(&litem_258, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value289, 0, sizeof(void*));
memset(&litem_259, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value290, 0, sizeof(void*));
memset(&litem_260, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional321=self->len==0,                _if_conditional321) {
                    litem_258=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value288=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 282, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value288;
                    __freed_obj__ = 0;
                    litem_258->prev=((void*)0);
                    litem_258->next=((void*)0);
                    __dec_obj139=litem_258->item;
                    litem_258->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
                    self->tail=litem_258;
                    self->head=litem_258;
                }
                else {
                    if(_if_conditional322=self->len==1,                    _if_conditional322) {
                        litem_259=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value289=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 292, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value289;
                        __freed_obj__ = 0;
                        litem_259->prev=self->head;
                        litem_259->next=((void*)0);
                        __dec_obj140=litem_259->item;
                        litem_259->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                        self->tail=litem_259;
                        self->head->next=litem_259;
                    }
                    else {
                        litem_260=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value290=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 302, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value290;
                        __freed_obj__ = 0;
                        litem_260->prev=self->tail;
                        litem_260->next=((void*)0);
                        __dec_obj141=litem_260->item;
                        litem_260->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0); }
                        self->tail->next=litem_260;
                        self->tail=litem_260;
                    }
                }
                self->len++;
                __result169__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                return __result169__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional324=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional324) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional325=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional325) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional326) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
struct sLoadRangeArrayNode* __result170__;
void* right_value294;
struct sLoadRangeArrayNode* result_262;
_Bool _if_conditional328;
void* right_value295;
struct sNode* __dec_obj142;
_Bool _if_conditional329;
void* right_value296;
struct list$1sNodeph* __dec_obj143;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value297;
char* __dec_obj144;
struct sLoadRangeArrayNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value294, 0, sizeof(void*));
memset(&result_262, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
                if(_if_conditional327=self==(void*)0,                _if_conditional327) {
                    __result170__ = __result_obj__ = (void*)0;
                    return __result170__;
                }
                result_262=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value294=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
                if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value294;
                __freed_obj__ = 0;
                if(_if_conditional328=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional328) {
                    __dec_obj142=result_262->mLeft;
                    result_262->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(self->mLeft))));
                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value295;
                    __freed_obj__ = 0;
                }
                if(_if_conditional329=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional329) {
                    __dec_obj143=result_262->mArrayNum;
                    result_262->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value296=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj143) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value296;
                    __freed_obj__ = 0;
                }
                if(_if_conditional330=self!=((void*)0),                _if_conditional330) {
                    result_262->mQuote=self->mQuote;
                }
                if(_if_conditional331=self!=((void*)0),                _if_conditional331) {
                    result_262->sline=self->sline;
                }
                if(_if_conditional332=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional332) {
                    __dec_obj144=result_262->sname;
                    result_262->sname=(char*)come_increment_ref_count(((char*)(right_value297=string_clone(self->sname))));
                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value297;
                    __freed_obj__ = 0;
                }
                __result171__ = __result_obj__ = result_262;
                if(result_262 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result171__;
                if(result_262 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional341=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional341) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional342=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional342) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional343=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional343) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional344) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional345;
struct sStoreArrayNode* __result172__;
void* right_value306;
struct sStoreArrayNode* result_275;
_Bool _if_conditional346;
void* right_value307;
struct sNode* __dec_obj146;
_Bool _if_conditional347;
void* right_value308;
struct sNode* __dec_obj147;
_Bool _if_conditional348;
void* right_value309;
struct list$1sNodeph* __dec_obj148;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value310;
char* __dec_obj149;
struct sStoreArrayNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&result_275, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
                        if(_if_conditional345=self==(void*)0,                        _if_conditional345) {
                            __result172__ = __result_obj__ = (void*)0;
                            return __result172__;
                        }
                        result_275=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value306=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value306;
                        __freed_obj__ = 0;
                        if(_if_conditional346=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional346) {
                            __dec_obj146=result_275->mLeft;
                            result_275->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(self->mLeft))));
                            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value307;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional347=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional347) {
                            __dec_obj147=result_275->mRight;
                            result_275->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(self->mRight))));
                            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
                            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value308;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional348=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional348) {
                            __dec_obj148=result_275->mArrayNum;
                            result_275->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value309=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj148) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
                            if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value309;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional349=self!=((void*)0),                        _if_conditional349) {
                            result_275->mQuote=self->mQuote;
                        }
                        if(_if_conditional350=self!=((void*)0),                        _if_conditional350) {
                            result_275->sline=self->sline;
                        }
                        if(_if_conditional351=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional351) {
                            __dec_obj149=result_275->sname;
                            result_275->sname=(char*)come_increment_ref_count(((char*)(right_value310=string_clone(self->sname))));
                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                            if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value310;
                            __freed_obj__ = 0;
                        }
                        __result173__ = __result_obj__ = result_275;
                        if(result_275 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result173__;
                        if(result_275 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional352=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional352) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional353=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional353) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional354) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional355;
struct sLoadArrayNode* __result174__;
void* right_value314;
struct sLoadArrayNode* result_276;
_Bool _if_conditional356;
void* right_value315;
struct sNode* __dec_obj151;
_Bool _if_conditional357;
void* right_value316;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value317;
char* __dec_obj153;
struct sLoadArrayNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value314, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
                        if(_if_conditional355=self==(void*)0,                        _if_conditional355) {
                            __result174__ = __result_obj__ = (void*)0;
                            return __result174__;
                        }
                        result_276=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value314=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value314;
                        __freed_obj__ = 0;
                        if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional356) {
                            __dec_obj151=result_276->mLeft;
                            result_276->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(self->mLeft))));
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value315;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional357=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional357) {
                            __dec_obj152=result_276->mArrayNum;
                            result_276->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value316=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
                            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value316;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional358=self!=((void*)0),                        _if_conditional358) {
                            result_276->mQuote=self->mQuote;
                        }
                        if(_if_conditional359=self!=((void*)0),                        _if_conditional359) {
                            result_276->sline=self->sline;
                        }
                        if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional360) {
                            __dec_obj153=result_276->sname;
                            result_276->sname=(char*)come_increment_ref_count(((char*)(right_value317=string_clone(self->sname))));
                            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
                            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value317;
                            __freed_obj__ = 0;
                        }
                        __result175__ = __result_obj__ = result_276;
                        if(result_276 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result175__;
                        if(result_276 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional362=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional362) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional363=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional363) {
                            if(self->mBegin && !__freed_obj__) { self->mBegin = come_decrement_ref_count(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional364=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional364) {
                            if(self->mEnd && !__freed_obj__) { self->mEnd = come_decrement_ref_count(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional365) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional366;
struct sRangeCheckNode* __result176__;
void* right_value324;
struct sRangeCheckNode* result_280;
_Bool _if_conditional367;
void* right_value325;
struct sNode* __dec_obj156;
_Bool _if_conditional368;
void* right_value326;
struct sNode* __dec_obj157;
_Bool _if_conditional369;
void* right_value327;
struct sNode* __dec_obj158;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value328;
char* __dec_obj159;
struct sRangeCheckNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value324, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sRangeCheckNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
                        if(_if_conditional366=self==(void*)0,                        _if_conditional366) {
                            __result176__ = __result_obj__ = (void*)0;
                            return __result176__;
                        }
                        result_280=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value324=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "struct sRangeCheckNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value324;
                        __freed_obj__ = 0;
                        if(_if_conditional367=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional367) {
                            __dec_obj156=result_280->mLeft;
                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(self->mLeft))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                            if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value325;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional368=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional368) {
                            __dec_obj157=result_280->mBegin;
                            result_280->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(self->mBegin))));
                            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
                            if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value326;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional369=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional369) {
                            __dec_obj158=result_280->mEnd;
                            result_280->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(self->mEnd))));
                            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value327;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional370=self!=((void*)0),                        _if_conditional370) {
                            result_280->sline=self->sline;
                        }
                        if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional371) {
                            __dec_obj159=result_280->sname;
                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value328=string_clone(self->sname))));
                            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
                            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value328;
                            __freed_obj__ = 0;
                        }
                        __result177__ = __result_obj__ = result_280;
                        if(result_280 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result177__;
                        if(result_280 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional382;
_Bool _if_conditional383;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional382=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional382) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional383) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional384;
struct sNullCheckNode* __result180__;
void* right_value339;
struct sNullCheckNode* result_282;
_Bool _if_conditional385;
void* right_value340;
struct sNode* __dec_obj164;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value341;
char* __dec_obj165;
struct sNullCheckNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value339, 0, sizeof(void*));
memset(&result_282, 0, sizeof(struct sNullCheckNode*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
                                if(_if_conditional384=self==(void*)0,                                _if_conditional384) {
                                    __result180__ = __result_obj__ = (void*)0;
                                    return __result180__;
                                }
                                result_282=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value339=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value339;
                                __freed_obj__ = 0;
                                if(_if_conditional385=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional385) {
                                    __dec_obj164=result_282->mLeft;
                                    result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=sNode_clone(self->mLeft))));
                                    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                                    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value340;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional386=self!=((void*)0),                                _if_conditional386) {
                                    result_282->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                if(_if_conditional387=self!=((void*)0),                                _if_conditional387) {
                                    result_282->sline=self->sline;
                                }
                                if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional388) {
                                    __dec_obj165=result_282->sname;
                                    result_282->sname=(char*)come_increment_ref_count(((char*)(right_value341=string_clone(self->sname))));
                                    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value341;
                                    __freed_obj__ = 0;
                                }
                                __result181__ = __result_obj__ = result_282;
                                if(result_282 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result181__;
                                if(result_282 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional390) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional391=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional391) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional392=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional392) {
                                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional393) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
struct sStoreFieldNode* __result182__;
void* right_value347;
struct sStoreFieldNode* result_285;
_Bool _if_conditional395;
void* right_value348;
struct sNode* __dec_obj167;
_Bool _if_conditional396;
void* right_value349;
struct sNode* __dec_obj168;
_Bool _if_conditional397;
void* right_value350;
char* __dec_obj169;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value351;
char* __dec_obj170;
struct sStoreFieldNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value347, 0, sizeof(void*));
memset(&result_285, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
                                    if(_if_conditional394=self==(void*)0,                                    _if_conditional394) {
                                        __result182__ = __result_obj__ = (void*)0;
                                        return __result182__;
                                    }
                                    result_285=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value347=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value347;
                                    __freed_obj__ = 0;
                                    if(_if_conditional395=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional395) {
                                        __dec_obj167=result_285->mLeft;
                                        result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(self->mLeft))));
                                        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                                        if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value348;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional396=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional396) {
                                        __dec_obj168=result_285->mRight;
                                        result_285->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=sNode_clone(self->mRight))));
                                        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
                                        if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value349;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional397=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional397) {
                                        __dec_obj169=result_285->mName;
                                        result_285->mName=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->mName))));
                                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                                        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value350;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional398=self!=((void*)0),                                    _if_conditional398) {
                                        result_285->sline=self->sline;
                                    }
                                    if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional399) {
                                        __dec_obj170=result_285->sname;
                                        result_285->sname=(char*)come_increment_ref_count(((char*)(right_value351=string_clone(self->sname))));
                                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
                                        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value351;
                                        __freed_obj__ = 0;
                                    }
                                    __result183__ = __result_obj__ = result_285;
                                    if(result_285 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result183__;
                                    if(result_285 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional403) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional404=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional404) {
                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                        }
                                        if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional405) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional406;
struct sLoadFieldNode* __result184__;
void* right_value361;
struct sLoadFieldNode* result_286;
_Bool _if_conditional407;
void* right_value362;
struct sNode* __dec_obj175;
_Bool _if_conditional408;
void* right_value363;
char* __dec_obj176;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value364;
char* __dec_obj177;
struct sLoadFieldNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value361, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
                                        if(_if_conditional406=self==(void*)0,                                        _if_conditional406) {
                                            __result184__ = __result_obj__ = (void*)0;
                                            return __result184__;
                                        }
                                        result_286=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value361=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                                        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value361;
                                        __freed_obj__ = 0;
                                        if(_if_conditional407=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional407) {
                                            __dec_obj175=result_286->mLeft;
                                            result_286->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=sNode_clone(self->mLeft))));
                                            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                                            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value362;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional408=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional408) {
                                            __dec_obj176=result_286->mName;
                                            result_286->mName=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->mName))));
                                            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                                            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value363;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional409=self!=((void*)0),                                        _if_conditional409) {
                                            result_286->sline=self->sline;
                                        }
                                        if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional410) {
                                            __dec_obj177=result_286->sname;
                                            result_286->sname=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->sname))));
                                            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                                            if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value364;
                                            __freed_obj__ = 0;
                                        }
                                        __result185__ = __result_obj__ = result_286;
                                        if(result_286 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result185__;
                                        if(result_286 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0); }
}

