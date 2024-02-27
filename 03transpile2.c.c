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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
void show_type(struct sType* type, struct sInfo* info);

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sType* sType_clone(struct sType* self);
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
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
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
_Bool output_source_file_v3(struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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

void come_init_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void come_final_v3(){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
char* __result7__;
void* right_value13;
struct CVALUE* come_value_7;
void* right_value14;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
void* right_value15;
char* result_type_str_16;
int j_17;
struct list$1sTypeph* o2_saved_18;
struct sType* it_21;
void* right_value16;
char* param_type_str_24;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value17;
char* __result16__;
_Bool _if_conditional53;
int i_25;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value18;
char* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value14 = (void*)0;
right_value15 = (void*)0;
memset(&result_type_str_16, 0, sizeof(char*));
memset(&j_17, 0, sizeof(int));
memset(&o2_saved_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_21, 0, sizeof(struct sType*));
right_value16 = (void*)0;
memset(&param_type_str_24, 0, sizeof(char*));
right_value17 = (void*)0;
memset(&i_25, 0, sizeof(int));
right_value18 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_6=type->mClass->mName;
    if(type->mAlignas) {
        if(_if_conditional6=!node_compile(type->mAlignas,info),        _if_conditional6) {
            printf("_Alignas error\n");
            __result7__ = __result_obj__ = ((char*)(right_value12=__builtin_string("")));
            come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result7__;
        }
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value13=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(buf_5,((char*)(right_value14=xsprintf("_Alignas(%s) ",come_value_7->c_value))));
        right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional25=type->mStatic&&!type->mClass->mStruct&&!type->mClass->mUnion,    _if_conditional25) {
        buffer_append_str(buf_5,"static ");
    }
    if(type->mConstant) {
        buffer_append_str(buf_5,"const ");
    }
    if(type->mUnsigned) {
        buffer_append_str(buf_5,"unsigned ");
    }
    if(type->mShort) {
        buffer_append_str(buf_5,"short ");
    }
    if(_if_conditional29=string_operator_equals(type->mOriginalTypeName,"va_list"),    _if_conditional29) {
        buffer_append_str(buf_5,"va_list");
    }
    else {
        if(_if_conditional30=string_operator_equals(type->mOriginalTypeName,"__builtin_va_list"),        _if_conditional30) {
            buffer_append_str(buf_5,"__builtin_va_list");
        }
        else {
            if(_if_conditional31=charp_operator_equals(class_name_6,"__builtin_va_list"),            _if_conditional31) {
                if(in_header) {
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    buffer_append_str(buf_5,"va_list");
                }
            }
            else {
                if(type->mClass->mStruct) {
                    buffer_append_str(buf_5,"struct ");
                    buffer_append_str(buf_5,class_name_6);
                }
                else {
                    if(type->mClass->mUnion) {
                        buffer_append_str(buf_5,"union ");
                        buffer_append_str(buf_5,class_name_6);
                    }
                    else {
                        if(type->mClass->mEnum) {
                            buffer_append_str(buf_5,"enum ");
                            buffer_append_str(buf_5,class_name_6);
                        }
                        else {
                            if(type->mLongLong) {
                                if(_if_conditional37=charp_operator_equals(class_name_6,"int"),                                _if_conditional37) {
                                    buffer_append_str(buf_5,"long long int");
                                }
                                else {
                                    if(_if_conditional38=charp_operator_equals(class_name_6,"long"),                                    _if_conditional38) {
                                        buffer_append_str(buf_5,"long long");
                                    }
                                }
                            }
                            else {
                                if(type->mLong) {
                                    if(_if_conditional40=charp_operator_equals(class_name_6,"int"),                                    _if_conditional40) {
                                        buffer_append_str(buf_5,"long int");
                                    }
                                    else {
                                        if(_if_conditional41=charp_operator_equals(class_name_6,"long"),                                        _if_conditional41) {
                                            buffer_append_str(buf_5,"long long");
                                        }
                                        else {
                                            if(_if_conditional42=charp_operator_equals(class_name_6,"double"),                                            _if_conditional42) {
                                                buffer_append_str(buf_5,"long double");
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(_if_conditional43=charp_operator_equals(class_name_6,"long"),                                    _if_conditional43) {
                                        buffer_append_str(buf_5,"long");
                                    }
                                    else {
                                        if(_if_conditional44=charp_operator_equals(class_name_6,"__uint128_t"),                                        _if_conditional44) {
                                            buffer_append_str(buf_5,"__uint128_t");
                                        }
                                        else {
                                            if(_if_conditional45=charp_operator_equals(class_name_6,"bool"),                                            _if_conditional45) {
                                                buffer_append_str(buf_5,"_Bool");
                                            }
                                            else {
                                                if(_if_conditional46=charp_operator_equals(class_name_6,"lambda"),                                                _if_conditional46) {
                                                    result_type_str_16=(char*)come_increment_ref_count(((char*)(right_value15=make_type_name_string(type->mResultType->v1,in_header,(_Bool)0,(_Bool)0,info))));
                                                    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(buf_5,result_type_str_16);
                                                    buffer_append_str(buf_5," (*)(");
                                                    j_17=0;
                                                    for(                                                    o2_saved_18=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_21=list$1sTypeph_begin((o2_saved_18));                                                    !list$1sTypeph_end((o2_saved_18));                                                    it_21=list$1sTypeph_next((o2_saved_18))                                                    ){
                                                        param_type_str_24=(char*)come_increment_ref_count(((char*)(right_value16=make_type_name_string(it_21,in_header,(_Bool)0,(_Bool)0,info))));
                                                        right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(buf_5,param_type_str_24);
                                                        if(_if_conditional51=j_17!=list$1sTypeph_length(type->mParamTypes)-1,                                                        _if_conditional51) {
                                                            buffer_append_str(buf_5,",");
                                                        }
                                                        j_17++;
                                                        param_type_str_24 = come_decrement_ref_count2(param_type_str_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    buffer_append_str(buf_5,")");
                                                    result_type_str_16 = come_decrement_ref_count2(result_type_str_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(_if_conditional52=class_name_6==((void*)0),                                                    _if_conditional52) {
                                                        err_msg(info,"class name is null");
                                                        __result16__ = __result_obj__ = ((char*)(right_value17=__builtin_string("")));
                                                        come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        return __result16__;
                                                    }
                                                    buffer_append_str(buf_5,class_name_6);
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
    if(_if_conditional53=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional53) {
        for(        i_25=0;        i_25<type->mPointerNum;        i_25++        ){
            buffer_append_str(buf_5,"*");
        }
    }
    if(_if_conditional54=array_cast_pointer&&list$1sNodeph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list"),    _if_conditional54) {
        buffer_append_str(buf_5,"*");
    }
    if(type->mRestrict) {
        buffer_append_str(buf_5,"restrict");
    }
    __result18__ = __result_obj__ = ((char*)(right_value18=buffer_to_string(buf_5)));
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result18__;
    come_call_finalizer2(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional7=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional7) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional9=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional9) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional11=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional11) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional12=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional12) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional13=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional15) {
                        come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional17) {
                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional18) {
                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional20) {
                        come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional21) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional22) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional23) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional24) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional10) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional14) {
                                        come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_10;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sTypeph*));
                            it_10=self->head;
                            while(_while_condtional2=it_10!=((void*)0),                            _while_condtional2) {
                                prev_it_11=it_10;
                                it_10=it_10->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_12;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sNodeph*));
                            it_12=self->head;
                            while(_while_condtional3=it_12!=((void*)0),                            _while_condtional3) {
                                prev_it_13=it_12;
                                it_12=it_12->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional16) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_14;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1charph*));
                            it_14=self->head;
                            while(_while_condtional4=it_14!=((void*)0),                            _while_condtional4) {
                                prev_it_15=it_14;
                                it_14=it_14->next;
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional19) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct sType* result_19;
struct sType* __result8__;
_Bool _if_conditional48;
struct sType* __result9__;
struct sType* result_20;
struct sType* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct sType*));
memset(&result_20, 0, sizeof(struct sType*));
                                                        if(_if_conditional47=self==((void*)0),                                                        _if_conditional47) {
                                                            memset(&result_19,0,sizeof(struct sType*));
                                                            __result8__ = __result_obj__ = result_19;
                                                            return __result8__;
                                                        }
                                                        self->it=self->head;
                                                        if(self->it) {
                                                            __result9__ = __result_obj__ = self->it->item;
                                                            return __result9__;
                                                        }
                                                        memset(&result_20,0,sizeof(struct sType*));
                                                        __result10__ = __result_obj__ = result_20;
                                                        return __result10__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                                                        __result11__ = self==((void*)0)||self->it==((void*)0);
                                                        return __result11__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct sType* result_22;
struct sType* __result12__;
_Bool _if_conditional50;
struct sType* __result13__;
struct sType* result_23;
struct sType* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct sType*));
memset(&result_23, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0)||self->it==((void*)0),                                                        _if_conditional49) {
                                                            memset(&result_22,0,sizeof(struct sType*));
                                                            __result12__ = __result_obj__ = result_22;
                                                            return __result12__;
                                                        }
                                                        self->it=self->it->next;
                                                        if(self->it) {
                                                            __result13__ = __result_obj__ = self->it->item;
                                                            return __result13__;
                                                        }
                                                        memset(&result_23,0,sizeof(struct sType*));
                                                        __result14__ = __result_obj__ = result_23;
                                                        return __result14__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result15__ = self->len;
                                                            return __result15__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result17__;
memset(&__result_obj__, 0, sizeof(void*));
        __result17__ = self->len;
        return __result17__;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value19;
void* right_value20;
struct buffer* buf_26;
char* class_name_27;
_Bool _if_conditional56;
int i_28;
void* right_value21;
struct sType* gtype_32;
void* right_value22;
_Bool _if_conditional59;
_Bool _if_conditional60;
int i_33;
_Bool _if_conditional61;
void* right_value23;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&buf_26, 0, sizeof(struct buffer*));
memset(&class_name_27, 0, sizeof(char*));
memset(&i_28, 0, sizeof(int));
right_value21 = (void*)0;
memset(&gtype_32, 0, sizeof(struct sType*));
right_value22 = (void*)0;
memset(&i_33, 0, sizeof(int));
right_value23 = (void*)0;
    buf_26=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value20=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    class_name_27=type->mClass->mName;
    buffer_append_str(buf_26,class_name_27);
    if(_if_conditional56=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional56) {
        buffer_append_str(buf_26,"<");
        for(        i_28=0;        i_28<list$1sTypeph_length(type->mGenericsTypes);        i_28++        ){
            gtype_32=((struct sType*)(right_value21=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_28)));
            come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_26,((char*)(right_value22=make_come_type_name_string(gtype_32,info))));
            right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional59=i_28!=list$1sTypeph_length(type->mGenericsTypes)-1,            _if_conditional59) {
                buffer_append_str(buf_26,",");
            }
        }
        buffer_append_str(buf_26,">");
    }
    if(_if_conditional60=type->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_27,"lambda"),    _if_conditional60) {
        for(        i_33=0;        i_33<type->mPointerNum;        i_33++        ){
            buffer_append_str(buf_26,"*");
        }
    }
    if(type->mHeap) {
        buffer_append_str(buf_26,"%");
    }
    __result21__ = __result_obj__ = ((char*)(right_value23=buffer_to_string(buf_26)));
    come_call_finalizer2(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
    come_call_finalizer2(buffer_finalize,buf_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional57;
struct list_item$1sTypeph* it_29;
int i_30;
_Bool _while_condtional5;
_Bool _if_conditional58;
struct sType* __result19__;
struct sType* default_value_31;
struct sType* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_29, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_30, 0, sizeof(int));
memset(&default_value_31, 0, sizeof(struct sType*));
                if(_if_conditional57=position<0,                _if_conditional57) {
                    position+=self->len;
                }
                it_29=self->head;
                i_30=0;
                while(_while_condtional5=it_29!=((void*)0),                _while_condtional5) {
                    if(_if_conditional58=position==i_30,                    _if_conditional58) {
                        __result19__ = __result_obj__ = it_29->item;
                        return __result19__;
                    }
                    it_29=it_29->next;
                    i_30++;
                }
                memset(&default_value_31,0,sizeof(struct sType*));
                __result20__ = __result_obj__ = default_value_31;
                come_call_finalizer2(sType_finalize,default_value_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result20__;
                come_call_finalizer2(sType_finalize,default_value_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void show_type(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value24;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
    puts(((char*)(right_value24=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __result_obj__;
void* right_value25;
void* right_value26;
struct buffer* buf_34;
_Bool _if_conditional62;
void* right_value27;
char* __result22__;
_Bool _if_conditional63;
void* right_value28;
int i_35;
struct list$1sTypeph* o2_saved_36;
struct sType* it_37;
void* right_value29;
_Bool _if_conditional64;
void* right_value30;
void* right_value31;
char* __result23__;
void* right_value32;
void* right_value33;
int i_38;
struct list$1sTypeph* o2_saved_39;
struct sType* it_40;
void* right_value34;
_Bool _if_conditional65;
void* right_value35;
char* __result24__;
void* right_value36;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&buf_34, 0, sizeof(struct buffer*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_35, 0, sizeof(int));
memset(&o2_saved_36, 0, sizeof(struct list$1sTypeph*));
memset(&it_37, 0, sizeof(struct sType*));
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&i_38, 0, sizeof(int));
memset(&o2_saved_39, 0, sizeof(struct list$1sTypeph*));
memset(&it_40, 0, sizeof(struct sType*));
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
    buf_34=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional62=type->mResultType==((void*)0),    _if_conditional62) {
        err_msg(info,"invalid lambda type");
        __result22__ = __result_obj__ = ((char*)(right_value27=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result22__;
    }
    if(_if_conditional63=type->mResultType->v1&&string_operator_equals(type->mResultType->v1->mClass->mName,"lambda"),    _if_conditional63) {
        buffer_append_str(buf_34,((char*)(right_value28=xsprintf("(*%s)(",var_name))));
        right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_35=0;
        for(        o2_saved_36=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_37=list$1sTypeph_begin((o2_saved_36));        !list$1sTypeph_end((o2_saved_36));        it_37=list$1sTypeph_next((o2_saved_36))        ){
            buffer_append_str(buf_34,((char*)(right_value29=make_type_name_string(it_37,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional64=i_35!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional64) {
                buffer_append_str(buf_34,",");
            }
            i_35++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_34,")");
        __result23__ = __result_obj__ = ((char*)(right_value31=make_lambda_type_name_string(type->mResultType->v1,((char*)(right_value30=buffer_to_string(buf_34))),info)));
        come_call_finalizer2(buffer_finalize,buf_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result23__;
    }
    else {
        buffer_append_str(buf_34,((char*)(right_value33=xsprintf("%s (*%s)(",((char*)(right_value32=make_type_name_string(type->mResultType->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))),var_name))));
        right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value33 = come_decrement_ref_count2(right_value33, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_38=0;
        for(        o2_saved_39=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_40=list$1sTypeph_begin((o2_saved_39));        !list$1sTypeph_end((o2_saved_39));        it_40=list$1sTypeph_next((o2_saved_39))        ){
            buffer_append_str(buf_34,((char*)(right_value34=make_type_name_string(it_40,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value34 = come_decrement_ref_count2(right_value34, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional65=i_38!=list$1sTypeph_length(type->mParamTypes)-1,            _if_conditional65) {
                buffer_append_str(buf_34,",");
            }
            i_38++;
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_34,")");
        __result24__ = __result_obj__ = ((char*)(right_value35=buffer_to_string(buf_34)));
        come_call_finalizer2(buffer_finalize,buf_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result24__;
    }
    __result25__ = __result_obj__ = ((char*)(right_value36=buffer_to_string(buf_34)));
    come_call_finalizer2(buffer_finalize,buf_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result25__;
    come_call_finalizer2(buffer_finalize,buf_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __result_obj__;
void* right_value37;
void* right_value38;
struct buffer* buf_41;
_Bool _if_conditional66;
void* right_value39;
char* str_42;
_Bool _if_conditional67;
void* right_value40;
char* str_43;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value41;
char* __result26__;
void* right_value42;
struct CVALUE* come_value_44;
void* right_value43;
char* type_str_45;
void* right_value44;
void* right_value45;
_Bool _if_conditional70;
void* right_value46;
_Bool _if_conditional71;
void* right_value47;
_Bool _if_conditional72;
void* right_value48;
char* type_str_46;
_Bool _if_conditional73;
void* right_value49;
_Bool _if_conditional74;
void* right_value50;
char* type_str_47;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list$1sNodeph* o2_saved_48;
struct sNode* it_51;
_Bool _if_conditional81;
void* right_value51;
char* __result34__;
void* right_value52;
struct CVALUE* cvalue_54;
void* right_value53;
_Bool _if_conditional82;
void* right_value54;
void* right_value55;
char* type_str_55;
_Bool _if_conditional83;
void* right_value56;
char* __result35__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value57;
void* right_value58;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&buf_41, 0, sizeof(struct buffer*));
right_value39 = (void*)0;
memset(&str_42, 0, sizeof(char*));
right_value40 = (void*)0;
memset(&str_43, 0, sizeof(char*));
right_value41 = (void*)0;
right_value42 = (void*)0;
memset(&come_value_44, 0, sizeof(struct CVALUE*));
right_value43 = (void*)0;
memset(&type_str_45, 0, sizeof(char*));
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&type_str_46, 0, sizeof(char*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&type_str_47, 0, sizeof(char*));
memset(&o2_saved_48, 0, sizeof(struct list$1sNodeph*));
memset(&it_51, 0, sizeof(struct sNode*));
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&cvalue_54, 0, sizeof(struct CVALUE*));
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&type_str_55, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
    buf_41=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value38=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional66=string_operator_equals(type->mClass->mName,"lambda")&&type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),    _if_conditional66) {
        str_42=(char*)come_increment_ref_count(((char*)(right_value39=header_lambda(type,(char*)come_increment_ref_count(type->mAsmName),info))));
        right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_41,str_42);
        str_42 = come_decrement_ref_count2(str_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional67=string_operator_equals(type->mClass->mName,"lambda"),        _if_conditional67) {
            str_43=(char*)come_increment_ref_count(((char*)(right_value40=make_lambda_type_name_string(type,name,info))));
            right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_41,str_43);
            str_43 = come_decrement_ref_count2(str_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional68=type->mSizeNum!=((void*)0),            _if_conditional68) {
                if(_if_conditional69=!node_compile(type->mSizeNum,info),                _if_conditional69) {
                    err_msg(info,"invalid bit field number");
                    __result26__ = __result_obj__ = ((char*)(right_value41=__builtin_string("")));
                    come_call_finalizer2(buffer_finalize,buf_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result26__;
                }
                come_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value42=get_value_from_stack(-1,info))));
                come_call_finalizer2(CVALUE_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                type_str_45=(char*)come_increment_ref_count(((char*)(right_value43=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_41,((char*)(right_value44=xsprintf("%s ",type_str_45))));
                right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(buf_41,((char*)(right_value45=xsprintf("%s:%s",name,come_value_44->c_value))));
                right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional70=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional70) {
                    buffer_append_str(buf_41,((char*)(right_value46=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional71=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                _if_conditional71) {
                    buffer_append_str(buf_41,((char*)(right_value47=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(CVALUE_finalize,come_value_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_str_45 = come_decrement_ref_count2(type_str_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(type->mOmitArrayNum) {
                    type_str_46=(char*)come_increment_ref_count(((char*)(right_value48=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(buf_41,type_str_46);
                    buffer_append_str(buf_41," ");
                    buffer_append_str(buf_41,name);
                    buffer_append_str(buf_41,"[]");
                    if(_if_conditional73=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                    _if_conditional73) {
                        buffer_append_str(buf_41,((char*)(right_value49=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                        right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    type_str_46 = come_decrement_ref_count2(type_str_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional74=list$1sNodeph_length(type->mArrayNum)>0,                    _if_conditional74) {
                        type_str_47=(char*)come_increment_ref_count(((char*)(right_value50=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(buf_41,type_str_47);
                        buffer_append_str(buf_41," ");
                        if(_if_conditional75=type->mNoArrayPointerNum>0,                        _if_conditional75) {
                            buffer_append_str(buf_41,"(*");
                        }
                        buffer_append_str(buf_41,name);
                        if(_if_conditional76=type->mNoArrayPointerNum>0,                        _if_conditional76) {
                            buffer_append_str(buf_41,")");
                        }
                        for(                        o2_saved_48=(struct list$1sNodeph*)come_increment_ref_count((type->mArrayNum)),it_51=list$1sNodeph_begin((o2_saved_48));                        !list$1sNodeph_end((o2_saved_48));                        it_51=list$1sNodeph_next((o2_saved_48))                        ){
                            if(_if_conditional81=!node_compile(it_51,info),                            _if_conditional81) {
                                err_msg(info,"invalid array number");
                                __result34__ = __result_obj__ = ((char*)(right_value51=__builtin_string("")));
                                come_call_finalizer2(list$1sNodephp_finalize,o2_saved_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_str_47 = come_decrement_ref_count2(type_str_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(buffer_finalize,buf_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                return __result34__;
                            }
                            cvalue_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value52=get_value_from_stack(-1,info))));
                            come_call_finalizer2(CVALUE_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_41,((char*)(right_value53=xsprintf("[%s]",cvalue_54->c_value))));
                            right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(CVALUE_finalize,cvalue_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional82=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional82) {
                            buffer_append_str(buf_41,((char*)(right_value54=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_47 = come_decrement_ref_count2(type_str_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        type_str_55=(char*)come_increment_ref_count(((char*)(right_value55=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))));
                        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional83=string_operator_equals(type_str_55,""),                        _if_conditional83) {
                            __result35__ = __result_obj__ = ((char*)(right_value56=__builtin_string("")));
                            type_str_55 = come_decrement_ref_count2(type_str_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,buf_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            return __result35__;
                        }
                        buffer_append_str(buf_41,type_str_55);
                        buffer_append_str(buf_41," ");
                        if(_if_conditional84=type->mNoArrayPointerNum>0,                        _if_conditional84) {
                            buffer_append_str(buf_41,"(*");
                        }
                        buffer_append_str(buf_41,name);
                        if(_if_conditional85=type->mNoArrayPointerNum>0,                        _if_conditional85) {
                            buffer_append_str(buf_41,")");
                        }
                        if(_if_conditional86=type->mAsmName!=((void*)0)&&string_operator_not_equals(type->mAsmName,""),                        _if_conditional86) {
                            buffer_append_str(buf_41,((char*)(right_value57=xsprintf(" __asm__(\"%s\")",type->mAsmName))));
                            right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        type_str_55 = come_decrement_ref_count2(type_str_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result36__ = __result_obj__ = ((char*)(right_value58=buffer_to_string(buf_41)));
    come_call_finalizer2(buffer_finalize,buf_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
    come_call_finalizer2(buffer_finalize,buf_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional77;
struct sNode* result_49;
struct sNode* __result27__;
_Bool _if_conditional78;
struct sNode* __result28__;
struct sNode* result_50;
struct sNode* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct sNode*));
memset(&result_50, 0, sizeof(struct sNode*));
                            if(_if_conditional77=self==((void*)0),                            _if_conditional77) {
                                memset(&result_49,0,sizeof(struct sNode*));
                                __result27__ = __result_obj__ = result_49;
                                return __result27__;
                            }
                            self->it=self->head;
                            if(self->it) {
                                __result28__ = __result_obj__ = self->it->item;
                                return __result28__;
                            }
                            memset(&result_50,0,sizeof(struct sNode*));
                            __result29__ = __result_obj__ = result_50;
                            return __result29__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result30__ = self==((void*)0)||self->it==((void*)0);
                            return __result30__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct sNode* result_52;
struct sNode* __result31__;
_Bool _if_conditional80;
struct sNode* __result32__;
struct sNode* result_53;
struct sNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_52, 0, sizeof(struct sNode*));
memset(&result_53, 0, sizeof(struct sNode*));
                            if(_if_conditional79=self==((void*)0)||self->it==((void*)0),                            _if_conditional79) {
                                memset(&result_52,0,sizeof(struct sNode*));
                                __result31__ = __result_obj__ = result_52;
                                return __result31__;
                            }
                            self->it=self->it->next;
                            if(self->it) {
                                __result32__ = __result_obj__ = self->it->item;
                                return __result32__;
                            }
                            memset(&result_53,0,sizeof(struct sNode*));
                            __result33__ = __result_obj__ = result_53;
                            return __result33__;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value59;
void* right_value60;
struct buffer* output_56;
_Bool _if_conditional87;
void* right_value61;
void* right_value62;
struct buffer* output2_57;
int i_58;
struct list$1sTypeph* o2_saved_59;
struct sType* it_60;
void* right_value63;
char* name_64;
void* right_value64;
char* str_65;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value65;
void* right_value66;
char* str_66;
void* right_value67;
_Bool _if_conditional92;
void* right_value102;
struct sType* base_result_type_85;
void* right_value103;
void* right_value104;
struct list$1sNodeph* __dec_obj28;
void* right_value105;
char* result_type_str_86;
int i_87;
struct list$1sTypeph* o2_saved_88;
struct sType* it_89;
void* right_value106;
char* name_90;
void* right_value107;
char* str_91;
_Bool _if_conditional163;
_Bool _if_conditional164;
void* right_value108;
struct sNode* node_95;
_Bool _if_conditional167;
void* right_value109;
char* __result59__;
void* right_value110;
struct CVALUE* cvalue_96;
void* right_value111;
void* right_value112;
void* right_value113;
char* result_type_str_97;
int i_98;
struct list$1sTypeph* o2_saved_99;
struct sType* it_100;
void* right_value114;
char* name_101;
void* right_value115;
char* str_102;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value116;
void* right_value117;
void* right_value118;
void* right_value119;
void* right_value120;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&output_56, 0, sizeof(struct buffer*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&output2_57, 0, sizeof(struct buffer*));
memset(&i_58, 0, sizeof(int));
memset(&o2_saved_59, 0, sizeof(struct list$1sTypeph*));
memset(&it_60, 0, sizeof(struct sType*));
right_value63 = (void*)0;
memset(&name_64, 0, sizeof(char*));
right_value64 = (void*)0;
memset(&str_65, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&str_66, 0, sizeof(char*));
right_value67 = (void*)0;
right_value102 = (void*)0;
memset(&base_result_type_85, 0, sizeof(struct sType*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_type_str_86, 0, sizeof(char*));
memset(&i_87, 0, sizeof(int));
memset(&o2_saved_88, 0, sizeof(struct list$1sTypeph*));
memset(&it_89, 0, sizeof(struct sType*));
right_value106 = (void*)0;
memset(&name_90, 0, sizeof(char*));
right_value107 = (void*)0;
memset(&str_91, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&node_95, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&cvalue_96, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_type_str_97, 0, sizeof(char*));
memset(&i_98, 0, sizeof(int));
memset(&o2_saved_99, 0, sizeof(struct list$1sTypeph*));
memset(&it_100, 0, sizeof(struct sType*));
right_value114 = (void*)0;
memset(&name_101, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&str_102, 0, sizeof(char*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
    output_56=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value60=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value59=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_57=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value62=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value61=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_57,fun->mName);
        buffer_append_str(output2_57,"(");
        i_58=0;
        for(        o2_saved_59=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_60=list$1sTypeph_begin((o2_saved_59));        !list$1sTypeph_end((o2_saved_59));        it_60=list$1sTypeph_next((o2_saved_59))        ){
            name_64=((char*)(right_value63=list$1charphp_operator_load_element(fun->mParamNames,i_58)));
            right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_65=(char*)come_increment_ref_count(((char*)(right_value64=make_define_var(it_60,name_64,(_Bool)0,info))));
            right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_57,str_65);
            if(_if_conditional90=i_58==list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional90) {
                if(fun->mVarArgs) {
                    buffer_append_str(output2_57,", ...");
                }
            }
            else {
                buffer_append_str(output2_57,", ");
            }
            i_58++;
            str_65 = come_decrement_ref_count2(str_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_57,")");
        str_66=(char*)come_increment_ref_count(((char*)(right_value66=make_lambda_type_name_string(fun->mResultType,((char*)(right_value65=buffer_to_string(output2_57))),info))));
        right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_56,str_66);
        buffer_append_str(info->module->mSourceHead,((char*)(right_value67=buffer_to_string(output_56))));
        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(info->module->mSourceHead,";\n");
        come_call_finalizer2(buffer_finalize,output2_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_66 = come_decrement_ref_count2(str_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional92=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional92) {
            base_result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value102=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj28=base_result_type_85->mArrayNum;
            base_result_type_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379, "struct list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_86=(char*)come_increment_ref_count(((char*)(right_value105=make_type_name_string(base_result_type_85,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_56,result_type_str_86);
            buffer_append_str(output_56," (*");
            buffer_append_str(output_56,fun->mName);
            buffer_append_str(output_56,"(");
            i_87=0;
            for(            o2_saved_88=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_89=list$1sTypeph_begin((o2_saved_88));            !list$1sTypeph_end((o2_saved_88));            it_89=list$1sTypeph_next((o2_saved_88))            ){
                name_90=((char*)(right_value106=list$1charphp_operator_load_element(fun->mParamNames,i_87)));
                right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                str_91=(char*)come_increment_ref_count(((char*)(right_value107=make_define_var(it_89,name_90,(_Bool)0,info))));
                right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_56,str_91);
                if(_if_conditional163=i_87==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional163) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_56,", ...");
                    }
                }
                else {
                    buffer_append_str(output_56,", ");
                }
                i_87++;
                str_91 = come_decrement_ref_count2(str_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_95=((struct sNode*)(right_value108=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
            if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional167=!node_compile(node_95,info),            _if_conditional167) {
                err_msg(info,"invalid array number");
                __result59__ = __result_obj__ = ((char*)(right_value109=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_86 = come_decrement_ref_count2(result_type_str_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result59__;
            }
            cvalue_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_56,((char*)(right_value111=xsprintf("))[%s]",cvalue_96->c_value))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,((char*)(right_value112=buffer_to_string(output_56))));
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            come_call_finalizer2(sType_finalize,base_result_type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_86 = come_decrement_ref_count2(result_type_str_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_97=(char*)come_increment_ref_count(((char*)(right_value113=make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))));
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_56,result_type_str_97);
            buffer_append_str(output_56," ");
            buffer_append_str(output_56,fun->mName);
            buffer_append_str(output_56,"(");
            i_98=0;
            for(            o2_saved_99=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_100=list$1sTypeph_begin((o2_saved_99));            !list$1sTypeph_end((o2_saved_99));            it_100=list$1sTypeph_next((o2_saved_99))            ){
                name_101=((char*)(right_value114=list$1charphp_operator_load_element(fun->mParamNames,i_98)));
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                str_102=(char*)come_increment_ref_count(((char*)(right_value115=make_define_var(it_100,name_101,(_Bool)0,info))));
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_56,str_102);
                if(_if_conditional168=i_98==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional168) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_56,", ...");
                    }
                }
                else {
                    buffer_append_str(output_56,", ");
                }
                i_98++;
                str_102 = come_decrement_ref_count2(str_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_56,")");
            buffer_append_str(info->module->mSourceHead,((char*)(right_value116=buffer_to_string(output_56))));
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(info->module->mSourceHead,";\n");
            result_type_str_97 = come_decrement_ref_count2(result_type_str_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(output_56,"{\n");
    buffer_append_str(output_56,((char*)(right_value117=buffer_to_string(fun->mSourceHead))));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_56,((char*)(right_value118=buffer_to_string(fun->mSourceHead2))));
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_56,((char*)(right_value119=buffer_to_string(fun->mSource))));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_56,"}\n");
    __result60__ = __result_obj__ = ((char*)(right_value120=buffer_to_string(output_56)));
    come_call_finalizer2(buffer_finalize,output_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
    come_call_finalizer2(buffer_finalize,output_56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional88;
struct list_item$1charph* it_61;
int i_62;
_Bool _while_condtional6;
_Bool _if_conditional89;
char* __result37__;
char* default_value_63;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1charph*));
memset(&i_62, 0, sizeof(int));
memset(&default_value_63, 0, sizeof(char*));
                if(_if_conditional88=position<0,                _if_conditional88) {
                    position+=self->len;
                }
                it_61=self->head;
                i_62=0;
                while(_while_condtional6=it_61!=((void*)0),                _while_condtional6) {
                    if(_if_conditional89=position==i_62,                    _if_conditional89) {
                        __result37__ = __result_obj__ = it_61->item;
                        return __result37__;
                    }
                    it_61=it_61->next;
                    i_62++;
                }
                memset(&default_value_63,0,sizeof(char*));
                __result38__ = __result_obj__ = default_value_63;
                default_value_63 = come_decrement_ref_count2(default_value_63, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result38__;
                default_value_63 = come_decrement_ref_count2(default_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional93;
struct sType* __result39__;
void* right_value68;
struct sType* result_67;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value71;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional99;
void* right_value72;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional100;
void* right_value73;
char* __dec_obj9;
_Bool _if_conditional101;
void* right_value80;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional105;
void* right_value88;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value89;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional120;
void* right_value96;
struct list$1charph* __dec_obj22;
_Bool _if_conditional124;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value98;
struct sNode* __dec_obj24;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
void* right_value99;
struct sNode* __dec_obj25;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value100;
char* __dec_obj26;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value101;
char* __dec_obj27;
struct sType* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&result_67, 0, sizeof(struct sType*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value80 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
                if(_if_conditional93=self==(void*)0,                _if_conditional93) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_67->mClass=self->mClass;
                }
                if(_if_conditional95=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional95) {
                    __dec_obj7=result_67->mNoSolvedGenericsType;
                    result_67->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value71=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional99=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional99) {
                    __dec_obj8=result_67->mOriginalLoadVarType;
                    result_67->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional100=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional100) {
                    __dec_obj9=result_67->mGenericsName;
                    result_67->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(self->mGenericsName))));
                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional101=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional101) {
                    __dec_obj13=result_67->mGenericsTypes;
                    result_67->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional105=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional105) {
                    __dec_obj17=result_67->mArrayNum;
                    result_67->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value88=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_67->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional119=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional119) {
                    __dec_obj18=result_67->mParamTypes;
                    result_67->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional120=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional120) {
                    __dec_obj22=result_67->mParamNames;
                    result_67->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional124) {
                    __dec_obj23=result_67->mResultType;
                    result_67->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    result_67->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional126=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional126) {
                    __dec_obj24=result_67->mAlignas;
                    result_67->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=sNode_clone(self->mAlignas))));
                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    result_67->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    result_67->mShort=self->mShort;
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    result_67->mLong=self->mLong;
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    result_67->mLongLong=self->mLongLong;
                }
                if(_if_conditional131=self!=((void*)0),                _if_conditional131) {
                    result_67->mConstant=self->mConstant;
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    result_67->mRegister=self->mRegister;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    result_67->mVolatile=self->mVolatile;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    result_67->mStatic=self->mStatic;
                }
                if(_if_conditional135=self!=((void*)0),                _if_conditional135) {
                    result_67->mExtern=self->mExtern;
                }
                if(_if_conditional136=self!=((void*)0),                _if_conditional136) {
                    result_67->mRestrict=self->mRestrict;
                }
                if(_if_conditional137=self!=((void*)0),                _if_conditional137) {
                    result_67->mImmutable=self->mImmutable;
                }
                if(_if_conditional138=self!=((void*)0),                _if_conditional138) {
                    result_67->mHeap=self->mHeap;
                }
                if(_if_conditional139=self!=((void*)0),                _if_conditional139) {
                    result_67->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional140=self!=((void*)0),                _if_conditional140) {
                    result_67->mDelegate=self->mDelegate;
                }
                if(_if_conditional141=self!=((void*)0),                _if_conditional141) {
                    result_67->mShare=self->mShare;
                }
                if(_if_conditional142=self!=((void*)0),                _if_conditional142) {
                    result_67->mClone=self->mClone;
                }
                if(_if_conditional143=self!=((void*)0),                _if_conditional143) {
                    result_67->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional144=self!=((void*)0),                _if_conditional144) {
                    result_67->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional145=self!=((void*)0),                _if_conditional145) {
                    result_67->mRefference=self->mRefference;
                }
                if(_if_conditional146=self!=((void*)0),                _if_conditional146) {
                    result_67->mException=self->mException;
                }
                if(_if_conditional147=self!=((void*)0),                _if_conditional147) {
                    result_67->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional148=self!=((void*)0),                _if_conditional148) {
                    result_67->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional149=self!=((void*)0),                _if_conditional149) {
                    result_67->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional150=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional150) {
                    __dec_obj25=result_67->mSizeNum;
                    result_67->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(self->mSizeNum))));
                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional151=self!=((void*)0),                _if_conditional151) {
                    result_67->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional152=self!=((void*)0),                _if_conditional152) {
                    result_67->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional153=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional153) {
                    __dec_obj26=result_67->mOriginalTypeName;
                    result_67->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->mOriginalTypeName))));
                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional154=self!=((void*)0),                _if_conditional154) {
                    result_67->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional155=self!=((void*)0),                _if_conditional155) {
                    result_67->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional156=self!=((void*)0),                _if_conditional156) {
                    result_67->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional157=self!=((void*)0),                _if_conditional157) {
                    result_67->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional158=self!=((void*)0),                _if_conditional158) {
                    result_67->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional159=self!=((void*)0),                _if_conditional159) {
                    result_67->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional160=self!=((void*)0),                _if_conditional160) {
                    result_67->mInline=self->mInline;
                }
                if(_if_conditional161=self!=((void*)0),                _if_conditional161) {
                    result_67->mNullValue=self->mNullValue;
                }
                if(_if_conditional162=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional162) {
                    __dec_obj27=result_67->mAsmName;
                    result_67->mAsmName=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(self->mAsmName))));
                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result56__ = __result_obj__ = result_67;
                come_call_finalizer2(sType_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer2(sType_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional96;
struct tuple1$1sTypeph* __result40__;
void* right_value69;
struct tuple1$1sTypeph* result_68;
_Bool _if_conditional98;
void* right_value70;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
memset(&result_68, 0, sizeof(struct tuple1$1sTypeph*));
right_value70 = (void*)0;
                        if(_if_conditional96=self==(void*)0,                        _if_conditional96) {
                            __result40__ = __result_obj__ = (void*)0;
                            return __result40__;
                        }
                        result_68=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value69=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional98=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional98) {
                            __dec_obj6=result_68->v1;
                            result_68->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result41__ = __result_obj__ = result_68;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result41__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional97=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct list$1sTypeph* __result42__;
void* right_value74;
void* right_value75;
struct list$1sTypeph* result_69;
struct list_item$1sTypeph* it_70;
_Bool _while_condtional7;
void* right_value79;
struct list$1sTypeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
right_value75 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1sTypeph*));
memset(&it_70, 0, sizeof(struct list_item$1sTypeph*));
right_value79 = (void*)0;
                        if(_if_conditional102=self==((void*)0),                        _if_conditional102) {
                            __result42__ = __result_obj__ = ((void*)0);
                            return __result42__;
                        }
                        result_69=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value75=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_70=self->head;
                        while(_while_condtional7=it_70!=((void*)0),                        _while_condtional7) {
                            list$1sTypeph_add(result_69,(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(it_70->item)))));
                            come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_70=it_70->next;
                        }
                        __result45__ = __result_obj__ = result_69;
                        come_call_finalizer2(list$1sTypephp_finalize,result_69, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result45__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result43__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result43__;
                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional103;
void* right_value76;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj10;
_Bool _if_conditional104;
void* right_value77;
struct list_item$1sTypeph* litem_72;
struct sType* __dec_obj11;
void* right_value78;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj12;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
right_value77 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sTypeph*));
right_value78 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional103=self->len==0,                                _if_conditional103) {
                                    litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value76=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_71->prev=((void*)0);
                                    litem_71->next=((void*)0);
                                    __dec_obj10=litem_71->item;
                                    litem_71->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_71;
                                    self->head=litem_71;
                                }
                                else {
                                    if(_if_conditional104=self->len==1,                                    _if_conditional104) {
                                        litem_72=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value77=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_72->prev=self->head;
                                        litem_72->next=((void*)0);
                                        __dec_obj11=litem_72->item;
                                        litem_72->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_72;
                                        self->head->next=litem_72;
                                    }
                                    else {
                                        litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value78=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_73->prev=self->tail;
                                        litem_73->next=((void*)0);
                                        __dec_obj12=litem_73->item;
                                        litem_73->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_73;
                                        self->tail=litem_73;
                                    }
                                }
                                self->len++;
                                __result44__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result44__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional106;
struct list$1sNodeph* __result46__;
void* right_value81;
void* right_value82;
struct list$1sNodeph* result_74;
struct list_item$1sNodeph* it_75;
_Bool _while_condtional8;
void* right_value87;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_74, 0, sizeof(struct list$1sNodeph*));
memset(&it_75, 0, sizeof(struct list_item$1sNodeph*));
right_value87 = (void*)0;
                        if(_if_conditional106=self==((void*)0),                        _if_conditional106) {
                            __result46__ = __result_obj__ = ((void*)0);
                            return __result46__;
                        }
                        result_74=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value82=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_75=self->head;
                        while(_while_condtional8=it_75!=((void*)0),                        _while_condtional8) {
                            list$1sNodeph_add(result_74,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value87=sNode_clone(it_75->item)))));
                            if(right_value87) { right_value87 = come_decrement_ref_count2(right_value87, ((struct sNode*)right_value87)->finalize, ((struct sNode*)right_value87)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_75=it_75->next;
                        }
                        __result51__ = __result_obj__ = result_74;
                        come_call_finalizer2(list$1sNodephp_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result51__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result47__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result47__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional107;
void* right_value83;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj14;
_Bool _if_conditional108;
void* right_value84;
struct list_item$1sNodeph* litem_77;
struct sNode* __dec_obj15;
void* right_value85;
struct list_item$1sNodeph* litem_78;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
right_value84 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sNodeph*));
right_value85 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional107=self->len==0,                                _if_conditional107) {
                                    litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value83=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_76->prev=((void*)0);
                                    litem_76->next=((void*)0);
                                    __dec_obj14=litem_76->item;
                                    litem_76->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_76;
                                    self->head=litem_76;
                                }
                                else {
                                    if(_if_conditional108=self->len==1,                                    _if_conditional108) {
                                        litem_77=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value84=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_77->prev=self->head;
                                        litem_77->next=((void*)0);
                                        __dec_obj15=litem_77->item;
                                        litem_77->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_77;
                                        self->head->next=litem_77;
                                    }
                                    else {
                                        litem_78=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value85=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_78->prev=self->tail;
                                        litem_78->next=((void*)0);
                                        __dec_obj16=litem_78->item;
                                        litem_78->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_78;
                                        self->tail=litem_78;
                                    }
                                }
                                self->len++;
                                __result48__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result48__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional109;
struct sNode* __result49__;
void* right_value86;
struct sNode* result_79;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_79, 0, sizeof(struct sNode*));
                                if(_if_conditional109=self==(void*)0,                                _if_conditional109) {
                                    __result49__ = __result_obj__ = (void*)0;
                                    return __result49__;
                                }
                                result_79=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value86=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value86) { right_value86 = come_decrement_ref_count2(right_value86, ((struct sNode*)right_value86)->finalize, ((struct sNode*)right_value86)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional110=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional110) {
                                    result_79->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    result_79->finalize=self->finalize;
                                }
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    result_79->clone=self->clone;
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_79->compile=self->compile;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_79->sline=self->sline;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_79->sname=self->sname;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_79->terminated=self->terminated;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_79->kind=self->kind;
                                }
                                __result50__ = __result_obj__ = result_79;
                                if(result_79) { result_79 = come_decrement_ref_count2(result_79, ((struct sNode*)result_79)->finalize, ((struct sNode*)result_79)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result50__;
                                if(result_79) { result_79 = come_decrement_ref_count2(result_79, ((struct sNode*)result_79)->finalize, ((struct sNode*)result_79)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional121;
struct list$1charph* __result52__;
void* right_value90;
void* right_value91;
struct list$1charph* result_80;
struct list_item$1charph* it_81;
_Bool _while_condtional9;
void* right_value95;
struct list$1charph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_80, 0, sizeof(struct list$1charph*));
memset(&it_81, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
                        if(_if_conditional121=self==((void*)0),                        _if_conditional121) {
                            __result52__ = __result_obj__ = ((void*)0);
                            return __result52__;
                        }
                        result_80=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_81=self->head;
                        while(_while_condtional9=it_81!=((void*)0),                        _while_condtional9) {
                            list$1charph_add(result_80,(char*)come_increment_ref_count(((char*)(right_value95=string_clone(it_81->item)))));
                            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_81=it_81->next;
                        }
                        __result55__ = __result_obj__ = result_80;
                        come_call_finalizer2(list$1charphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer2(list$1charphp_finalize,result_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result53__ = __result_obj__ = self;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result53__;
                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional122;
void* right_value92;
struct list_item$1charph* litem_82;
char* __dec_obj19;
_Bool _if_conditional123;
void* right_value93;
struct list_item$1charph* litem_83;
char* __dec_obj20;
void* right_value94;
struct list_item$1charph* litem_84;
char* __dec_obj21;
struct list$1charph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
right_value93 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
right_value94 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional122=self->len==0,                                _if_conditional122) {
                                    litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_82->prev=((void*)0);
                                    litem_82->next=((void*)0);
                                    __dec_obj19=litem_82->item;
                                    litem_82->item=(char*)come_increment_ref_count(item);
                                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_82;
                                    self->head=litem_82;
                                }
                                else {
                                    if(_if_conditional123=self->len==1,                                    _if_conditional123) {
                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_83->prev=self->head;
                                        litem_83->next=((void*)0);
                                        __dec_obj20=litem_83->item;
                                        litem_83->item=(char*)come_increment_ref_count(item);
                                        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_83;
                                        self->head->next=litem_83;
                                    }
                                    else {
                                        litem_84=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_84->prev=self->tail;
                                        litem_84->next=((void*)0);
                                        __dec_obj21=litem_84->item;
                                        litem_84->item=(char*)come_increment_ref_count(item);
                                        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_84;
                                        self->tail=litem_84;
                                    }
                                }
                                self->len++;
                                __result54__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result54__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional165;
struct list_item$1sNodeph* it_92;
int i_93;
_Bool _while_condtional10;
_Bool _if_conditional166;
struct sNode* __result57__;
struct sNode* default_value_94;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_92, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_93, 0, sizeof(int));
memset(&default_value_94, 0, sizeof(struct sNode*));
                if(_if_conditional165=position<0,                _if_conditional165) {
                    position+=self->len;
                }
                it_92=self->head;
                i_93=0;
                while(_while_condtional10=it_92!=((void*)0),                _while_condtional10) {
                    if(_if_conditional166=position==i_93,                    _if_conditional166) {
                        __result57__ = __result_obj__ = it_92->item;
                        return __result57__;
                    }
                    it_92=it_92->next;
                    i_93++;
                }
                memset(&default_value_94,0,sizeof(struct sNode*));
                __result58__ = __result_obj__ = default_value_94;
                if(default_value_94) { default_value_94 = come_decrement_ref_count2(default_value_94, ((struct sNode*)default_value_94)->finalize, ((struct sNode*)default_value_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result58__;
                if(default_value_94) { default_value_94 = come_decrement_ref_count2(default_value_94, ((struct sNode*)default_value_94)->finalize, ((struct sNode*)default_value_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value121;
void* right_value122;
struct buffer* output_103;
_Bool _if_conditional170;
void* right_value123;
void* right_value124;
struct buffer* output2_104;
int i_105;
struct list$1sTypeph* o2_saved_106;
struct sType* it_107;
void* right_value125;
char* name_108;
void* right_value126;
char* str_109;
_Bool _if_conditional171;
void* right_value127;
void* right_value128;
char* str_110;
_Bool _if_conditional172;
void* right_value129;
struct sType* base_result_type_111;
void* right_value130;
void* right_value131;
struct list$1sNodeph* __dec_obj29;
void* right_value132;
char* result_type_str_112;
int i_113;
struct list$1sTypeph* o2_saved_114;
struct sType* it_115;
void* right_value133;
char* name_116;
void* right_value134;
char* str_117;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value135;
struct sNode* node_118;
_Bool _if_conditional175;
void* right_value136;
char* __result61__;
void* right_value137;
struct CVALUE* cvalue_119;
void* right_value138;
void* right_value139;
char* result_type_str_120;
int i_121;
struct list$1sTypeph* o2_saved_122;
struct sType* it_123;
void* right_value140;
char* name_124;
void* right_value141;
char* str_125;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value142;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&output_103, 0, sizeof(struct buffer*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&output2_104, 0, sizeof(struct buffer*));
memset(&i_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1sTypeph*));
memset(&it_107, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&name_108, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&str_109, 0, sizeof(char*));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&str_110, 0, sizeof(char*));
right_value129 = (void*)0;
memset(&base_result_type_111, 0, sizeof(struct sType*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&result_type_str_112, 0, sizeof(char*));
memset(&i_113, 0, sizeof(int));
memset(&o2_saved_114, 0, sizeof(struct list$1sTypeph*));
memset(&it_115, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&name_116, 0, sizeof(char*));
right_value134 = (void*)0;
memset(&str_117, 0, sizeof(char*));
right_value135 = (void*)0;
memset(&node_118, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&cvalue_119, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_type_str_120, 0, sizeof(char*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1sTypeph*));
memset(&it_123, 0, sizeof(struct sType*));
right_value140 = (void*)0;
memset(&name_124, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&str_125, 0, sizeof(char*));
right_value142 = (void*)0;
    output_103=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value122=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(fun->mResultType->mResultType) {
        output2_104=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value124=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value123=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(output2_104,fun->mName);
        buffer_append_str(output2_104,"(");
        i_105=0;
        for(        o2_saved_106=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_107=list$1sTypeph_begin((o2_saved_106));        !list$1sTypeph_end((o2_saved_106));        it_107=list$1sTypeph_next((o2_saved_106))        ){
            name_108=((char*)(right_value125=list$1charphp_operator_load_element(fun->mParamNames,i_105)));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            str_109=(char*)come_increment_ref_count(((char*)(right_value126=make_define_var(it_107,name_108,(_Bool)0,info))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output2_104,str_109);
            if(_if_conditional171=i_105!=list$1sTypeph_length(fun->mParamTypes)-1,            _if_conditional171) {
                buffer_append_str(output2_104,", ");
            }
            i_105++;
            str_109 = come_decrement_ref_count2(str_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(output2_104,")");
        str_110=(char*)come_increment_ref_count(((char*)(right_value128=make_lambda_type_name_string(fun->mResultType,((char*)(right_value127=buffer_to_string(output2_104))),info))));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_103,str_110);
        buffer_append_str(output_103,";\n");
        come_call_finalizer2(buffer_finalize,output2_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional172=list$1sNodeph_length(fun->mResultType->mArrayNum)>0,        _if_conditional172) {
            base_result_type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=sType_clone(fun->mResultType))));
            come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj29=base_result_type_111->mArrayNum;
            base_result_type_111->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value131=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value130=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497, "struct list$1sNodeph"))))))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            result_type_str_112=(char*)come_increment_ref_count(((char*)(right_value132=make_type_name_string(base_result_type_111,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_103,result_type_str_112);
            buffer_append_str(output_103," (*");
            buffer_append_str(output_103,fun->mName);
            buffer_append_str(output_103,"(");
            i_113=0;
            for(            o2_saved_114=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_115=list$1sTypeph_begin((o2_saved_114));            !list$1sTypeph_end((o2_saved_114));            it_115=list$1sTypeph_next((o2_saved_114))            ){
                name_116=((char*)(right_value133=list$1charphp_operator_load_element(fun->mParamNames,i_113)));
                right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                str_117=(char*)come_increment_ref_count(((char*)(right_value134=make_define_var(it_115,name_116,(_Bool)0,info))));
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_103,str_117);
                if(_if_conditional173=i_113==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional173) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_103,", ...");
                    }
                }
                else {
                    buffer_append_str(output_103,", ");
                }
                i_113++;
                str_117 = come_decrement_ref_count2(str_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            node_118=((struct sNode*)(right_value135=list$1sNodephp_operator_load_element(fun->mResultType->mArrayNum,0)));
            if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional175=!node_compile(node_118,info),            _if_conditional175) {
                err_msg(info,"invalid array number");
                __result61__ = __result_obj__ = ((char*)(right_value136=__builtin_string("")));
                come_call_finalizer2(sType_finalize,base_result_type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_type_str_112 = come_decrement_ref_count2(result_type_str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result61__;
            }
            cvalue_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            buffer_append_str(output_103,((char*)(right_value138=xsprintf("))[%s];\n",cvalue_119->c_value))));
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,base_result_type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            result_type_str_112 = come_decrement_ref_count2(result_type_str_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,cvalue_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_type_str_120=(char*)come_increment_ref_count(((char*)(right_value139=make_type_name_string(fun->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(output_103,result_type_str_120);
            buffer_append_str(output_103," ");
            buffer_append_str(output_103,fun->mName);
            buffer_append_str(output_103,"(");
            i_121=0;
            for(            o2_saved_122=(struct list$1sTypeph*)come_increment_ref_count((fun->mParamTypes)),it_123=list$1sTypeph_begin((o2_saved_122));            !list$1sTypeph_end((o2_saved_122));            it_123=list$1sTypeph_next((o2_saved_122))            ){
                name_124=((char*)(right_value140=list$1charphp_operator_load_element(fun->mParamNames,i_121)));
                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                str_125=(char*)come_increment_ref_count(((char*)(right_value141=make_define_var(it_123,name_124,(_Bool)0,info))));
                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(output_103,str_125);
                if(_if_conditional176=i_121==list$1sTypeph_length(fun->mParamTypes)-1,                _if_conditional176) {
                    if(fun->mVarArgs) {
                        buffer_append_str(output_103,", ...");
                    }
                }
                else {
                    buffer_append_str(output_103,", ");
                }
                i_121++;
                str_125 = come_decrement_ref_count2(str_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            buffer_append_str(output_103,");\n");
            result_type_str_120 = come_decrement_ref_count2(result_type_str_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result62__ = __result_obj__ = ((char*)(right_value142=buffer_to_string(output_103)));
    come_call_finalizer2(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
    come_call_finalizer2(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value143;
void* right_value144;
struct buffer* output_126;
void* right_value145;
char* result_type_str_127;
int i_128;
struct list$1sTypeph* o2_saved_129;
struct sType* it_130;
void* right_value146;
char* name_131;
void* right_value147;
char* str_132;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value148;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&output_126, 0, sizeof(struct buffer*));
right_value145 = (void*)0;
memset(&result_type_str_127, 0, sizeof(char*));
memset(&i_128, 0, sizeof(int));
memset(&o2_saved_129, 0, sizeof(struct list$1sTypeph*));
memset(&it_130, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&name_131, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&str_132, 0, sizeof(char*));
right_value148 = (void*)0;
    output_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value144=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    result_type_str_127=(char*)come_increment_ref_count(((char*)(right_value145=make_type_name_string(lambda_type->mResultType->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buffer_append_str(output_126,result_type_str_127);
    buffer_append_str(output_126," ");
    buffer_append_str(output_126,name);
    buffer_append_str(output_126,"(");
    i_128=0;
    for(    o2_saved_129=(struct list$1sTypeph*)come_increment_ref_count((lambda_type->mParamTypes)),it_130=list$1sTypeph_begin((o2_saved_129));    !list$1sTypeph_end((o2_saved_129));    it_130=list$1sTypeph_next((o2_saved_129))    ){
        name_131=((char*)(right_value146=list$1charphp_operator_load_element(lambda_type->mParamNames,i_128)));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        str_132=(char*)come_increment_ref_count(((char*)(right_value147=make_define_var(it_130,name_131,(_Bool)0,info))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(output_126,str_132);
        if(_if_conditional178=i_128==list$1sTypeph_length(lambda_type->mParamTypes)-1,        _if_conditional178) {
            if(lambda_type->mVarArgs) {
                buffer_append_str(output_126,", ...");
            }
        }
        else {
            buffer_append_str(output_126,", ");
        }
        i_128++;
        str_132 = come_decrement_ref_count2(str_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(output_126,");\n");
    __result63__ = __result_obj__ = ((char*)(right_value148=buffer_to_string(output_126)));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_127 = come_decrement_ref_count2(result_type_str_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,output_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_type_str_127 = come_decrement_ref_count2(result_type_str_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional180;
char* msg2_133;
va_list args_134;
int len_135;
_Bool _if_conditional181;
int i_136;
void* right_value149;
void* right_value150;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_133, 0, sizeof(char*));
memset(&args_134, 0, sizeof(va_list));
memset(&len_135, 0, sizeof(int));
memset(&i_136, 0, sizeof(int));
right_value149 = (void*)0;
right_value150 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_134,msg);
    len_135=vasprintf(&msg2_133,msg,args_134);
    __builtin_va_end(args_134);
    if(info->come_fun) {
        for(        i_136=0;        i_136<info->block_level;        i_136++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(right_value149=xsprintf("%s",msg2_133))));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(right_value150=xsprintf("%s",msg2_133))));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    free(msg2_133);
}

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional182;
char* msg2_137;
va_list args_138;
int len_139;
void* right_value151;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_137, 0, sizeof(char*));
memset(&args_138, 0, sizeof(va_list));
memset(&len_139, 0, sizeof(int));
right_value151 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_138,msg);
    len_139=vasprintf(&msg2_137,msg,args_138);
    __builtin_va_end(args_138);
    buffer_append_str(info->module->mSourceHead,((char*)(right_value151=xsprintf("%s",msg2_137))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_137);
}

int transpile_v3(struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* name_140;
void* right_value153;
void* right_value154;
struct sType* result_type_141;
void* right_value155;
void* right_value156;
void* right_value157;
void* right_value158;
struct sType* __list_values1___142[2];
void* right_value162;
void* right_value163;
struct list$1sTypeph* param_types_147;
void* right_value164;
void* right_value165;
char* __list_values2___148[2];
void* right_value169;
void* right_value170;
struct list$1charph* param_names_153;
void* right_value171;
void* right_value172;
struct list$1charph* param_default_parametors_154;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
struct sFun* main_fun_155;
void* right_value185;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&name_140, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result_type_141, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&param_types_147, 0, sizeof(struct list$1sTypeph*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&param_names_153, 0, sizeof(struct list$1charph*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&param_default_parametors_154, 0, sizeof(struct list$1charph*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&main_fun_155, 0, sizeof(struct sFun*));
right_value185 = (void*)0;
    name_140=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("main"))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651, "struct sType")))),"int",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values1___142[0]=come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___142[1]=come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652, "struct sType")))),"char**",(_Bool)0,info))));
}    param_types_147=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value163=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value162=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652, "struct list$1sTypeph")))),2,__list_values1___142))));
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypeph_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    {__list_values2___148[0]=come_increment_ref_count(((char*)(right_value164=__builtin_string("argc"))));
__list_values2___148[1]=come_increment_ref_count(((char*)(right_value165=__builtin_string("argv"))));
}    param_names_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value170=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value169=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653, "struct list$1charph")))),2,__list_values2___148))));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charph_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_154=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value172=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value171=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    main_fun_155=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value176=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value173=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 655, "struct sFun")))),(char*)come_increment_ref_count(name_140),(struct sType*)come_increment_ref_count(result_type_141),(struct list$1sTypeph*)come_increment_ref_count(param_types_147),(struct list$1charph*)come_increment_ref_count(param_names_153),(struct list$1charph*)come_increment_ref_count(param_default_parametors_154),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(name_140)))),(struct sFun*)come_increment_ref_count(main_fun_155));
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"#include <stdio.h>\n");
    info->come_fun=main_fun_155;
    info->block_level++;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    add_come_code(info,"return 0;\n");
    info->block_level--;
    __result92__ = 0;
    name_140 = come_decrement_ref_count2(name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result92__;
    name_140 = come_decrement_ref_count2(name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,main_fun_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_143;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_143, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_143=0;        i_143<num_value;        i_143++        ){
            list$1sTypeph_push_back(self,values[i_143]);
        }
        __result65__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result65__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value159;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj30;
_Bool _if_conditional184;
void* right_value160;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj31;
void* right_value161;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj32;
struct list$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
right_value160 = (void*)0;
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
right_value161 = (void*)0;
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional183=self->len==0,                _if_conditional183) {
                    litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value159=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_144->prev=((void*)0);
                    litem_144->next=((void*)0);
                    __dec_obj30=litem_144->item;
                    litem_144->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_144;
                    self->head=litem_144;
                }
                else {
                    if(_if_conditional184=self->len==1,                    _if_conditional184) {
                        litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value160=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_145->prev=self->head;
                        litem_145->next=((void*)0);
                        __dec_obj31=litem_145->item;
                        litem_145->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_145;
                        self->head->next=litem_145;
                    }
                    else {
                        litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value161=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_146->prev=self->tail;
                        litem_146->next=((void*)0);
                        __dec_obj32=litem_146->item;
                        litem_146->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_146;
                        self->tail=litem_146;
                    }
                }
                self->len++;
                __result64__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_149;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_149, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_149=0;        i_149<num_value;        i_149++        ){
            list$1charph_push_back(self,values[i_149]);
        }
        __result67__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result67__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional185;
void* right_value166;
struct list_item$1charph* litem_150;
char* __dec_obj33;
_Bool _if_conditional186;
void* right_value167;
struct list_item$1charph* litem_151;
char* __dec_obj34;
void* right_value168;
struct list_item$1charph* litem_152;
char* __dec_obj35;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
right_value167 = (void*)0;
memset(&litem_151, 0, sizeof(struct list_item$1charph*));
right_value168 = (void*)0;
memset(&litem_152, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional185=self->len==0,                _if_conditional185) {
                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value166=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_150->prev=((void*)0);
                    litem_150->next=((void*)0);
                    __dec_obj33=litem_150->item;
                    litem_150->item=(char*)come_increment_ref_count(item);
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_150;
                    self->head=litem_150;
                }
                else {
                    if(_if_conditional186=self->len==1,                    _if_conditional186) {
                        litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value167=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_151->prev=self->head;
                        litem_151->next=((void*)0);
                        __dec_obj34=litem_151->item;
                        litem_151->item=(char*)come_increment_ref_count(item);
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_151;
                        self->head->next=litem_151;
                    }
                    else {
                        litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value168=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_152->prev=self->tail;
                        litem_152->next=((void*)0);
                        __dec_obj35=litem_152->item;
                        litem_152->item=(char*)come_increment_ref_count(item);
                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_152;
                        self->tail=litem_152;
                    }
                }
                self->len++;
                __result66__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result66__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional187=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional187) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional188=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional188) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional189=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional189) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional190=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional190) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional191=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional191) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional192=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional192) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional193=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional193) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional196=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional196) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional197=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional197) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional198=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional198) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional199=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional199) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional200=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional200) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional201=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional201) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional194=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional194) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional195=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional195) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional202;
