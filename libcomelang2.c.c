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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
};
struct sMemHeader
{
    struct sMemHeader* next;
    struct sMemHeader* prev;
    char* class_name;
    char* sname[16];
    int sline[16];
};
struct sMemHeader* gAllocMem;
struct optional$2__sFILEpbool
{
    struct __sFILE* v1;
    _Bool v2;
};

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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
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

char* basename(char* anonymous_var_nameX447);

char* dirname(char* anonymous_var_nameX448);

char* basename_r(const char* anonymous_var_nameX449, char* anonymous_var_nameX450);

char* dirname_r(const char* anonymous_var_nameX451, char* anonymous_var_nameX452);

void come_push_stackframe(char* sname, int sline);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void exception_stackframe();

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline);

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
static void come_free_mem_of_heap_pool(void* mem);
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

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right);

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
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

struct optional$2boolbool* string_equals(char* self, char* right);

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
struct optional$2boolbool* charp_equals(char* self, char* right);

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

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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

struct optional$2charphbool* FILE_read(struct __sFILE* f);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
struct optional$2intbool* FILE_write(struct __sFILE* f, char* str);

struct optional$2intbool* FILE_fclose(struct __sFILE* f);

struct optional$2__sFILEpbool* FILE_fprintf(struct __sFILE* f, const char* msg, ...);

static struct optional$2__sFILEpbool* optional$2__sFILEpbool_initialize(struct optional$2__sFILEpbool* self, struct __sFILE* v1, _Bool v2);
static void optional$2__sFILEpboolp_finalize(struct optional$2__sFILEpbool* self);
struct optional$2intbool* string_write(char* self, char* file_name, _Bool append);

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append);

struct optional$2charphbool* string_read(char* file_name);

struct optional$2charphbool* charp_read(char* file_name);

struct optional$2list$1charphphbool* FILE_readlines(struct __sFILE* f);

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2);
static void list$1charph_finalize(struct list$1charph* self);
static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self);
struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));

struct optional$2charphbool* charp_puts(char* self);

struct optional$2charphbool* charp_print(char* self);

struct optional$2charphbool* string_printf(char* self, ...);

struct optional$2charphbool* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

struct optional$2charphbool* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

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

void come_push_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional5=gNumComeStackFrame<1024,    _if_conditional5) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional6=gNumComeStackFrame>0,    _if_conditional6) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
void* right_value12;
int i_6;
_Bool _for_condtionalA1;
void* right_value13;
_Bool _if_conditional7;
void* right_value14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&right_value12, 0, sizeof(void*));
memset(&i_6, 0, sizeof(int));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 38, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    buffer_append_str(buf_5,((char*)(right_value12=xsprintf("%s %d\n",sname,sline))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = 0;
    for(
    i_6=gNumComeStackFrame-2 ,    0;    _for_condtionalA1=    i_6>=0 ,    _for_condtionalA1;    i_6-- ,    0    ){
        buffer_append_str(buf_5,((char*)(right_value13=xsprintf("%s %d\n",gComeStackFrameSName[i_6],gComeStackFrameSLine[i_6]))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
    }
    if(_if_conditional7=gComeStackFrameBuffer,    _if_conditional7) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value14=buffer_to_string(buf_5))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = 0;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void exception_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s",gComeStackFrameBuffer);
}

void stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_7;
_Bool _for_condtionalA2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_7, 0, sizeof(int));
    for(
    i_7=gNumComeStackFrame-1 ,    0;    _for_condtionalA2=    i_7>=0 ,    _for_condtionalA2;    i_7-- ,    0    ){
        printf("%s %d\n",gComeStackFrameSName[i_7],gComeStackFrameSLine[i_7]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value15;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
    __result7__ = __result_obj__ = ((char*)(right_value15=__builtin_string(gComeStackFrameBuffer)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15;
    __freed_obj__ = 0;
    return __result7__;
}

void* come_null_check(void* mem, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
void* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional8=mem==((void*)0),    _if_conditional8) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result8__ = __result_obj__ = mem;
    return __result8__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
void* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional9=mem==((void*)0),    _if_conditional9) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional10=mem<begin,    _if_conditional10) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(_if_conditional11=mem>=end,    _if_conditional11) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result9__ = __result_obj__ = mem;
    return __result9__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool __result10__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional12=!self,    _if_conditional12) {
        block(parent);
        if(_if_conditional13=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional13) {
            __result10__ = self;
            return __result10__;
        }
        stackframe();
        exit(1);
    }
    __result11__ = self;
    return __result11__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result12__ = self;
    return __result12__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
_Bool _if_conditional15;
int __result13__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional14=self<0,    _if_conditional14) {
        block(parent);
        if(_if_conditional15=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional15) {
            __result13__ = self;
            return __result13__;
        }
    }
    __result14__ = self;
    return __result14__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
_Bool _if_conditional17;
int __result15__;
int __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional16=self<0,    _if_conditional16) {
        block(parent);
        if(_if_conditional17=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional17) {
            __result15__ = self;
            return __result15__;
        }
        stackframe();
        exit(1);
    }
    __result16__ = self;
    return __result16__;
}

int int_value(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result17__ = self;
    return __result17__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional18;
_Bool _if_conditional19;
int __result18__;
int __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional18=self<0,    _if_conditional18) {
        block(parent);
        if(_if_conditional19=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional19) {
            __result18__ = self;
            return __result18__;
        }
    }
    __result19__ = self;
    return __result19__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool __result20__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional20=!self,    _if_conditional20) {
        block(parent);
        if(_if_conditional21=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional21) {
            __result20__ = self;
            return __result20__;
        }
    }
    __result21__ = self;
    return __result21__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool __result22__;
_Bool __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional22=!self,    _if_conditional22) {
        block(parent);
        if(_if_conditional23=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional23) {
            __result22__ = self;
            return __result22__;
        }
    }
    __result23__ = self;
    return __result23__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf("%s...",msg);
    if(_if_conditional24=!test,    _if_conditional24) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
struct sMemHeader* it_8;
int n_9;
_Bool _while_condtional1;
_Bool flag_10;
_Bool _if_conditional28;
int i_11;
_Bool _for_condtionalA3;
_Bool _if_conditional29;
_Bool _if_conditional30;
struct sMemHeaderTiny* it_12;
int n_13;
_Bool _while_condtional2;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct sMemHeader*));
memset(&n_9, 0, sizeof(int));
memset(&flag_10, 0, sizeof(_Bool));
memset(&i_11, 0, sizeof(int));
memset(&it_12, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_13, 0, sizeof(int));
    if(_if_conditional25=gComeStackFrameBuffer,    _if_conditional25) {
        free(gComeStackFrameBuffer);
    }
    if(_if_conditional26=gComeGCLib,    _if_conditional26) {
    }
    else {
        if(_if_conditional27=gComeDebugLib,        _if_conditional27) {
            it_8=gAllocMem;
            n_9=0;
            while(_while_condtional1=it_8,            _while_condtional1) {
                n_9++;
                flag_10=(_Bool)0;
                printf("#%d ",n_9);
                if(_if_conditional28=it_8->class_name,                _if_conditional28) {
                    printf("(%s): ",it_8->class_name);
                }
                for(
                i_11=0 ,                0;                _for_condtionalA3=                i_11<16 ,                _for_condtionalA3;                i_11++ ,                0                ){
                    if(_if_conditional29=it_8->sname[i_11],                    _if_conditional29) {
                        printf("%s %d, ",it_8->sname[i_11],it_8->sline[i_11]);
                        flag_10=(_Bool)1;
                    }
                }
                if(_if_conditional30=flag_10,                _if_conditional30) {
                    puts("");
                }
                it_8=it_8->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_9,gNumAlloc,gNumFree);
        }
        else {
            it_12=(struct sMemHeaderTiny*)gAllocMem;
            n_13=0;
            while(_while_condtional2=it_12,            _while_condtional2) {
                n_13++;
                it_12=it_12->next;
            }
            if(_if_conditional31=n_13>0,            _if_conditional31) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_13,gNumAlloc,gNumFree);
            }
        }
    }
}

static void* come_alloc_mem_from_heap_pool(long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
void* result_14;
struct sMemHeader* it_15;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
void* __result24__;
void* result_16;
struct sMemHeaderTiny* it_17;
_Bool _if_conditional36;
void* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_14, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct sMemHeader*));
memset(&result_16, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct sMemHeaderTiny*));
    if(_if_conditional32=gComeDebugLib,    _if_conditional32) {
        result_14=calloc(1,size+sizeof(struct sMemHeader));
        it_15=result_14;
        if(_if_conditional33=gNumComeStackFrame<16,        _if_conditional33) {
            memcpy(it_15->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_15->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_15->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_15->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        it_15->next=gAllocMem;
        it_15->prev=((void*)0);
        if(_if_conditional34=class_name,        _if_conditional34) {
            it_15->class_name=strdup(class_name);
        }
        else {
            it_15->class_name=((void*)0);
        }
        if(_if_conditional35=gAllocMem,        _if_conditional35) {
            gAllocMem->prev=it_15;
        }
        gAllocMem=it_15;
        gNumAlloc++;
        __result24__ = __result_obj__ = (char*)result_14+sizeof(struct sMemHeader);
        return __result24__;
    }
    else {
        result_16=calloc(1,size+sizeof(struct sMemHeaderTiny));
        it_17=result_16;
        it_17->next=(struct sMemHeaderTiny*)gAllocMem;
        it_17->prev=((void*)0);
        if(_if_conditional36=gAllocMem,        _if_conditional36) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_17;
        }
        gAllocMem=(struct sMemHeader*)it_17;
        gNumAlloc++;
        __result25__ = __result_obj__ = (char*)result_16+sizeof(struct sMemHeaderTiny);
        return __result25__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
struct sMemHeader* it_18;
struct sMemHeader* prev_it_19;
struct sMemHeader* next_it_20;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
struct sMemHeaderTiny* it_21;
struct sMemHeaderTiny* prev_it_22;
struct sMemHeaderTiny* next_it_23;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_18, 0, sizeof(struct sMemHeader*));
memset(&prev_it_19, 0, sizeof(struct sMemHeader*));
memset(&next_it_20, 0, sizeof(struct sMemHeader*));
memset(&it_21, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_22, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_23, 0, sizeof(struct sMemHeaderTiny*));
    if(_if_conditional37=mem,    _if_conditional37) {
        if(_if_conditional38=gComeGCLib,        _if_conditional38) {
        }
        else {
            if(_if_conditional39=gComeDebugLib,            _if_conditional39) {
                it_18=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                prev_it_19=it_18->prev;
                next_it_20=it_18->next;
                if(_if_conditional40=it_18->class_name,                _if_conditional40) {
                    free(it_18->class_name);
                }
                if(_if_conditional41=gAllocMem==it_18,                _if_conditional41) {
                    gAllocMem=next_it_20;
                    if(_if_conditional42=gAllocMem,                    _if_conditional42) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional43=prev_it_19,                    _if_conditional43) {
                        prev_it_19->next=next_it_20;
                    }
                    if(_if_conditional44=next_it_20,                    _if_conditional44) {
                        next_it_20->prev=prev_it_19;
                    }
                }
                free((char*)mem-sizeof(struct sMemHeader));
                gNumFree++;
            }
            else {
                it_21=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                prev_it_22=it_21->prev;
                next_it_23=it_21->next;
                if(_if_conditional45=gAllocMem==it_21,                _if_conditional45) {
                    gAllocMem=(struct sMemHeader*)next_it_23;
                    if(_if_conditional46=gAllocMem,                    _if_conditional46) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(_if_conditional47=prev_it_22,                    _if_conditional47) {
                        prev_it_22->next=next_it_23;
                    }
                    if(_if_conditional48=next_it_23,                    _if_conditional48) {
                        next_it_23->prev=prev_it_22;
                    }
                }
                free((char*)mem-sizeof(struct sMemHeaderTiny));
                gNumFree++;
            }
        }
    }
}

void* come_calloc(long int count, long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* mem_24;
long int* ref_count_25;
long int* size2_26;
void* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_24, 0, sizeof(char*));
memset(&ref_count_25, 0, sizeof(long int*));
memset(&size2_26, 0, sizeof(long int*));
    mem_24=come_alloc_mem_from_heap_pool(sizeof(long int)+sizeof(long int)+count*size,sname,sline,class_name);
    ref_count_25=(long int*)mem_24;
    *ref_count_25=0;
    size2_26=(long int*)(mem_24+sizeof(long int));
    *size2_26=size*count+sizeof(long int)+sizeof(long int);
    __result26__ = __result_obj__ = mem_24+sizeof(long int)+sizeof(long int);
    return __result26__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
long int* ref_count_27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_27, 0, sizeof(long int*));
    if(_if_conditional49=mem==((void*)0),    _if_conditional49) {
        return;
    }
    ref_count_27=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_27);
}

void come_free(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
long int* ref_count_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_28, 0, sizeof(long int*));
    if(_if_conditional50=mem==((void*)0),    _if_conditional50) {
        return;
    }
    ref_count_28=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    come_free_mem_of_heap_pool((char*)ref_count_28);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* __result27__;
char* mem_29;
long int* size_p_30;
long int size_31;
void* result_32;
void* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_29, 0, sizeof(char*));
memset(&size_p_30, 0, sizeof(long int*));
memset(&size_31, 0, sizeof(long int));
memset(&result_32, 0, sizeof(void*));
    if(_if_conditional51=!block,    _if_conditional51) {
        __result27__ = __result_obj__ = ((void*)0);
        return __result27__;
    }
    mem_29=(char*)block-sizeof(long int)-sizeof(long int);
    size_p_30=(long int*)(mem_29+sizeof(long int));
    size_31=*size_p_30-sizeof(long int)-sizeof(long int);
    result_32=come_calloc(1,size_31,sname,sline,class_name);
    memcpy(result_32,block,size_31);
    __result28__ = __result_obj__ = result_32;
    return __result28__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
