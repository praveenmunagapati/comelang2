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
int gRightValueNum=0;

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
char* __dec_obj6;
_Bool _if_conditional8;
void* right_value10;
char* __dec_obj7;
_Bool _if_conditional9;
void* right_value11;
char* __dec_obj8;
void* right_value12;
char* __dec_obj9;
_Bool _if_conditional10;
void* right_value13;
char* __dec_obj10;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
right_value13 = (void*)0;
    if(gComeGC) {
        return;
    }
    if(right_value->var) {
        if(right_value->var->mType->mDelegate) {
            __dec_obj6=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(right_value->var->mType->mShare) {
                __dec_obj7=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value10=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(right_value->var->mType->mClone) {
                    __dec_obj8=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value11=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj9=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value12=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
            __dec_obj10=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value13=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value48;
struct sType* result_31;
_Bool _if_conditional97;
struct sType* __result25__;
_Bool _if_conditional98;
struct sType* __result27__;
struct sClass* klass_32;
_Bool _if_conditional99;
void* right_value49;
struct sType* result_type_33;
void* right_value50;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj34;
struct list$1sTypeph* o2_saved_36;
struct sType* it_39;
void* right_value52;
struct sType* new_param_type_42;
void* right_value56;
_Bool _if_conditional106;
int generics_number_46;
_Bool _if_conditional107;
void* right_value57;
struct sClass* klass2_50;
int generics_number2_51;
_Bool _if_conditional110;
void* right_value58;
struct list$1sNodeph* array_num_52;
_Bool immutable__53;
int pointer_num_54;
_Bool heap_55;
_Bool no_heap_56;
_Bool no_calling_destructor_57;
_Bool null_value_58;
void* right_value59;
void* right_value60;
struct sType* __dec_obj38;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
int generics_number_59;
_Bool _if_conditional119;
void* right_value61;
struct list$1sNodeph* array_num_60;
_Bool immutable__61;
int pointer_num_62;
_Bool heap_63;
_Bool no_heap_64;
_Bool no_calling_destructor_65;
_Bool null_value_66;
void* right_value62;
void* right_value63;
struct sType* __dec_obj40;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list$1sNodeph* __dec_obj41;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct list$1sTypeph* o2_saved_67;
struct sType* it_68;
void* right_value64;
struct sType* type_69;
void* right_value65;
_Bool _if_conditional127;
void* right_value66;
char* new_name_70;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
memset(&result_31, 0, sizeof(struct sType*));
memset(&klass_32, 0, sizeof(struct sClass*));
right_value49 = (void*)0;
memset(&result_type_33, 0, sizeof(struct sType*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&o2_saved_36, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct sType*));
right_value52 = (void*)0;
memset(&new_param_type_42, 0, sizeof(struct sType*));
right_value56 = (void*)0;
memset(&generics_number_46, 0, sizeof(int));
right_value57 = (void*)0;
memset(&klass2_50, 0, sizeof(struct sClass*));
memset(&generics_number2_51, 0, sizeof(int));
right_value58 = (void*)0;
memset(&array_num_52, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__53, 0, sizeof(_Bool));
memset(&pointer_num_54, 0, sizeof(int));
memset(&heap_55, 0, sizeof(_Bool));
memset(&no_heap_56, 0, sizeof(_Bool));
memset(&no_calling_destructor_57, 0, sizeof(_Bool));
memset(&null_value_58, 0, sizeof(_Bool));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&generics_number_59, 0, sizeof(int));
right_value61 = (void*)0;
memset(&array_num_60, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__61, 0, sizeof(_Bool));
memset(&pointer_num_62, 0, sizeof(int));
memset(&heap_63, 0, sizeof(_Bool));
memset(&no_heap_64, 0, sizeof(_Bool));
memset(&no_calling_destructor_65, 0, sizeof(_Bool));
memset(&null_value_66, 0, sizeof(_Bool));
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&o2_saved_67, 0, sizeof(struct list$1sTypeph*));
memset(&it_68, 0, sizeof(struct sType*));
right_value64 = (void*)0;
memset(&type_69, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value66 = (void*)0;
memset(&new_name_70, 0, sizeof(char*));
    result_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value48=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional97=generics_type==((void*)0),    _if_conditional97) {
        __result25__ = __result_obj__ = result_31;
        come_call_finalizer2(sType_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result25__;
    }
    if(_if_conditional98=list$1sTypeph_length(generics_type->mGenericsTypes)==0,    _if_conditional98) {
        __result27__ = __result_obj__ = result_31;
        come_call_finalizer2(sType_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result27__;
    }
    klass_32=type->mClass;
    if(_if_conditional99=string_operator_equals(klass_32->mName,"lambda"),    _if_conditional99) {
        result_type_33=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj34=result_31->mResultType;
        result_31->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value50=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_33)))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_31->mParamTypes);
        for(        o2_saved_36=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_39=list$1sTypeph_begin((o2_saved_36));        !list$1sTypeph_end((o2_saved_36));        it_39=list$1sTypeph_next((o2_saved_36))        ){
            new_param_type_42=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=solve_generics(it_39,generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_31->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=sType_clone(new_param_type_42)))));
            come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,new_param_type_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_32->mGenerics) {
            generics_number_46=klass_32->mGenericsNum;
            if(_if_conditional107=generics_number_46>=list$1sTypeph_length(generics_type->mGenericsTypes),            _if_conditional107) {
                err_msg(info,"invalid generics parametor number");
                exit(2);
            }
            klass2_50=((struct sType*)(right_value57=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_46)))->mClass;
            come_call_finalizer2(sType_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            generics_number2_51=klass2_50->mGenericsNum;
            if(_if_conditional110=generics_number_46!=generics_number2_51,            _if_conditional110) {
                array_num_52=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value58=list$1sNodephp_clone(type->mArrayNum))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                immutable__53=type->mImmutable;
                pointer_num_54=type->mPointerNum;
                heap_55=type->mHeap;
                no_heap_56=type->mNoHeap;
                no_calling_destructor_57=type->mNoCallingDestructor;
                null_value_58=type->mNullValue;
                __dec_obj38=result_31;
                result_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_clone(((struct sType*)(right_value59=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_46)))))));
                come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(heap_55) {
                    result_31->mHeap=heap_55;
                }
                if(no_heap_56) {
                    result_31->mNoHeap=(_Bool)1;
                    result_31->mHeap=(_Bool)0;
                }
                if(no_calling_destructor_57) {
                    result_31->mNoCallingDestructor=(_Bool)1;
                }
                if(immutable__53) {
                    result_31->mImmutable=immutable__53;
                }
                if(_if_conditional115=list$1sNodeph_length(array_num_52)>0,                _if_conditional115) {
                    __dec_obj39=result_31->mArrayNum;
                    result_31->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_52);
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(null_value_58) {
                    result_31->mNullValue=null_value_58;
                }
                if(_if_conditional117=pointer_num_54>0,                _if_conditional117) {
                    result_31->mPointerNum+=pointer_num_54;
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional118=klass_32->mMethodGenerics&&info->method_generics_types,            _if_conditional118) {
                generics_number_59=klass_32->mMethodGenericsNum;
                if(_if_conditional119=generics_number_59>=list$1sTypeph_length(info->method_generics_types),                _if_conditional119) {
                    err_msg(info,"invalid method generics parametor number");
                    exit(2);
                }
                array_num_60=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodephp_clone(type->mArrayNum))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                immutable__61=type->mImmutable;
                pointer_num_62=type->mPointerNum;
                heap_63=type->mHeap;
                no_heap_64=type->mNoHeap;
                no_calling_destructor_65=type->mNoCallingDestructor;
                null_value_66=type->mNullValue;
                __dec_obj40=result_31;
                result_31=(struct sType*)come_increment_ref_count(((struct sType*)(right_value63=sType_clone(((struct sType*)(right_value62=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_59)))))));
                come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(heap_63) {
                    result_31->mHeap=heap_63;
                }
                if(no_heap_64) {
                    result_31->mNoHeap=(_Bool)1;
                    result_31->mHeap=(_Bool)0;
                }
                if(no_calling_destructor_65) {
                    result_31->mNoCallingDestructor=(_Bool)1;
                }
                if(immutable__61) {
                    result_31->mImmutable=immutable__61;
                }
                if(_if_conditional124=list$1sNodeph_length(array_num_60)>0,                _if_conditional124) {
                    __dec_obj41=result_31->mArrayNum;
                    result_31->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_60);
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(null_value_66) {
                    result_31->mNullValue=null_value_66;
                }
                if(_if_conditional126=pointer_num_62>0,                _if_conditional126) {
                    result_31->mPointerNum+=pointer_num_62;
                }
                come_call_finalizer2(list$1sNodephp_finalize,array_num_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1sTypeph_reset(result_31->mGenericsTypes);
                for(                o2_saved_67=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_68=list$1sTypeph_begin((o2_saved_67));                !list$1sTypeph_end((o2_saved_67));                it_68=list$1sTypeph_next((o2_saved_67))                ){
                    type_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=solve_generics(it_68,generics_type,info))));
                    come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_31->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(type_69)))));
                    come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,type_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer2(list$1sTypephp_finalize,o2_saved_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(_if_conditional127=!output_generics_struct(result_31,generics_type,info),                _if_conditional127) {
                    new_name_70=(char*)come_increment_ref_count(((char*)(right_value66=create_generics_name(type,info))));
                    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_70);
                    exit(1);
                    new_name_70 = come_decrement_ref_count2(new_name_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result41__ = __result_obj__ = result_31;
    come_call_finalizer2(sType_finalize,result_31, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sType_finalize,result_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
struct sType* __result7__;
void* right_value14;
struct sType* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional33;
void* right_value18;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional34;
void* right_value19;
char* __dec_obj14;
_Bool _if_conditional35;
void* right_value26;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional39;
void* right_value34;
struct list$1sNodeph* __dec_obj22;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value35;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional54;
void* right_value42;
struct list$1charph* __dec_obj27;
_Bool _if_conditional58;
void* right_value43;
struct tuple1$1sTypeph* __dec_obj28;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value44;
struct sNode* __dec_obj29;
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
void* right_value45;
struct sNode* __dec_obj30;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value46;
char* __dec_obj31;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value47;
char* __dec_obj32;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value19 = (void*)0;
right_value26 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
        if(_if_conditional11=self==(void*)0,        _if_conditional11) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional29) {
            __dec_obj12=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional33) {
            __dec_obj13=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional34) {
            __dec_obj14=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->mGenericsName))));
            __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional35) {
            __dec_obj18=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value26=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional39=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional39) {
            __dec_obj22=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional53=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional53) {
            __dec_obj23=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional54) {
            __dec_obj27=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value42=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional58=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional58) {
            __dec_obj28=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value43=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional60=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional60) {
            __dec_obj29=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mAlignas))));
            if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mException=self->mException;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional84=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional84) {
            __dec_obj30=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value45=sNode_clone(self->mSizeNum))));
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, ((struct sNode*)right_value45)->finalize, ((struct sNode*)right_value45)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional87=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional87) {
            __dec_obj31=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mOriginalTypeName))));
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional96) {
            __dec_obj32=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(self->mAsmName))));
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional12=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional15) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional21) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional23=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional23) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional24) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional25=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional25) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional26=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional26) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional27) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional13=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional13) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                    it_12=self->head;
                    while(_while_condtional4=it_12!=((void*)0),                    _while_condtional4) {
                        prev_it_13=it_12;
                        it_12=it_12->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional22) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct tuple1$1sTypeph* __result8__;
void* right_value15;
struct tuple1$1sTypeph* result_14;
_Bool _if_conditional32;
void* right_value16;
struct sType* __dec_obj11;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
memset(&result_14, 0, sizeof(struct tuple1$1sTypeph*));
right_value16 = (void*)0;
                if(_if_conditional30=self==(void*)0,                _if_conditional30) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_14=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional32) {
                    __dec_obj11=result_14->v1;
                    result_14->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_14;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional31=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct list$1sTypeph* __result10__;
void* right_value20;
void* right_value21;
struct list$1sTypeph* result_15;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional5;
void* right_value25;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
right_value21 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
right_value25 = (void*)0;
                if(_if_conditional36=self==((void*)0),                _if_conditional36) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_16=self->head;
                while(_while_condtional5=it_16!=((void*)0),                _while_condtional5) {
                    list$1sTypeph_add(result_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=sType_clone(it_16->item)))));
                    come_call_finalizer2(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_16=it_16->next;
                }
                __result13__ = __result_obj__ = result_15;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1sTypephp_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional37;