unsigned int hash_173;
unsigned int it_174;
_Bool _while_condtional13;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool same_key_exist_191;
char* it2_194;
_Bool _if_conditional245;
_Bool _if_conditional246;
struct map$2charphsFunph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_173, 0, sizeof(unsigned int));
memset(&it_174, 0, sizeof(unsigned int));
memset(&same_key_exist_191, 0, sizeof(_Bool));
memset(&it2_194, 0, sizeof(char*));
        if(_if_conditional202=self->len*10>=self->size,        _if_conditional202) {
            map$2charphsFunph_rehash(self);
        }
        hash_173=string_get_hash_key(key)%self->size;
        it_174=hash_173;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional214=self->item_existance[it_174],            _if_conditional214) {
                if(_if_conditional215=string_equals(self->keys[it_174],key),                _if_conditional215) {
                    if(_if_conditional216=1,                    _if_conditional216) {
                        list$1charp_remove(self->key_list,self->keys[it_174]);
                        self->keys[it_174] = come_decrement_ref_count2(self->keys[it_174], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_174]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_174]);
                        self->keys[it_174]=key;
                    }
                    if(_if_conditional236=1,                    _if_conditional236) {
                        come_call_finalizer2(sFun_finalize,self->items[it_174], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_174]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_174]=item;
                    }
                    break;
                }
                it_174++;
                if(_if_conditional237=it_174>=self->size,                _if_conditional237) {
                    it_174=0;
                }
                else {
                    if(_if_conditional238=it_174==hash_173,                    _if_conditional238) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_174]=(_Bool)1;
                if(_if_conditional239=1,                _if_conditional239) {
                    self->keys[it_174]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_174]=key;
                }
                if(_if_conditional240=1,                _if_conditional240) {
                    self->items[it_174]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_174]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_191=(_Bool)0;
        for(        it2_194=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_194=list$1charp_next(self->key_list)        ){
            if(_if_conditional245=string_equals(it2_194,key),            _if_conditional245) {
                same_key_exist_191=(_Bool)1;
            }
        }
        if(_if_conditional246=!same_key_exist_191,        _if_conditional246) {
            list$1charp_push_back(self->key_list,key);
        }
        __result91__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result91__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_156;