void* __result29__;
long int* ref_count_33;
void* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_33, 0, sizeof(long int*));
    if(_if_conditional52=mem==((void*)0),    _if_conditional52) {
        __result29__ = __result_obj__ = mem;
        return __result29__;
    }
    ref_count_33=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    (*ref_count_33)++;
    __result30__ = __result_obj__ = mem;
    return __result30__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
void* __result31__;
long int* ref_count_34;
void* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_34, 0, sizeof(long int*));
    if(_if_conditional53=mem==((void*)0),    _if_conditional53) {
        __result31__ = __result_obj__ = mem;
        return __result31__;
    }
    ref_count_34=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    printf("ref_count %ld\n",*ref_count_34);
    __result32__ = __result_obj__ = mem;
    return __result32__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional54;
void* __result33__;
long int* ref_count_35;
_Bool _if_conditional55;
long int count_36;
_Bool _if_conditional56;
_Bool _if_conditional57;
void (*finalizer_37)(void*);
void* __result34__;
void* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ref_count_35, 0, sizeof(long int*));
memset(&count_36, 0, sizeof(long int));
memset(&finalizer_37, 0, sizeof(void (*)(void*)));
    if(_if_conditional54=mem==((void*)0),    _if_conditional54) {
        __result33__ = __result_obj__ = ((void*)0);
        return __result33__;
    }
    ref_count_35=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
    if(_if_conditional55=!no_decrement,    _if_conditional55) {
        (*ref_count_35)--;
    }
    count_36=*ref_count_35;
    if(_if_conditional56=!no_free&&(count_36<=0||force_delete_),    _if_conditional56) {
        if(_if_conditional57=protocol_obj&&protocol_fun,        _if_conditional57) {
            finalizer_37=protocol_fun;
            finalizer_37(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result34__ = __result_obj__ = ((void*)0);
        return __result34__;
    }
    __result35__ = __result_obj__ = mem;
    return __result35__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
void (*finalizer_38)(void*);
void (*finalizer_39)(void*);
long int* ref_count_40;
_Bool _if_conditional62;
long int count_41;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
void (*finalizer_42)(void*);
_Bool _if_conditional66;
void (*finalizer_43)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&finalizer_38, 0, sizeof(void (*)(void*)));
memset(&finalizer_39, 0, sizeof(void (*)(void*)));
memset(&ref_count_40, 0, sizeof(long int*));
memset(&count_41, 0, sizeof(long int));
memset(&finalizer_42, 0, sizeof(void (*)(void*)));
memset(&finalizer_43, 0, sizeof(void (*)(void*)));
    if(_if_conditional58=mem==((void*)0),    _if_conditional58) {
        return;
    }
    if(_if_conditional59=call_finalizer_only,    _if_conditional59) {
        if(_if_conditional60=fun,        _if_conditional60) {
            if(_if_conditional61=protocol_obj&&protocol_fun,            _if_conditional61) {
                finalizer_38=protocol_fun;
                finalizer_38(protocol_obj);
            }
            finalizer_39=fun;
            finalizer_39(mem);
        }
    }
    else {
        ref_count_40=(long int*)((char*)mem-sizeof(long int)-sizeof(long int));
        if(_if_conditional62=!no_decrement,        _if_conditional62) {
            (*ref_count_40)--;
        }
        count_41=*ref_count_40;
        if(_if_conditional63=!no_free&&(count_41<=0||force_delete_),        _if_conditional63) {
            if(_if_conditional64=mem,            _if_conditional64) {
                if(_if_conditional65=protocol_obj&&protocol_fun,                _if_conditional65) {
                    finalizer_42=protocol_fun;
                    finalizer_42(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(_if_conditional66=fun,                _if_conditional66) {
                    finalizer_43=fun;
                    finalizer_43(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional67;
char* __result36__;
int len_44;
void* right_value16;
char* result_45;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_44, 0, sizeof(int));
memset(&right_value16, 0, sizeof(void*));
memset(&result_45, 0, sizeof(char*));
    if(_if_conditional67=str==((void*)0),    _if_conditional67) {
        __result36__ = __result_obj__ = ((void*)0);
        return __result36__;
    }
    len_44=strlen(str)+1;
    result_45=(char*)come_increment_ref_count(((char*)(right_value16=(char*)come_calloc(1, sizeof(char)*(1*(len_44)), "libcomelang2.c", 667, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16;
    __freed_obj__ = 0;
    strncpy(result_45,str,len_44);
    __result37__ = __result_obj__ = result_45;
    if(result_45 && !__freed_obj__) { result_45 = come_decrement_ref_count(result_45, (void*)0, (void*)0, 0, 1, 0); }
    return __result37__;
    if(result_45 && !__freed_obj__) { result_45 = come_decrement_ref_count(result_45, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool found_46;
int i_47;
_Bool _for_condtionalA4;
_Bool _if_conditional68;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&found_46, 0, sizeof(_Bool));
memset(&i_47, 0, sizeof(int));
    found_46=(_Bool)0;
    for(
    i_47=0 ,    0;    _for_condtionalA4=    i_47<len ,    _for_condtionalA4;    i_47++ ,    0    ){
        if(_if_conditional68=array[i_47]==element,        _if_conditional68) {
            found_46=(_Bool)1;
            break;
        }
    }
    __result38__ = found_46;
    return __result38__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value17;
char* __dec_obj6;
struct buffer* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
    self->size=128;
    __dec_obj6=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value17=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 692, "char"))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17;
    __freed_obj__ = 0;
    self->buf[0]=0;
    self->len=0;
    __result39__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result39__;
    if(self && !__freed_obj__) { come_call_finalizer(buffer_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional69=self&&self->buf,    _if_conditional69) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional70=self&&self->buf,    _if_conditional70) {
        if(self->buf && !__freed_obj__) { self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, 0); }
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct buffer* __result40__;
void* right_value18;
struct buffer* result_48;
void* right_value19;
char* __dec_obj7;
struct buffer* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct buffer*));
memset(&right_value19, 0, sizeof(void*));
    if(_if_conditional71=self==((void*)0),    _if_conditional71) {
        __result40__ = __result_obj__ = ((void*)0);
        return __result40__;
    }
    result_48=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 714, "struct buffer"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    result_48->size=self->size;
    __dec_obj7=result_48->buf;
    result_48->buf=(char*)come_increment_ref_count(((char*)(right_value19=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 717, "char"))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value19;
    __freed_obj__ = 0;
    result_48->len=self->len;
    memcpy(result_48->buf,self->buf,self->len);
    __result41__ = __result_obj__ = result_48;
    if(result_48 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_48, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result41__;
    if(result_48 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_48, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
int __result42__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional72=self==((void*)0),    _if_conditional72) {
        __result42__ = 0;
        return __result42__;
    }
    __result43__ = self->len;
    return __result43__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional73;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional73=self==((void*)0),    _if_conditional73) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional74=self==((void*)0),    _if_conditional74) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, long int size){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
struct buffer* __result44__;
_Bool _if_conditional76;
void* right_value20;
char* old_buf_49;
int old_len_50;
int new_size_51;
void* right_value21;
char* __dec_obj8;
struct buffer* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&old_buf_49, 0, sizeof(char*));
memset(&old_len_50, 0, sizeof(int));
memset(&new_size_51, 0, sizeof(int));
memset(&right_value21, 0, sizeof(void*));
    if(_if_conditional75=self==((void*)0)||mem==((void*)0),    _if_conditional75) {
        __result44__ = __result_obj__ = self;
        return __result44__;
    }
    if(_if_conditional76=self->len+size+1+1>=self->size,    _if_conditional76) {
        old_buf_49=(char*)come_increment_ref_count(((char*)(right_value20=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 756, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        memcpy(old_buf_49,self->buf,self->size);
        old_len_50=self->len;
        new_size_51=(self->size+size+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value21=(char*)come_calloc(1, sizeof(char)*(1*(new_size_51)), "libcomelang2.c", 760, "char"))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value21;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_49,old_len_50);
        self->buf[old_len_50]=0;
        self->size=new_size_51;
        if(old_buf_49 && !__freed_obj__) { old_buf_49 = come_decrement_ref_count(old_buf_49, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result45__ = __result_obj__ = self;
    return __result45__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional77;
struct buffer* __result46__;
_Bool _if_conditional78;
void* right_value22;
char* old_buf_52;
int old_len_53;
int new_size_54;
void* right_value23;
char* __dec_obj9;
struct buffer* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&old_buf_52, 0, sizeof(char*));
memset(&old_len_53, 0, sizeof(int));
memset(&new_size_54, 0, sizeof(int));
memset(&right_value23, 0, sizeof(void*));
    if(_if_conditional77=self==((void*)0),    _if_conditional77) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    if(_if_conditional78=self->len+1+1+1>=self->size,    _if_conditional78) {
        old_buf_52=(char*)come_increment_ref_count(((char*)(right_value22=charp_clone(self->buf))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value22;
        __freed_obj__ = 0;
        old_len_53=self->len;
        new_size_54=(self->size+10+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value23=(char*)come_calloc(1, sizeof(char)*(1*(new_size_54)), "libcomelang2.c", 783, "char"))));
        if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
        if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value23;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_52,old_len_53);
        self->buf[old_len_53]=0;
        self->size=new_size_54;
        if(old_buf_52 && !__freed_obj__) { old_buf_52 = come_decrement_ref_count(old_buf_52, (void*)0, (void*)0, 0, 0, 0); }
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result47__ = __result_obj__ = self;
    return __result47__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional79;
struct buffer* __result48__;
int size_55;
_Bool _if_conditional80;
void* right_value24;
char* old_buf_56;
int old_len_57;
int new_size_58;
void* right_value25;
char* __dec_obj10;
struct buffer* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_55, 0, sizeof(int));
memset(&right_value24, 0, sizeof(void*));
memset(&old_buf_56, 0, sizeof(char*));
memset(&old_len_57, 0, sizeof(int));
memset(&new_size_58, 0, sizeof(int));
memset(&right_value25, 0, sizeof(void*));
    if(_if_conditional79=self==((void*)0)||mem==((void*)0),    _if_conditional79) {
        __result48__ = __result_obj__ = self;
        return __result48__;
    }
    size_55=strlen(mem);
    if(_if_conditional80=self->len+size_55+1+1>=self->size,    _if_conditional80) {
        old_buf_56=(char*)come_increment_ref_count(((char*)(right_value24=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 805, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
        if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value24;
        __freed_obj__ = 0;
        memcpy(old_buf_56,self->buf,self->size);
        old_len_57=self->len;
        new_size_58=(self->size+size_55+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value25=(char*)come_calloc(1, sizeof(char)*(1*(new_size_58)), "libcomelang2.c", 809, "char"))));
        if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_56,old_len_57);
        self->buf[old_len_57]=0;
        self->size=new_size_58;
        if(old_buf_56 && !__freed_obj__) { old_buf_56 = come_decrement_ref_count(old_buf_56, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_55);
    self->len+=size_55;
    self->buf[self->len]=0;
    __result49__ = __result_obj__ = self;
    return __result49__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct buffer* __result50__;
int size_59;
_Bool _if_conditional82;
void* right_value26;
char* old_buf_60;
int old_len_61;
int new_size_62;
void* right_value27;
char* __dec_obj11;
struct buffer* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_59, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&old_buf_60, 0, sizeof(char*));
memset(&old_len_61, 0, sizeof(int));
memset(&new_size_62, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
    if(_if_conditional81=self==((void*)0)||mem==((void*)0),    _if_conditional81) {
        __result50__ = __result_obj__ = self;
        return __result50__;
    }
    size_59=strlen(mem)+1;
    if(_if_conditional82=self->len+size_59+1+1+1>=self->size,    _if_conditional82) {
        old_buf_60=(char*)come_increment_ref_count(((char*)(right_value26=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 829, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { right_value26 = come_decrement_ref_count(right_value26, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value26;
        __freed_obj__ = 0;
        memcpy(old_buf_60,self->buf,self->size);
        old_len_61=self->len;
        new_size_62=(self->size+size_59+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value27=(char*)come_calloc(1, sizeof(char)*(1*(new_size_62)), "libcomelang2.c", 833, "char"))));
        if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value27;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_60,old_len_61);
        self->buf[old_len_61]=0;
        self->size=new_size_62;
        if(old_buf_60 && !__freed_obj__) { old_buf_60 = come_decrement_ref_count(old_buf_60, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem,size_59);
    self->len+=size_59;
    self->buf[self->len]=0;
    self->len++;
    __result51__ = __result_obj__ = self;
    return __result51__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
struct buffer* __result52__;
int* mem_63;
int size_64;
_Bool _if_conditional84;
void* right_value28;
char* old_buf_65;
int old_len_66;
int new_size_67;
void* right_value29;
char* __dec_obj12;
struct buffer* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_63, 0, sizeof(int*));
memset(&size_64, 0, sizeof(int));
memset(&right_value28, 0, sizeof(void*));
memset(&old_buf_65, 0, sizeof(char*));
memset(&old_len_66, 0, sizeof(int));
memset(&new_size_67, 0, sizeof(int));
memset(&right_value29, 0, sizeof(void*));
    if(_if_conditional83=self==((void*)0),    _if_conditional83) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    mem_63=&value;
    size_64=sizeof(int);
    if(_if_conditional84=self->len+size_64+1+1>=self->size,    _if_conditional84) {
        old_buf_65=(char*)come_increment_ref_count(((char*)(right_value28=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 856, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value28;
        __freed_obj__ = 0;
        memcpy(old_buf_65,self->buf,self->size);
        old_len_66=self->len;
        new_size_67=(self->size+size_64+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value29=(char*)come_calloc(1, sizeof(char)*(1*(new_size_67)), "libcomelang2.c", 860, "char"))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value29;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_65,old_len_66);
        self->buf[old_len_66]=0;
        self->size=new_size_67;
        if(old_buf_65 && !__freed_obj__) { old_buf_65 = come_decrement_ref_count(old_buf_65, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_63,size_64);
    self->len+=size_64;
    self->buf[self->len]=0;
    __result53__ = __result_obj__ = self;
    return __result53__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long* mem_68;
int size_69;
_Bool _if_conditional85;
void* right_value30;
char* old_buf_70;
int old_len_71;
int new_size_72;
void* right_value31;
char* __dec_obj13;
struct buffer* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_68, 0, sizeof(long*));
memset(&size_69, 0, sizeof(int));
memset(&right_value30, 0, sizeof(void*));
memset(&old_buf_70, 0, sizeof(char*));
memset(&old_len_71, 0, sizeof(int));
memset(&new_size_72, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
    mem_68=&value;
    size_69=sizeof(long);
    if(_if_conditional85=self->len+size_69+1+1>=self->size,    _if_conditional85) {
        old_buf_70=(char*)come_increment_ref_count(((char*)(right_value30=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 879, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
        if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value30;
        __freed_obj__ = 0;
        memcpy(old_buf_70,self->buf,self->size);
        old_len_71=self->len;
        new_size_72=(self->size+size_69+1)*2;
        __dec_obj13=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value31=(char*)come_calloc(1, sizeof(char)*(1*(new_size_72)), "libcomelang2.c", 883, "char"))));
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value31;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_70,old_len_71);
        self->buf[old_len_71]=0;
        self->size=new_size_72;
        if(old_buf_70 && !__freed_obj__) { old_buf_70 = come_decrement_ref_count(old_buf_70, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_68,size_69);
    self->len+=size_69;
    self->buf[self->len]=0;
    __result54__ = __result_obj__ = self;
    return __result54__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional86;
struct buffer* __result55__;
short short* mem_73;
int size_74;
_Bool _if_conditional87;
void* right_value32;
char* old_buf_75;
int old_len_76;
int new_size_77;
void* right_value33;
char* __dec_obj14;
struct buffer* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&mem_73, 0, sizeof(short short*));
memset(&size_74, 0, sizeof(int));
memset(&right_value32, 0, sizeof(void*));
memset(&old_buf_75, 0, sizeof(char*));
memset(&old_len_76, 0, sizeof(int));
memset(&new_size_77, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    if(_if_conditional86=self==((void*)0),    _if_conditional86) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    mem_73=&value;
    size_74=sizeof(short short);
    if(_if_conditional87=self->len+size_74+1+1>=self->size,    _if_conditional87) {
        old_buf_75=(char*)come_increment_ref_count(((char*)(right_value32=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang2.c", 906, "char"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value32;
        __freed_obj__ = 0;
        memcpy(old_buf_75,self->buf,self->size);
        old_len_76=self->len;
        new_size_77=(self->size+size_74+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value33=(char*)come_calloc(1, sizeof(char)*(1*(new_size_77)), "libcomelang2.c", 910, "char"))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value33;
        __freed_obj__ = 0;
        memcpy(self->buf,old_buf_75,old_len_76);
        self->buf[old_len_76]=0;
        self->size=new_size_77;
        if(old_buf_75 && !__freed_obj__) { old_buf_75 = come_decrement_ref_count(old_buf_75, (void*)0, (void*)0, 0, 0, 0); }
    }
    memcpy(self->buf+self->len,mem_73,size_74);
    self->len+=size_74;
    self->buf[self->len]=0;
    __result56__ = __result_obj__ = self;
    return __result56__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
struct buffer* __result57__;
int len_78;
_Bool _if_conditional89;
int new_size_79;
void* right_value34;
char* __dec_obj15;
int i_80;
_Bool _for_condtionalA5;
struct buffer* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&len_78, 0, sizeof(int));
memset(&new_size_79, 0, sizeof(int));
memset(&right_value34, 0, sizeof(void*));
memset(&i_80, 0, sizeof(int));
    if(_if_conditional88=self==((void*)0),    _if_conditional88) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    len_78=self->len;
    len_78=(len_78+3)&~3;
    if(_if_conditional89=len_78>=self->size,    _if_conditional89) {
        new_size_79=(self->size+1+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value34=(char*)come_calloc(1, sizeof(char)*(1*(new_size_79)), "libcomelang2.c", 934, "char"))));
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value34;
        __freed_obj__ = 0;
        self->size=new_size_79;
    }
    for(
    i_80=self->len ,    0;    _for_condtionalA5=    i_80<len_78 ,    _for_condtionalA5;    i_80++ ,    0    ){
        self->buf[i_80]=0;
    }
    self->len=len_78;
    __result58__ = __result_obj__ = self;
    return __result58__;
}

struct optional$2intbool* buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
void* right_value35;
void* right_value36;
struct optional$2intbool* __result60__;
_Bool _if_conditional91;
void* right_value37;
void* right_value38;
struct optional$2intbool* __result61__;
_Bool _if_conditional92;
void* right_value39;
void* right_value40;
struct optional$2intbool* __result62__;
void* right_value41;
void* right_value42;
struct optional$2intbool* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
    if(_if_conditional90=left==((void*)0)&&right==((void*)0),    _if_conditional90) {
        __result60__ = __result_obj__ = ((struct optional$2intbool*)(right_value36=optional$2intbool_initialize(((struct optional$2intbool*)(right_value35=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 950, "struct optional$2intbool"))),0,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value35;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value36;
        __freed_obj__ = 0;
        return __result60__;
    }
    else {
        if(_if_conditional91=left==((void*)0),        _if_conditional91) {
            __result61__ = __result_obj__ = ((struct optional$2intbool*)(right_value38=optional$2intbool_initialize(((struct optional$2intbool*)(right_value37=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 953, "struct optional$2intbool"))),-1,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value37;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value38;
            __freed_obj__ = 0;
            return __result61__;
        }
        else {
            if(_if_conditional92=right==((void*)0),            _if_conditional92) {
                __result62__ = __result_obj__ = ((struct optional$2intbool*)(right_value40=optional$2intbool_initialize(((struct optional$2intbool*)(right_value39=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 956, "struct optional$2intbool"))),1,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value39;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value40;
                __freed_obj__ = 0;
                return __result62__;
            }
        }
    }
    __result63__ = __result_obj__ = ((struct optional$2intbool*)(right_value42=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value41=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 959, "struct optional$2intbool")))),strcmp(left->buf,right->buf),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value42;
    __freed_obj__ = 0;
    return __result63__;
}

static struct optional$2intbool* optional$2intbool_initialize(struct optional$2intbool* self, int v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2intbool* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result59__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result59__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value43;
void* right_value44;
struct buffer* result_81;
_Bool _if_conditional93;
struct buffer* __result64__;
struct buffer* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct buffer*));
    result_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 964, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value43;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional93=self==((void*)0),    _if_conditional93) {
        __result64__ = __result_obj__ = result_81;
        if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result64__;
    }
    buffer_append_str(result_81,self);
    __result65__ = __result_obj__ = result_81;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result65__;
    if(result_81 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value45;
void* right_value46;
struct buffer* result_82;
_Bool _if_conditional94;
struct buffer* __result66__;
struct buffer* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct buffer*));
    result_82=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value46=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value45=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 977, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    if(_if_conditional94=self==((void*)0),    _if_conditional94) {
        __result66__ = __result_obj__ = result_82;
        if(result_82 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result66__;
    }
    buffer_append_str(result_82,self);
    __result67__ = __result_obj__ = result_82;
    if(result_82 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result67__;
    if(result_82 && !__freed_obj__) { come_call_finalizer(buffer_finalize,result_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
void* right_value47;
char* __result68__;
void* right_value48;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
    if(_if_conditional95=self==((void*)0),    _if_conditional95) {
        __result68__ = __result_obj__ = ((char*)(right_value47=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        return __result68__;
    }
    __result69__ = __result_obj__ = ((char*)(right_value48=__builtin_string(self->buf)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    return __result69__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = self==right;
    return __result70__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = self==right;
    return __result71__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self==right;
    return __result72__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = self==right;
    return __result73__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = self==right;
    return __result74__;
}

_Bool size_t_equals(long int self, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self==right;
    return __result75__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self==right;
    return __result76__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = self==right;
    return __result77__;
}

struct optional$2boolbool* string_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
void* right_value49;
void* right_value50;
struct optional$2boolbool* __result79__;
_Bool _if_conditional97;
void* right_value51;
void* right_value52;
struct optional$2boolbool* __result80__;
_Bool _if_conditional98;
void* right_value53;
void* right_value54;
struct optional$2boolbool* __result81__;
void* right_value55;
void* right_value56;
struct optional$2boolbool* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    if(_if_conditional96=self==((void*)0)&&right==((void*)0),    _if_conditional96) {
        __result79__ = __result_obj__ = ((struct optional$2boolbool*)(right_value50=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value49=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1043, "struct optional$2boolbool"))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value50;
        __freed_obj__ = 0;
        return __result79__;
    }
    else {
        if(_if_conditional97=self==((void*)0),        _if_conditional97) {
            __result80__ = __result_obj__ = ((struct optional$2boolbool*)(right_value52=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value51=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1046, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value52;
            __freed_obj__ = 0;
            return __result80__;
        }
        else {
            if(_if_conditional98=right==((void*)0),            _if_conditional98) {
                __result81__ = __result_obj__ = ((struct optional$2boolbool*)(right_value54=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value53=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1049, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value54;
                __freed_obj__ = 0;
                return __result81__;
            }
        }
    }
    __result82__ = __result_obj__ = ((struct optional$2intbool*)(right_value56=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value55=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1052, "struct optional$2intbool")))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    return __result82__;
}

static struct optional$2boolbool* optional$2boolbool_initialize(struct optional$2boolbool* self, _Bool v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2boolbool* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result78__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result78__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2boolbool* charp_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
void* right_value57;
void* right_value58;
struct optional$2boolbool* __result83__;
_Bool _if_conditional100;
void* right_value59;
void* right_value60;
struct optional$2boolbool* __result84__;
_Bool _if_conditional101;
void* right_value61;
void* right_value62;
struct optional$2boolbool* __result85__;
void* right_value63;
void* right_value64;
struct optional$2boolbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
    if(_if_conditional99=self==((void*)0)&&right==((void*)0),    _if_conditional99) {
        __result83__ = __result_obj__ = ((struct optional$2boolbool*)(right_value58=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value57=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1058, "struct optional$2boolbool"))),(_Bool)1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value58;
        __freed_obj__ = 0;
        return __result83__;
    }
    else {
        if(_if_conditional100=self==((void*)0),        _if_conditional100) {
            __result84__ = __result_obj__ = ((struct optional$2boolbool*)(right_value60=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value59=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1061, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = 0;
            return __result84__;
        }
        else {
            if(_if_conditional101=right==((void*)0),            _if_conditional101) {
                __result85__ = __result_obj__ = ((struct optional$2boolbool*)(right_value62=optional$2boolbool_initialize(((struct optional$2boolbool*)(right_value61=(struct optional$2boolbool*)come_calloc(1, sizeof(struct optional$2boolbool)*(1), "libcomelang2.c", 1064, "struct optional$2boolbool"))),(_Bool)0,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value61;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2boolboolp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value62;
                __freed_obj__ = 0;
                return __result85__;
            }
        }
    }
    __result86__ = __result_obj__ = ((struct optional$2intbool*)(right_value64=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value63=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 1067, "struct optional$2intbool")))),strcmp(self,right)==0,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    return __result86__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
_Bool __result87__;
_Bool _if_conditional103;
_Bool __result88__;
_Bool _if_conditional104;
_Bool __result89__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional102=self==((void*)0)&&right==((void*)0),    _if_conditional102) {
        __result87__ = (_Bool)1;
        return __result87__;
    }
    else {
        if(_if_conditional103=self==((void*)0),        _if_conditional103) {
            __result88__ = (_Bool)0;
            return __result88__;
        }
        else {
            if(_if_conditional104=right==((void*)0),            _if_conditional104) {
                __result89__ = (_Bool)0;
                return __result89__;
            }
        }
    }
    __result90__ = strcmp(self,right)==0;
    return __result90__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
_Bool __result91__;
_Bool _if_conditional106;
_Bool __result92__;
_Bool _if_conditional107;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional105=self==((void*)0)&&right==((void*)0),    _if_conditional105) {
        __result91__ = (_Bool)1;
        return __result91__;
    }
    else {
        if(_if_conditional106=self==((void*)0),        _if_conditional106) {
            __result92__ = (_Bool)0;
            return __result92__;
        }
        else {
            if(_if_conditional107=right==((void*)0),            _if_conditional107) {
                __result93__ = (_Bool)0;
                return __result93__;
            }
        }
    }
    __result94__ = strcmp(self,right)==0;
    return __result94__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional108;
_Bool __result95__;
_Bool _if_conditional109;
_Bool __result96__;
_Bool _if_conditional110;
_Bool __result97__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional108=self==((void*)0)&&right==((void*)0),    _if_conditional108) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    else {
        if(_if_conditional109=self==((void*)0),        _if_conditional109) {
            __result96__ = (_Bool)1;
            return __result96__;
        }
        else {
            if(_if_conditional110=right==((void*)0),            _if_conditional110) {
                __result97__ = (_Bool)1;
                return __result97__;
            }
        }
    }
    __result98__ = strcmp(self,right)!=0;
    return __result98__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
_Bool __result99__;
_Bool _if_conditional112;
_Bool __result100__;
_Bool _if_conditional113;
_Bool __result101__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional111=self==((void*)0)&&right==((void*)0),    _if_conditional111) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    else {
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            __result100__ = (_Bool)1;
            return __result100__;
        }
        else {
            if(_if_conditional113=right==((void*)0),            _if_conditional113) {
                __result101__ = (_Bool)1;
                return __result101__;
            }
        }
    }
    __result102__ = strcmp(self,right)!=0;
    return __result102__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
void* right_value65;
char* __result103__;
int len_83;
void* right_value66;
char* result_84;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&len_83, 0, sizeof(int));
memset(&right_value66, 0, sizeof(void*));
memset(&result_84, 0, sizeof(char*));
    if(_if_conditional114=self==((void*)0)||right==((void*)0),    _if_conditional114) {
        __result103__ = __result_obj__ = ((char*)(right_value65=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65;
        __freed_obj__ = 0;
        return __result103__;
    }
    len_83=strlen(self)+strlen(right);
    result_84=(char*)come_increment_ref_count(((char*)(right_value66=(char*)come_calloc(1, sizeof(char)*(1*(len_83+1)), "libcomelang2.c", 1138, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    strncpy(result_84,self,len_83+1);
    strncat(result_84,right,len_83+1);
    __result104__ = __result_obj__ = result_84;
    if(result_84 && !__freed_obj__) { result_84 = come_decrement_ref_count(result_84, (void*)0, (void*)0, 0, 1, 0); }
    return __result104__;
    if(result_84 && !__freed_obj__) { result_84 = come_decrement_ref_count(result_84, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional115;
void* right_value67;
char* __result105__;
int len_85;
void* right_value68;
char* result_86;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&len_85, 0, sizeof(int));
memset(&right_value68, 0, sizeof(void*));
memset(&result_86, 0, sizeof(char*));
    if(_if_conditional115=self==((void*)0)||right==((void*)0),    _if_conditional115) {
        __result105__ = __result_obj__ = ((char*)(right_value67=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
        return __result105__;
    }
    len_85=strlen(self)+strlen(right);
    result_86=(char*)come_increment_ref_count(((char*)(right_value68=(char*)come_calloc(1, sizeof(char)*(1*(len_85+1)), "libcomelang2.c", 1153, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value68;
    __freed_obj__ = 0;
    strncpy(result_86,self,len_85+1);
    strncat(result_86,right,len_85+1);
    __result106__ = __result_obj__ = result_86;
    if(result_86 && !__freed_obj__) { result_86 = come_decrement_ref_count(result_86, (void*)0, (void*)0, 0, 1, 0); }
    return __result106__;
    if(result_86 && !__freed_obj__) { result_86 = come_decrement_ref_count(result_86, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
void* right_value69;
char* __result107__;
void* right_value70;
void* right_value71;
struct buffer* buf_87;
int i_88;
_Bool _for_condtionalA6;
void* right_value72;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&buf_87, 0, sizeof(struct buffer*));
memset(&i_88, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
    if(_if_conditional116=self==((void*)0),    _if_conditional116) {
        __result107__ = __result_obj__ = ((char*)(right_value69=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
        return __result107__;
    }
    buf_87=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value71=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value70=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1166, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value71;
    __freed_obj__ = 0;
    for(
    i_88=0 ,    0;    _for_condtionalA6=    i_88<right ,    _for_condtionalA6;    i_88++ ,    0    ){
        buffer_append_str(buf_87,self);
    }
    __result108__ = __result_obj__ = ((char*)(right_value72=buffer_to_string(buf_87)));
    if(buf_87 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value72;
    __freed_obj__ = 0;
    return __result108__;
    if(buf_87 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional117;
void* right_value73;
char* __result109__;
void* right_value74;
void* right_value75;
struct buffer* buf_89;
int i_90;
_Bool _for_condtionalA7;
void* right_value76;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf_89, 0, sizeof(struct buffer*));
memset(&i_90, 0, sizeof(int));
memset(&right_value76, 0, sizeof(void*));
    if(_if_conditional117=self==((void*)0),    _if_conditional117) {
        __result109__ = __result_obj__ = ((char*)(right_value73=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value73;
        __freed_obj__ = 0;
        return __result109__;
    }
    buf_89=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value75=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value74=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1180, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value74;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value75;
    __freed_obj__ = 0;
    for(
    i_90=0 ,    0;    _for_condtionalA7=    i_90<right ,    _for_condtionalA7;    i_90++ ,    0    ){
        buffer_append_str(buf_89,self);
    }
    __result110__ = __result_obj__ = ((char*)(right_value76=buffer_to_string(buf_89)));
    if(buf_89 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value76;
    __freed_obj__ = 0;
    return __result110__;
    if(buf_89 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = (int_get_hash_key(((int)value)));
    return __result111__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = value;
    return __result112__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = value;
    return __result113__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = value;
    return __result114__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = value;
    return __result115__;
}

unsigned int size_t_get_hash_key(long int value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = value;
    return __result116__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (unsigned int)value;
    return __result117__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (unsigned int)value;
    return __result118__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
unsigned int __result119__;
int result_91;
char* p_92;
_Bool _while_condtional3;
unsigned int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_91, 0, sizeof(int));
memset(&p_92, 0, sizeof(char*));
    if(_if_conditional118=value==((void*)0),    _if_conditional118) {
        __result119__ = 0;
        return __result119__;
    }
    result_91=0;
    p_92=value;
    while(_while_condtional3=*p_92,    _while_condtional3) {
        result_91+=(*p_92);
        p_92++;
    }
    __result120__ = result_91;
    return __result120__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
unsigned int __result121__;
int result_93;
char* p_94;
_Bool _while_condtional4;
unsigned int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_93, 0, sizeof(int));
memset(&p_94, 0, sizeof(char*));
    if(_if_conditional119=value==((void*)0),    _if_conditional119) {
        __result121__ = 0;
        return __result121__;
    }
    result_93=0;
    p_94=value;
    while(_while_condtional4=*p_94,    _while_condtional4) {
        result_93+=(*p_94);
        p_94++;
    }
    __result122__ = result_93;
    return __result122__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = self;
    return __result123__;
}

char char_clone(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = self;
    return __result124__;
}

short int short_clone(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
short int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = self;
    return __result125__;
}

int int_clone(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = self;
    return __result126__;
}

long int long_clone(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = self;
    return __result127__;
}

long int size_t_clone(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
long int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self;
    return __result128__;
}

double double_clone(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
double __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result129__ = self;
    return __result129__;
}

float float_clone(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
float __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = self;
    return __result130__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
char* __result131__;
void* right_value77;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        __result131__ = __result_obj__ = ((void*)0);
        return __result131__;
    }
    __result132__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    return __result132__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
char* __result133__;
void* right_value78;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value78, 0, sizeof(void*));
    if(_if_conditional121=self==((void*)0),    _if_conditional121) {
        __result133__ = __result_obj__ = ((void*)0);
        return __result133__;
    }
    __result134__ = __result_obj__ = ((char*)(right_value78=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value78;
    __freed_obj__ = 0;
    return __result134__;
}

_Bool xiswalpha(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_95;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_95, 0, sizeof(_Bool));
    result_95=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result135__ = result_95;
    return __result135__;
}

_Bool xiswblank(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = c==32||c==9;
    return __result136__;
}

_Bool xiswdigit(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = (c>=48&&c<=57);
    return __result137__;
}

_Bool xiswalnum(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = xiswalpha(c)||xiswdigit(c);
    return __result138__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_96;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_96, 0, sizeof(_Bool));
    result_96=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result139__ = result_96;
    return __result139__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = c==32||c==9;
    return __result140__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = (c>=48&&c<=57);
    return __result141__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = xisalpha(c)||xisdigit(c);
    return __result142__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_97;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(_Bool));
    result_97=(c>=32&&c<=126);
    __result143__ = result_97;
    return __result143__;
}

_Bool xiswascii(int c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool result_98;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_98, 0, sizeof(_Bool));
    result_98=(c>=32&&c<=126);
    __result144__ = result_98;
    return __result144__;
}

int string_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
int __result145__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional122=str==((void*)0),    _if_conditional122) {
        __result145__ = 0;
        return __result145__;
    }
    __result146__ = strlen(str);
    return __result146__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
int __result147__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional123=str==((void*)0),    _if_conditional123) {
        __result147__ = 0;
        return __result147__;
    }
    __result148__ = strlen(str);
    return __result148__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional124;
void* right_value79;
char* __result149__;
int len_99;
void* right_value80;
char* result_100;
int i_101;
_Bool _for_condtionalA8;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&len_99, 0, sizeof(int));
memset(&right_value80, 0, sizeof(void*));
memset(&result_100, 0, sizeof(char*));
memset(&i_101, 0, sizeof(int));
    if(_if_conditional124=str==((void*)0),    _if_conditional124) {
        __result149__ = __result_obj__ = ((char*)(right_value79=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        return __result149__;
    }
    len_99=strlen(str);
    result_100=(char*)come_increment_ref_count(((char*)(right_value80=(char*)come_calloc(1, sizeof(char)*(1*(len_99+1)), "libcomelang2.c", 1397, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = 0;
    for(
    i_101=0 ,    0;    _for_condtionalA8=    i_101<len_99 ,    _for_condtionalA8;    i_101++ ,    0    ){
        result_100[i_101]=str[len_99-i_101-1];
    }
    result_100[len_99]=0;
    __result150__ = __result_obj__ = result_100;
    if(result_100 && !__freed_obj__) { result_100 = come_decrement_ref_count(result_100, (void*)0, (void*)0, 0, 1, 0); }
    return __result150__;
    if(result_100 && !__freed_obj__) { result_100 = come_decrement_ref_count(result_100, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
void* right_value81;
char* __result151__;
int len_102;
void* right_value82;
char* result_103;
int i_104;
_Bool _for_condtionalA9;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&len_102, 0, sizeof(int));
memset(&right_value82, 0, sizeof(void*));
memset(&result_103, 0, sizeof(char*));
memset(&i_104, 0, sizeof(int));
    if(_if_conditional125=str==((void*)0),    _if_conditional125) {
        __result151__ = __result_obj__ = ((char*)(right_value81=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = 0;
        return __result151__;
    }
    len_102=strlen(str);
    result_103=(char*)come_increment_ref_count(((char*)(right_value82=(char*)come_calloc(1, sizeof(char)*(1*(len_102+1)), "libcomelang2.c", 1414, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    for(
    i_104=0 ,    0;    _for_condtionalA9=    i_104<len_102 ,    _for_condtionalA9;    i_104++ ,    0    ){
        result_103[i_104]=str[len_102-i_104-1];
    }
    result_103[len_102]=0;
    __result152__ = __result_obj__ = result_103;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 1, 0); }
    return __result152__;
    if(result_103 && !__freed_obj__) { result_103 = come_decrement_ref_count(result_103, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
void* right_value83;
char* __result153__;
int len_105;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value84;
void* right_value85;
char* __result154__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value86;
char* __result155__;
_Bool _if_conditional133;
void* right_value87;
char* __result156__;
void* right_value88;
char* result_106;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&len_105, 0, sizeof(int));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
    if(_if_conditional126=str==((void*)0),    _if_conditional126) {
        __result153__ = __result_obj__ = ((char*)(right_value83=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = 0;
        return __result153__;
    }
    len_105=strlen(str);
    if(_if_conditional127=head<0,    _if_conditional127) {
        head+=len_105;
    }
    if(_if_conditional128=tail<0,    _if_conditional128) {
        tail+=len_105+1;
    }
    if(_if_conditional129=head>tail,    _if_conditional129) {
        __result154__ = __result_obj__ = ((char*)(right_value85=string_reverse(((char*)(right_value84=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value85;
        __freed_obj__ = 0;
        return __result154__;
    }
    if(_if_conditional130=head<0,    _if_conditional130) {
        head=0;
    }
    if(_if_conditional131=tail>=len_105,    _if_conditional131) {
        tail=len_105;
    }
    if(_if_conditional132=head==tail,    _if_conditional132) {
        __result155__ = __result_obj__ = ((char*)(right_value86=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = 0;
        return __result155__;
    }
    if(_if_conditional133=tail-head+1<1,    _if_conditional133) {
        __result156__ = __result_obj__ = ((char*)(right_value87=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        return __result156__;
    }
    result_106=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1459, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    memcpy(result_106,str+head,tail-head);
    result_106[tail-head]=0;
    __result157__ = __result_obj__ = result_106;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 1, 0); }
    return __result157__;
    if(result_106 && !__freed_obj__) { result_106 = come_decrement_ref_count(result_106, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
void* right_value89;
char* __result158__;
int len_107;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value90;
void* right_value91;
char* __result159__;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value92;
char* __result160__;
_Bool _if_conditional141;
void* right_value93;
char* __result161__;
void* right_value94;
char* result_108;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&len_107, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
    if(_if_conditional134=str==((void*)0),    _if_conditional134) {
        __result158__ = __result_obj__ = ((char*)(right_value89=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        return __result158__;
    }
    len_107=strlen(str);
    if(_if_conditional135=head<0,    _if_conditional135) {
        head+=len_107;
    }
    if(_if_conditional136=tail<0,    _if_conditional136) {
        tail+=len_107+1;
    }
    if(_if_conditional137=head>tail,    _if_conditional137) {
        __result159__ = __result_obj__ = ((char*)(right_value91=string_reverse(((char*)(right_value90=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value90;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value91;
        __freed_obj__ = 0;
        return __result159__;
    }
    if(_if_conditional138=head<0,    _if_conditional138) {
        head=0;
    }
    if(_if_conditional139=tail>=len_107,    _if_conditional139) {
        tail=len_107;
    }
    if(_if_conditional140=head==tail,    _if_conditional140) {
        __result160__ = __result_obj__ = ((char*)(right_value92=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value92;
        __freed_obj__ = 0;
        return __result160__;
    }
    if(_if_conditional141=tail-head+1<1,    _if_conditional141) {
        __result161__ = __result_obj__ = ((char*)(right_value93=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
        return __result161__;
    }
    result_108=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1502, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    memcpy(result_108,str+head,tail-head);
    result_108[tail-head]=0;
    __result162__ = __result_obj__ = result_108;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 1, 0); }
    return __result162__;
    if(result_108 && !__freed_obj__) { result_108 = come_decrement_ref_count(result_108, (void*)0, (void*)0, 0, 0, 0); }
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
void* right_value95;
char* __result163__;
int len_109;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
void* right_value96;
void* right_value97;
char* __result164__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
void* right_value98;
char* __result165__;
_Bool _if_conditional149;
void* right_value99;
char* __result166__;
void* right_value100;
char* result_110;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&len_109, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
    if(_if_conditional142=str==((void*)0),    _if_conditional142) {
        __result163__ = __result_obj__ = ((char*)(right_value95=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value95;
        __freed_obj__ = 0;
        return __result163__;
    }
    len_109=strlen(str);
    if(_if_conditional143=head<0,    _if_conditional143) {
        head+=len_109;
    }
    if(_if_conditional144=tail<0,    _if_conditional144) {
        tail+=len_109+1;
    }
    if(_if_conditional145=head>tail,    _if_conditional145) {
        __result164__ = __result_obj__ = ((char*)(right_value97=string_reverse(((char*)(right_value96=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value96;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value97;
        __freed_obj__ = 0;
        return __result164__;
    }
    if(_if_conditional146=head<0,    _if_conditional146) {
        head=0;
    }
    if(_if_conditional147=tail>=len_109,    _if_conditional147) {
        tail=len_109;
    }
    if(_if_conditional148=head==tail,    _if_conditional148) {
        __result165__ = __result_obj__ = ((char*)(right_value98=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value98;
        __freed_obj__ = 0;
        return __result165__;
    }
    if(_if_conditional149=tail-head+1<1,    _if_conditional149) {
        __result166__ = __result_obj__ = ((char*)(right_value99=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        return __result166__;
    }
    result_110=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1545, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    memcpy(result_110,str+head,tail-head);
    result_110[tail-head]=0;
    __result167__ = __result_obj__ = result_110;
    if(result_110 && !__freed_obj__) { result_110 = come_decrement_ref_count(result_110, (void*)0, (void*)0, 0, 1, 0); }
    return __result167__;
    if(result_110 && !__freed_obj__) { result_110 = come_decrement_ref_count(result_110, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional150;
void* right_value101;
char* __result168__;
int len_111;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value102;
void* right_value103;
char* __result169__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value104;
char* __result170__;
_Bool _if_conditional157;
void* right_value105;
char* __result171__;
void* right_value106;
char* result_112;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
memset(&len_111, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
    if(_if_conditional150=str==((void*)0),    _if_conditional150) {
        __result168__ = __result_obj__ = ((char*)(right_value101=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value101;
        __freed_obj__ = 0;
        return __result168__;
    }
    len_111=strlen(str);
    if(_if_conditional151=head<0,    _if_conditional151) {
        head+=len_111;
    }
    if(_if_conditional152=tail<0,    _if_conditional152) {
        tail+=len_111+1;
    }
    if(_if_conditional153=head>tail,    _if_conditional153) {
        __result169__ = __result_obj__ = ((char*)(right_value103=string_reverse(((char*)(right_value102=charp_substring(str,tail,head))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value102;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value103;
        __freed_obj__ = 0;
        return __result169__;
    }
    if(_if_conditional154=head<0,    _if_conditional154) {
        head=0;
    }
    if(_if_conditional155=tail>=len_111,    _if_conditional155) {
        tail=len_111;
    }
    if(_if_conditional156=head==tail,    _if_conditional156) {
        __result170__ = __result_obj__ = ((char*)(right_value104=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value104;
        __freed_obj__ = 0;
        return __result170__;
    }
    if(_if_conditional157=tail-head+1<1,    _if_conditional157) {
        __result171__ = __result_obj__ = ((char*)(right_value105=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        return __result171__;
    }
    result_112=(char*)come_increment_ref_count(((char*)(right_value106=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang2.c", 1588, "char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    memcpy(result_112,str+head,tail-head);
    result_112[tail-head]=0;
    __result172__ = __result_obj__ = result_112;
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, (void*)0, (void*)0, 0, 1, 0); }
    return __result172__;
    if(result_112 && !__freed_obj__) { result_112 = come_decrement_ref_count(result_112, (void*)0, (void*)0, 0, 0, 0); }
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
void* right_value107;
char* __result173__;
va_list args_113;
char* result_114;
int len_115;
_Bool _if_conditional159;
void* right_value108;
char* __result174__;
void* right_value109;
char* result2_116;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&args_113, 0, sizeof(va_list));
memset(&result_114, 0, sizeof(char*));
memset(&len_115, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&result2_116, 0, sizeof(char*));
    if(_if_conditional158=msg==((void*)0),    _if_conditional158) {
        __result173__ = __result_obj__ = ((char*)(right_value107=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value107;
        __freed_obj__ = 0;
        return __result173__;
    }
    __builtin_va_start(args_113,msg);
    len_115=vasprintf(&result_114,msg,args_113);
    __builtin_va_end(args_113);
    if(_if_conditional159=len_115<0,    _if_conditional159) {
        __result174__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        if((&args_113) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_113), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
        return __result174__;
    }
    result2_116=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(result_114))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    free(result_114);
    __result175__ = __result_obj__ = result2_116;
    if((&args_113) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_113), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_116 && !__freed_obj__) { result2_116 = come_decrement_ref_count(result2_116, (void*)0, (void*)0, 0, 1, 0); }
    return __result175__;
    if((&args_113) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_113), (void*)0, (void*)0, 1, 0, 0, 0); }
    if(result2_116 && !__freed_obj__) { result2_116 = come_decrement_ref_count(result2_116, (void*)0, (void*)0, 0, 0, 0); }
}

static void va_list_finalize(va_list self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
void* right_value110;
char* __result176__;
int len_117;
_Bool _if_conditional161;
void* right_value111;
char* __result177__;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value112;
char* __result178__;
_Bool _if_conditional166;
void* right_value113;
char* sub_str_118;
void* right_value114;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&len_117, 0, sizeof(int));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&sub_str_118, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
    if(_if_conditional160=str==((void*)0),    _if_conditional160) {
        __result176__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value110;
        __freed_obj__ = 0;
        return __result176__;
    }
    len_117=strlen(str);
    if(_if_conditional161=strcmp(str,"")==0,    _if_conditional161) {
        __result177__ = __result_obj__ = ((char*)(right_value111=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value111;
        __freed_obj__ = 0;
        return __result177__;
    }
    if(_if_conditional162=head<0,    _if_conditional162) {
        head+=len_117;
    }
    if(_if_conditional163=tail<0,    _if_conditional163) {
        tail+=len_117+1;
    }
    if(_if_conditional164=head<0,    _if_conditional164) {
        head=0;
    }
    if(_if_conditional165=tail<0,    _if_conditional165) {
        __result178__ = __result_obj__ = ((char*)(right_value112=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        return __result178__;
    }
    if(_if_conditional166=tail>=len_117,    _if_conditional166) {
        tail=len_117;
    }
    sub_str_118=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_118,string_length(sub_str_118)+1);
    __result179__ = __result_obj__ = ((char*)(right_value114=__builtin_string(str)));
    if(sub_str_118 && !__freed_obj__) { sub_str_118 = come_decrement_ref_count(sub_str_118, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114;
    __freed_obj__ = 0;
    return __result179__;
    if(sub_str_118 && !__freed_obj__) { sub_str_118 = come_decrement_ref_count(sub_str_118, (void*)0, (void*)0, 0, 0, 0); }
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
void* right_value115;
char* __result180__;
int len_119;
_Bool _if_conditional168;
void* right_value116;
char* __result181__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value117;
char* __result182__;
_Bool _if_conditional173;
void* right_value118;
char* sub_str_120;
void* right_value119;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&len_119, 0, sizeof(int));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&sub_str_120, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
    if(_if_conditional167=str==((void*)0),    _if_conditional167) {
        __result180__ = __result_obj__ = ((char*)(right_value115=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value115;
        __freed_obj__ = 0;
        return __result180__;
    }
    len_119=strlen(str);
    if(_if_conditional168=strcmp(str,"")==0,    _if_conditional168) {
        __result181__ = __result_obj__ = ((char*)(right_value116=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value116;
        __freed_obj__ = 0;
        return __result181__;
    }
    if(_if_conditional169=head<0,    _if_conditional169) {
        head+=len_119;
    }
    if(_if_conditional170=tail<0,    _if_conditional170) {
        tail+=len_119+1;
    }
    if(_if_conditional171=head<0,    _if_conditional171) {
        head=0;
    }
    if(_if_conditional172=tail<0,    _if_conditional172) {
        __result182__ = __result_obj__ = ((char*)(right_value117=__builtin_string(str)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
        if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value117;
        __freed_obj__ = 0;
        return __result182__;
    }
    if(_if_conditional173=tail>=len_119,    _if_conditional173) {
        tail=len_119;
    }
    sub_str_120=(char*)come_increment_ref_count(((char*)(right_value118=charp_substring(str,tail,-1))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    memcpy(str+head,sub_str_120,string_length(sub_str_120)+1);
    __result183__ = __result_obj__ = ((char*)(right_value119=__builtin_string(str)));
    if(sub_str_120 && !__freed_obj__) { sub_str_120 = come_decrement_ref_count(sub_str_120, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    return __result183__;
    if(sub_str_120 && !__freed_obj__) { sub_str_120 = come_decrement_ref_count(sub_str_120, (void*)0, (void*)0, 0, 0, 0); }
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
void* right_value120;
void* right_value121;
struct list$1charph* __result185__;
void* right_value122;
void* right_value123;
struct list$1charph* result_123;
void* right_value124;
void* right_value125;
struct buffer* str_124;
int i_125;
_Bool _for_condtionalA10;
_Bool _if_conditional176;
void* right_value129;
_Bool _if_conditional179;
void* right_value130;
struct list$1charph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct list$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&str_124, 0, sizeof(struct buffer*));
memset(&i_125, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    if(_if_conditional174=self==((void*)0),    _if_conditional174) {
        __result185__ = __result_obj__ = ((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1699, "struct list$1charph")))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value121;
        __freed_obj__ = 0;
        return __result185__;
    }
    result_123=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1702, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    str_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value125=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1704, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value124;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value125;
    __freed_obj__ = 0;
    for(
    i_125=0 ,    0;    _for_condtionalA10=    i_125<charp_length(self) ,    _for_condtionalA10;    i_125++ ,    0    ){
        if(_if_conditional176=self[i_125]==c,        _if_conditional176) {
            list$1charph_push_back(result_123,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string(str_124->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
            if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value129;
            __freed_obj__ = 0;
            buffer_reset(str_124);
        }
        else {
            buffer_append_char(str_124,self[i_125]);
        }
    }
    if(_if_conditional179=buffer_length(str_124)!=0,    _if_conditional179) {
        list$1charph_push_back(result_123,(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(str_124->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value130;
        __freed_obj__ = 0;
    }
    __result187__ = __result_obj__ = result_123;
    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result187__;
    if(result_123 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_124, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result184__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result184__;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_121;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_121, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1charph*));
                it_121=self->head;
                while(_while_condtional5=it_121!=((void*)0),                _while_condtional5) {
                    prev_it_122=it_121;
                    it_121=it_121->next;
                    if(prev_it_122 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional175) {
                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
void* right_value126;
struct list_item$1charph* litem_126;
char* __dec_obj16;
_Bool _if_conditional178;
void* right_value127;
struct list_item$1charph* litem_127;
char* __dec_obj17;
void* right_value128;
struct list_item$1charph* litem_128;
char* __dec_obj18;
struct list$1charph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1charph*));
memset(&right_value127, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1charph*));
memset(&right_value128, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional177=self->len==0,                _if_conditional177) {
                    litem_126=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value126=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 282, "struct list_item$1charph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    litem_126->prev=((void*)0);
                    litem_126->next=((void*)0);
                    __dec_obj16=litem_126->item;
                    litem_126->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                    self->tail=litem_126;
                    self->head=litem_126;
                }
                else {
                    if(_if_conditional178=self->len==1,                    _if_conditional178) {
                        litem_127=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 292, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = 0;
                        litem_127->prev=self->head;
                        litem_127->next=((void*)0);
                        __dec_obj17=litem_127->item;
                        litem_127->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                        self->tail=litem_127;
                        self->head->next=litem_127;
                    }
                    else {
                        litem_128=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 302, "struct list_item$1charph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        litem_128->prev=self->tail;
                        litem_128->next=((void*)0);
                        __dec_obj18=litem_128->item;
                        litem_128->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                        self->tail->next=litem_128;
                        self->tail=litem_128;
                    }
                }
                self->len++;
                __result186__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                return __result186__;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
void* right_value131;
void* right_value132;
struct list$1charph* __result188__;
void* right_value133;
void* right_value134;
struct list$1charph* result_129;
void* right_value135;
void* right_value136;
struct buffer* str_130;
int i_131;
_Bool _for_condtionalA11;
_Bool _if_conditional181;
void* right_value137;
_Bool _if_conditional182;
void* right_value138;
struct list$1charph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&result_129, 0, sizeof(struct list$1charph*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&str_130, 0, sizeof(struct buffer*));
memset(&i_131, 0, sizeof(int));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    if(_if_conditional180=self==((void*)0),    _if_conditional180) {
        __result188__ = __result_obj__ = ((struct list$1charph*)(right_value132=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value131=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1725, "struct list$1charph")))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = 0;
        return __result188__;
    }
    result_129=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 1728, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    str_130=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value135=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 1730, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value136;
    __freed_obj__ = 0;
    for(
    i_131=0 ,    0;    _for_condtionalA11=    i_131<charp_length(self) ,    _for_condtionalA11;    i_131++ ,    0    ){
        if(_if_conditional181=self[i_131]==c,        _if_conditional181) {
            list$1charph_push_back(result_129,(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(str_130->buf)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value137;
            __freed_obj__ = 0;
            buffer_reset(str_130);
        }
        else {
            buffer_append_char(str_130,self[i_131]);
        }
    }
    if(_if_conditional182=buffer_length(str_130)!=0,    _if_conditional182) {
        list$1charph_push_back(result_129,(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(str_130->buf)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = 0;
    }
    __result189__ = __result_obj__ = result_129;
    if(result_129 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str_130 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result189__;
    if(result_129 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(str_130 && !__freed_obj__) { come_call_finalizer(buffer_finalize,str_130, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* xbasename(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value139;
char* __result190__;
char* p_132;
_Bool _while_condtional6;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value140;
char* __result191__;
void* right_value141;
char* __result192__;
void* right_value142;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&p_132, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    if(_if_conditional183=path==((void*)0),    _if_conditional183) {
        __result190__ = __result_obj__ = ((char*)(right_value139=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
        return __result190__;
    }
    p_132=path+strlen(path);
    while(_while_condtional6=p_132>=path,    _while_condtional6) {
        if(_if_conditional184=*p_132==47,        _if_conditional184) {
            break;
        }
        else {
            p_132--;
        }
    }
    if(_if_conditional185=p_132<path,    _if_conditional185) {
        __result191__ = __result_obj__ = ((char*)(right_value140=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value140;
        __freed_obj__ = 0;
        return __result191__;
    }
    else {
        __result192__ = __result_obj__ = ((char*)(right_value141=__builtin_string(p_132+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141;
        __freed_obj__ = 0;
        return __result192__;
    }
    __result193__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    return __result193__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
void* right_value143;
char* __result194__;
void* right_value144;
void* right_value145;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    if(_if_conditional186=path==((void*)0),    _if_conditional186) {
        __result194__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143;
        __freed_obj__ = 0;
        return __result194__;
    }
    __result195__ = __result_obj__ = ((char*)(right_value145=__builtin_string(dirname(((char*)(right_value144=__builtin_string(path)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value145;
    __freed_obj__ = 0;
    return __result195__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
void* right_value146;
char* __result196__;
void* right_value147;
char* path2_133;
char* p_134;
_Bool _while_condtional7;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value148;
char* __result197__;
void* right_value149;
char* __result198__;
void* right_value150;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&path2_133, 0, sizeof(char*));
memset(&p_134, 0, sizeof(char*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    if(_if_conditional187=path==((void*)0),    _if_conditional187) {
        __result196__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value146;
        __freed_obj__ = 0;
        return __result196__;
    }
    path2_133=(char*)come_increment_ref_count(((char*)(right_value147=xbasename(path))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    p_134=path2_133+strlen(path2_133);
    while(_while_condtional7=p_134>=path2_133,    _while_condtional7) {
        if(_if_conditional188=*p_134==46,        _if_conditional188) {
            break;
        }
        else {
            p_134--;
        }
    }
    if(_if_conditional189=p_134<path2_133,    _if_conditional189) {
        __result197__ = __result_obj__ = ((char*)(right_value148=__builtin_string(path2_133)));
        if(path2_133 && !__freed_obj__) { path2_133 = come_decrement_ref_count(path2_133, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148;
        __freed_obj__ = 0;
        return __result197__;
    }
    else {
        __result198__ = __result_obj__ = ((char*)(right_value149=string_substring(path2_133,0,p_134-path2_133)));
        if(path2_133 && !__freed_obj__) { path2_133 = come_decrement_ref_count(path2_133, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        return __result198__;
    }
    __result199__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
    if(path2_133 && !__freed_obj__) { path2_133 = come_decrement_ref_count(path2_133, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    return __result199__;
    if(path2_133 && !__freed_obj__) { path2_133 = come_decrement_ref_count(path2_133, (void*)0, (void*)0, 0, 0, 0); }
}

char* xextname(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
void* right_value151;
char* __result200__;
char* p_135;
_Bool _while_condtional8;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value152;
char* __result201__;
void* right_value153;
char* __result202__;
void* right_value154;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&p_135, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    if(_if_conditional190=path==((void*)0),    _if_conditional190) {
        __result200__ = __result_obj__ = ((char*)(right_value151=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151;
        __freed_obj__ = 0;
        return __result200__;
    }
    p_135=path+strlen(path);
    while(_while_condtional8=p_135>=path,    _while_condtional8) {
        if(_if_conditional191=*p_135==46,        _if_conditional191) {
            break;
        }
        else {
            p_135--;
        }
    }
    if(_if_conditional192=p_135<path,    _if_conditional192) {
        __result201__ = __result_obj__ = ((char*)(right_value152=__builtin_string(path)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = 0;
        return __result201__;
    }
    else {
        __result202__ = __result_obj__ = ((char*)(right_value153=__builtin_string(p_135+1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = 0;
        return __result202__;
    }
    __result203__ = __result_obj__ = ((char*)(right_value154=__builtin_string("")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154;
    __freed_obj__ = 0;
    return __result203__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
void* right_value155;
char* __result204__;
char* result_136;
void* right_value156;
char* result2_137;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
memset(&result_136, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&result2_137, 0, sizeof(char*));
    if(_if_conditional193=path==((void*)0),    _if_conditional193) {
        __result204__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        return __result204__;
    }
    result_136=realpath(path,((void*)0));
    result2_137=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(result_136))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    free(result_136);
    __result205__ = __result_obj__ = result2_137;
    if(result2_137 && !__freed_obj__) { result2_137 = come_decrement_ref_count(result2_137, (void*)0, (void*)0, 0, 1, 0); }
    return __result205__;
    if(result2_137 && !__freed_obj__) { result2_137 = come_decrement_ref_count(result2_137, (void*)0, (void*)0, 0, 0, 0); }
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
void* right_value157;
char* __result206__;
void* right_value158;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    if(_if_conditional194=self,    _if_conditional194) {
        __result206__ = __result_obj__ = ((char*)(right_value157=__builtin_string("true")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value157;
        __freed_obj__ = 0;
        return __result206__;
    }
    else {
        __result207__ = __result_obj__ = ((char*)(right_value158=__builtin_string("false")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value158;
        __freed_obj__ = 0;
        return __result207__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result208__ = __result_obj__ = ((char*)(right_value159=xsprintf("%c",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = 0;
    return __result208__;
}

char* short_to_string(short short self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value160;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result209__ = __result_obj__ = ((char*)(right_value160=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    return __result209__;
}

char* int_to_string(int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
    __result210__ = __result_obj__ = ((char*)(right_value161=xsprintf("%d",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    return __result210__;
}

char* long_to_string(long self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result211__ = __result_obj__ = ((char*)(right_value162=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    return __result211__;
}

char* size_t_to_string(long int self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result212__ = __result_obj__ = ((char*)(right_value163=xsprintf("%ld",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = 0;
    return __result212__;
}

char* float_to_string(float self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result213__ = __result_obj__ = ((char*)(right_value164=xsprintf("%f",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164;
    __freed_obj__ = 0;
    return __result213__;
}

char* double_to_string(double self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value165=xsprintf("%lf",self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = 0;
    return __result214__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
void* right_value166;
char* __result215__;
void* right_value167;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
    if(_if_conditional195=self==((void*)0),    _if_conditional195) {
        __result215__ = __result_obj__ = ((char*)(right_value166=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
        return __result215__;
    }
    __result216__ = __result_obj__ = ((char*)(right_value167=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    return __result216__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
void* right_value168;
char* __result217__;
void* right_value169;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    if(_if_conditional196=self==((void*)0),    _if_conditional196) {
        __result217__ = __result_obj__ = ((char*)(right_value168=__builtin_string("")));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value168;
        __freed_obj__ = 0;
        return __result217__;
    }
    __result218__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = 0;
    return __result218__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
int __result219__;
_Bool _if_conditional198;
int __result220__;
_Bool _if_conditional199;
int __result221__;
int __result222__;
int __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional197=!left&&right,    _if_conditional197) {
        __result219__ = -1;
        return __result219__;
    }
    else {
        if(_if_conditional198=left&&right,        _if_conditional198) {
            __result220__ = 0;
            return __result220__;
        }
        else {
            if(_if_conditional199=!left&&!right,            _if_conditional199) {
                __result221__ = 0;
                return __result221__;
            }
            else {
                __result222__ = 1;
                return __result222__;
            }
        }
    }
    __result223__ = 0;
    return __result223__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
int __result224__;
_Bool _if_conditional201;
int __result225__;
int __result226__;
int __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional200=left<right,    _if_conditional200) {
        __result224__ = -1;
        return __result224__;
    }
    else {
        if(_if_conditional201=left>right,        _if_conditional201) {
            __result225__ = 1;
            return __result225__;
        }
        else {
            __result226__ = 0;
            return __result226__;
        }
    }
    __result227__ = 0;
    return __result227__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
int __result228__;
_Bool _if_conditional203;
int __result229__;
int __result230__;
int __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional202=left<right,    _if_conditional202) {
        __result228__ = -1;
        return __result228__;
    }
    else {
        if(_if_conditional203=left>right,        _if_conditional203) {
            __result229__ = 1;
            return __result229__;
        }
        else {
            __result230__ = 0;
            return __result230__;
        }
    }
    __result231__ = 0;
    return __result231__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
int __result232__;
_Bool _if_conditional205;
int __result233__;
int __result234__;
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional204=left<right,    _if_conditional204) {
        __result232__ = -1;
        return __result232__;
    }
    else {
        if(_if_conditional205=left>right,        _if_conditional205) {
            __result233__ = 1;
            return __result233__;
        }
        else {
            __result234__ = 0;
            return __result234__;
        }
    }
    __result235__ = 0;
    return __result235__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
int __result236__;
_Bool _if_conditional207;
int __result237__;
int __result238__;
int __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional206=left<right,    _if_conditional206) {
        __result236__ = -1;
        return __result236__;
    }
    else {
        if(_if_conditional207=left>right,        _if_conditional207) {
            __result237__ = 1;
            return __result237__;
        }
        else {
            __result238__ = 0;
            return __result238__;
        }
    }
    __result239__ = 0;
    return __result239__;
}

int size_t_compare(long int left, long int right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
int __result240__;
_Bool _if_conditional209;
int __result241__;
int __result242__;
int __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional208=left<right,    _if_conditional208) {
        __result240__ = -1;
        return __result240__;
    }
    else {
        if(_if_conditional209=left>right,        _if_conditional209) {
            __result241__ = 1;
            return __result241__;
        }
        else {
            __result242__ = 0;
            return __result242__;
        }
    }
    __result243__ = 0;
    return __result243__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional210;
int __result244__;
_Bool _if_conditional211;
int __result245__;
int __result246__;
int __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional210=left<right,    _if_conditional210) {
        __result244__ = -1;
        return __result244__;
    }
    else {
        if(_if_conditional211=left>right,        _if_conditional211) {
            __result245__ = 1;
            return __result245__;
        }
        else {
            __result246__ = 0;
            return __result246__;
        }
    }
    __result247__ = 0;
    return __result247__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
int __result248__;
_Bool _if_conditional213;
int __result249__;
int __result250__;
int __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional212=left<right,    _if_conditional212) {
        __result248__ = -1;
        return __result248__;
    }
    else {
        if(_if_conditional213=left>right,        _if_conditional213) {
            __result249__ = 1;
            return __result249__;
        }
        else {
            __result250__ = 0;
            return __result250__;
        }
    }
    __result251__ = 0;
    return __result251__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
int __result252__;
_Bool _if_conditional215;
int __result253__;
_Bool _if_conditional216;
int __result254__;
int __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional214=left==((void*)0)&&right==((void*)0),    _if_conditional214) {
        __result252__ = 0;
        return __result252__;
    }
    else {
        if(_if_conditional215=left==((void*)0),        _if_conditional215) {
            __result253__ = -1;
            return __result253__;
        }
        else {
            if(_if_conditional216=right==((void*)0),            _if_conditional216) {
                __result254__ = 1;
                return __result254__;
            }
        }
    }
    __result255__ = strcmp(left,right);
    return __result255__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
int __result256__;
_Bool _if_conditional218;
int __result257__;
_Bool _if_conditional219;
int __result258__;
int __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional217=left==((void*)0)&&right==((void*)0),    _if_conditional217) {
        __result256__ = 0;
        return __result256__;
    }
    else {
        if(_if_conditional218=left==((void*)0),        _if_conditional218) {
            __result257__ = -1;
            return __result257__;
        }
        else {
            if(_if_conditional219=right==((void*)0),            _if_conditional219) {
                __result258__ = 1;
                return __result258__;
            }
        }
    }
    __result259__ = strcmp(left,right);
    return __result259__;
}

struct optional$2charphbool* FILE_read(struct __sFILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional220;
void* right_value170;
void* right_value171;
void* right_value172;
struct optional$2charphbool* __result261__;
void* right_value173;
void* right_value174;
struct buffer* buf_138;
_Bool _while_condtional9;
int size_140;
_Bool _if_conditional222;
void* right_value175;
void* right_value176;
void* right_value177;
struct optional$2charphbool* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&buf_138, 0, sizeof(struct buffer*));
memset(&size_140, 0, sizeof(int));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
    if(_if_conditional220=f==((void*)0),    _if_conditional220) {
        __result261__ = __result_obj__ = ((struct optional$2charphbool*)(right_value172=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value171=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2079, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value171;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value172;
        __freed_obj__ = 0;
        return __result261__;
    }
    buf_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2081, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value174;
    __freed_obj__ = 0;
    while(_while_condtional9=1,    _while_condtional9) {
        char buf2_139[1024];
        memset(&buf2_139, 0, sizeof(char)        *(1024)        );
        size_140=fread(buf2_139,1,1024,f);
        buffer_append(buf_138,buf2_139,size_140);
        if(_if_conditional222=size_140<1024,        _if_conditional222) {
            break;
        }
    }
    __result262__ = __result_obj__ = ((struct optional$2charphbool*)(right_value177=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value176=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2095, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value175=buffer_to_string(buf_138)))),(_Bool)1)));
    if(buf_138 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value176;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value177;
    __freed_obj__ = 0;
    return __result262__;
    if(buf_138 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj19;
struct optional$2charphbool* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj19=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
            self->v2=v2;
            __result260__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            return __result260__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional221=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional221) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                }
}

struct optional$2intbool* FILE_write(struct __sFILE* f, char* str){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
void* right_value178;
void* right_value179;
struct optional$2intbool* __result263__;
void* right_value180;
void* right_value181;
struct optional$2intbool* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    if(_if_conditional223=f==((void*)0)||str==((void*)0),    _if_conditional223) {
        __result263__ = __result_obj__ = ((struct optional$2intbool*)(right_value179=optional$2intbool_initialize(((struct optional$2intbool*)(right_value178=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2101, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value178;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value179;
        __freed_obj__ = 0;
        return __result263__;
    }
    __result264__ = __result_obj__ = ((struct optional$2intbool*)(right_value181=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value180=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2104, "struct optional$2intbool")))),fwrite(str,strlen(str),1,f),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value181;
    __freed_obj__ = 0;
    return __result264__;
}

struct optional$2intbool* FILE_fclose(struct __sFILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
void* right_value182;
void* right_value183;
struct optional$2intbool* __result265__;
int result_141;
_Bool _if_conditional225;
void* right_value184;
void* right_value185;
struct optional$2intbool* __result266__;
void* right_value186;
void* right_value187;
struct optional$2intbool* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_141, 0, sizeof(int));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
    if(_if_conditional224=f==((void*)0),    _if_conditional224) {
        __result265__ = __result_obj__ = ((struct optional$2intbool*)(right_value183=optional$2intbool_initialize(((struct optional$2intbool*)(right_value182=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2110, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        return __result265__;
    }
    result_141=fclose(f);
    if(_if_conditional225=result_141<0,    _if_conditional225) {
        __result266__ = __result_obj__ = ((struct optional$2intbool*)(right_value185=optional$2intbool_initialize(((struct optional$2intbool*)(right_value184=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2116, "struct optional$2intbool"))),result_141,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value185;
        __freed_obj__ = 0;
        return __result266__;
    }
    __result267__ = __result_obj__ = ((struct optional$2intbool*)(right_value187=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value186=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2119, "struct optional$2intbool")))),result_141,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value187;
    __freed_obj__ = 0;
    return __result267__;
}

struct optional$2__sFILEpbool* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
void* right_value188;
void* right_value189;
struct optional$2__sFILEpbool* __result269__;
va_list args_143;
int result_144;
_Bool _if_conditional227;
void* right_value190;
void* right_value191;
struct optional$2__sFILEpbool* __result270__;
void* right_value192;
void* right_value193;
struct optional$2__sFILEpbool* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&args_143, 0, sizeof(va_list));
memset(&result_144, 0, sizeof(int));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    if(_if_conditional226=f==((void*)0)||msg==((void*)0),    _if_conditional226) {
        __result269__ = __result_obj__ = ((struct optional$2__sFILEpbool*)(right_value189=optional$2__sFILEpbool_initialize(((struct optional$2__sFILEpbool*)(right_value188=(struct optional$2__sFILEpbool*)come_calloc(1, sizeof(struct optional$2__sFILEpbool)*(1), "libcomelang2.c", 2125, "struct optional$2__sFILEpbool"))),f,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2__sFILEpboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value189;
        __freed_obj__ = 0;
        return __result269__;
    }
    char msg2_142[1024*2*2*2];
    memset(&msg2_142, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_143,msg);
    vsnprintf(msg2_142,1024*2*2*2,msg,args_143);
    __builtin_va_end(args_143);
    result_144=fprintf(f,"%s",msg2_142);
    if(_if_conditional227=result_144<0,    _if_conditional227) {
        __result270__ = __result_obj__ = ((struct optional$2intbool*)(right_value191=optional$2intbool_initialize(((struct optional$2intbool*)(right_value190=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2137, "struct optional$2intbool"))),result_144,(_Bool)0)));
        if((&args_143) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_143), (void*)0, (void*)0, 1, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value190;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value191;
        __freed_obj__ = 0;
        return __result270__;
    }
    __result271__ = __result_obj__ = ((struct optional$2__sFILEpbool*)(right_value193=optional$2__sFILEpbool_initialize((struct optional$2__sFILEpbool*)come_increment_ref_count(((struct optional$2__sFILEpbool*)(right_value192=(struct optional$2__sFILEpbool*)come_calloc(1, sizeof(struct optional$2__sFILEpbool)*(1), "libcomelang2.c", 2140, "struct optional$2__sFILEpbool")))),f,(_Bool)1)));
    if((&args_143) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_143), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2__sFILEpboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value193;
    __freed_obj__ = 0;
    return __result271__;
    if((&args_143) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_143), (void*)0, (void*)0, 1, 0, 0, 0); }
}

static struct optional$2__sFILEpbool* optional$2__sFILEpbool_initialize(struct optional$2__sFILEpbool* self, struct __sFILE* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2__sFILEpbool* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            self->v2=v2;
            __result268__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2__sFILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result268__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2__sFILEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2__sFILEpboolp_finalize(struct optional$2__sFILEpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2intbool* string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
void* right_value194;
void* right_value195;
struct optional$2intbool* __result272__;
struct __sFILE* f_145;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value196;
void* right_value197;
struct optional$2intbool* __result273__;
int result_146;
_Bool _if_conditional231;
void* right_value198;
void* right_value199;
struct optional$2intbool* __result274__;
int result2_147;
_Bool _if_conditional232;
void* right_value200;
void* right_value201;
struct optional$2intbool* __result275__;
void* right_value202;
void* right_value203;
struct optional$2intbool* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&f_145, 0, sizeof(struct __sFILE*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&result_146, 0, sizeof(int));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&result2_147, 0, sizeof(int));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    if(_if_conditional228=self==((void*)0)||file_name==((void*)0),    _if_conditional228) {
        __result272__ = __result_obj__ = ((struct optional$2intbool*)(right_value195=optional$2intbool_initialize(((struct optional$2intbool*)(right_value194=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2146, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value195;
        __freed_obj__ = 0;
        return __result272__;
    }
    if(_if_conditional229=append,    _if_conditional229) {
        f_145=fopen(file_name,"a");
    }
    else {
        f_145=fopen(file_name,"w");
    }
    if(_if_conditional230=f_145==((void*)0),    _if_conditional230) {
        __result273__ = __result_obj__ = ((struct optional$2intbool*)(right_value197=optional$2intbool_initialize(((struct optional$2intbool*)(right_value196=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2158, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value196;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value197;
        __freed_obj__ = 0;
        return __result273__;
    }
    result_146=fwrite(self,strlen(self),1,f_145);
    if(_if_conditional231=result_146<0,    _if_conditional231) {
        __result274__ = __result_obj__ = ((struct optional$2intbool*)(right_value199=optional$2intbool_initialize(((struct optional$2intbool*)(right_value198=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2164, "struct optional$2intbool"))),result_146,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value198;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value199;
        __freed_obj__ = 0;
        return __result274__;
    }
    result2_147=fclose(f_145);
    if(_if_conditional232=result2_147<0,    _if_conditional232) {
        __result275__ = __result_obj__ = ((struct optional$2intbool*)(right_value201=optional$2intbool_initialize(((struct optional$2intbool*)(right_value200=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2170, "struct optional$2intbool"))),result2_147,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value200;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value201;
        __freed_obj__ = 0;
        return __result275__;
    }
    __result276__ = __result_obj__ = ((struct optional$2intbool*)(right_value203=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value202=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2173, "struct optional$2intbool")))),result_146,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value203;
    __freed_obj__ = 0;
    return __result276__;
}

struct optional$2intbool* charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional233;
void* right_value204;
void* right_value205;
struct optional$2intbool* __result277__;
struct __sFILE* f_148;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value206;
void* right_value207;
struct optional$2intbool* __result278__;
int result_149;
_Bool _if_conditional236;
void* right_value208;
void* right_value209;
struct optional$2intbool* __result279__;
int result2_150;
_Bool _if_conditional237;
void* right_value210;
void* right_value211;
struct optional$2intbool* __result280__;
void* right_value212;
void* right_value213;
struct optional$2intbool* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&f_148, 0, sizeof(struct __sFILE*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&result_149, 0, sizeof(int));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&result2_150, 0, sizeof(int));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
    if(_if_conditional233=self==((void*)0)||file_name==((void*)0),    _if_conditional233) {
        __result277__ = __result_obj__ = ((struct optional$2intbool*)(right_value205=optional$2intbool_initialize(((struct optional$2intbool*)(right_value204=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2179, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value205;
        __freed_obj__ = 0;
        return __result277__;
    }
    if(_if_conditional234=append,    _if_conditional234) {
        f_148=fopen(file_name,"a");
    }
    else {
        f_148=fopen(file_name,"w");
    }
    if(_if_conditional235=f_148==((void*)0),    _if_conditional235) {
        __result278__ = __result_obj__ = ((struct optional$2intbool*)(right_value207=optional$2intbool_initialize(((struct optional$2intbool*)(right_value206=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2191, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value206;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value207;
        __freed_obj__ = 0;
        return __result278__;
    }
    result_149=fwrite(self,strlen(self),1,f_148);
    if(_if_conditional236=result_149<0,    _if_conditional236) {
        __result279__ = __result_obj__ = ((struct optional$2intbool*)(right_value209=optional$2intbool_initialize(((struct optional$2intbool*)(right_value208=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2197, "struct optional$2intbool"))),result_149,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value209;
        __freed_obj__ = 0;
        return __result279__;
    }
    result2_150=fclose(f_148);
    if(_if_conditional237=result2_150<0,    _if_conditional237) {
        __result280__ = __result_obj__ = ((struct optional$2intbool*)(right_value211=optional$2intbool_initialize(((struct optional$2intbool*)(right_value210=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2203, "struct optional$2intbool"))),result2_150,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211;
        __freed_obj__ = 0;
        return __result280__;
    }
    __result281__ = __result_obj__ = ((struct optional$2intbool*)(right_value213=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value212=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2206, "struct optional$2intbool")))),result_149,(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value213;
    __freed_obj__ = 0;
    return __result281__;
}

struct optional$2charphbool* string_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional238;
void* right_value214;
void* right_value215;
void* right_value216;
struct optional$2charphbool* __result282__;
struct __sFILE* f_151;
_Bool _if_conditional239;
void* right_value217;
void* right_value218;
void* right_value219;
struct optional$2charphbool* __result283__;
void* right_value220;
void* right_value221;
struct buffer* buf_152;
_Bool _while_condtional10;
int size_154;
_Bool _if_conditional240;
void* right_value222;
char* result_155;
int result2_156;
_Bool _if_conditional241;
void* right_value223;
void* right_value224;
void* right_value225;
struct optional$2charphbool* __result284__;
void* right_value226;
void* right_value227;
struct optional$2charphbool* __result285__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&f_151, 0, sizeof(struct __sFILE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&buf_152, 0, sizeof(struct buffer*));
memset(&size_154, 0, sizeof(int));
memset(&right_value222, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result2_156, 0, sizeof(int));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    if(_if_conditional238=file_name==((void*)0),    _if_conditional238) {
        __result282__ = __result_obj__ = ((struct optional$2charphbool*)(right_value216=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value215=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2212, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value215;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value216;
        __freed_obj__ = 0;
        return __result282__;
    }
    f_151=fopen(file_name,"r");
    if(_if_conditional239=f_151==((void*)0),    _if_conditional239) {
        __result283__ = __result_obj__ = ((struct optional$2charphbool*)(right_value219=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value218=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2218, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value218;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value219);
        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value219;
        __freed_obj__ = 0;
        return __result283__;
    }
    buf_152=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value220=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2221, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value221;
    __freed_obj__ = 0;
    while(_while_condtional10=1,    _while_condtional10) {
        char buf2_153[1024];
        memset(&buf2_153, 0, sizeof(char)        *(1024)        );
        size_154=fread(buf2_153,1,1024,f_151);
        buffer_append(buf_152,buf2_153,size_154);
        if(_if_conditional240=size_154<1024,        _if_conditional240) {
            break;
        }
    }
    result_155=(char*)come_increment_ref_count(((char*)(right_value222=buffer_to_string(buf_152))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    result2_156=fclose(f_151);
    if(_if_conditional241=result2_156<0,    _if_conditional241) {
        __result284__ = __result_obj__ = ((struct optional$2charphbool*)(right_value225=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value224=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2240, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("")))),(_Bool)0)));
        if(buf_152 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_155 && !__freed_obj__) { result_155 = come_decrement_ref_count(result_155, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value224;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value225;
        __freed_obj__ = 0;
        return __result284__;
    }
    __result285__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2243, "struct optional$2charphbool")))),(char*)come_increment_ref_count(result_155),(_Bool)1)));
    if(buf_152 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_155 && !__freed_obj__) { result_155 = come_decrement_ref_count(result_155, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value227;
    __freed_obj__ = 0;
    return __result285__;
    if(buf_152 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_155 && !__freed_obj__) { result_155 = come_decrement_ref_count(result_155, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2charphbool* charp_read(char* file_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional242;
void* right_value228;
void* right_value229;
void* right_value230;
struct optional$2charphbool* __result286__;
struct __sFILE* f_157;
_Bool _if_conditional243;
void* right_value231;
void* right_value232;
void* right_value233;
struct optional$2charphbool* __result287__;
void* right_value234;
void* right_value235;
struct buffer* buf_158;
_Bool _while_condtional11;
int size_160;
_Bool _if_conditional244;
void* right_value236;
char* result_161;
int result2_162;
_Bool _if_conditional245;
void* right_value237;
void* right_value238;
void* right_value239;
struct optional$2charphbool* __result288__;
void* right_value240;
void* right_value241;
struct optional$2charphbool* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&f_157, 0, sizeof(struct __sFILE*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&buf_158, 0, sizeof(struct buffer*));
memset(&size_160, 0, sizeof(int));
memset(&right_value236, 0, sizeof(void*));
memset(&result_161, 0, sizeof(char*));
memset(&result2_162, 0, sizeof(int));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
    if(_if_conditional242=file_name==((void*)0),    _if_conditional242) {
        __result286__ = __result_obj__ = ((struct optional$2charphbool*)(right_value230=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value229=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2249, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value228;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value229;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value230;
        __freed_obj__ = 0;
        return __result286__;
    }
    f_157=fopen(file_name,"r");
    if(_if_conditional243=f_157==((void*)0),    _if_conditional243) {
        __result287__ = __result_obj__ = ((struct optional$2charphbool*)(right_value233=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value232=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2255, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value231;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value232;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value233;
        __freed_obj__ = 0;
        return __result287__;
    }
    buf_158=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2.c", 2258, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value235;
    __freed_obj__ = 0;
    while(_while_condtional11=1,    _while_condtional11) {
        char buf2_159[1024];
        memset(&buf2_159, 0, sizeof(char)        *(1024)        );
        size_160=fread(buf2_159,1,1024,f_157);
        buffer_append(buf_158,buf2_159,size_160);
        if(_if_conditional244=size_160<1024,        _if_conditional244) {
            break;
        }
    }
    result_161=(char*)come_increment_ref_count(((char*)(right_value236=buffer_to_string(buf_158))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value236;
    __freed_obj__ = 0;
    result2_162=fclose(f_157);
    if(_if_conditional245=result2_162<0,    _if_conditional245) {
        __result288__ = __result_obj__ = ((struct optional$2charphbool*)(right_value239=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value238=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2277, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string("")))),(_Bool)0)));
        if(buf_158 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_161 && !__freed_obj__) { result_161 = come_decrement_ref_count(result_161, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value238);
        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value238;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value239);
        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value239;
        __freed_obj__ = 0;
        return __result288__;
    }
    __result289__ = __result_obj__ = ((struct optional$2charphbool*)(right_value241=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value240=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2280, "struct optional$2charphbool")))),(char*)come_increment_ref_count(result_161),(_Bool)1)));
    if(buf_158 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_161 && !__freed_obj__) { result_161 = come_decrement_ref_count(result_161, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value241;
    __freed_obj__ = 0;
    return __result289__;
    if(buf_158 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_161 && !__freed_obj__) { result_161 = come_decrement_ref_count(result_161, (void*)0, (void*)0, 0, 0, 0); }
}

struct optional$2list$1charphphbool* FILE_readlines(struct __sFILE* f){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
void* right_value243;
struct list$1charph* result_163;
_Bool _if_conditional246;
void* right_value244;
void* right_value245;
struct optional$2list$1charphphbool* __result291__;
_Bool _while_condtional12;
_Bool _if_conditional248;
void* right_value246;
void* right_value247;
void* right_value248;
struct optional$2list$1charphphbool* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&result_163, 0, sizeof(struct list$1charph*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    result_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value243=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value242=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2.c", 2285, "struct list$1charph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243;
    __freed_obj__ = 0;
    if(_if_conditional246=f==((void*)0),    _if_conditional246) {
        __result291__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value245=optional$2list$1charphphbool_initialize(((struct optional$2list$1charphphbool*)(right_value244=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2288, "struct optional$2list$1charphphbool"))),(struct list$1charph*)come_increment_ref_count(result_163),(_Bool)0)));
        if(result_163 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
        return __result291__;
    }
    while(_while_condtional12=1,    _while_condtional12) {
        char buf_164[1024];
        memset(&buf_164, 0, sizeof(char)        *(1024)        );
        if(_if_conditional248=fgets(buf_164,1024,f)==((void*)0),        _if_conditional248) {
            break;
        }
        list$1charph_push_back(result_163,(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(buf_164)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
        if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value246;
        __freed_obj__ = 0;
    }
    __result292__ = __result_obj__ = ((struct optional$2list$1charphphbool*)(right_value248=optional$2list$1charphphbool_initialize((struct optional$2list$1charphphbool*)come_increment_ref_count(((struct optional$2list$1charphphbool*)(right_value247=(struct optional$2list$1charphphbool*)come_calloc(1, sizeof(struct optional$2list$1charphphbool)*(1), "libcomelang2.c", 2301, "struct optional$2list$1charphphbool")))),(struct list$1charph*)come_increment_ref_count(result_163),(_Bool)1)));
    if(result_163 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value248;
    __freed_obj__ = 0;
    return __result292__;
    if(result_163 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2list$1charphphbool* optional$2list$1charphphbool_initialize(struct optional$2list$1charphphbool* self, struct list$1charph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __dec_obj20;
struct optional$2list$1charphphbool* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj20=self->v1;
            self->v1=(struct list$1charph*)come_increment_ref_count(v1);
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->v2=v2;
            __result290__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result290__;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2list$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void optional$2list$1charphphboolp_finalize(struct optional$2list$1charphphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional247=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional247) {
                    if(self->v1 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
}

struct optional$2intbool* fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
void* right_value249;
void* right_value250;
struct optional$2intbool* __result293__;
struct __sFILE* f_165;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value251;
void* right_value252;
struct optional$2intbool* __result294__;
void* right_value253;
void* right_value254;
struct optional$2intbool* __result295__;
void* right_value255;
void* right_value256;
struct optional$2intbool* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&f_165, 0, sizeof(struct __sFILE*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
    if(_if_conditional249=path==((void*)0)||mode==((void*)0),    _if_conditional249) {
        __result293__ = __result_obj__ = ((struct optional$2intbool*)(right_value250=optional$2intbool_initialize(((struct optional$2intbool*)(right_value249=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2307, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value250;
        __freed_obj__ = 0;
        return __result293__;
    }
    f_165=fopen(path,mode);
    if(_if_conditional250=f_165,    _if_conditional250) {
        block(parent,f_165);
        if(_if_conditional251=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional251) {
            fclose(f_165);
            __result294__ = __result_obj__ = ((struct optional$2intbool*)(right_value252=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value251=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2315, "struct optional$2intbool")))),0,(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value252;
            __freed_obj__ = 0;
            return __result294__;
        }
        fclose(f_165);
        __result295__ = __result_obj__ = ((struct optional$2intbool*)(right_value254=optional$2intbool_initialize((struct optional$2intbool*)come_increment_ref_count(((struct optional$2intbool*)(right_value253=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2320, "struct optional$2intbool")))),0,(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254;
        __freed_obj__ = 0;
        return __result295__;
    }
    __result296__ = __result_obj__ = ((struct optional$2intbool*)(right_value256=optional$2intbool_initialize(((struct optional$2intbool*)(right_value255=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2323, "struct optional$2intbool"))),-1,(_Bool)0)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value256;
    __freed_obj__ = 0;
    return __result296__;
}

struct optional$2charphbool* charp_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
void* right_value257;
void* right_value258;
struct optional$2charphbool* __result297__;
void* right_value259;
void* right_value260;
void* right_value261;
struct optional$2charphbool* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
    if(_if_conditional252=self==((void*)0),    _if_conditional252) {
        __result297__ = __result_obj__ = ((struct optional$2intbool*)(right_value258=optional$2intbool_initialize(((struct optional$2intbool*)(right_value257=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2332, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value258;
        __freed_obj__ = 0;
        return __result297__;
    }
    puts(self);
    __result298__ = __result_obj__ = ((struct optional$2charphbool*)(right_value261=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value260=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2336, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value260;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value261;
    __freed_obj__ = 0;
    return __result298__;
}

struct optional$2charphbool* charp_print(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
void* right_value262;
void* right_value263;
struct optional$2charphbool* __result299__;
void* right_value264;
void* right_value265;
void* right_value266;
struct optional$2charphbool* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
    if(_if_conditional253=self==((void*)0),    _if_conditional253) {
        __result299__ = __result_obj__ = ((struct optional$2intbool*)(right_value263=optional$2intbool_initialize(((struct optional$2intbool*)(right_value262=(struct optional$2intbool*)come_calloc(1, sizeof(struct optional$2intbool)*(1), "libcomelang2.c", 2342, "struct optional$2intbool"))),-1,(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263;
        __freed_obj__ = 0;
        return __result299__;
    }
    printf("%s",self);
    __result300__ = __result_obj__ = ((struct optional$2charphbool*)(right_value266=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value265=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2346, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value265;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value266;
    __freed_obj__ = 0;
    return __result300__;
}

struct optional$2charphbool* string_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
void* right_value267;
void* right_value268;
void* right_value269;
struct optional$2charphbool* __result301__;
char* msg2_166;
va_list args_167;
void* right_value270;
void* right_value271;
void* right_value272;
struct optional$2charphbool* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&msg2_166, 0, sizeof(char*));
memset(&args_167, 0, sizeof(va_list));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional254=self==((void*)0),    _if_conditional254) {
        __result301__ = __result_obj__ = ((struct optional$2charphbool*)(right_value269=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value268=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2353, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value267;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value268;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value269;
        __freed_obj__ = 0;
        return __result301__;
    }
    __builtin_va_start(args_167,self);
    vasprintf(&msg2_166,self,args_167);
    __builtin_va_end(args_167);
    printf("%s",msg2_166);
    free(msg2_166);
    __result302__ = __result_obj__ = ((struct optional$2charphbool*)(right_value272=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value271=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2366, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(self)))),(_Bool)1)));
    if((&args_167) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_167), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value271;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value272;
    __freed_obj__ = 0;
    return __result302__;
    if((&args_167) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_167), (void*)0, (void*)0, 1, 0, 0, 0); }
}

struct optional$2charphbool* charp_printf(char* self, ...){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
void* right_value273;
void* right_value274;
void* right_value275;
struct optional$2charphbool* __result303__;
char* msg2_168;
va_list args_169;
void* right_value276;
void* right_value277;
void* right_value278;
struct optional$2charphbool* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&msg2_168, 0, sizeof(char*));
memset(&args_169, 0, sizeof(va_list));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    if(_if_conditional255=self==((void*)0),    _if_conditional255) {
        __result303__ = __result_obj__ = ((struct optional$2charphbool*)(right_value275=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value274=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2372, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value275;
        __freed_obj__ = 0;
        return __result303__;
    }
    __builtin_va_start(args_169,self);
    vasprintf(&msg2_168,self,args_169);
    __builtin_va_end(args_169);
    printf("%s",msg2_168);
    free(msg2_168);
    __result304__ = __result_obj__ = ((struct optional$2charphbool*)(right_value278=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value277=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2385, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(self)))),(_Bool)1)));
    if((&args_169) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_169), (void*)0, (void*)0, 1, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value277;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value278;
    __freed_obj__ = 0;
    return __result304__;
    if((&args_169) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_169), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int int_printf(int self, char* msg){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    printf(msg,self);
    __result305__ = self;
    return __result305__;
}

struct optional$2charphbool* string_puts(char* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional256;
void* right_value279;
void* right_value280;
void* right_value281;
struct optional$2charphbool* __result306__;
void* right_value282;
void* right_value283;
void* right_value284;
struct optional$2charphbool* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
    if(_if_conditional256=self==((void*)0),    _if_conditional256) {
        __result306__ = __result_obj__ = ((struct optional$2charphbool*)(right_value281=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value280=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2398, "struct optional$2charphbool"))),(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("")))),(_Bool)0)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value279;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value280;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value281;
        __freed_obj__ = 0;
        return __result306__;
    }
    puts(self);
    __result307__ = __result_obj__ = ((struct optional$2charphbool*)(right_value284=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value283=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "libcomelang2.c", 2402, "struct optional$2charphbool")))),(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(self)))),(_Bool)1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value282;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value284;
    __freed_obj__ = 0;
    return __result307__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_170;
_Bool _for_condtionalA12;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_170, 0, sizeof(int));
    for(
    i_170=0 ,    0;    _for_condtionalA12=    i_170<self ,    _for_condtionalA12;    i_170++ ,    0    ){
        block(parent,i_170);
        if(_if_conditional257=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional257) {
            return;
        }
    }
}