void* right_value22;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj15;
_Bool _if_conditional38;
void* right_value23;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj16;
void* right_value24;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj17;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
right_value23 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value24 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional37=self->len==0,                        _if_conditional37) {
                            litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj15=litem_17->item;
                            litem_17->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else {
                            if(_if_conditional38=self->len==1,                            _if_conditional38) {
                                litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=self->head;
                                litem_18->next=((void*)0);
                                __dec_obj16=litem_18->item;
                                litem_18->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_18;
                                self->head->next=litem_18;
                            }
                            else {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->tail;
                                litem_19->next=((void*)0);
                                __dec_obj17=litem_19->item;
                                litem_19->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_19;
                                self->tail=litem_19;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result12__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sNodeph* __result14__;
void* right_value27;
void* right_value28;
struct list$1sNodeph* result_20;
struct list_item$1sNodeph* it_21;
_Bool _while_condtional6;
void* right_value33;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&result_20, 0, sizeof(struct list$1sNodeph*));
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_20=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value28=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_21=self->head;
                while(_while_condtional6=it_21!=((void*)0),                _while_condtional6) {
                    list$1sNodeph_add(result_20,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(it_21->item)))));
                    if(right_value33) { right_value33 = come_decrement_ref_count2(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_21=it_21->next;
                }
                __result19__ = __result_obj__ = result_20;
                come_call_finalizer2(list$1sNodephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sNodephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value29;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj19;
_Bool _if_conditional42;
void* right_value30;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj20;
void* right_value31;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_22->prev=((void*)0);
                            litem_22->next=((void*)0);
                            __dec_obj19=litem_22->item;
                            litem_22->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_22;
                            self->head=litem_22;
                        }
                        else {
                            if(_if_conditional42=self->len==1,                            _if_conditional42) {
                                litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_23->prev=self->head;
                                litem_23->next=((void*)0);
                                __dec_obj20=litem_23->item;
                                litem_23->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_23;
                                self->head->next=litem_23;
                            }
                            else {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->tail;
                                litem_24->next=((void*)0);
                                __dec_obj21=litem_24->item;
                                litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_24;
                                self->tail=litem_24;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result16__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional43;
struct sNode* __result17__;
void* right_value32;
struct sNode* result_25;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_25, 0, sizeof(struct sNode*));
                        if(_if_conditional43=self==(void*)0,                        _if_conditional43) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_25=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional44=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional44) {
                            result_25->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_25->finalize=self->finalize;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_25->clone=self->clone;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_25->compile=self->compile;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_25->sline=self->sline;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_25->sname=self->sname;
                        }
                        if(_if_conditional50=self!=((void*)0),                        _if_conditional50) {
                            result_25->terminated=self->terminated;
                        }
                        if(_if_conditional51=self!=((void*)0),                        _if_conditional51) {
                            result_25->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_25;
                        if(result_25) { result_25 = come_decrement_ref_count2(result_25, ((struct sNode*)result_25)->finalize, ((struct sNode*)result_25)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result18__;
                        if(result_25) { result_25 = come_decrement_ref_count2(result_25, ((struct sNode*)result_25)->finalize, ((struct sNode*)result_25)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1charph* __result20__;
void* right_value36;
void* right_value37;
struct list$1charph* result_26;
struct list_item$1charph* it_27;
_Bool _while_condtional7;
void* right_value41;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&result_26, 0, sizeof(struct list$1charph*));
memset(&it_27, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value37=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_27=self->head;
                while(_while_condtional7=it_27!=((void*)0),                _while_condtional7) {
                    list$1charph_add(result_26,(char*)come_increment_ref_count(((char*)(right_value41=string_clone(it_27->item)))));
                    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_27=it_27->next;
                }
                __result23__ = __result_obj__ = result_26;
                come_call_finalizer2(list$1charphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result23__;
                come_call_finalizer2(list$1charphp_finalize,result_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result21__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value38;
struct list_item$1charph* litem_28;
char* __dec_obj24;
_Bool _if_conditional57;
void* right_value39;
struct list_item$1charph* litem_29;
char* __dec_obj25;
void* right_value40;
struct list_item$1charph* litem_30;
char* __dec_obj26;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_28->prev=((void*)0);
                            litem_28->next=((void*)0);
                            __dec_obj24=litem_28->item;
                            litem_28->item=(char*)come_increment_ref_count(item);
                            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_28;
                            self->head=litem_28;
                        }
                        else {
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_29->prev=self->head;
                                litem_29->next=((void*)0);
                                __dec_obj25=litem_29->item;
                                litem_29->item=(char*)come_increment_ref_count(item);
                                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_29;
                                self->head->next=litem_29;
                            }
                            else {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->tail;
                                litem_30->next=((void*)0);
                                __dec_obj26=litem_30->item;
                                litem_30->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_30;
                                self->tail=litem_30;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result22__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
        __result26__ = self->len;
        return __result26__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj33;
struct tuple1$1sTypeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj33=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result28__ = __result_obj__ = self;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result28__;
            come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_34;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_35;
struct list$1sTypeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_34, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_35, 0, sizeof(struct list_item$1sTypeph*));
            it_34=self->head;
            while(_while_condtional8=it_34!=((void*)0),            _while_condtional8) {
                prev_it_35=it_34;
                it_34=it_34->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result29__ = __result_obj__ = self;
            return __result29__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional100;
struct sType* result_37;
struct sType* __result30__;
_Bool _if_conditional101;
struct sType* __result31__;
struct sType* result_38;
struct sType* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct sType*));
memset(&result_38, 0, sizeof(struct sType*));
            if(_if_conditional100=self==((void*)0),            _if_conditional100) {
                memset(&result_37,0,sizeof(struct sType*));
                __result30__ = __result_obj__ = result_37;
                return __result30__;
            }
            self->it=self->head;
            if(self->it) {
                __result31__ = __result_obj__ = self->it->item;
                return __result31__;
            }
            memset(&result_38,0,sizeof(struct sType*));
            __result32__ = __result_obj__ = result_38;
            return __result32__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
            __result33__ = self==((void*)0)||self->it==((void*)0);
            return __result33__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct sType* result_40;
struct sType* __result34__;
_Bool _if_conditional103;
struct sType* __result35__;
struct sType* result_41;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_40, 0, sizeof(struct sType*));
memset(&result_41, 0, sizeof(struct sType*));
            if(_if_conditional102=self==((void*)0)||self->it==((void*)0),            _if_conditional102) {
                memset(&result_40,0,sizeof(struct sType*));
                __result34__ = __result_obj__ = result_40;
                return __result34__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result35__ = __result_obj__ = self->it->item;
                return __result35__;
            }
            memset(&result_41,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = result_41;
            return __result36__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional104;
void* right_value53;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj35;
_Bool _if_conditional105;
void* right_value54;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj36;
void* right_value55;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj37;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional104=self->len==0,                _if_conditional104) {
                    litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_43->prev=((void*)0);
                    litem_43->next=((void*)0);
                    __dec_obj35=litem_43->item;
                    litem_43->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_43;
                    self->head=litem_43;
                }
                else {
                    if(_if_conditional105=self->len==1,                    _if_conditional105) {
                        litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->head;
                        litem_44->next=((void*)0);
                        __dec_obj36=litem_44->item;
                        litem_44->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_44;
                        self->head->next=litem_44;
                    }
                    else {
                        litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_45->prev=self->tail;
                        litem_45->next=((void*)0);
                        __dec_obj37=litem_45->item;
                        litem_45->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_45;
                        self->tail=litem_45;
                    }
                }
                self->len++;
                __result37__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result37__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional108;
struct list_item$1sTypeph* it_47;
int i_48;
_Bool _while_condtional9;
_Bool _if_conditional109;
struct sType* __result38__;
struct sType* default_value_49;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_48, 0, sizeof(int));
memset(&default_value_49, 0, sizeof(struct sType*));
                if(_if_conditional108=position<0,                _if_conditional108) {
                    position+=self->len;
                }
                it_47=self->head;
                i_48=0;
                while(_while_condtional9=it_47!=((void*)0),                _while_condtional9) {
                    if(_if_conditional109=position==i_48,                    _if_conditional109) {
                        __result38__ = __result_obj__ = it_47->item;
                        return __result38__;
                    }
                    it_47=it_47->next;
                    i_48++;
                }
                memset(&default_value_49,0,sizeof(struct sType*));
                __result39__ = __result_obj__ = default_value_49;
                come_call_finalizer2(sType_finalize,default_value_49, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result39__;
                come_call_finalizer2(sType_finalize,default_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result40__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result40__ = self->len;
                    return __result40__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value67;
struct sType* result_71;
_Bool _if_conditional128;
void* right_value68;
struct sType* __dec_obj42;
struct sType* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&result_71, 0, sizeof(struct sType*));
right_value68 = (void*)0;
    result_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj42=result_71;
        result_71=(struct sType*)come_increment_ref_count(((struct sType*)(right_value68=solve_generics(result_71,generics_type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    __result42__ = __result_obj__ = result_71;
    come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(sType_finalize,result_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
void* __result_obj__;
char* p_72;
_Bool _if_conditional129;
_Bool _while_condtional10;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int n_73;
_Bool _while_condtional11;
int __result43__;
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_72, 0, sizeof(char*));
memset(&n_73, 0, sizeof(int));
    p_72=obj;
    if(_if_conditional129=*p_72==40,    _if_conditional129) {
        p_72++;
        while(_while_condtional10=*p_72!=41,        _while_condtional10) {
            p_72++;
        }
        p_72++;
        if(_if_conditional130=*p_72==40,        _if_conditional130) {
            p_72++;
            if(_if_conditional131=strcmp(p_72,"right_value")==0,            _if_conditional131) {
                p_72+=strlen("right_value");
                if(_if_conditional132=xisdigit(*p_72),                _if_conditional132) {
                    n_73=0;
                    while(_while_condtional11=xisdigit(*p_72),                    _while_condtional11) {
                        n_73=n_73*10+*p_72-48;
                        p_72++;
                    }
                    __result43__ = n_73;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result43__;
                }
            }
        }
    }
    __result44__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result44__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional133;
void* right_value69;
char* __result45__;
_Bool _if_conditional134;
void* right_value70;
char* __result46__;
void* right_value71;
struct sRightValueObject* new_value_74;
struct sType* __dec_obj43;
void* right_value72;
char* __dec_obj44;
void* right_value73;
char* __dec_obj45;
void* right_value77;
char* buf_78;
void* right_value78;
void* right_value79;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&new_value_74, 0, sizeof(struct sRightValueObject*));
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value77 = (void*)0;
memset(&buf_78, 0, sizeof(char*));
right_value78 = (void*)0;
right_value79 = (void*)0;
    if(gComeGC) {
        __result45__ = __result_obj__ = ((char*)(right_value69=__builtin_string(obj)));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result45__;
    }
    if(info->no_output_come_code) {
        __result46__ = __result_obj__ = ((char*)(right_value70=__builtin_string("")));
        come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result46__;
    }
    new_value_74=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value71=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 229, "struct sRightValueObject"))));
    come_call_finalizer2(sRightValueObject_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=new_value_74->mType;
    new_value_74->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    new_value_74->mFreed=(_Bool)0;
    new_value_74->mID=gRightValueNum;
    __dec_obj44=new_value_74->mVarName;
    new_value_74->mVarName=(char*)come_increment_ref_count(((char*)(right_value72=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj45=new_value_74->mFunName;
    new_value_74->mFunName=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(info->come_fun->mName))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_74->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_74));
    buf_78=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_78);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result48__ = __result_obj__ = ((char*)(right_value79=xsprintf("((%s)(%s=%s))",((char*)(right_value78=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_74->mVarName,obj)));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_78 = come_decrement_ref_count2(buf_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sRightValueObject_finalize,new_value_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buf_78 = come_decrement_ref_count2(buf_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional135=self!=((void*)0)&&self->mType!=((void*)0),        _if_conditional135) {
            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional136=self!=((void*)0)&&self->mVarName!=((void*)0),        _if_conditional136) {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional137=self!=((void*)0)&&self->mFunName!=((void*)0),        _if_conditional137) {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
_Bool _if_conditional138;
void* right_value74;
struct list_item$1sRightValueObjectph* litem_75;
struct sRightValueObject* __dec_obj46;
_Bool _if_conditional140;
void* right_value75;
struct list_item$1sRightValueObjectph* litem_76;
struct sRightValueObject* __dec_obj47;
void* right_value76;
struct list_item$1sRightValueObjectph* litem_77;
struct sRightValueObject* __dec_obj48;
struct list$1sRightValueObjectph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value75 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value76 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional138=self->len==0,        _if_conditional138) {
            litem_75=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value74=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sRightValueObjectph"))));
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_75->prev=((void*)0);
            litem_75->next=((void*)0);
            __dec_obj46=litem_75->item;
            litem_75->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer2(sRightValueObject_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_75;
            self->head=litem_75;
        }
        else {
            if(_if_conditional140=self->len==1,            _if_conditional140) {
                litem_76=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value75=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_76->prev=self->head;
                litem_76->next=((void*)0);
                __dec_obj47=litem_76->item;
                litem_76->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_76;
                self->head->next=litem_76;
            }
            else {
                litem_77=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value76=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sRightValueObjectph"))));
                come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_77->prev=self->tail;
                litem_77->next=((void*)0);
                __dec_obj48=litem_77->item;
                litem_77->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer2(sRightValueObject_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_77;
                self->tail=litem_77;
            }
        }
        self->len++;
        __result47__ = __result_obj__ = self;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer2(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional139;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional139=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional139) {
                    come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional141;
int i_79;
struct list$1sRightValueObjectph* o2_saved_80;
struct sRightValueObject* it_83;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_79, 0, sizeof(int));
memset(&o2_saved_80, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_83, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        return;
    }
    i_79=0;
    for(    o2_saved_80=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_83=list$1sRightValueObjectph_begin((o2_saved_80));    !list$1sRightValueObjectph_end((o2_saved_80));    it_83=list$1sRightValueObjectph_next((o2_saved_80))    ){
        if(_if_conditional146=it_83->mID==right_value_num,        _if_conditional146) {
            break;
        }
        i_79++;
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_79,i_79+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional142;
struct sRightValueObject* result_81;
struct sRightValueObject* __result49__;
_Bool _if_conditional143;
struct sRightValueObject* __result50__;
struct sRightValueObject* result_82;
struct sRightValueObject* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sRightValueObject*));
memset(&result_82, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional142=self==((void*)0),        _if_conditional142) {
            memset(&result_81,0,sizeof(struct sRightValueObject*));
            __result49__ = __result_obj__ = result_81;
            return __result49__;
        }
        self->it=self->head;
        if(self->it) {
            __result50__ = __result_obj__ = self->it->item;
            return __result50__;
        }
        memset(&result_82,0,sizeof(struct sRightValueObject*));
        __result51__ = __result_obj__ = result_82;
        return __result51__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self==((void*)0)||self->it==((void*)0);
        return __result52__;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional144;
struct sRightValueObject* result_84;
struct sRightValueObject* __result53__;
_Bool _if_conditional145;
struct sRightValueObject* __result54__;
struct sRightValueObject* result_85;
struct sRightValueObject* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sRightValueObject*));
memset(&result_85, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional144=self==((void*)0)||self->it==((void*)0),        _if_conditional144) {
            memset(&result_84,0,sizeof(struct sRightValueObject*));
            __result53__ = __result_obj__ = result_84;
            return __result53__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result54__ = __result_obj__ = self->it->item;
            return __result54__;
        }
        memset(&result_85,0,sizeof(struct sRightValueObject*));
        __result55__ = __result_obj__ = result_85;
        return __result55__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_86;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_86, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_86=self->head;
        while(_while_condtional12=it_86!=((void*)0),        _while_condtional12) {
            prev_it_87=it_86;
            it_86=it_86->next;
            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
int tmp_88;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list$1sRightValueObjectph* __result56__;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1sRightValueObjectph* it_91;
int i_92;
_Bool _while_condtional14;
_Bool _if_conditional155;
struct list_item$1sRightValueObjectph* prev_it_93;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1sRightValueObjectph* it_94;
int i_95;
_Bool _while_condtional15;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1sRightValueObjectph* prev_it_96;
struct list_item$1sRightValueObjectph* it_97;
struct list_item$1sRightValueObjectph* head_prev_it_98;
struct list_item$1sRightValueObjectph* tail_it_99;
int i_100;
_Bool _while_condtional16;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1sRightValueObjectph* prev_it_101;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1sRightValueObjectph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_88, 0, sizeof(int));
memset(&it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_92, 0, sizeof(int));
memset(&prev_it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_94, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_95, 0, sizeof(int));
memset(&prev_it_96, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_97, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_98, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_99, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_100, 0, sizeof(int));
memset(&prev_it_101, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional147=head<0,        _if_conditional147) {
            head+=self->len;
        }
        if(_if_conditional148=tail<0,        _if_conditional148) {
            tail+=self->len+1;
        }
        if(_if_conditional149=head>tail,        _if_conditional149) {
            tmp_88=tail;
            tail=head;
            head=tmp_88;
        }
        if(_if_conditional150=head<0,        _if_conditional150) {
            head=0;
        }
        if(_if_conditional151=tail>self->len,        _if_conditional151) {
            tail=self->len;
        }
        if(_if_conditional152=head==tail,        _if_conditional152) {
            __result56__ = __result_obj__ = self;
            return __result56__;
        }
        if(_if_conditional153=head==0&&tail==self->len,        _if_conditional153) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(_if_conditional154=head==0,            _if_conditional154) {
                it_91=self->head;
                i_92=0;
                while(_while_condtional14=it_91!=((void*)0),                _while_condtional14) {
                    if(_if_conditional155=i_92<tail,                    _if_conditional155) {
                        prev_it_93=it_91;
                        it_91=it_91->next;
                        i_92++;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(_if_conditional156=i_92==tail,                        _if_conditional156) {
                            self->head=it_91;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_91=it_91->next;
                            i_92++;
                        }
                    }
                }
            }
            else {
                if(_if_conditional157=tail==self->len,                _if_conditional157) {
                    it_94=self->head;
                    i_95=0;
                    while(_while_condtional15=it_94!=((void*)0),                    _while_condtional15) {
                        if(_if_conditional158=i_95==head,                        _if_conditional158) {
                            self->tail=it_94->prev;
                            self->tail->next=((void*)0);
                        }
                        if(_if_conditional159=i_95>=head,                        _if_conditional159) {
                            prev_it_96=it_94;
                            it_94=it_94->next;
                            i_95++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_94=it_94->next;
                            i_95++;
                        }
                    }
                }
                else {
                    it_97=self->head;
                    head_prev_it_98=((void*)0);
                    tail_it_99=((void*)0);
                    i_100=0;
                    while(_while_condtional16=it_97!=((void*)0),                    _while_condtional16) {
                        if(_if_conditional160=i_100==head,                        _if_conditional160) {
                            head_prev_it_98=it_97->prev;
                        }
                        if(_if_conditional161=i_100==tail,                        _if_conditional161) {
                            tail_it_99=it_97;
                        }
                        if(_if_conditional162=i_100>=head&&i_100<tail,                        _if_conditional162) {
                            prev_it_101=it_97;
                            it_97=it_97->next;
                            i_100++;
                            come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_97=it_97->next;
                            i_100++;
                        }
                    }
                    if(_if_conditional163=head_prev_it_98!=((void*)0),                    _if_conditional163) {
                        head_prev_it_98->next=tail_it_99;
                    }
                    if(_if_conditional164=tail_it_99!=((void*)0),                    _if_conditional164) {
                        tail_it_99->prev=head_prev_it_98;
                    }
                }
            }
        }
        __result58__ = __result_obj__ = self;
        return __result58__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_89;
_Bool _while_condtional13;
struct list_item$1sRightValueObjectph* prev_it_90;
struct list$1sRightValueObjectph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_89=self->head;
                while(_while_condtional13=it_89!=((void*)0),                _while_condtional13) {
                    prev_it_90=it_89;
                    it_89=it_89->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result57__ = __result_obj__ = self;
                return __result57__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value80;
char* __result59__;
struct sClass* klass_102;
void* right_value81;
char* type_name_103;
void* right_value82;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&klass_102, 0, sizeof(struct sClass*));
right_value81 = (void*)0;
memset(&type_name_103, 0, sizeof(char*));
right_value82 = (void*)0;
    if(gComeGC) {
        __result59__ = __result_obj__ = ((char*)(right_value80=__builtin_string(obj)));
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result59__;
    }
    klass_102=type->mClass;
    type_name_103=(char*)come_increment_ref_count(((char*)(right_value81=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result60__ = __result_obj__ = ((char*)(right_value82=xsprintf("(%s)come_increment_ref_count(%s)",type_name_103,obj)));
    type_name_103 = come_decrement_ref_count2(type_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result60__;
    type_name_103 = come_decrement_ref_count2(type_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional166;
struct list$1CVALUEph* stack_saved_104;
struct list$1sRightValueObjectph* right_value_objects_105;
struct sClass* klass_106;
static int dec_num_107=0;
void* right_value83;
char* name_108;
void* right_value84;
_Bool no_decrement_109;
_Bool no_free_110;
_Bool _if_conditional167;
void* right_value85;
char* c_value_111;
struct sClass* klass_112;
char* class_name_113;
char* fun_name_114;
void* right_value86;
struct sType* type2_115;
void* right_value87;
char* fun_name2_116;
struct sFun* finalizer_117;
_Bool _if_conditional168;
void* right_value88;
_Bool _if_conditional188;
void* right_value89;
char* none_generics_name_121;
void* right_value90;
char* generics_fun_name_122;
void* right_value91;
struct sGenericsFun* generics_fun_126;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value92;
int i_127;
void* right_value93;
char* new_fun_name_128;
void* right_value94;
_Bool _if_conditional205;
void* right_value95;
char* __dec_obj49;
_Bool _if_conditional206;
void* right_value96;
_Bool _if_conditional207;
void* right_value97;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_129;
char* new_fun_name_130;
char* __dec_obj50;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value98;
char* type_name_131;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value99;
_Bool _if_conditional213;
void* right_value100;
char* type_name_132;
void* right_value101;
void* right_value102;
struct list$1sRightValueObjectph* __dec_obj51;
struct list$1CVALUEph* __dec_obj52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_104, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_105, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_106, 0, sizeof(struct sClass*));
right_value83 = (void*)0;
memset(&name_108, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&no_decrement_109, 0, sizeof(_Bool));
memset(&no_free_110, 0, sizeof(_Bool));
right_value85 = (void*)0;
memset(&c_value_111, 0, sizeof(char*));
memset(&klass_112, 0, sizeof(struct sClass*));
memset(&class_name_113, 0, sizeof(char*));
memset(&fun_name_114, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&type2_115, 0, sizeof(struct sType*));
right_value87 = (void*)0;
memset(&fun_name2_116, 0, sizeof(char*));
memset(&finalizer_117, 0, sizeof(struct sFun*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&none_generics_name_121, 0, sizeof(char*));
right_value90 = (void*)0;
memset(&generics_fun_name_122, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&generics_fun_126, 0, sizeof(struct sGenericsFun*));
right_value92 = (void*)0;
memset(&i_127, 0, sizeof(int));
right_value93 = (void*)0;
memset(&new_fun_name_128, 0, sizeof(char*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&fun_129, 0, sizeof(struct sFun*));
memset(&new_fun_name_130, 0, sizeof(char*));
memset(&fun_129, 0, sizeof(struct sFun*));
memset(&new_fun_name_130, 0, sizeof(char*));
right_value98 = (void*)0;
memset(&type_name_131, 0, sizeof(char*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&type_name_132, 0, sizeof(char*));
right_value101 = (void*)0;
right_value102 = (void*)0;
    if(gComeGC) {
        return;
    }
    stack_saved_104=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_105=info->right_value_objects;
    klass_106=type->mClass;
    name_108=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("__dec_obj%d",++dec_num_107))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value84=make_define_var(type,name_108,(_Bool)0,info))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code(info,"%s=%s;\n",name_108,obj);
    obj=name_108;
    no_decrement_109=(_Bool)0;
    no_free_110=(_Bool)0;
    if(_if_conditional167=type->mPointerNum>0,    _if_conditional167) {
        c_value_111=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(obj))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        klass_112=type->mClass;
        class_name_113=klass_112->mName;
        fun_name_114="finalize";
        type2_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_115->mHeap=(_Bool)0;
        fun_name2_116=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(type,(_Bool)0,fun_name_114,info))));
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        finalizer_117=((void*)0);
        if(_if_conditional168=list$1sTypeph_length(type->mGenericsTypes)>0,        _if_conditional168) {
            finalizer_117=((struct sFun*)(right_value88=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_116)));
            come_call_finalizer2(sFun_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=finalizer_117==((void*)0),            _if_conditional188) {
                none_generics_name_121=(char*)come_increment_ref_count(((char*)(right_value89=get_none_generics_name(type2_115->mClass->mName))));
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_name_122=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s_%s",none_generics_name_121,fun_name_114))));
                right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_fun_126=((struct sGenericsFun*)(right_value91=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_122)));
                come_call_finalizer2(sGenericsFun_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(generics_fun_126) {
                    if(_if_conditional204=!create_generics_fun((char*)come_increment_ref_count(fun_name2_116),generics_fun_126,type,info),                    _if_conditional204) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_117=((struct sFun*)(right_value92=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_116)));
                    come_call_finalizer2(sFun_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                none_generics_name_121 = come_decrement_ref_count2(none_generics_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_122 = come_decrement_ref_count2(generics_fun_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_127=128-1;            i_127>=1;            i_127--            ){
                new_fun_name_128=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("%s_v%d",fun_name2_116,i_127))));
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                finalizer_117=((struct sFun*)(right_value94=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_128)));
                come_call_finalizer2(sFun_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(finalizer_117) {
                    __dec_obj49=fun_name2_116;
                    fun_name2_116=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(new_fun_name_128))));
                    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_128 = come_decrement_ref_count2(new_fun_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_128 = come_decrement_ref_count2(new_fun_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional206=finalizer_117==((void*)0),            _if_conditional206) {
                finalizer_117=((struct sFun*)(right_value96=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_116)));
                come_call_finalizer2(sFun_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
        }
        if(_if_conditional207=finalizer_117==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,        _if_conditional207) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value97=create_finalizer_automatically(type,fun_name_114,info)));
            fun_129=multiple_assign_var1->v1;
            new_fun_name_130=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj50=fun_name2_116;
            fun_name2_116=(char*)come_increment_ref_count(new_fun_name_130);
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_117=fun_129;
            new_fun_name_130 = come_decrement_ref_count2(new_fun_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional209=finalizer_117!=((void*)0),        _if_conditional209) {
            if(_if_conditional210=klass_112->mProtocol&&type->mPointerNum==1,            _if_conditional210) {
                type_name_131=(char*)come_increment_ref_count(((char*)(right_value98=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(c_value_111) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_116,c_value_111,type_name_131,c_value_111,type_name_131,c_value_111,type->mAllocaValue,no_decrement_109,no_free_110,force_delete_);
                }
                type_name_131 = come_decrement_ref_count2(type_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_111) {
                    add_come_last_code2(info,((char*)(right_value99=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_116,c_value_111,type->mAllocaValue,no_decrement_109,no_free_110,force_delete_))));
                    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            if(_if_conditional213=klass_112->mProtocol&&type->mPointerNum==1,            _if_conditional213) {
                type_name_132=(char*)come_increment_ref_count(((char*)(right_value100=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                add_come_last_code2(info,((char*)(right_value101=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_108,name_108,name_108,type_name_132,name_108,type_name_132,name_108))));
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                type_name_132 = come_decrement_ref_count2(type_name_132, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value102=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_108,name_108))));
                right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        c_value_111 = come_decrement_ref_count2(c_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name2_116 = come_decrement_ref_count2(fun_name2_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj51=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_105);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj52=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_104);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_118;
unsigned int hash_119;
unsigned int it_120;
_Bool _while_condtional17;
_Bool _if_conditional169;
_Bool _if_conditional170;
struct sFun* __result61__;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct sFun* __result62__;
struct sFun* __result63__;
struct sFun* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_118, 0, sizeof(struct sFun*));
memset(&hash_119, 0, sizeof(unsigned int));
memset(&it_120, 0, sizeof(unsigned int));
                memset(&default_value_118,0,sizeof(struct sFun*));
                hash_119=string_get_hash_key(((char*)key))%self->size;
                it_120=hash_119;
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional169=self->item_existance[it_120],                    _if_conditional169) {
                        if(_if_conditional170=string_equals(self->keys[it_120],key),                        _if_conditional170) {
                            __result61__ = __result_obj__ = self->items[it_120];
                            come_call_finalizer2(sFun_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result61__;
                        }
                        it_120++;
                        if(_if_conditional186=it_120>=self->size,                        _if_conditional186) {
                            it_120=0;
                        }
                        else {
                            if(_if_conditional187=it_120==hash_119,                            _if_conditional187) {
                                __result62__ = __result_obj__ = default_value_118;
                                come_call_finalizer2(sFun_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result62__;
                            }
                        }
                    }
                    else {
                        __result63__ = __result_obj__ = default_value_118;
                        come_call_finalizer2(sFun_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                    }
                }
                __result64__ = __result_obj__ = default_value_118;
                come_call_finalizer2(sFun_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer2(sFun_finalize,default_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional171=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional171) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional172=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional172) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional173=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional173) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional174=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional174) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional175=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional175) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional176=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional176) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional177=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional177) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional180=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional180) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional181=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional181) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional182=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional182) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional183=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional183) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional184=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional184) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional185=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional185) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional178=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional178) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional179=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional179) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_123;