void* right_value177;
char** keys_157;
void* right_value178;
struct sFun** items_158;
void* right_value179;
_Bool* item_existance_159;
int len_160;
char* it_163;
struct sFun* default_value_166;
void* right_value180;
struct sFun* it2_169;
unsigned int hash_170;
int n_171;
_Bool _while_condtional12;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* default_value_172;
void* right_value181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_156, 0, sizeof(int));
right_value177 = (void*)0;
memset(&keys_157, 0, sizeof(char**));
right_value178 = (void*)0;
memset(&items_158, 0, sizeof(struct sFun**));
right_value179 = (void*)0;
memset(&item_existance_159, 0, sizeof(_Bool*));
memset(&len_160, 0, sizeof(int));
memset(&it_163, 0, sizeof(char*));
memset(&default_value_166, 0, sizeof(struct sFun*));
right_value180 = (void*)0;
memset(&it2_169, 0, sizeof(struct sFun*));
memset(&hash_170, 0, sizeof(unsigned int));
memset(&n_171, 0, sizeof(int));
memset(&default_value_172, 0, sizeof(struct sFun*));
right_value181 = (void*)0;
                size_156=self->size*10;
                keys_157=(char**)come_increment_ref_count(((char**)(right_value177=(char**)come_calloc(1, sizeof(char*)*(1*(size_156)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_158=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value178=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_156)), "/usr/local/include/comelang2.h", 1315, "struct sFun*"))));
                come_call_finalizer2(sFun_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_159=(_Bool*)come_increment_ref_count(((_Bool*)(right_value179=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_156)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_160=0;
                for(                it_163=map$2charphsFunph_begin(self);                !map$2charphsFunph_end(self);                it_163=map$2charphsFunph_next(self)                ){
                    memset(&default_value_166,0,sizeof(struct sFun*));
                    it2_169=((struct sFun*)(right_value180=map$2charphsFunph_at(self,it_163,default_value_166)));
                    come_call_finalizer2(sFun_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    hash_170=string_get_hash_key(it_163)%size_156;
                    n_171=hash_170;
                    while(_while_condtional12=(_Bool)1,                    _while_condtional12) {
                        if(_if_conditional211=item_existance_159[n_171],                        _if_conditional211) {
                            n_171++;
                            if(_if_conditional212=n_171>=size_156,                            _if_conditional212) {
                                n_171=0;
                            }
                            else {
                                if(_if_conditional213=n_171==hash_170,                                _if_conditional213) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_159[n_171]=(_Bool)1;
                            keys_157[n_171]=it_163;
                            items_158[n_171]=((struct sFun*)(right_value181=map$2charphsFunph_at(self,it_163,default_value_172)));
                            come_call_finalizer2(sFun_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            len_160++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_157;
                self->items=items_158;
                self->item_existance=item_existance_159;
                self->size=size_156;
                self->len=len_160;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional203;
char* result_161;
char* __result68__;
_Bool _if_conditional204;
char* __result69__;
char* result_162;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(char*));
memset(&result_162, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0),                    _if_conditional203) {
                        memset(&result_161,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_161;
                        return __result68__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result69__ = __result_obj__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_162,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_162;
                    return __result70__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result71__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result71__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional205;
char* result_164;
char* __result72__;
_Bool _if_conditional206;
char* __result73__;
char* result_165;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(char*));
memset(&result_165, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional205) {
                        memset(&result_164,0,sizeof(char*));
                        __result72__ = __result_obj__ = result_164;
                        return __result72__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result73__ = __result_obj__ = self->key_list->it->item;
                        return __result73__;
                    }
                    memset(&result_165,0,sizeof(char*));
                    __result74__ = __result_obj__ = result_165;
                    return __result74__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional11;
_Bool _if_conditional207;
_Bool _if_conditional208;
struct sFun* __result75__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sFun* __result76__;
struct sFun* __result77__;
struct sFun* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
                        hash_167=string_get_hash_key(((char*)key))%self->size;
                        it_168=hash_167;
                        while(_while_condtional11=(_Bool)1,                        _while_condtional11) {
                            if(_if_conditional207=self->item_existance[it_168],                            _if_conditional207) {
                                if(_if_conditional208=string_equals(self->keys[it_168],key),                                _if_conditional208) {
                                    __result75__ = __result_obj__ = self->items[it_168];
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result75__;
                                }
                                it_168++;
                                if(_if_conditional209=it_168>=self->size,                                _if_conditional209) {
                                    it_168=0;
                                }
                                else {
                                    if(_if_conditional210=it_168==hash_167,                                    _if_conditional210) {
                                        __result76__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result76__;
                                    }
                                }
                            }
                            else {
                                __result77__ = __result_obj__ = default_value;
                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result77__;
                            }
                        }
                        __result78__ = __result_obj__ = default_value;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result78__;
                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_175;
struct list_item$1charp* it_176;
_Bool _while_condtional14;
_Bool _if_conditional217;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_175, 0, sizeof(int));
memset(&it_176, 0, sizeof(struct list_item$1charp*));
                            it2_175=0;
                            it_176=self->head;
                            while(_while_condtional14=it_176!=((void*)0),                            _while_condtional14) {
                                if(_if_conditional217=string_equals(it_176->item,item),                                _if_conditional217) {
                                    list$1charp_delete(self,it2_175,it2_175+1);
                                    break;
                                }
                                it2_175++;
                                it_176=it_176->next;
                            }
                            __result82__ = __result_obj__ = self;
                            return __result82__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
int tmp_177;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct list$1charp* __result79__;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct list_item$1charp* it_180;
int i_181;
_Bool _while_condtional16;
_Bool _if_conditional226;
struct list_item$1charp* prev_it_182;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_183;
int i_184;
_Bool _while_condtional17;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct list_item$1charp* prev_it_185;
struct list_item$1charp* it_186;
struct list_item$1charp* head_prev_it_187;
struct list_item$1charp* tail_it_188;
int i_189;
_Bool _while_condtional18;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_190;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list$1charp* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_177, 0, sizeof(int));
memset(&it_180, 0, sizeof(struct list_item$1charp*));
memset(&i_181, 0, sizeof(int));
memset(&prev_it_182, 0, sizeof(struct list_item$1charp*));
memset(&it_183, 0, sizeof(struct list_item$1charp*));
memset(&i_184, 0, sizeof(int));
memset(&prev_it_185, 0, sizeof(struct list_item$1charp*));
memset(&it_186, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_187, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_188, 0, sizeof(struct list_item$1charp*));
memset(&i_189, 0, sizeof(int));
memset(&prev_it_190, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional218=head<0,                                        _if_conditional218) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional219=tail<0,                                        _if_conditional219) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional220=head>tail,                                        _if_conditional220) {
                                            tmp_177=tail;
                                            tail=head;
                                            head=tmp_177;
                                        }
                                        if(_if_conditional221=head<0,                                        _if_conditional221) {
                                            head=0;
                                        }
                                        if(_if_conditional222=tail>self->len,                                        _if_conditional222) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional223=head==tail,                                        _if_conditional223) {
                                            __result79__ = __result_obj__ = self;
                                            return __result79__;
                                        }
                                        if(_if_conditional224=head==0&&tail==self->len,                                        _if_conditional224) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional225=head==0,                                            _if_conditional225) {
                                                it_180=self->head;
                                                i_181=0;
                                                while(_while_condtional16=it_180!=((void*)0),                                                _while_condtional16) {
                                                    if(_if_conditional226=i_181<tail,                                                    _if_conditional226) {
                                                        prev_it_182=it_180;
                                                        it_180=it_180->next;
                                                        i_181++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional227=i_181==tail,                                                        _if_conditional227) {
                                                            self->head=it_180;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_180=it_180->next;
                                                            i_181++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional228=tail==self->len,                                                _if_conditional228) {
                                                    it_183=self->head;
                                                    i_184=0;
                                                    while(_while_condtional17=it_183!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional229=i_184==head,                                                        _if_conditional229) {
                                                            self->tail=it_183->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional230=i_184>=head,                                                        _if_conditional230) {
                                                            prev_it_185=it_183;
                                                            it_183=it_183->next;
                                                            i_184++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_183=it_183->next;
                                                            i_184++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_186=self->head;
                                                    head_prev_it_187=((void*)0);
                                                    tail_it_188=((void*)0);
                                                    i_189=0;
                                                    while(_while_condtional18=it_186!=((void*)0),                                                    _while_condtional18) {
                                                        if(_if_conditional231=i_189==head,                                                        _if_conditional231) {
                                                            head_prev_it_187=it_186->prev;
                                                        }
                                                        if(_if_conditional232=i_189==tail,                                                        _if_conditional232) {
                                                            tail_it_188=it_186;
                                                        }
                                                        if(_if_conditional233=i_189>=head&&i_189<tail,                                                        _if_conditional233) {
                                                            prev_it_190=it_186;
                                                            it_186=it_186->next;
                                                            i_189++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_186=it_186->next;
                                                            i_189++;
                                                        }
                                                    }
                                                    if(_if_conditional234=head_prev_it_187!=((void*)0),                                                    _if_conditional234) {
                                                        head_prev_it_187->next=tail_it_188;
                                                    }
                                                    if(_if_conditional235=tail_it_188!=((void*)0),                                                    _if_conditional235) {
                                                        tail_it_188->prev=head_prev_it_187;
                                                    }
                                                }
                                            }
                                        }
                                        __result81__ = __result_obj__ = self;
                                        return __result81__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_178;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_179;
struct list$1charp* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_178, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_179, 0, sizeof(struct list_item$1charp*));
                                                it_178=self->head;
                                                while(_while_condtional15=it_178!=((void*)0),                                                _while_condtional15) {
                                                    prev_it_179=it_178;
                                                    it_178=it_178->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result80__ = __result_obj__ = self;
                                                return __result80__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional241;
char* result_192;
char* __result83__;
_Bool _if_conditional242;
char* __result84__;
char* result_193;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_192, 0, sizeof(char*));
memset(&result_193, 0, sizeof(char*));
            if(_if_conditional241=self==((void*)0),            _if_conditional241) {
                memset(&result_192,0,sizeof(char*));
                __result83__ = __result_obj__ = result_192;
                return __result83__;
            }
            self->it=self->head;
            if(self->it) {
                __result84__ = __result_obj__ = self->it->item;
                return __result84__;
            }
            memset(&result_193,0,sizeof(char*));
            __result85__ = __result_obj__ = result_193;
            return __result85__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
            __result86__ = self==((void*)0)||self->it==((void*)0);
            return __result86__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional243;
char* result_195;
char* __result87__;
_Bool _if_conditional244;
char* __result88__;
char* result_196;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_195, 0, sizeof(char*));
memset(&result_196, 0, sizeof(char*));
            if(_if_conditional243=self==((void*)0)||self->it==((void*)0),            _if_conditional243) {
                memset(&result_195,0,sizeof(char*));
                __result87__ = __result_obj__ = result_195;
                return __result87__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result88__ = __result_obj__ = self->it->item;
                return __result88__;
            }
            memset(&result_196,0,sizeof(char*));
            __result89__ = __result_obj__ = result_196;
            return __result89__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional247;
void* right_value182;
struct list_item$1charp* litem_197;
_Bool _if_conditional248;
void* right_value183;
struct list_item$1charp* litem_198;
void* right_value184;
struct list_item$1charp* litem_199;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1charp*));
right_value183 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
right_value184 = (void*)0;
memset(&litem_199, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional247=self->len==0,                _if_conditional247) {
                    litem_197=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value182=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_197->prev=((void*)0);
                    litem_197->next=((void*)0);
                    litem_197->item=item;
                    self->tail=litem_197;
                    self->head=litem_197;
                }
                else {
                    if(_if_conditional248=self->len==1,                    _if_conditional248) {
                        litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value183=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_198->prev=self->head;
                        litem_198->next=((void*)0);
                        litem_198->item=item;
                        self->tail=litem_198;
                        self->head->next=litem_198;
                    }
                    else {
                        litem_199=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value184=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_199->prev=self->tail;
                        litem_199->next=((void*)0);
                        litem_199->item=item;
                        self->tail->next=litem_199;
                        self->tail=litem_199;
                    }
                }
                self->len++;
                __result90__ = __result_obj__ = self;
                return __result90__;
}