unsigned int hash_124;
unsigned int it_125;
_Bool _while_condtional18;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct sGenericsFun* __result65__;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct sGenericsFun* __result66__;
struct sGenericsFun* __result67__;
struct sGenericsFun* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_123, 0, sizeof(struct sGenericsFun*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&it_125, 0, sizeof(unsigned int));
                    memset(&default_value_123,0,sizeof(struct sGenericsFun*));
                    hash_124=string_get_hash_key(((char*)key))%self->size;
                    it_125=hash_124;
                    while(_while_condtional18=(_Bool)1,                    _while_condtional18) {
                        if(_if_conditional189=self->item_existance[it_125],                        _if_conditional189) {
                            if(_if_conditional190=string_equals(self->keys[it_125],key),                            _if_conditional190) {
                                __result65__ = __result_obj__ = self->items[it_125];
                                come_call_finalizer2(sGenericsFun_finalize,default_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                return __result65__;
                            }
                            it_125++;
                            if(_if_conditional201=it_125>=self->size,                            _if_conditional201) {
                                it_125=0;
                            }
                            else {
                                if(_if_conditional202=it_125==hash_124,                                _if_conditional202) {
                                    __result66__ = __result_obj__ = default_value_123;
                                    come_call_finalizer2(sGenericsFun_finalize,default_value_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result66__;
                                }
                            }
                        }
                        else {
                            __result67__ = __result_obj__ = default_value_123;
                            come_call_finalizer2(sGenericsFun_finalize,default_value_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result67__;
                        }
                    }
                    __result68__ = __result_obj__ = default_value_123;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer2(sGenericsFun_finalize,default_value_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional191=self!=((void*)0)&&self->mImplType!=((void*)0),                                    _if_conditional191) {
                                        come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional192=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                                    _if_conditional192) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional193=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                                    _if_conditional193) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional194=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional194) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional195=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional195) {
                                        come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional196=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional196) {
                                        come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional197) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional198=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                    _if_conditional198) {
                                        come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional199=self!=((void*)0)&&self->mBlock!=((void*)0),                                    _if_conditional199) {
                                        self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional200=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                                    _if_conditional200) {
                                        self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional208=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional208) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_133;
_Bool _while_condtional19;
struct list_item$1CVALUEph* prev_it_134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_133, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_134, 0, sizeof(struct list_item$1CVALUEph*));
        it_133=self->head;
        while(_while_condtional19=it_133!=((void*)0),        _while_condtional19) {
            prev_it_134=it_133;
            it_133=it_133->next;
            come_call_finalizer2(list_item$1CVALUEphp_finalize,prev_it_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional214=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional214) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional215=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional215) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional216) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional217;
struct list$1CVALUEph* stack_saved_135;
struct list$1sRightValueObjectph* right_value_objects_136;
struct sType* type_before_137;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value103;
char* c_value_138;
struct sClass* klass_139;
char* class_name_140;
char* fun_name_141;
void* right_value104;
struct sType* type2_142;
void* right_value105;
char* fun_name2_143;
struct sFun* finalizer_144;
_Bool _if_conditional221;
void* right_value106;
_Bool _if_conditional222;
void* right_value107;
char* none_generics_name_145;
void* right_value108;
char* generics_fun_name_146;
void* right_value109;
struct sGenericsFun* generics_fun_147;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value110;
int i_148;
void* right_value111;
char* new_fun_name_149;
void* right_value112;
_Bool _if_conditional225;
void* right_value113;
char* __dec_obj53;
_Bool _if_conditional226;
void* right_value114;
_Bool _if_conditional227;
void* right_value115;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_150;
char* new_fun_name_151;
char* __dec_obj54;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value116;
char* type_name_152;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value117;
void* right_value118;
_Bool _if_conditional237;
void* right_value119;
void* right_value120;
_Bool _if_conditional238;
struct list$1tuple2$2charphsTypephph* o2_saved_153;
struct tuple2$2charphsTypeph* it_156;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_159;
struct sType* field_type_160;
_Bool _if_conditional243;
void* right_value121;
void* right_value122;
char* obj_161;
_Bool _if_conditional247;
struct list$1tuple2$2charphsTypephph* o2_saved_164;
struct tuple2$2charphsTypeph* it_165;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_166;
struct sType* field_type_167;
_Bool _if_conditional248;
void* right_value123;
void* right_value124;
char* obj_168;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value125;
char* type_name_169;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value126;
char* c_value_170;
struct sClass* klass_171;
char* class_name_172;
char* fun_name_173;
void* right_value127;
struct sType* type2_174;
void* right_value128;
char* fun_name2_175;
struct sFun* finalizer_176;
_Bool _if_conditional259;
void* right_value129;
_Bool _if_conditional260;
void* right_value130;
char* none_generics_name_177;
void* right_value131;
char* generics_fun_name_178;
void* right_value132;
struct sGenericsFun* generics_fun_179;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value133;
int i_180;
void* right_value134;
char* new_fun_name_181;
void* right_value135;
_Bool _if_conditional263;
void* right_value136;
char* __dec_obj55;
_Bool _if_conditional264;
void* right_value137;
_Bool _if_conditional265;
void* right_value138;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_182;
char* new_fun_name_183;
char* __dec_obj56;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value139;
char* type_name_184;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value140;
void* right_value141;
_Bool _if_conditional275;
void* right_value142;
void* right_value143;
_Bool _if_conditional276;
struct list$1tuple2$2charphsTypephph* o2_saved_185;
struct tuple2$2charphsTypeph* it_186;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_187;
struct sType* field_type_188;
_Bool _if_conditional277;
void* right_value144;
void* right_value145;
char* obj_189;
_Bool _if_conditional278;
struct list$1tuple2$2charphsTypephph* o2_saved_190;
struct tuple2$2charphsTypeph* it_191;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_192;
struct sType* field_type_193;
_Bool _if_conditional279;
void* right_value146;
void* right_value147;
char* obj_194;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value148;
char* type_name_195;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct list$1sRightValueObjectph* __dec_obj57;
struct list$1CVALUEph* __dec_obj58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&stack_saved_135, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_136, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_137, 0, sizeof(struct sType*));
right_value103 = (void*)0;
memset(&c_value_138, 0, sizeof(char*));
memset(&klass_139, 0, sizeof(struct sClass*));
memset(&class_name_140, 0, sizeof(char*));
memset(&fun_name_141, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&type2_142, 0, sizeof(struct sType*));
right_value105 = (void*)0;
memset(&fun_name2_143, 0, sizeof(char*));
memset(&finalizer_144, 0, sizeof(struct sFun*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&none_generics_name_145, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&generics_fun_name_146, 0, sizeof(char*));
right_value109 = (void*)0;
memset(&generics_fun_147, 0, sizeof(struct sGenericsFun*));
right_value110 = (void*)0;
memset(&i_148, 0, sizeof(int));
right_value111 = (void*)0;
memset(&new_fun_name_149, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&fun_150, 0, sizeof(struct sFun*));
memset(&new_fun_name_151, 0, sizeof(char*));
memset(&fun_150, 0, sizeof(struct sFun*));
memset(&new_fun_name_151, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&type_name_152, 0, sizeof(char*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&o2_saved_153, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_156, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
memset(&name_159, 0, sizeof(char*));
memset(&field_type_160, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&obj_161, 0, sizeof(char*));
memset(&o2_saved_164, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_165, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_166, 0, sizeof(char*));
memset(&field_type_167, 0, sizeof(struct sType*));
memset(&name_166, 0, sizeof(char*));
memset(&field_type_167, 0, sizeof(struct sType*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&obj_168, 0, sizeof(char*));
right_value125 = (void*)0;
memset(&type_name_169, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&c_value_170, 0, sizeof(char*));
memset(&klass_171, 0, sizeof(struct sClass*));
memset(&class_name_172, 0, sizeof(char*));
memset(&fun_name_173, 0, sizeof(char*));
right_value127 = (void*)0;
memset(&type2_174, 0, sizeof(struct sType*));
right_value128 = (void*)0;
memset(&fun_name2_175, 0, sizeof(char*));
memset(&finalizer_176, 0, sizeof(struct sFun*));
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&none_generics_name_177, 0, sizeof(char*));
right_value131 = (void*)0;
memset(&generics_fun_name_178, 0, sizeof(char*));
right_value132 = (void*)0;
memset(&generics_fun_179, 0, sizeof(struct sGenericsFun*));
right_value133 = (void*)0;
memset(&i_180, 0, sizeof(int));
right_value134 = (void*)0;
memset(&new_fun_name_181, 0, sizeof(char*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&fun_182, 0, sizeof(struct sFun*));
memset(&new_fun_name_183, 0, sizeof(char*));
memset(&fun_182, 0, sizeof(struct sFun*));
memset(&new_fun_name_183, 0, sizeof(char*));
right_value139 = (void*)0;
memset(&type_name_184, 0, sizeof(char*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&o2_saved_185, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_186, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_187, 0, sizeof(char*));
memset(&field_type_188, 0, sizeof(struct sType*));
memset(&name_187, 0, sizeof(char*));
memset(&field_type_188, 0, sizeof(struct sType*));
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&obj_189, 0, sizeof(char*));
memset(&o2_saved_190, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_191, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_192, 0, sizeof(char*));
memset(&field_type_193, 0, sizeof(struct sType*));
memset(&name_192, 0, sizeof(char*));
memset(&field_type_193, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&obj_194, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
    if(gComeGC) {
        return;
    }
    stack_saved_135=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_136=info->right_value_objects;
    type_before_137=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional219=type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value),    _if_conditional219) {
        if(force_delete_) {
            c_value_138=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(obj))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_139=type->mClass;
            class_name_140=klass_139->mName;
            fun_name_141="force_finalize";
            type2_142=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_142->mHeap=(_Bool)0;
            fun_name2_143=(char*)come_increment_ref_count(((char*)(right_value105=create_method_name(type,(_Bool)0,fun_name_141,info))));
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_144=((void*)0);
            if(_if_conditional221=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional221) {
                finalizer_144=((struct sFun*)(right_value106=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_143)));
                come_call_finalizer2(sFun_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional222=finalizer_144==((void*)0),                _if_conditional222) {
                    none_generics_name_145=(char*)come_increment_ref_count(((char*)(right_value107=get_none_generics_name(type2_142->mClass->mName))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_146=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("%s_%s",none_generics_name_145,fun_name_141))));
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_147=((struct sGenericsFun*)(right_value109=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_146)));
                    come_call_finalizer2(sGenericsFun_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(generics_fun_147) {
                        if(_if_conditional224=!create_generics_fun((char*)come_increment_ref_count(fun_name2_143),generics_fun_147,type,info),                        _if_conditional224) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_144=((struct sFun*)(right_value110=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_143)));
                        come_call_finalizer2(sFun_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    none_generics_name_145 = come_decrement_ref_count2(none_generics_name_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_146 = come_decrement_ref_count2(generics_fun_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_148=128-1;                i_148>=1;                i_148--                ){
                    new_fun_name_149=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("%s_v%d",fun_name2_143,i_148))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_144=((struct sFun*)(right_value112=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_149)));
                    come_call_finalizer2(sFun_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(finalizer_144) {
                        __dec_obj53=fun_name2_143;
                        fun_name2_143=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(new_fun_name_149))));
                        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_149 = come_decrement_ref_count2(new_fun_name_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_149 = come_decrement_ref_count2(new_fun_name_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional226=finalizer_144==((void*)0),                _if_conditional226) {
                    finalizer_144=((struct sFun*)(right_value114=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_143)));
                    come_call_finalizer2(sFun_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            if(_if_conditional227=finalizer_144==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional227) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value115=create_force_finalizer_automatically(type,fun_name_141,info)));
                fun_150=multiple_assign_var2->v1;
                new_fun_name_151=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj54=fun_name2_143;
                fun_name2_143=(char*)come_increment_ref_count(new_fun_name_151);
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_144=fun_150;
                new_fun_name_151 = come_decrement_ref_count2(new_fun_name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional228=finalizer_144!=((void*)0),            _if_conditional228) {
                if(_if_conditional229=klass_139->mProtocol&&type->mPointerNum==1,                _if_conditional229) {
                    type_name_152=(char*)come_increment_ref_count(((char*)(right_value116=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_138) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_143,c_value_138,type_name_152,c_value_138,type_name_152,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_143,c_value_138,type_name_152,c_value_138,type_name_152,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_143,c_value_138,type_name_152,c_value_138,type_name_152,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_143,c_value_138,type_name_152,c_value_138,type_name_152,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_138) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value117=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_143,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value118=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_143,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value119=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_143,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value120=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_143,c_value_138,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional238=klass_139->mStruct&&type->mPointerNum==0,                _if_conditional238) {
                    for(                    o2_saved_153=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),it_156=list$1tuple2$2charphsTypephph_begin((o2_saved_153));                    !list$1tuple2$2charphsTypephph_end((o2_saved_153));                    it_156=list$1tuple2$2charphsTypephph_next((o2_saved_153))                    ){
                        multiple_assign_var3=it_156;
                        name_159=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_160=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(_if_conditional243=field_type_160->mHeap&&field_type_160->mPointerNum>0,                        _if_conditional243) {
                            obj_161=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("(((%s)%s).%s)",((char*)(right_value121=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_138,name_159))));
                            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_160,obj_161,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_161 = come_decrement_ref_count2(obj_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_159 = come_decrement_ref_count2(name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional247=klass_139->mStruct&&type->mPointerNum==1,                    _if_conditional247) {
                        for(                        o2_saved_164=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),it_165=list$1tuple2$2charphsTypephph_begin((o2_saved_164));                        !list$1tuple2$2charphsTypephph_end((o2_saved_164));                        it_165=list$1tuple2$2charphsTypephph_next((o2_saved_164))                        ){
                            multiple_assign_var4=it_165;
                            name_166=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_167=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(_if_conditional248=field_type_167->mHeap&&field_type_167->mPointerNum>0,                            _if_conditional248) {
                                obj_168=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("(((%s)%s)->%s)",((char*)(right_value123=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_138,name_166))));
                                right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_167,obj_168,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_168 = come_decrement_ref_count2(obj_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_166 = come_decrement_ref_count2(name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional249=!type->mAllocaValue,                _if_conditional249) {
                    if(_if_conditional250=klass_139->mProtocol&&type->mPointerNum==1,                    _if_conditional250) {
                        if(c_value_138) {
                            type_name_169=(char*)come_increment_ref_count(((char*)(right_value125=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_138,c_value_138,c_value_138,type_name_169,c_value_138,type_name_169,c_value_138,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_138,c_value_138,c_value_138,type_name_169,c_value_138,type_name_169,c_value_138,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_138,c_value_138,c_value_138,type_name_169,c_value_138,type_name_169,c_value_138,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_138,c_value_138,c_value_138,type_name_169,c_value_138,type_name_169,c_value_138,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_138) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_138,c_value_138,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_138,c_value_138,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_138,c_value_138,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_138,c_value_138,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_138 = come_decrement_ref_count2(c_value_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_143 = come_decrement_ref_count2(fun_name2_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_170=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(obj))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_171=type->mClass;
            class_name_172=klass_171->mName;
            fun_name_173="finalize";
            type2_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value127=sType_clone(type))));
            come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type2_174->mHeap=(_Bool)0;
            fun_name2_175=(char*)come_increment_ref_count(((char*)(right_value128=create_method_name(type,(_Bool)0,fun_name_173,info))));
            right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            finalizer_176=((void*)0);
            if(_if_conditional259=list$1sTypeph_length(type->mGenericsTypes)>0,            _if_conditional259) {
                finalizer_176=((struct sFun*)(right_value129=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_175)));
                come_call_finalizer2(sFun_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional260=finalizer_176==((void*)0),                _if_conditional260) {
                    none_generics_name_177=(char*)come_increment_ref_count(((char*)(right_value130=get_none_generics_name(type2_174->mClass->mName))));
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_name_178=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s_%s",none_generics_name_177,fun_name_173))));
                    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    generics_fun_179=((struct sGenericsFun*)(right_value132=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_178)));
                    come_call_finalizer2(sGenericsFun_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(generics_fun_179) {
                        if(_if_conditional262=!create_generics_fun((char*)come_increment_ref_count(fun_name2_175),generics_fun_179,type,info),                        _if_conditional262) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_176=((struct sFun*)(right_value133=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_175)));
                        come_call_finalizer2(sFun_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    none_generics_name_177 = come_decrement_ref_count2(none_generics_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_178 = come_decrement_ref_count2(generics_fun_name_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_180=128-1;                i_180>=1;                i_180--                ){
                    new_fun_name_181=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s_v%d",fun_name2_175,i_180))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    finalizer_176=((struct sFun*)(right_value135=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_181)));
                    come_call_finalizer2(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(finalizer_176) {
                        __dec_obj55=fun_name2_175;
                        fun_name2_175=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(new_fun_name_181))));
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_181 = come_decrement_ref_count2(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_181 = come_decrement_ref_count2(new_fun_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional264=finalizer_176==((void*)0),                _if_conditional264) {
                    finalizer_176=((struct sFun*)(right_value137=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_175)));
                    come_call_finalizer2(sFun_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
            if(_if_conditional265=finalizer_176==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,            _if_conditional265) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value138=create_finalizer_automatically(type,fun_name_173,info)));
                fun_182=multiple_assign_var5->v1;
                new_fun_name_183=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj56=fun_name2_175;
                fun_name2_175=(char*)come_increment_ref_count(new_fun_name_183);
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_176=fun_182;
                new_fun_name_183 = come_decrement_ref_count2(new_fun_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional266=finalizer_176!=((void*)0),            _if_conditional266) {
                if(_if_conditional267=klass_171->mProtocol&&type->mPointerNum==1,                _if_conditional267) {
                    type_name_184=(char*)come_increment_ref_count(((char*)(right_value139=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(c_value_170) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__),\n",fun_name2_175,c_value_170,type_name_184,c_value_170,type_name_184,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, __result_obj__);\n",fun_name2_175,c_value_170,type_name_184,c_value_170,type_name_184,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_175,c_value_170,type_name_184,c_value_170,type_name_184,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_175,c_value_170,type_name_184,c_value_170,type_name_184,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_170) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value140=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__),\n",fun_name2_175,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value141=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, __result_obj__);\n",fun_name2_175,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value142=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0),\n",fun_name2_175,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                add_come_code(info,((char*)(right_value143=xsprintf("come_call_finalizer2(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d, (void*)0);\n",fun_name2_175,c_value_170,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional276=klass_171->mStruct&&type->mPointerNum==0,                _if_conditional276) {
                    for(                    o2_saved_185=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_171->mFields)),it_186=list$1tuple2$2charphsTypephph_begin((o2_saved_185));                    !list$1tuple2$2charphsTypephph_end((o2_saved_185));                    it_186=list$1tuple2$2charphsTypephph_next((o2_saved_185))                    ){
                        multiple_assign_var6=it_186;
                        name_187=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_188=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(_if_conditional277=field_type_188->mHeap&&field_type_188->mPointerNum>0,                        _if_conditional277) {
                            obj_189=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("(((%s)%s).%s)",((char*)(right_value144=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_170,name_187))));
                            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            free_object(field_type_188,obj_189,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_189 = come_decrement_ref_count2(obj_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_187 = come_decrement_ref_count2(name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,field_type_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional278=klass_171->mStruct&&type->mPointerNum==1,                    _if_conditional278) {
                        for(                        o2_saved_190=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_171->mFields)),it_191=list$1tuple2$2charphsTypephph_begin((o2_saved_190));                        !list$1tuple2$2charphsTypephph_end((o2_saved_190));                        it_191=list$1tuple2$2charphsTypephph_next((o2_saved_190))                        ){
                            multiple_assign_var7=it_191;
                            name_192=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_193=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(_if_conditional279=field_type_193->mHeap&&field_type_193->mPointerNum>0,                            _if_conditional279) {
                                obj_194=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("(((%s)%s)->%s)",((char*)(right_value146=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_170,name_192))));
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                free_object(field_type_193,obj_194,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_194 = come_decrement_ref_count2(obj_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_192 = come_decrement_ref_count2(name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,field_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional280=!type->mAllocaValue,                _if_conditional280) {
                    if(_if_conditional281=klass_171->mProtocol&&type->mPointerNum==1,                    _if_conditional281) {
                        if(c_value_170) {
                            type_name_195=(char*)come_increment_ref_count(((char*)(right_value148=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, __result_obj__):0,\n",c_value_170,c_value_170,c_value_170,type_name_195,c_value_170,type_name_195,c_value_170,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, __result_obj__); } \n",c_value_170,c_value_170,c_value_170,type_name_195,c_value_170,type_name_195,c_value_170,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_170,c_value_170,c_value_170,type_name_195,c_value_170,type_name_195,c_value_170,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_170,c_value_170,c_value_170,type_name_195,c_value_170,type_name_195,c_value_170,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_170) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__),\n",c_value_170,c_value_170,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, __result_obj__);\n",c_value_170,c_value_170,no_decrement,no_free,force_delete_);
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_170,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_170,c_value_170,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_170 = come_decrement_ref_count2(c_value_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name2_175 = come_decrement_ref_count2(fun_name2_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj57=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_136);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj58=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_135);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct tuple2$2charphsTypeph* result_154;
struct tuple2$2charphsTypeph* __result69__;
_Bool _if_conditional240;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* result_155;
struct tuple2$2charphsTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional239=self==((void*)0),                        _if_conditional239) {
                            memset(&result_154,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result69__ = __result_obj__ = result_154;
                            return __result69__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result70__ = __result_obj__ = self->it->item;
                            return __result70__;
                        }
                        memset(&result_155,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result71__ = __result_obj__ = result_155;
                        return __result71__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result72__ = self==((void*)0)||self->it==((void*)0);
                        return __result72__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional241;
struct tuple2$2charphsTypeph* result_157;
struct tuple2$2charphsTypeph* __result73__;
_Bool _if_conditional242;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_158;
struct tuple2$2charphsTypeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_158, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional241=self==((void*)0)||self->it==((void*)0),                        _if_conditional241) {
                            memset(&result_157,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result73__ = __result_obj__ = result_157;
                            return __result73__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result74__ = __result_obj__ = self->it->item;
                            return __result74__;
                        }
                        memset(&result_158,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result75__ = __result_obj__ = result_158;
                        return __result75__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_162;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_163;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_163, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_162=self->head;
                        while(_while_condtional20=it_162!=((void*)0),                        _while_condtional20) {
                            prev_it_163=it_162;
                            it_162=it_162->next;
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional244=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional244) {
                                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional245=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional245) {
                                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional246=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional246) {
                                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct sType* type2_196;
_Bool _if_conditional290;
char* result_197;
struct sType* result_type_198;
struct list$1CVALUEph* stack_saved_199;
struct list$1sRightValueObjectph* right_value_objects_200;
void* right_value150;
char* c_value_201;
struct sClass* klass_202;
char* class_name_203;
char* fun_name_204;
struct sFun* cloner_205;
char* fun_name2_206;
_Bool _if_conditional291;
void* right_value151;
char* none_generics_name_207;
void* right_value152;
struct sType* obj_type_208;
void* right_value153;
char* __dec_obj59;
void* right_value154;
char* fun_name3_209;
void* right_value155;
struct sGenericsFun* generics_fun_212;
_Bool _if_conditional296;
void* right_value156;
_Bool _if_conditional297;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
void* right_value161;
struct tuple2$2sTypephcharph* __result81__;
void* right_value162;
void* right_value163;
char* __dec_obj62;
int i_213;
void* right_value164;
char* new_fun_name_214;
void* right_value165;
_Bool _if_conditional300;
void* right_value166;
char* __dec_obj63;
_Bool _if_conditional301;
void* right_value167;
_Bool _if_conditional302;
void* right_value168;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_215;
char* new_fun_name_216;
char* __dec_obj64;
_Bool _if_conditional303;
void* right_value169;
char* __dec_obj65;
struct sType* __dec_obj66;
void* right_value170;
struct sType* __dec_obj67;
void* right_value171;
char* type_name_217;
void* right_value172;
char* __dec_obj68;
void* right_value173;
struct sType* __dec_obj69;
struct list$1sRightValueObjectph* __dec_obj70;
struct list$1CVALUEph* __dec_obj71;
void* right_value174;
void* right_value175;
struct tuple2$2sTypephcharph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&type2_196, 0, sizeof(struct sType*));
memset(&result_197, 0, sizeof(char*));
memset(&result_type_198, 0, sizeof(struct sType*));
memset(&stack_saved_199, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_200, 0, sizeof(struct list$1sRightValueObjectph*));
right_value150 = (void*)0;
memset(&c_value_201, 0, sizeof(char*));
memset(&klass_202, 0, sizeof(struct sClass*));
memset(&class_name_203, 0, sizeof(char*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&cloner_205, 0, sizeof(struct sFun*));
memset(&fun_name2_206, 0, sizeof(char*));
right_value151 = (void*)0;
memset(&none_generics_name_207, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&obj_type_208, 0, sizeof(struct sType*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&fun_name3_209, 0, sizeof(char*));
right_value155 = (void*)0;
memset(&generics_fun_212, 0, sizeof(struct sGenericsFun*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&i_213, 0, sizeof(int));
right_value164 = (void*)0;
memset(&new_fun_name_214, 0, sizeof(char*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&fun_215, 0, sizeof(struct sFun*));
memset(&new_fun_name_216, 0, sizeof(char*));
memset(&fun_215, 0, sizeof(struct sFun*));
memset(&new_fun_name_216, 0, sizeof(char*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&type_name_217, 0, sizeof(char*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    type2_196=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_197=((void*)0);
    result_type_198=((void*)0);
    stack_saved_199=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_200=info->right_value_objects;
    c_value_201=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(obj))));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_202=type->mClass;
    class_name_203=klass_202->mName;
    fun_name_204="clone";
    cloner_205=((void*)0);
    if(_if_conditional291=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional291) {
        none_generics_name_207=(char*)come_increment_ref_count(((char*)(right_value151=get_none_generics_name(type->mClass->mName))));
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj59=fun_name2_206;
        fun_name2_206=(char*)come_increment_ref_count(((char*)(right_value153=create_method_name(obj_type_208,(_Bool)0,fun_name_204,info))));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_209=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s_%s",none_generics_name_207,fun_name_204))));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_212=((struct sGenericsFun*)(right_value155=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_209,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_212) {
            if(_if_conditional297=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(fun_name2_206)))),generics_fun_212,obj_type_208,info),            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional297) {
                __result81__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value161=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value160=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 785, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 785, "struct sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("")))))));
                none_generics_name_207 = come_decrement_ref_count2(none_generics_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_209 = come_decrement_ref_count2(fun_name3_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_201 = come_decrement_ref_count2(c_value_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_206 = come_decrement_ref_count2(fun_name2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result81__;
            }
        }
        cloner_205=((struct sFun*)(right_value162=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_206)));
        come_call_finalizer2(sFun_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_207 = come_decrement_ref_count2(none_generics_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_209 = come_decrement_ref_count2(fun_name3_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj62=fun_name2_206;
        fun_name2_206=(char*)come_increment_ref_count(((char*)(right_value163=create_method_name(type,(_Bool)0,fun_name_204,info))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_213=128-1;        i_213>=1;        i_213--        ){
            new_fun_name_214=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s_v%d",fun_name2_206,i_213))));
            right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_205=((struct sFun*)(right_value165=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_214)));
            come_call_finalizer2(sFun_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_205) {
                __dec_obj63=fun_name2_206;
                fun_name2_206=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(new_fun_name_214))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_214 = come_decrement_ref_count2(new_fun_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_214 = come_decrement_ref_count2(new_fun_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional301=cloner_205==((void*)0),        _if_conditional301) {
            cloner_205=((struct sFun*)(right_value167=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_206)));
            come_call_finalizer2(sFun_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional302=cloner_205==((void*)0)&&!type->mClass->mNumber,    _if_conditional302) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value168=create_cloner_automatically(type,fun_name_204,info)));
        fun_215=multiple_assign_var8->v1;
        new_fun_name_216=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=fun_name2_206;
        fun_name2_206=(char*)come_increment_ref_count(new_fun_name_216);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_205=fun_215;
        new_fun_name_216 = come_decrement_ref_count2(new_fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional303=cloner_205!=((void*)0),    _if_conditional303) {
        __dec_obj65=result_197;
        result_197=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s(%s)",fun_name2_206,c_value_201))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj66=result_type_198;
        result_type_198=(struct sType*)come_increment_ref_count(cloner_205->mResultType);
        come_call_finalizer2(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj67=result_type_198;
        result_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=solve_generics(result_type_198,type,info))));
        come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        type2_196->mHeap=(_Bool)1;
        type_name_217=(char*)come_increment_ref_count(((char*)(right_value171=make_type_name_string(type2_196,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj68=result_197;
        result_197=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_217,c_value_201,info->sname,info->sline,type_name_217))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj69=result_type_198;
        result_type_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_name_217 = come_decrement_ref_count2(type_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj70=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_200);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj71=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_199);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result82__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value175=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value174=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 834, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_198),(char*)come_increment_ref_count(result_197))));
    come_call_finalizer2(sType_finalize,type2_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_201 = come_decrement_ref_count2(c_value_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_206 = come_decrement_ref_count2(fun_name2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result82__;
    come_call_finalizer2(sType_finalize,type2_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    result_197 = come_decrement_ref_count2(result_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    c_value_201 = come_decrement_ref_count2(c_value_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_206 = come_decrement_ref_count2(fun_name2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_210;
unsigned int it_211;
_Bool _while_condtional21;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct sGenericsFun* __result76__;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sGenericsFun* __result77__;
struct sGenericsFun* __result78__;
struct sGenericsFun* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&it_211, 0, sizeof(unsigned int));
            hash_210=string_get_hash_key(((char*)key))%self->size;
            it_211=hash_210;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional292=self->item_existance[it_211],                _if_conditional292) {
                    if(_if_conditional293=string_equals(self->keys[it_211],key),                    _if_conditional293) {
                        __result76__ = __result_obj__ = self->items[it_211];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                    }
                    it_211++;
                    if(_if_conditional294=it_211>=self->size,                    _if_conditional294) {
                        it_211=0;
                    }
                    else {
                        if(_if_conditional295=it_211==hash_210,                        _if_conditional295) {
                            __result77__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result77__;
                        }
                    }
                }
                else {
                    __result78__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                }
            }
            __result79__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result79__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj60;
char* __dec_obj61;
struct tuple2$2sTypephcharph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj60=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    __dec_obj61=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result80__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result80__;
                    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional298=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional298) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional299=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional299) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional304;
char* result_218;
struct list$1CVALUEph* stack_saved_219;
struct list$1sRightValueObjectph* right_value_objects_220;
struct sClass* klass_221;
char* class_name_222;
char* fun_name_223;
void* right_value176;
struct sType* type2_224;
struct sFun* cloner_225;
char* fun_name2_226;
_Bool _if_conditional305;
void* right_value177;
char* none_generics_name_227;
void* right_value178;
struct sType* obj_type_228;
void* right_value179;
char* __dec_obj72;
void* right_value180;
char* fun_name3_229;
void* right_value181;
struct sGenericsFun* generics_fun_230;
_Bool _if_conditional306;
void* right_value182;
_Bool _if_conditional307;
_Bool __result83__;
void* right_value183;
void* right_value184;
char* __dec_obj73;
int i_231;
void* right_value185;
char* new_fun_name_232;
void* right_value186;
_Bool _if_conditional308;
void* right_value187;
char* __dec_obj74;
_Bool _if_conditional309;
void* right_value188;
_Bool _if_conditional310;
void* right_value189;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_233;
char* new_fun_name_234;
char* __dec_obj75;
struct list$1sRightValueObjectph* __dec_obj76;
struct list$1CVALUEph* __dec_obj77;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_218, 0, sizeof(char*));
memset(&stack_saved_219, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_220, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_221, 0, sizeof(struct sClass*));
memset(&class_name_222, 0, sizeof(char*));
memset(&fun_name_223, 0, sizeof(char*));
right_value176 = (void*)0;
memset(&type2_224, 0, sizeof(struct sType*));
memset(&cloner_225, 0, sizeof(struct sFun*));
memset(&fun_name2_226, 0, sizeof(char*));
right_value177 = (void*)0;
memset(&none_generics_name_227, 0, sizeof(char*));
right_value178 = (void*)0;
memset(&obj_type_228, 0, sizeof(struct sType*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&fun_name3_229, 0, sizeof(char*));
right_value181 = (void*)0;
memset(&generics_fun_230, 0, sizeof(struct sGenericsFun*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&i_231, 0, sizeof(int));
right_value185 = (void*)0;
memset(&new_fun_name_232, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&fun_233, 0, sizeof(struct sFun*));
memset(&new_fun_name_234, 0, sizeof(char*));
memset(&fun_233, 0, sizeof(struct sFun*));
memset(&new_fun_name_234, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_218=((void*)0);
    stack_saved_219=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_220=info->right_value_objects;
    klass_221=type->mClass;
    class_name_222=klass_221->mName;
    fun_name_223="equals";
    type2_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_224->mHeap=(_Bool)0;
    cloner_225=((void*)0);
    if(_if_conditional305=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional305) {
        none_generics_name_227=(char*)come_increment_ref_count(((char*)(right_value177=get_none_generics_name(type->mClass->mName))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_228=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj72=fun_name2_226;
        fun_name2_226=(char*)come_increment_ref_count(((char*)(right_value179=create_method_name(obj_type_228,(_Bool)0,fun_name_223,info))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_229=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s_%s",none_generics_name_227,fun_name_223))));
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_230=((struct sGenericsFun*)(right_value181=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_229,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_230) {
            if(_if_conditional307=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(fun_name2_226)))),generics_fun_230,obj_type_228,info),            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional307) {
                __result83__ = (_Bool)0;
                none_generics_name_227 = come_decrement_ref_count2(none_generics_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_229 = come_decrement_ref_count2(fun_name3_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_226 = come_decrement_ref_count2(fun_name2_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result83__;
            }
        }
        cloner_225=((struct sFun*)(right_value183=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_226)));
        come_call_finalizer2(sFun_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_227 = come_decrement_ref_count2(none_generics_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_229 = come_decrement_ref_count2(fun_name3_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj73=fun_name2_226;
        fun_name2_226=(char*)come_increment_ref_count(((char*)(right_value184=create_method_name(type,(_Bool)0,fun_name_223,info))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_231=128-1;        i_231>=1;        i_231--        ){
            new_fun_name_232=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s_v%d",fun_name2_226,i_231))));
            right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_225=((struct sFun*)(right_value186=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_232)));
            come_call_finalizer2(sFun_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_225) {
                __dec_obj74=fun_name2_226;
                fun_name2_226=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(new_fun_name_232))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_232 = come_decrement_ref_count2(new_fun_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_232 = come_decrement_ref_count2(new_fun_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional309=cloner_225==((void*)0),        _if_conditional309) {
            cloner_225=((struct sFun*)(right_value188=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_226)));
            come_call_finalizer2(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional310=cloner_225==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional310) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value189=create_equals_automatically(type,fun_name_223,info)));
        fun_233=multiple_assign_var9->v1;
        new_fun_name_234=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=fun_name2_226;
        fun_name2_226=(char*)come_increment_ref_count(new_fun_name_234);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_225=fun_233;
        new_fun_name_234 = come_decrement_ref_count2(new_fun_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj76=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_220);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj77=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_219);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result84__ = (_Bool)1;
    result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_226 = come_decrement_ref_count2(fun_name2_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_226 = come_decrement_ref_count2(fun_name2_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional311;
char* result_235;
struct list$1CVALUEph* stack_saved_236;
struct list$1sRightValueObjectph* right_value_objects_237;
struct sClass* klass_238;
char* class_name_239;
char* fun_name_240;
void* right_value190;
struct sType* type2_241;
struct sFun* cloner_242;
char* fun_name2_243;
_Bool _if_conditional312;
void* right_value191;
char* none_generics_name_244;
void* right_value192;
struct sType* obj_type_245;
void* right_value193;
char* __dec_obj78;
void* right_value194;
char* fun_name3_246;
void* right_value195;
struct sGenericsFun* generics_fun_247;
_Bool _if_conditional313;
void* right_value196;
_Bool _if_conditional314;
_Bool __result85__;
void* right_value197;
void* right_value198;
char* __dec_obj79;
int i_248;
void* right_value199;
char* new_fun_name_249;
void* right_value200;
_Bool _if_conditional315;
void* right_value201;
char* __dec_obj80;
_Bool _if_conditional316;
void* right_value202;
_Bool _if_conditional317;
void* right_value203;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_250;
char* new_fun_name_251;
char* __dec_obj81;
struct list$1sRightValueObjectph* __dec_obj82;
struct list$1CVALUEph* __dec_obj83;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_235, 0, sizeof(char*));
memset(&stack_saved_236, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_237, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_238, 0, sizeof(struct sClass*));
memset(&class_name_239, 0, sizeof(char*));
memset(&fun_name_240, 0, sizeof(char*));
right_value190 = (void*)0;
memset(&type2_241, 0, sizeof(struct sType*));
memset(&cloner_242, 0, sizeof(struct sFun*));
memset(&fun_name2_243, 0, sizeof(char*));
right_value191 = (void*)0;
memset(&none_generics_name_244, 0, sizeof(char*));
right_value192 = (void*)0;
memset(&obj_type_245, 0, sizeof(struct sType*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&fun_name3_246, 0, sizeof(char*));
right_value195 = (void*)0;
memset(&generics_fun_247, 0, sizeof(struct sGenericsFun*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&i_248, 0, sizeof(int));
right_value199 = (void*)0;
memset(&new_fun_name_249, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&fun_250, 0, sizeof(struct sFun*));
memset(&new_fun_name_251, 0, sizeof(char*));
memset(&fun_250, 0, sizeof(struct sFun*));
memset(&new_fun_name_251, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_235=((void*)0);
    stack_saved_236=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_237=info->right_value_objects;
    klass_238=type->mClass;
    class_name_239=klass_238->mName;
    fun_name_240="operator_equals";
    type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_241->mHeap=(_Bool)0;
    cloner_242=((void*)0);
    if(_if_conditional312=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional312) {
        none_generics_name_244=(char*)come_increment_ref_count(((char*)(right_value191=get_none_generics_name(type->mClass->mName))));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=fun_name2_243;
        fun_name2_243=(char*)come_increment_ref_count(((char*)(right_value193=create_method_name(obj_type_245,(_Bool)0,fun_name_240,info))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_246=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s_%s",none_generics_name_244,fun_name_240))));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_247=((struct sGenericsFun*)(right_value195=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_246,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_247) {
            if(_if_conditional314=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(fun_name2_243)))),generics_fun_247,obj_type_245,info),            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional314) {
                __result85__ = (_Bool)0;
                none_generics_name_244 = come_decrement_ref_count2(none_generics_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_246 = come_decrement_ref_count2(fun_name3_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_243 = come_decrement_ref_count2(fun_name2_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result85__;
            }
        }
        cloner_242=((struct sFun*)(right_value197=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_243)));
        come_call_finalizer2(sFun_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_244 = come_decrement_ref_count2(none_generics_name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_246 = come_decrement_ref_count2(fun_name3_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj79=fun_name2_243;
        fun_name2_243=(char*)come_increment_ref_count(((char*)(right_value198=create_method_name(type,(_Bool)0,fun_name_240,info))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_248=128-1;        i_248>=1;        i_248--        ){
            new_fun_name_249=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("%s_v%d",fun_name2_243,i_248))));
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_242=((struct sFun*)(right_value200=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_249)));
            come_call_finalizer2(sFun_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_242) {
                __dec_obj80=fun_name2_243;
                fun_name2_243=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(new_fun_name_249))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_249 = come_decrement_ref_count2(new_fun_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_249 = come_decrement_ref_count2(new_fun_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional316=cloner_242==((void*)0),        _if_conditional316) {
            cloner_242=((struct sFun*)(right_value202=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_243)));
            come_call_finalizer2(sFun_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional317=cloner_242==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional317) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value203=create_operator_equals_automatically(type,fun_name_240,info)));
        fun_250=multiple_assign_var10->v1;
        new_fun_name_251=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=fun_name2_243;
        fun_name2_243=(char*)come_increment_ref_count(new_fun_name_251);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_242=fun_250;
        new_fun_name_251 = come_decrement_ref_count2(new_fun_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj82=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_237);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj83=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_236);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result86__ = (_Bool)1;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_243 = come_decrement_ref_count2(fun_name2_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result86__;
    result_235 = come_decrement_ref_count2(result_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_241, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_243 = come_decrement_ref_count2(fun_name2_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional318;
char* result_252;
struct list$1CVALUEph* stack_saved_253;
struct list$1sRightValueObjectph* right_value_objects_254;
struct sClass* klass_255;
char* class_name_256;
char* fun_name_257;
void* right_value204;
struct sType* type2_258;
struct sFun* cloner_259;
char* fun_name2_260;
_Bool _if_conditional319;
void* right_value205;
char* none_generics_name_261;
void* right_value206;
struct sType* obj_type_262;
void* right_value207;
char* __dec_obj84;
void* right_value208;
char* fun_name3_263;
void* right_value209;
struct sGenericsFun* generics_fun_264;
_Bool _if_conditional320;
void* right_value210;
_Bool _if_conditional321;
_Bool __result87__;
void* right_value211;
void* right_value212;
char* __dec_obj85;
int i_265;
void* right_value213;
char* new_fun_name_266;
void* right_value214;
_Bool _if_conditional322;
void* right_value215;
char* __dec_obj86;
_Bool _if_conditional323;
void* right_value216;
_Bool _if_conditional324;
void* right_value217;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_267;
char* new_fun_name_268;
char* __dec_obj87;
struct list$1sRightValueObjectph* __dec_obj88;
struct list$1CVALUEph* __dec_obj89;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_252, 0, sizeof(char*));
memset(&stack_saved_253, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_254, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_255, 0, sizeof(struct sClass*));
memset(&class_name_256, 0, sizeof(char*));
memset(&fun_name_257, 0, sizeof(char*));
right_value204 = (void*)0;
memset(&type2_258, 0, sizeof(struct sType*));
memset(&cloner_259, 0, sizeof(struct sFun*));
memset(&fun_name2_260, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&none_generics_name_261, 0, sizeof(char*));
right_value206 = (void*)0;
memset(&obj_type_262, 0, sizeof(struct sType*));
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&fun_name3_263, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&generics_fun_264, 0, sizeof(struct sGenericsFun*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&i_265, 0, sizeof(int));
right_value213 = (void*)0;
memset(&new_fun_name_266, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&fun_267, 0, sizeof(struct sFun*));
memset(&new_fun_name_268, 0, sizeof(char*));
memset(&fun_267, 0, sizeof(struct sFun*));
memset(&new_fun_name_268, 0, sizeof(char*));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_252=((void*)0);
    stack_saved_253=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_254=info->right_value_objects;
    klass_255=type->mClass;
    class_name_256=klass_255->mName;
    fun_name_257="operator_not_equals";
    type2_258=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_258->mHeap=(_Bool)0;
    cloner_259=((void*)0);
    if(_if_conditional319=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional319) {
        none_generics_name_261=(char*)come_increment_ref_count(((char*)(right_value205=get_none_generics_name(type->mClass->mName))));
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_262=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=fun_name2_260;
        fun_name2_260=(char*)come_increment_ref_count(((char*)(right_value207=create_method_name(obj_type_262,(_Bool)0,fun_name_257,info))));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_263=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("%s_%s",none_generics_name_261,fun_name_257))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_264=((struct sGenericsFun*)(right_value209=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_263,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(generics_fun_264) {
            if(_if_conditional321=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(fun_name2_260)))),generics_fun_264,obj_type_262,info),            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional321) {
                __result87__ = (_Bool)0;
                none_generics_name_261 = come_decrement_ref_count2(none_generics_name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_263 = come_decrement_ref_count2(fun_name3_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_252 = come_decrement_ref_count2(result_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type2_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_260 = come_decrement_ref_count2(fun_name2_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result87__;
            }
        }
        cloner_259=((struct sFun*)(right_value211=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_260)));
        come_call_finalizer2(sFun_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        none_generics_name_261 = come_decrement_ref_count2(none_generics_name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_263 = come_decrement_ref_count2(fun_name3_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj85=fun_name2_260;
        fun_name2_260=(char*)come_increment_ref_count(((char*)(right_value212=create_method_name(type,(_Bool)0,fun_name_257,info))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_265=128-1;        i_265>=1;        i_265--        ){
            new_fun_name_266=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s_v%d",fun_name2_260,i_265))));
            right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_259=((struct sFun*)(right_value214=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_266)));
            come_call_finalizer2(sFun_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(cloner_259) {
                __dec_obj86=fun_name2_260;
                fun_name2_260=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(new_fun_name_266))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_266 = come_decrement_ref_count2(new_fun_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_266 = come_decrement_ref_count2(new_fun_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional323=cloner_259==((void*)0),        _if_conditional323) {
            cloner_259=((struct sFun*)(right_value216=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_260)));
            come_call_finalizer2(sFun_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(_if_conditional324=cloner_259==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber,    _if_conditional324) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value217=create_operator_not_equals_automatically(type,fun_name_257,info)));
        fun_267=multiple_assign_var11->v1;
        new_fun_name_268=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=fun_name2_260;
        fun_name2_260=(char*)come_increment_ref_count(new_fun_name_268);
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_259=fun_267;
        new_fun_name_268 = come_decrement_ref_count2(new_fun_name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj88=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_254);
    come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj89=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_253);
    come_call_finalizer2(list$1CVALUEph_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result88__ = (_Bool)1;
    result_252 = come_decrement_ref_count2(result_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_260 = come_decrement_ref_count2(fun_name2_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result88__;
    result_252 = come_decrement_ref_count2(result_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1CVALUEphp_finalize,stack_saved_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_258, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_260 = come_decrement_ref_count2(fun_name2_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional325;
_Bool __result89__;
struct list$1sRightValueObjectph* right_value_objects_269;
struct list$1sRightValueObjectph* o2_saved_270;
struct sRightValueObject* it_271;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool __result90__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&right_value_objects_269, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_270, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_271, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result89__ = (_Bool)0;
        return __result89__;
    }
    right_value_objects_269=info->right_value_objects;
    for(    o2_saved_270=(right_value_objects_269),it_271=list$1sRightValueObjectph_begin((o2_saved_270));    !list$1sRightValueObjectph_end((o2_saved_270));    it_271=list$1sRightValueObjectph_next((o2_saved_270))    ){
        if(_if_conditional326=it_271&&!it_271->mFreed,        _if_conditional326) {
            if(_if_conditional327=string_operator_equals(it_271->mFunName,info->come_fun->mName)&&it_271->mBlockLevel==info->block_level,            _if_conditional327) {
                __result90__ = (_Bool)1;
                return __result90__;
            }
        }
    }
    __result91__ = (_Bool)0;
    return __result91__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
void* __result_obj__;
_Bool _if_conditional328;
_Bool free_right_value_272;
struct list$1sRightValueObjectph* right_value_objects_273;
int n_274;
struct list$1sRightValueObjectph* o2_saved_275;
struct sRightValueObject* it_276;
_Bool _if_conditional329;
_Bool _if_conditional330;
void* right_value218;
struct sType* type_277;
void* right_value219;
struct sType* __dec_obj90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&free_right_value_272, 0, sizeof(_Bool));
memset(&right_value_objects_273, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_274, 0, sizeof(int));
memset(&o2_saved_275, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_276, 0, sizeof(struct sRightValueObject*));
right_value218 = (void*)0;
memset(&type_277, 0, sizeof(struct sType*));
right_value219 = (void*)0;
    if(gComeGC) {
        return;
    }
    free_right_value_272=(_Bool)0;
    right_value_objects_273=info->right_value_objects;
    n_274=0;
    for(    o2_saved_275=(right_value_objects_273),it_276=list$1sRightValueObjectph_begin((o2_saved_275));    !list$1sRightValueObjectph_end((o2_saved_275));    it_276=list$1sRightValueObjectph_next((o2_saved_275))    ){
        if(_if_conditional329=it_276&&!it_276->mFreed,        _if_conditional329) {
            if(_if_conditional330=string_operator_equals(it_276->mFunName,info->come_fun->mName)&&it_276->mBlockLevel==info->block_level,            _if_conditional330) {
                type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(it_276->mType))));
                come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj90=type_277;
                type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=solve_type(type_277,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                free_object(type_277,it_276->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_276->mFreed=(_Bool)1;
                free_right_value_272=(_Bool)1;
                come_call_finalizer2(sType_finalize,type_277, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        n_274++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional331;
_Bool __result92__;
struct list$1sRightValueObjectph* o2_saved_278;
struct sRightValueObject* it_279;
_Bool _if_conditional332;
_Bool __result93__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_278, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_279, 0, sizeof(struct sRightValueObject*));
    if(gComeGC) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    for(    o2_saved_278=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_279=list$1sRightValueObjectph_begin((o2_saved_278));    !list$1sRightValueObjectph_end((o2_saved_278));    it_279=list$1sRightValueObjectph_next((o2_saved_278))    ){
        if(_if_conditional332=it_279->mID==right_value_num,        _if_conditional332) {
            __result93__ = (_Bool)1;
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
    }
    come_call_finalizer2(list$1sRightValueObjectphp_finalize,o2_saved_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __result94__ = (_Bool)0;
    return __result94__;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_280;
void* right_value220;
struct sVar* var__284;
_Bool _if_conditional341;
struct sVar* __result99__;
struct sVar* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_280, 0, sizeof(struct sVarTable*));
right_value220 = (void*)0;
memset(&var__284, 0, sizeof(struct sVar*));
    it_280=table;
    while(it_280) {
        var__284=((struct sVar*)(right_value220=map$2charphsVarphp_operator_load_element(it_280->mVars,name)));
        come_call_finalizer2(sVar_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(var__284) {
            __result99__ = __result_obj__ = var__284;
            return __result99__;
        }
        it_280=it_280->mParent;
    }
    __result100__ = __result_obj__ = ((void*)0);
    return __result100__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_281;
unsigned int hash_282;
unsigned int it_283;
_Bool _while_condtional22;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct sVar* __result95__;
_Bool _if_conditional339;
_Bool _if_conditional340;
struct sVar* __result96__;
struct sVar* __result97__;
struct sVar* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_281, 0, sizeof(struct sVar*));
memset(&hash_282, 0, sizeof(unsigned int));
memset(&it_283, 0, sizeof(unsigned int));
            memset(&default_value_281,0,sizeof(struct sVar*));
            hash_282=string_get_hash_key(((char*)key))%self->size;
            it_283=hash_282;
            while(_while_condtional22=(_Bool)1,            _while_condtional22) {
                if(_if_conditional333=self->item_existance[it_283],                _if_conditional333) {
                    if(_if_conditional334=string_equals(self->keys[it_283],key),                    _if_conditional334) {
                        __result95__ = __result_obj__ = self->items[it_283];
                        come_call_finalizer2(sVar_finalize,default_value_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result95__;
                    }
                    it_283++;
                    if(_if_conditional339=it_283>=self->size,                    _if_conditional339) {
                        it_283=0;
                    }
                    else {
                        if(_if_conditional340=it_283==hash_282,                        _if_conditional340) {
                            __result96__ = __result_obj__ = default_value_281;
                            come_call_finalizer2(sVar_finalize,default_value_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result96__;
                        }
                    }
                }
                else {
                    __result97__ = __result_obj__ = default_value_281;
                    come_call_finalizer2(sVar_finalize,default_value_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result97__;
                }
            }
            __result98__ = __result_obj__ = default_value_281;
            come_call_finalizer2(sVar_finalize,default_value_281, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer2(sVar_finalize,default_value_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional335=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional335) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional336=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional336) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional337=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional337) {
                                come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional338=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional338) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional342;
struct map$2charphsVarph* o2_saved_285;
char* it_288;
void* right_value221;
struct sVar* p_291;
struct sType* type_292;
struct sClass* klass_293;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value222;
char* c_value_294;
void* right_value223;
struct sType* type2_295;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_285, 0, sizeof(struct map$2charphsVarph*));
memset(&it_288, 0, sizeof(char*));
right_value221 = (void*)0;
memset(&p_291, 0, sizeof(struct sVar*));
memset(&type_292, 0, sizeof(struct sType*));
memset(&klass_293, 0, sizeof(struct sClass*));
right_value222 = (void*)0;
memset(&c_value_294, 0, sizeof(char*));
right_value223 = (void*)0;
memset(&type2_295, 0, sizeof(struct sType*));
    if(gComeGC) {
        return;
    }
    for(    o2_saved_285=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_288=map$2charphsVarph_begin((o2_saved_285));    !map$2charphsVarph_end((o2_saved_285));    it_288=map$2charphsVarph_next((o2_saved_285))    ){
        p_291=((struct sVar*)(right_value221=map$2charphsVarphp_operator_load_element(table->mVars,it_288)));
        come_call_finalizer2(sVar_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_292=p_291->mType;
        klass_293=type_292->mClass;
        if(_if_conditional347=ret_value!=((void*)0)&&p_291->mCValueName!=((void*)0)&&string_operator_equals(p_291->mCValueName,ret_value->mCValueName)&&type_292->mHeap,        _if_conditional347) {
            free_object(p_291->mType,p_291->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(_if_conditional348=type_292->mHeap&&p_291->mCValueName,            _if_conditional348) {
                if(type_292->mFunctionParam) {
                    free_object(p_291->mType,p_291->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_291->mType,p_291->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(_if_conditional350=klass_293->mStruct&&p_291->mCValueName&&type_292->mAllocaValue&&!type_292->mNoCallingDestructor,                _if_conditional350) {
                    c_value_294=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("(&%s)",p_291->mCValueName))));
                    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    type2_295=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(type_292))));
                    come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type2_295->mPointerNum++;
                    free_object(type2_295,c_value_294,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_294 = come_decrement_ref_count2(c_value_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,type2_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer2(map$2charphsVarphp_finalize,o2_saved_285, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional343;
char* result_286;
char* __result101__;
_Bool _if_conditional344;
char* __result102__;
char* result_287;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_286, 0, sizeof(char*));
memset(&result_287, 0, sizeof(char*));
        if(_if_conditional343=self==((void*)0),        _if_conditional343) {
            memset(&result_286,0,sizeof(char*));
            __result101__ = __result_obj__ = result_286;
            return __result101__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result102__ = __result_obj__ = self->key_list->it->item;
            return __result102__;
        }
        memset(&result_287,0,sizeof(char*));
        __result103__ = __result_obj__ = result_287;
        return __result103__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
        __result104__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        return __result104__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional345;
char* result_289;
char* __result105__;
_Bool _if_conditional346;
char* __result106__;
char* result_290;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_289, 0, sizeof(char*));
memset(&result_290, 0, sizeof(char*));
        if(_if_conditional345=self==((void*)0)||self->key_list->it==((void*)0),        _if_conditional345) {
            memset(&result_289,0,sizeof(char*));
            __result105__ = __result_obj__ = result_289;
            return __result105__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result106__ = __result_obj__ = self->key_list->it->item;
            return __result106__;
        }
        memset(&result_290,0,sizeof(char*));
        __result107__ = __result_obj__ = result_290;
        return __result107__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_296;
_Bool _if_conditional351;
_Bool _if_conditional352;
int i_297;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_296, 0, sizeof(int));
memset(&i_297, 0, sizeof(int));
        for(        i_296=0;        i_296<self->size;        i_296++        ){
            if(_if_conditional351=self->item_existance[i_296],            _if_conditional351) {
                if(_if_conditional352=1,                _if_conditional352) {
                    come_call_finalizer2(sVar_finalize,self->items[i_296], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_297=0;        i_297<self->size;        i_297++        ){
            if(_if_conditional353=self->item_existance[i_297],            _if_conditional353) {
                if(_if_conditional354=1,                _if_conditional354) {
                    self->keys[i_297] = come_decrement_ref_count2(self->keys[i_297], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_298;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_299;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_298, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_299, 0, sizeof(struct list_item$1charp*));
            it_298=self->head;
            while(_while_condtional23=it_298!=((void*)0),            _while_condtional23) {
                prev_it_299=it_298;
                it_298=it_298->next;
                come_call_finalizer2(list_item$1charpp_finalize,prev_it_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
void* __result_obj__;
_Bool _if_conditional355;
struct sVarTable* it_300;
_Bool _if_conditional356;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_300, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    it_300=info->lv_table;
    if(_if_conditional356=it_300==info->come_fun->mBlock->mVarTable,    _if_conditional356) {
        free_objects(it_300,ret_value,info);
    }
    else {
        while(_while_condtional24=it_300!=info->come_fun->mBlock->mVarTable,        _while_condtional24) {
            free_objects(it_300,ret_value,info);
            it_300=it_300->mParent;
        }
        free_objects(it_300,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional357;
struct sVar* ret_value_301;
struct sVarTable* current_loop_vtable_302;
_Bool _if_conditional358;
struct sVarTable* it_303;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ret_value_301, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_302, 0, sizeof(struct sVarTable*));
memset(&it_303, 0, sizeof(struct sVarTable*));
    if(gComeGC) {
        return;
    }
    ret_value_301=((void*)0);
    current_loop_vtable_302=info->current_loop_vtable;
    if(_if_conditional358=current_loop_vtable_302!=((void*)0),    _if_conditional358) {
        it_303=info->lv_table;
        while(_while_condtional25=it_303!=current_loop_vtable_302,        _while_condtional25) {
            free_objects(it_303,ret_value_301,info);
            it_303=it_303->mParent;
        }
        free_objects(it_303,ret_value_301,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
char* __result108__;
_Bool _if_conditional361;
static int n_304=0;
void* right_value228;
char* var_name_305;
void* right_value229;
void* right_value230;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
void* right_value235;
char* __result109__;
void* right_value236;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&var_name_305, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
    if(_if_conditional359=string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0,    _if_conditional359) {
        if(gComeDebug) {
            __result108__ = __result_obj__ = ((char*)(right_value227=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value224=string_to_string(info->sname))),((char*)(right_value225=int_to_string(info->sline))),((char*)(right_value226=charp_to_string(c_value))))));
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result108__;
        }
    }
    else {
        if(gComeDebug) {
            ++n_304;
            var_name_305=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("__exception_result_var_b%d",n_304))));
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value229=make_define_var(type,var_name_305,(_Bool)0,info))));
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result109__ = __result_obj__ = ((char*)(right_value235=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value230=string_to_string(info->sname))),((char*)(right_value231=int_to_string(info->sline))),((char*)(right_value232=string_to_string(var_name_305))),((char*)(right_value233=charp_to_string(c_value))),((char*)(right_value234=string_to_string(var_name_305))))));
            var_name_305 = come_decrement_ref_count2(var_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result109__;
            var_name_305 = come_decrement_ref_count2(var_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result110__ = __result_obj__ = ((char*)(right_value236=__builtin_string(c_value)));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