_Bool output_source_file_v3(struct sInfo* info){
void* __result_obj__;
void* right_value186;
char* output_file_name_200;
struct __sFILE* f_201;
void* right_value187;
struct map$2charphsFunph* o2_saved_202;
char* it_203;
void* right_value188;
void* right_value189;
struct sFun* it2_207;
void* right_value190;
char* header_208;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct map$2charphsFunph* o2_saved_213;
char* it_214;
void* right_value191;
void* right_value192;
struct sFun* it2_215;
void* right_value193;
char* header_216;
_Bool _if_conditional261;
void* right_value194;
char* output_217;
_Bool _if_conditional262;
void* right_value195;
char* output_218;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct map$2charphsFunph* o2_saved_219;
char* it_220;
void* right_value196;
struct sFun* it2_221;
_Bool _if_conditional265;
void* right_value197;
char* output_222;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
memset(&output_file_name_200, 0, sizeof(char*));
memset(&f_201, 0, sizeof(struct __sFILE*));
right_value187 = (void*)0;
memset(&o2_saved_202, 0, sizeof(struct map$2charphsFunph*));
memset(&it_203, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&it2_207, 0, sizeof(struct sFun*));
right_value190 = (void*)0;
memset(&header_208, 0, sizeof(char*));
memset(&o2_saved_213, 0, sizeof(struct map$2charphsFunph*));
memset(&it_214, 0, sizeof(char*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&it2_215, 0, sizeof(struct sFun*));
right_value193 = (void*)0;
memset(&header_216, 0, sizeof(char*));
right_value194 = (void*)0;
memset(&output_217, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&output_218, 0, sizeof(char*));
memset(&o2_saved_219, 0, sizeof(struct map$2charphsFunph*));
memset(&it_220, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&it2_221, 0, sizeof(struct sFun*));
right_value197 = (void*)0;
memset(&output_222, 0, sizeof(char*));
    output_file_name_200=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.c",info->sname))));
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    f_201=fopen(output_file_name_200,"w");
    fprintf(f_201,"// source head\n");
    fprintf(f_201,"%s\n",((char*)(right_value187=buffer_to_string(info->module->mSourceHead))));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_201,"// header function\n");
    for(    o2_saved_202=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_203=map$2charphsFunph_begin((o2_saved_202));    !map$2charphsFunph_end((o2_saved_202));    it_203=map$2charphsFunph_next((o2_saved_202))    ){
        it2_207=((struct sFun*)(right_value189=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value188=__builtin_string(it_203))))));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        header_208=(char*)come_increment_ref_count(((char*)(right_value190=header_function(it2_207,info))));
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional253=it2_207->mStatic&&it2_207->mResultType->mInline,        _if_conditional253) {
        }
        else {
            if(it2_207->mStatic) {
                fprintf(f_201,"static %s",header_208);
            }
            else {
                if(it2_207->mResultType->mInline) {
                }
                else {
                    if(_if_conditional256=string_operator_not_equals(it_203,"__builtin_va_start")&&string_operator_not_equals(it_203,"__builtin_va_end"),                    _if_conditional256) {
                        fprintf(f_201,"%s\n",header_208,it_203);
                    }
                }
            }
        }
        header_208 = come_decrement_ref_count2(header_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_201,"// inline function\n");
    for(    o2_saved_213=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_214=map$2charphsFunph_begin((o2_saved_213));    !map$2charphsFunph_end((o2_saved_213));    it_214=map$2charphsFunph_next((o2_saved_213))    ){
        it2_215=((struct sFun*)(right_value192=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value191=__builtin_string(it_214))))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        header_216=(char*)come_increment_ref_count(((char*)(right_value193=header_function(it2_215,info))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional261=it2_215->mStatic&&it2_215->mResultType->mInline,        _if_conditional261) {
            output_217=(char*)come_increment_ref_count(((char*)(right_value194=output_function(it2_215,info))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fprintf(f_201,"static inline %s",output_217);
            output_217 = come_decrement_ref_count2(output_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(it2_215->mResultType->mInline) {
                output_218=(char*)come_increment_ref_count(((char*)(right_value195=output_function(it2_215,info))));
                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_201,"static inline %s",output_218);
                output_218 = come_decrement_ref_count2(output_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(it2_215->mStatic) {
                }
                else {
                    if(_if_conditional264=string_operator_not_equals(it_214,"__builtin_va_start")&&string_operator_not_equals(it_214,"__builtin_va_end"),                    _if_conditional264) {
                    }
                }
            }
        }
        header_216 = come_decrement_ref_count2(header_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_201,"\n");
    fprintf(f_201,"// body function\n");
    for(    o2_saved_219=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_220=map$2charphsFunph_begin((o2_saved_219));    !map$2charphsFunph_end((o2_saved_219));    it_220=map$2charphsFunph_next((o2_saved_219))    ){
        it2_221=((struct sFun*)(right_value196=map$2charphsFunphp_operator_load_element(info->funcs,it_220)));
        come_call_finalizer2(sFun_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional265=!it2_221->mExternal,        _if_conditional265) {
            output_222=(char*)come_increment_ref_count(((char*)(right_value197=output_function(it2_221,info))));
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional266=it2_221->mStatic&&it2_221->mResultType->mInline,            _if_conditional266) {
            }
            else {
                if(it2_221->mStatic) {
                    fprintf(f_201,"static %s",output_222);
                }
                else {
                    if(it2_221->mResultType->mInline) {
                    }
                    else {
                        fprintf(f_201,"%s",output_222);
                    }
                }
            }
            fprintf(f_201,"\n");
            output_222 = come_decrement_ref_count2(output_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fclose(f_201);
    __result97__ = (_Bool)1;
    output_file_name_200 = come_decrement_ref_count2(output_file_name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result97__;
    output_file_name_200 = come_decrement_ref_count2(output_file_name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_204;
unsigned int hash_205;
unsigned int it_206;
_Bool _while_condtional19;
_Bool _if_conditional249;
_Bool _if_conditional250;
struct sFun* __result93__;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct sFun* __result94__;
struct sFun* __result95__;
struct sFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_204, 0, sizeof(struct sFun*));
memset(&hash_205, 0, sizeof(unsigned int));
memset(&it_206, 0, sizeof(unsigned int));
            memset(&default_value_204,0,sizeof(struct sFun*));
            hash_205=string_get_hash_key(((char*)key))%self->size;
            it_206=hash_205;
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                if(_if_conditional249=self->item_existance[it_206],                _if_conditional249) {
                    if(_if_conditional250=string_equals(self->keys[it_206],key),                    _if_conditional250) {
                        __result93__ = __result_obj__ = self->items[it_206];
                        come_call_finalizer2(sFun_finalize,default_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result93__;
                    }
                    it_206++;
                    if(_if_conditional251=it_206>=self->size,                    _if_conditional251) {
                        it_206=0;
                    }
                    else {
                        if(_if_conditional252=it_206==hash_205,                        _if_conditional252) {
                            __result94__ = __result_obj__ = default_value_204;
                            come_call_finalizer2(sFun_finalize,default_value_204, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result94__;
                        }
                    }
                }
                else {
                    __result95__ = __result_obj__ = default_value_204;
                    come_call_finalizer2(sFun_finalize,default_value_204, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                }
            }
            __result96__ = __result_obj__ = default_value_204;
            come_call_finalizer2(sFun_finalize,default_value_204, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer2(sFun_finalize,default_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
void* __result_obj__;
int i_209;
_Bool _if_conditional257;
_Bool _if_conditional258;
int i_210;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_209, 0, sizeof(int));
memset(&i_210, 0, sizeof(int));
        for(        i_209=0;        i_209<self->size;        i_209++        ){
            if(_if_conditional257=self->item_existance[i_209],            _if_conditional257) {
                if(_if_conditional258=1,                _if_conditional258) {
                    come_call_finalizer2(sFun_finalize,self->items[i_209], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_210=0;        i_210<self->size;        i_210++        ){
            if(_if_conditional259=self->item_existance[i_210],            _if_conditional259) {
                if(_if_conditional260=1,                _if_conditional260) {
                    self->keys[i_210] = come_decrement_ref_count2(self->keys[i_210], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_211;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_212, 0, sizeof(struct list_item$1charp*));
            it_211=self->head;
            while(_while_condtional20=it_211!=((void*)0),            _while_condtional20) {
                prev_it_212=it_211;
                it_211=it_211->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

_Bool output_header_file(struct sInfo* info){
void* __result_obj__;
char* output_file_name_223;
struct __sFILE* f_224;
_Bool _if_conditional269;
void* right_value198;
struct map$2charphsFunph* o2_saved_225;
char* it_226;
void* right_value199;
void* right_value200;
struct sFun* it2_227;
void* right_value201;
char* header_228;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct map$2charphsFunph* o2_saved_229;
char* it_230;
void* right_value202;
void* right_value203;
struct sFun* it2_231;
void* right_value204;
char* header_232;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value205;
char* output_233;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value206;
char* output_234;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&output_file_name_223, 0, sizeof(char*));
memset(&f_224, 0, sizeof(struct __sFILE*));
right_value198 = (void*)0;
memset(&o2_saved_225, 0, sizeof(struct map$2charphsFunph*));
memset(&it_226, 0, sizeof(char*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&it2_227, 0, sizeof(struct sFun*));
right_value201 = (void*)0;
memset(&header_228, 0, sizeof(char*));
memset(&o2_saved_229, 0, sizeof(struct map$2charphsFunph*));
memset(&it_230, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&it2_231, 0, sizeof(struct sFun*));
right_value204 = (void*)0;
memset(&header_232, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&output_233, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&output_234, 0, sizeof(char*));
    output_file_name_223=(char*)come_increment_ref_count(info->output_file_name);
    f_224=fopen(output_file_name_223,"a");
    if(_if_conditional269=info->num_source_files==0&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional269) {
        fprintf(f_224,"#ifndef __COMMON_H__\n");
        fprintf(f_224,"#define __COMMON_H__\n");
        fprintf(f_224,"#include <comelang2.h>\n");
    }
    fprintf(f_224,"// source head\n");
    fprintf(f_224,"%s\n",((char*)(right_value198=buffer_to_string(info->module->mSourceHead))));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fprintf(f_224,"// header function\n");
    for(    o2_saved_225=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_226=map$2charphsFunph_begin((o2_saved_225));    !map$2charphsFunph_end((o2_saved_225));    it_226=map$2charphsFunph_next((o2_saved_225))    ){
        it2_227=((struct sFun*)(right_value200=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value199=__builtin_string(it_226))))));
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        header_228=(char*)come_increment_ref_count(((char*)(right_value201=header_function(it2_227,info))));
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional270=it2_227->mStatic&&it2_227->mResultType->mInline,        _if_conditional270) {
        }
        else {
            if(it2_227->mStatic) {
            }
            else {
                if(it2_227->mResultType->mInline) {
                }
                else {
                    if(_if_conditional273=string_operator_not_equals(it_226,"__builtin_va_start")&&string_operator_not_equals(it_226,"__builtin_va_end"),                    _if_conditional273) {
                        if(_if_conditional274=string_operator_equals(it2_227->mDeclareSName,info->base_sname),                        _if_conditional274) {
                            fprintf(f_224,"%s\n",header_228,it_226);
                        }
                    }
                }
            }
        }
        header_228 = come_decrement_ref_count2(header_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_224,"// inline function\n");
    for(    o2_saved_229=(struct map$2charphsFunph*)come_increment_ref_count((info->funcs)),it_230=map$2charphsFunph_begin((o2_saved_229));    !map$2charphsFunph_end((o2_saved_229));    it_230=map$2charphsFunph_next((o2_saved_229))    ){
        it2_231=((struct sFun*)(right_value203=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value202=__builtin_string(it_230))))));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        header_232=(char*)come_increment_ref_count(((char*)(right_value204=header_function(it2_231,info))));
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional275=it2_231->mStatic&&it2_231->mResultType->mInline,        _if_conditional275) {
            if(_if_conditional276=string_operator_equals(it2_231->mDeclareSName,info->base_sname),            _if_conditional276) {
                output_233=(char*)come_increment_ref_count(((char*)(right_value205=output_function(it2_231,info))));
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fprintf(f_224,"static inline %s",output_233);
                output_233 = come_decrement_ref_count2(output_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(it2_231->mResultType->mInline) {
                if(_if_conditional278=string_operator_equals(it2_231->mDeclareSName,info->base_sname),                _if_conditional278) {
                    output_234=(char*)come_increment_ref_count(((char*)(right_value206=output_function(it2_231,info))));
                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fprintf(f_224,"static inline %s",output_234);
                    output_234 = come_decrement_ref_count2(output_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(it2_231->mStatic) {
                }
                else {
                    if(_if_conditional280=string_operator_not_equals(it_230,"__builtin_va_start")&&string_operator_not_equals(it_230,"__builtin_va_end"),                    _if_conditional280) {
                    }
                }
            }
        }
        header_232 = come_decrement_ref_count2(header_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(map$2charphsFunphp_finalize,o2_saved_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fprintf(f_224,"\n");
    if(_if_conditional281=info->num_source_files==info->max_source_files-1&&string_operator_equals(info->output_file_name,"common.h"),    _if_conditional281) {
        fprintf(f_224,"#endif\n");
    }
    fclose(f_224);
    __result98__ = (_Bool)1;
    output_file_name_223 = come_decrement_ref_count2(output_file_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result98__;
    output_file_name_223 = come_decrement_ref_count2(output_file_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional282;
char* msg2_235;
va_list args_236;
int len_237;
_Bool _if_conditional283;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_235, 0, sizeof(char*));
memset(&args_236, 0, sizeof(va_list));
memset(&len_237, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_236,code);
    len_237=vasprintf(&msg2_235,code,args_236);
    __builtin_va_end(args_236);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_235);
    }
    free(msg2_235);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
void* __result_obj__;
_Bool _if_conditional284;
char* msg2_238;
va_list args_239;
int len_240;
_Bool _if_conditional285;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_238, 0, sizeof(char*));
memset(&args_239, 0, sizeof(va_list));
memset(&len_240, 0, sizeof(int));
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_239,code);
    len_240=vasprintf(&msg2_238,code,args_239);
    __builtin_va_end(args_239);
    if(info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_238);
    }
    free(msg2_238);
}

void add_last_code_to_source(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
char* __dec_obj36;
_Bool _if_conditional288;
char* __dec_obj37;
_Bool _if_conditional289;
char* __dec_obj38;
memset(&__result_obj__, 0, sizeof(void*));
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s",info->module->mLastCode);
        __dec_obj36=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s",info->module->mLastCode2);
        __dec_obj37=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s",info->module->mLastCode3);
        __dec_obj38=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value207;
char* __dec_obj39;
_Bool _if_conditional292;
void* right_value208;
char* __dec_obj40;
_Bool _if_conditional293;
void* right_value209;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    if(info->module->mLastCode) {
        add_come_code(info,"%s ,",((char*)(right_value207=string_substring(info->module->mLastCode,0,-3))));
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj39=info->module->mLastCode;
        info->module->mLastCode=((void*)0);
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode2) {
        add_come_code(info,"%s ,",((char*)(right_value208=string_substring(info->module->mLastCode2,0,-3))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj40=info->module->mLastCode2;
        info->module->mLastCode2=((void*)0);
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(info->module->mLastCode3) {
        add_come_code(info,"%s ,",((char*)(right_value209=string_substring(info->module->mLastCode3,0,-3))));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj41=info->module->mLastCode3;
        info->module->mLastCode3=((void*)0);
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional294;
char* msg2_241;
va_list args_242;
int len_243;
void* right_value210;
char* __dec_obj42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_241, 0, sizeof(char*));
memset(&args_242, 0, sizeof(va_list));
memset(&len_243, 0, sizeof(int));
right_value210 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_242,msg);
    len_243=vasprintf(&msg2_241,msg,args_242);
    __builtin_va_end(args_242);
    __dec_obj42=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s",msg2_241))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_241);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional295;
char* msg2_244;
va_list args_245;
int len_246;
void* right_value211;
char* __dec_obj43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_244, 0, sizeof(char*));
memset(&args_245, 0, sizeof(va_list));
memset(&len_246, 0, sizeof(int));
right_value211 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_245,msg);
    len_246=vasprintf(&msg2_244,msg,args_245);
    __builtin_va_end(args_245);
    __dec_obj43=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s",msg2_244))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_244);
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional296;
char* msg2_247;
va_list args_248;
int len_249;
void* right_value212;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
memset(&len_249, 0, sizeof(int));
right_value212 = (void*)0;
    if(info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_248,msg);
    len_249=vasprintf(&msg2_247,msg,args_248);
    __builtin_va_end(args_248);
    __dec_obj44=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("%s",msg2_247))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(msg2_247);
}

void dec_stack_ptr(int value, struct sInfo* info){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
    list$1CVALUEph_delete(info->stack,-value,-1);
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
int tmp_250;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list$1CVALUEph* __result99__;
_Bool _if_conditional303;
_Bool _if_conditional305;
struct list_item$1CVALUEph* it_253;
int i_254;
_Bool _while_condtional22;
_Bool _if_conditional306;
struct list_item$1CVALUEph* prev_it_255;
_Bool _if_conditional307;
_Bool _if_conditional308;
struct list_item$1CVALUEph* it_256;
int i_257;
_Bool _while_condtional23;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list_item$1CVALUEph* prev_it_258;
struct list_item$1CVALUEph* it_259;
struct list_item$1CVALUEph* head_prev_it_260;
struct list_item$1CVALUEph* tail_it_261;
int i_262;
_Bool _while_condtional24;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
struct list_item$1CVALUEph* prev_it_263;
_Bool _if_conditional314;
_Bool _if_conditional315;
struct list$1CVALUEph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_250, 0, sizeof(int));
memset(&it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_254, 0, sizeof(int));
memset(&prev_it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_256, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_257, 0, sizeof(int));
memset(&prev_it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_259, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_262, 0, sizeof(int));
memset(&prev_it_263, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional297=head<0,        _if_conditional297) {
            head+=self->len;
        }
        if(_if_conditional298=tail<0,        _if_conditional298) {
            tail+=self->len+1;
        }
        if(_if_conditional299=head>tail,        _if_conditional299) {
            tmp_250=tail;
            tail=head;
            head=tmp_250;
        }
        if(_if_conditional300=head<0,        _if_conditional300) {
            head=0;
        }
        if(_if_conditional301=tail>self->len,        _if_conditional301) {
            tail=self->len;
        }
        if(_if_conditional302=head==tail,        _if_conditional302) {
            __result99__ = __result_obj__ = self;
            return __result99__;
        }
        if(_if_conditional303=head==0&&tail==self->len,        _if_conditional303) {
            list$1CVALUEph_reset(self);
        }
        else {
            if(_if_conditional305=head==0,            _if_conditional305) {
                it_253=self->head;
                i_254=0;
                while(_while_condtional22=it_253!=((void*)0),                _while_condtional22) {
                    if(_if_conditional306=i_254<tail,                    _if_conditional306) {
                        prev_it_255=it_253;
                        it_253=it_253->next;
                        i_254++;
                        come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_255, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional307=i_254==tail,                        _if_conditional307) {
                            self->head=it_253;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_253=it_253->next;
                            i_254++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional308=tail==self->len,                _if_conditional308) {
                    it_256=self->head;
                    i_257=0;
                    while(_while_condtional23=it_256!=((void*)0),                    _while_condtional23) {
                        if(_if_conditional309=i_257==head,                        _if_conditional309) {
                            self->tail=it_256->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional310=i_257>=head,                        _if_conditional310) {
                            prev_it_258=it_256;
                            it_256=it_256->next;
                            i_257++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_256=it_256->next;
                            i_257++;
                        }
                    }
                }
                else {
                    it_259=self->head;
                    head_prev_it_260=((void*)0);
                    tail_it_261=((void*)0);
                    i_262=0;
                    while(_while_condtional24=it_259!=((void*)0),                    _while_condtional24) {
                        if(_if_conditional311=i_262==head,                        _if_conditional311) {
                            head_prev_it_260=it_259->prev;
                        }
                        if(_if_conditional312=i_262==tail,                        _if_conditional312) {
                            tail_it_261=it_259;
                        }
                        if(_if_conditional313=i_262>=head&&i_262<tail,                        _if_conditional313) {
                            prev_it_263=it_259;
                            it_259=it_259->next;
                            i_262++;
                            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_259=it_259->next;
                            i_262++;
                        }
                    }
                    if(_if_conditional314=head_prev_it_260!=((void*)0),                    _if_conditional314) {
                        head_prev_it_260->next=tail_it_261;
                    }
                    if(_if_conditional315=tail_it_261!=((void*)0),                    _if_conditional315) {
                        tail_it_261->prev=head_prev_it_260;
                    }
                }
            }
        }
        __result101__ = __result_obj__ = self;
        return __result101__;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_251;
_Bool _while_condtional21;
struct list_item$1CVALUEph* prev_it_252;
struct list$1CVALUEph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_251, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_252, 0, sizeof(struct list_item$1CVALUEph*));
                it_251=self->head;
                while(_while_condtional21=it_251!=((void*)0),                _while_condtional21) {
                    prev_it_252=it_251;
                    it_251=it_251->next;
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_252, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result100__ = __result_obj__ = self;
                return __result100__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional304=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional304) {
                            come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
void* __result_obj__;
char* __dec_obj45;
void* right_value213;
void* right_value217;
struct CVALUE* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value217 = (void*)0;
    __dec_obj45=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result106__ = __result_obj__ = ((struct CVALUE*)(right_value217=CVALUE_clone(((struct CVALUE*)(right_value213=list$1CVALUEphp_operator_load_element(info->stack,offset))))));
    come_call_finalizer2(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result106__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional316;
struct list_item$1CVALUEph* it_264;
int i_265;
_Bool _while_condtional25;
_Bool _if_conditional317;
struct CVALUE* __result102__;
struct CVALUE* default_value_266;
struct CVALUE* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_264, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_265, 0, sizeof(int));
memset(&default_value_266, 0, sizeof(struct CVALUE*));
        if(_if_conditional316=position<0,        _if_conditional316) {
            position+=self->len;
        }
        it_264=self->head;
        i_265=0;
        while(_while_condtional25=it_264!=((void*)0),        _while_condtional25) {
            if(_if_conditional317=position==i_265,            _if_conditional317) {
                __result102__ = __result_obj__ = it_264->item;
                return __result102__;
            }
            it_264=it_264->next;
            i_265++;
        }
        memset(&default_value_266,0,sizeof(struct CVALUE*));
        __result103__ = __result_obj__ = default_value_266;
        come_call_finalizer2(CVALUE_finalize,default_value_266, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer2(CVALUE_finalize,default_value_266, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional318;
struct CVALUE* __result104__;
void* right_value214;
struct CVALUE* result_267;
_Bool _if_conditional319;
void* right_value215;
char* __dec_obj46;
_Bool _if_conditional320;
void* right_value216;
struct sType* __dec_obj47;
_Bool _if_conditional321;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
memset(&result_267, 0, sizeof(struct CVALUE*));
right_value215 = (void*)0;
right_value216 = (void*)0;
        if(_if_conditional318=self==(void*)0,        _if_conditional318) {
            __result104__ = __result_obj__ = (void*)0;
            return __result104__;
        }
        result_267=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional319=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional319) {
            __dec_obj46=result_267->c_value;
            result_267->c_value=(char*)come_increment_ref_count(((char*)(right_value215=string_clone(self->c_value))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional320=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional320) {
            __dec_obj47=result_267->type;
            result_267->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(self->type))));
            come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional321=self!=((void*)0),        _if_conditional321) {
            result_267->var=self->var;
        }
        __result105__ = __result_obj__ = result_267;
        come_call_finalizer2(CVALUE_finalize,result_267, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result105__;
        come_call_finalizer2(CVALUE_finalize,result_267, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpiler_clear_last_code(struct sInfo* info){
void* __result_obj__;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj48=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj50=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
}

