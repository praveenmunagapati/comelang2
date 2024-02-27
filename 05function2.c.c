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
struct list_item$1sTypep
{
    struct sType* item;
    struct list_item$1sTypep* prev;
    struct list_item$1sTypep* next;
};
struct list$1sTypep
{
    struct list_item$1sTypep* head;
    struct list_item$1sTypep* tail;
    int len;
    struct list_item$1sTypep* it;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

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

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

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
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct sVar* sVar_clone(struct sVar* self);
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
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1sTypep* list$1sTypep_initialize(struct list$1sTypep* self);
static void list$1sTypepp_finalize(struct list$1sTypep* self);
static void list_item$1sTypepp_finalize(struct list_item$1sTypep* self);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sNode* parse_function(struct sInfo* info);

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
char* __dec_obj6;
struct sLambdaNode* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    self->mFun=fun;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result7__ = __result_obj__ = self;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(sLambdaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sLambdaNode_sline(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
int __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = self->sline;
    return __result8__;
}

char* sLambdaNode_sname(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value10=__builtin_string(self->sname)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
}

_Bool sLambdaNode_terminated(){
void* __result_obj__;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = (_Bool)0;
    return __result10__;
}

char* sLambdaNode_kind(){
void* __result_obj__;
void* right_value11;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result11__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sLambdaNode")));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result11__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_5;
void* right_value12;
void* right_value13;
struct sType* result_type_6;
void* right_value14;
void* right_value15;
_Bool _if_conditional22;
void* right_value16;
struct CVALUE* come_value_15;
void* right_value17;
char* __dec_obj7;
void* right_value52;
struct sType* __dec_obj30;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_5, 0, sizeof(struct sFun*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&result_type_6, 0, sizeof(struct sType*));
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value16 = (void*)0;
memset(&come_value_15, 0, sizeof(struct CVALUE*));
right_value17 = (void*)0;
right_value52 = (void*)0;
    come_fun_5=info->come_fun;
    info->come_fun=self->mFun;
    result_type_6=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value12=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 43, "struct sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value14=make_define_var(result_type_6,"__result_obj__",(_Bool)0,info))));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value15=make_type_name_string(result_type_6,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_15=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function2.c", 52, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=come_value_15->c_value;
    come_value_15->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("%s",self->mFun->mName))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj30=come_value_15->type;
    come_value_15->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_15->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_15->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_15));
    info->come_fun=come_fun_5;
    __result31__ = (_Bool)1;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result31__;
    come_call_finalizer2(sType_finalize,result_type_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
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
        if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional6) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional8) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional9) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional10) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional12) {
            come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional14) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional15) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional17) {
            come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional18) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional19) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional20) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional21) {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional7) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional11) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                while(_while_condtional2=it_9!=((void*)0),                _while_condtional2) {
                    prev_it_10=it_9;
                    it_9=it_9->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
                while(_while_condtional3=it_11!=((void*)0),                _while_condtional3) {
                    prev_it_12=it_11;
                    it_11=it_11->next;
                    come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional13) {
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
                while(_while_condtional4=it_13!=((void*)0),                _while_condtional4) {
                    prev_it_14=it_13;
                    it_13=it_13->next;
                    come_call_finalizer2(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional16) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional23=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional23) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional24=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional24) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
struct sType* __result12__;
void* right_value18;
struct sType* result_16;
_Bool _if_conditional26;
_Bool _if_conditional27;
void* right_value21;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional31;
void* right_value22;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional32;
void* right_value23;
char* __dec_obj11;
_Bool _if_conditional33;
void* right_value30;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional37;
void* right_value38;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value39;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional52;
void* right_value46;
struct list$1charph* __dec_obj24;
_Bool _if_conditional56;
void* right_value47;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value48;
struct sNode* __dec_obj26;
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
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value49;
struct sNode* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value50;
char* __dec_obj28;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value51;
char* __dec_obj29;
struct sType* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_16, 0, sizeof(struct sType*));
right_value21 = (void*)0;
right_value22 = (void*)0;
right_value23 = (void*)0;
right_value30 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
right_value50 = (void*)0;
right_value51 = (void*)0;
        if(_if_conditional25=self==(void*)0,        _if_conditional25) {
            __result12__ = __result_obj__ = (void*)0;
            return __result12__;
        }
        result_16=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            result_16->mClass=self->mClass;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional27) {
            __dec_obj9=result_16->mNoSolvedGenericsType;
            result_16->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional31=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional31) {
            __dec_obj10=result_16->mOriginalLoadVarType;
            result_16->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value22=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional32=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional32) {
            __dec_obj11=result_16->mGenericsName;
            result_16->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value23=string_clone(self->mGenericsName))));
            __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional33) {
            __dec_obj15=result_16->mGenericsTypes;
            result_16->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            __dec_obj19=result_16->mArrayNum;
            result_16->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            result_16->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            __dec_obj20=result_16->mParamTypes;
            result_16->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value39=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            __dec_obj24=result_16->mParamNames;
            result_16->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            __dec_obj25=result_16->mResultType;
            result_16->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value47=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_16->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            __dec_obj26=result_16->mAlignas;
            result_16->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value48=sNode_clone(self->mAlignas))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, ((struct sNode*)right_value48)->finalize, ((struct sNode*)right_value48)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_16->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_16->mShort=self->mShort;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_16->mLong=self->mLong;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_16->mLongLong=self->mLongLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_16->mConstant=self->mConstant;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_16->mRegister=self->mRegister;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_16->mVolatile=self->mVolatile;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_16->mStatic=self->mStatic;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_16->mExtern=self->mExtern;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_16->mRestrict=self->mRestrict;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_16->mImmutable=self->mImmutable;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_16->mHeap=self->mHeap;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_16->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_16->mDelegate=self->mDelegate;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_16->mShare=self->mShare;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_16->mClone=self->mClone;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_16->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_16->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_16->mRefference=self->mRefference;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_16->mException=self->mException;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_16->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_16->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_16->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            __dec_obj27=result_16->mSizeNum;
            result_16->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=sNode_clone(self->mSizeNum))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_16->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_16->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            __dec_obj28=result_16->mOriginalTypeName;
            result_16->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value50=string_clone(self->mOriginalTypeName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_16->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_16->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_16->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_16->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_16->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_16->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_16->mInline=self->mInline;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_16->mNullValue=self->mNullValue;
        }
        if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional94) {
            __dec_obj29=result_16->mAsmName;
            result_16->mAsmName=(char*)come_increment_ref_count(((char*)(right_value51=string_clone(self->mAsmName))));
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result29__ = __result_obj__ = result_16;
        come_call_finalizer2(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result29__;
        come_call_finalizer2(sType_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
struct tuple1$1sTypeph* __result13__;
void* right_value19;
struct tuple1$1sTypeph* result_17;
_Bool _if_conditional30;
void* right_value20;
struct sType* __dec_obj8;
struct tuple1$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&result_17, 0, sizeof(struct tuple1$1sTypeph*));
right_value20 = (void*)0;
                if(_if_conditional28=self==(void*)0,                _if_conditional28) {
                    __result13__ = __result_obj__ = (void*)0;
                    return __result13__;
                }
                result_17=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional30=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional30) {
                    __dec_obj8=result_17->v1;
                    result_17->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result14__ = __result_obj__ = result_17;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result14__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional29=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional29) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct list$1sTypeph* __result15__;
void* right_value24;
void* right_value25;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
right_value25 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result15__ = __result_obj__ = ((void*)0);
                    return __result15__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value29=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=it_19->next;
                }
                __result18__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result18__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result16__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result16__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value26;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj12;
_Bool _if_conditional36;
void* right_value27;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj13;
void* right_value28;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj14;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value27 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value28 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result17__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result17__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result19__;
void* right_value31;
void* right_value32;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional6;
void* right_value37;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
right_value37 = (void*)0;
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    __result19__ = __result_obj__ = ((void*)0);
                    return __result19__;
                }
                result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_24=self->head;
                while(_while_condtional6=it_24!=((void*)0),                _while_condtional6) {
                    list$1sNodeph_add(result_23,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value37=sNode_clone(it_24->item)))));
                    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, ((struct sNode*)right_value37)->finalize, ((struct sNode*)right_value37)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_24=it_24->next;
                }
                __result24__ = __result_obj__ = result_23;
                come_call_finalizer2(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result24__;
                come_call_finalizer2(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result20__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result20__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value33;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj16;
_Bool _if_conditional40;
void* right_value34;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj17;
void* right_value35;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_25->prev=((void*)0);
                            litem_25->next=((void*)0);
                            __dec_obj16=litem_25->item;
                            litem_25->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_25;
                            self->head=litem_25;
                        }
                        else {
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value34=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_26->prev=self->head;
                                litem_26->next=((void*)0);
                                __dec_obj17=litem_26->item;
                                litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_26;
                                self->head->next=litem_26;
                            }
                            else {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value35=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->tail;
                                litem_27->next=((void*)0);
                                __dec_obj18=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_27;
                                self->tail=litem_27;
                            }
                        }
                        self->len++;
                        __result21__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result21__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sNode* __result22__;
void* right_value36;
struct sNode* result_28;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
memset(&result_28, 0, sizeof(struct sNode*));
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            __result22__ = __result_obj__ = (void*)0;
                            return __result22__;
                        }
                        result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value36) { right_value36 = come_decrement_ref_count2(right_value36, ((struct sNode*)right_value36)->finalize, ((struct sNode*)right_value36)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            result_28->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_28->finalize=self->finalize;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_28->clone=self->clone;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_28->compile=self->compile;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_28->sline=self->sline;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_28->sname=self->sname;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_28->terminated=self->terminated;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_28->kind=self->kind;
                        }
                        __result23__ = __result_obj__ = result_28;
                        if(result_28) { result_28 = come_decrement_ref_count2(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result23__;
                        if(result_28) { result_28 = come_decrement_ref_count2(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct list$1charph* __result25__;
void* right_value40;
void* right_value41;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional7;
void* right_value45;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
right_value41 = (void*)0;
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
right_value45 = (void*)0;
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    __result25__ = __result_obj__ = ((void*)0);
                    return __result25__;
                }
                result_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_30=self->head;
                while(_while_condtional7=it_30!=((void*)0),                _while_condtional7) {
                    list$1charph_add(result_29,(char*)come_increment_ref_count(((char*)(right_value45=string_clone(it_30->item)))));
                    right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_30=it_30->next;
                }
                __result28__ = __result_obj__ = result_29;
                come_call_finalizer2(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result28__;
                come_call_finalizer2(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result26__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result26__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value42;
struct list_item$1charph* litem_31;
char* __dec_obj21;
_Bool _if_conditional55;
void* right_value43;
struct list_item$1charph* litem_32;
char* __dec_obj22;
void* right_value44;
struct list_item$1charph* litem_33;
char* __dec_obj23;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
right_value43 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value44 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_31->prev=((void*)0);
                            litem_31->next=((void*)0);
                            __dec_obj21=litem_31->item;
                            litem_31->item=(char*)come_increment_ref_count(item);
                            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_31;
                            self->head=litem_31;
                        }
                        else {
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value43=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_32->prev=self->head;
                                litem_32->next=((void*)0);
                                __dec_obj22=litem_32->item;
                                litem_32->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_32;
                                self->head->next=litem_32;
                            }
                            else {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value44=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->tail;
                                litem_33->next=((void*)0);
                                __dec_obj23=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_33;
                                self->tail=litem_33;
                            }
                        }
                        self->len++;
                        __result27__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result27__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional95;
void* right_value53;
struct list_item$1CVALUEph* litem_34;
struct CVALUE* __dec_obj31;
_Bool _if_conditional97;
void* right_value54;
struct list_item$1CVALUEph* litem_35;
struct CVALUE* __dec_obj32;
void* right_value55;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj33;
struct list$1CVALUEph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1CVALUEph*));
right_value54 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1CVALUEph*));
right_value55 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional95=self->len==0,        _if_conditional95) {
            litem_34=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_34->prev=((void*)0);
            litem_34->next=((void*)0);
            __dec_obj31=litem_34->item;
            litem_34->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_34;
            self->head=litem_34;
        }
        else {
            if(_if_conditional97=self->len==1,            _if_conditional97) {
                litem_35=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_35->prev=self->head;
                litem_35->next=((void*)0);
                __dec_obj32=litem_35->item;
                litem_35->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_35;
                self->head->next=litem_35;
            }
            else {
                litem_36=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value55=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_36->prev=self->tail;
                litem_36->next=((void*)0);
                __dec_obj33=litem_36->item;
                litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_36;
                self->tail=litem_36;
            }
        }
        self->len++;
        __result30__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result30__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional96=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional96) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
struct sFun* __dec_obj34;
char* __dec_obj35;
struct sFunNode* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj34=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer2(sFun_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(info->sname);
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result32__ = __result_obj__ = self;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result32__;
    come_call_finalizer2(sFunNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional98) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional99) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional100) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional101) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional102) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional103=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional103) {
            come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional104=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional104) {
            come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional107=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional107) {
            come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional108=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional108) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional109=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional109) {
            come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional110=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional110) {
            come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional111=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional111) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional112=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional112) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional105;
_Bool _if_conditional106;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional105=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional105) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional106=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional106) {
                    come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sFunNode_sline(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = self->sline;
    return __result33__;
}

char* sFunNode_sname(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value56;
char* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
    __result34__ = __result_obj__ = ((char*)(right_value56=__builtin_string(self->sname)));
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result34__;
}

_Bool sFunNode_terminated(){
void* __result_obj__;
_Bool __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = (_Bool)0;
    return __result35__;
}

char* sFunNode_kind(){
void* __result_obj__;
void* right_value57;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value57=__builtin_string("sFunNode")));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
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
struct sFun* come_fun_37;
char* come_fun_name_38;
void* right_value58;
char* __dec_obj36;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value59;
void* right_value60;
struct sType* result_type_39;
void* right_value61;
void* right_value62;
_Bool _if_conditional117;
void* right_value63;
char* __dec_obj37;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_37, 0, sizeof(struct sFun*));
memset(&come_fun_name_38, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&result_type_39, 0, sizeof(struct sType*));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
    come_fun_37=info->come_fun;
    info->come_fun=self->mFun;
    caller_begin(info);
    come_fun_name_38=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj36=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value58=__builtin_string(info->come_fun->mName))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional116=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional116) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value59=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 132, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value61=make_define_var(result_type_39,"__result_obj__",(_Bool)0,info))));
        right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value62=make_type_name_string(result_type_39,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional117=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional117) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value63=xsprintf("come_heap_final();\n"))));
            right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(sType_finalize,result_type_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    caller_end(info);
    info->come_fun=come_fun_37;
    __dec_obj37=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_38);
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result37__ = (_Bool)1;
    come_fun_name_38 = come_decrement_ref_count2(come_fun_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result37__;
    come_fun_name_38 = come_decrement_ref_count2(come_fun_name_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value64;
void* right_value65;
struct list$1sNodeph* __dec_obj38;
struct sBlock* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
right_value65 = (void*)0;
    __dec_obj38=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value65=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function2.c", 154, "struct list$1sNodeph"))))))));
    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result38__ = __result_obj__ = self;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result38__;
    come_call_finalizer2(sBlock_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value66;
struct sType* __dec_obj39;
void* right_value67;
struct list$1charph* __dec_obj40;
void* right_value68;
struct list$1charph* __dec_obj41;
char* __dec_obj42;
struct sType* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
void* right_value69;
char* __dec_obj48;
struct sGenericsFun* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
    __dec_obj39=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(impl_type))));
    come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value67=list$1charphp_clone(generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj42=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj43=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj44=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer2(list$1charph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    __dec_obj46=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer2(list$1charph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj47=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj48=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value69=__builtin_string(generics_sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result39__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsFun_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,impl_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result39__;
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
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional118=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional118) {
            come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional119=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional119) {
            come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional120) {
            come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional121) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional122) {
            come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional123) {
            come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional124=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional124) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional125=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional125) {
            come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional126=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional126) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional127=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional127) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level){
void* __result_obj__;
void* right_value70;
void* right_value71;
struct sBlock* result_40;
int block_level_41;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _while_condtional8;
_Bool _if_conditional130;
int sline_42;
char* sname_43;
void* right_value72;
struct sNode* node_44;
void* right_value73;
char* __dec_obj49;
_Bool _if_conditional131;
_Bool _if_conditional134;
_Bool _while_condtional9;
_Bool _if_conditional135;
void* right_value77;
struct sNode* node_48;
_Bool _if_conditional136;
struct sBlock* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&result_40, 0, sizeof(struct sBlock*));
memset(&block_level_41, 0, sizeof(int));
memset(&sline_42, 0, sizeof(int));
memset(&sname_43, 0, sizeof(char*));
right_value72 = (void*)0;
memset(&node_44, 0, sizeof(struct sNode*));
right_value73 = (void*)0;
right_value77 = (void*)0;
memset(&node_48, 0, sizeof(struct sNode*));
    result_40=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value71=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value70=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function2.c", 184, "struct sBlock")))),info))));
    come_call_finalizer2(sBlock_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sBlock_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    block_level_41=info->block_level;
    if(_if_conditional128=!no_block_level,    _if_conditional128) {
        info->block_level++;
    }
    if(_if_conditional129=*info->p==123,    _if_conditional129) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional8=(_Bool)1,        _while_condtional8) {
            parse_sharp_v5(info);
            if(_if_conditional130=*info->p==125,            _if_conditional130) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_42=info->sline;
            sname_43=info->sname;
            node_44=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value72=statment(info))));
            if(right_value72) { right_value72 = come_decrement_ref_count2(right_value72, ((struct sNode*)right_value72)->finalize, ((struct sNode*)right_value72)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj49=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value73=node_44->sname(node_44->_protocol_obj))));
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_44->sline(node_44->_protocol_obj);
            if(_if_conditional131=node_44==((void*)0),            _if_conditional131) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_40->mNodes,(struct sNode*)come_increment_ref_count(node_44));
            parse_sharp_v5(info);
            if(_if_conditional134=node_44->terminated(node_44->_protocol_obj),            _if_conditional134) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional9=*info->p==59,            _while_condtional9) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional135=*info->p==125,            _if_conditional135) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_44) { node_44 = come_decrement_ref_count2(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_44) { node_44 = come_decrement_ref_count2(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        node_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=expression_v13(info))));
        if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional136=node_48==((void*)0),        _if_conditional136) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_40->mNodes,(struct sNode*)come_increment_ref_count(node_48));
        if(node_48) { node_48 = come_decrement_ref_count2(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_41;
    __result41__ = __result_obj__ = result_40;
    come_call_finalizer2(sBlock_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result41__;
    come_call_finalizer2(sBlock_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional132;
void* right_value74;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj50;
_Bool _if_conditional133;
void* right_value75;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj51;
void* right_value76;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj52;
struct list$1sNodeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
right_value75 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
right_value76 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional132=self->len==0,                _if_conditional132) {
                    litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value74=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_45->prev=((void*)0);
                    litem_45->next=((void*)0);
                    __dec_obj50=litem_45->item;
                    litem_45->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_45;
                    self->head=litem_45;
                }
                else {
                    if(_if_conditional133=self->len==1,                    _if_conditional133) {
                        litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value75=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_46->prev=self->head;
                        litem_46->next=((void*)0);
                        __dec_obj51=litem_46->item;
                        litem_46->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_46;
                        self->head->next=litem_46;
                    }
                    else {
                        litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value76=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sNodeph"))));
                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_47->prev=self->tail;
                        litem_47->next=((void*)0);
                        __dec_obj52=litem_47->item;
                        litem_47->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_47;
                        self->tail=litem_47;
                    }
                }
                self->len++;
                __result40__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result40__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional137;
int __result42__;
struct sVarTable* old_table_49;
_Bool _if_conditional138;
void* right_value78;
void* right_value79;
struct sVarTable* __dec_obj53;
struct sVarTable* current_loop_vtable_50;
_Bool _if_conditional139;
struct list$1sTypeph* param_types__51;
struct list$1charph* param_names__52;
_Bool _if_conditional140;
int i_53;
struct list$1charph* o2_saved_54;
char* name_57;
void* right_value80;
void* right_value81;
struct sType* type_63;
void* right_value82;
int block_level_64;
_Bool _if_conditional147;
_Bool _if_conditional148;
int i_65;
struct list$1sNodeph* o2_saved_66;
struct sNode* node_69;
struct list$1sRightValueObjectph* right_value_objects_72;
void* right_value83;
void* right_value84;
struct list$1sRightValueObjectph* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
int stack_num_before_75;
int sline_76;
void* right_value85;
char* sname_77;
void* right_value86;
char* __dec_obj58;
_Bool _if_conditional157;
void* right_value87;
char* __dec_obj59;
struct list$1sRightValueObjectph* __dec_obj60;
_Bool _if_conditional158;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_49, 0, sizeof(struct sVarTable*));
right_value78 = (void*)0;
right_value79 = (void*)0;
memset(&current_loop_vtable_50, 0, sizeof(struct sVarTable*));
memset(&param_types__51, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__52, 0, sizeof(struct list$1charph*));
memset(&i_53, 0, sizeof(int));
memset(&o2_saved_54, 0, sizeof(struct list$1charph*));
memset(&name_57, 0, sizeof(char*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&type_63, 0, sizeof(struct sType*));
right_value82 = (void*)0;
memset(&block_level_64, 0, sizeof(int));
memset(&i_65, 0, sizeof(int));
memset(&o2_saved_66, 0, sizeof(struct list$1sNodeph*));
memset(&node_69, 0, sizeof(struct sNode*));
memset(&right_value_objects_72, 0, sizeof(struct list$1sRightValueObjectph*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&stack_num_before_75, 0, sizeof(int));
memset(&sline_76, 0, sizeof(int));
right_value85 = (void*)0;
memset(&sname_77, 0, sizeof(char*));
right_value86 = (void*)0;
right_value87 = (void*)0;
    if(info->output_header_file) {
        __result42__ = 0;
        return __result42__;
    }
    old_table_49=info->lv_table;
    if(_if_conditional138=!no_var_table,    _if_conditional138) {
        __dec_obj53=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value79=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value78=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function2.c", 268, "struct sVarTable")))),(_Bool)0,old_table_49))));
        come_call_finalizer2(sVarTable_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sVarTable_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sVarTable_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_50=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__51=info->param_types;
    param_names__52=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional140=param_types&&param_names,    _if_conditional140) {
        for(        o2_saved_54=(param_names),name_57=list$1charph_begin((o2_saved_54));        !list$1charph_end((o2_saved_54));        name_57=list$1charph_next((o2_saved_54))        ){
            type_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(((struct sType*)(right_value80=list$1sTypephp_operator_load_element(param_types,i_53)))))));
            come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_63->mFunctionParam=(_Bool)1;
            type_63->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(type_63)))),info);
            come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            i_53++;
            come_call_finalizer2(sType_finalize,type_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_64=info->block_level;
    if(_if_conditional147=!no_var_table,    _if_conditional147) {
        info->block_level++;
    }
    if(_if_conditional148=list$1sNodeph_length(block->mNodes)==0,    _if_conditional148) {
    }
    else {
        for(        o2_saved_66=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_69=list$1sNodeph_begin((o2_saved_66));        !list$1sNodeph_end((o2_saved_66));        node_69=list$1sNodeph_next((o2_saved_66))        ){
            right_value_objects_72=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj54=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value84=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value83=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function2.c", 305, "struct list$1sRightValueObjectph"))))))));
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj55=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj56=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj57=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_75=list$1CVALUEph_length(info->stack);
            sline_76=info->sline;
            sname_77=(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(info->sname))));
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_69->sline(node_69->_protocol_obj);
            __dec_obj58=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value86=node_69->sname(node_69->_protocol_obj))));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional157=!node_compile(node_69,info),            _if_conditional157) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_76;
            __dec_obj59=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(sname_77))));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_75);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj60=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_72);
            come_call_finalizer2(list$1sRightValueObjectph_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sRightValueObjectphp_finalize,right_value_objects_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_77 = come_decrement_ref_count2(sname_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sNodephp_finalize,o2_saved_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional158=!no_var_table,    _if_conditional158) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_49;
    info->block_level=block_level_64;
    info->param_types=param_types__51;
    info->param_names=param_names__52;
    info->current_loop_vtable=current_loop_vtable_50;
    __result63__ = 0;
    return __result63__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional141;
char* result_55;
char* __result43__;
_Bool _if_conditional142;
char* __result44__;
char* result_56;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_55, 0, sizeof(char*));
memset(&result_56, 0, sizeof(char*));
            if(_if_conditional141=self==((void*)0),            _if_conditional141) {
                memset(&result_55,0,sizeof(char*));
                __result43__ = __result_obj__ = result_55;
                return __result43__;
            }
            self->it=self->head;
            if(self->it) {
                __result44__ = __result_obj__ = self->it->item;
                return __result44__;
            }
            memset(&result_56,0,sizeof(char*));
            __result45__ = __result_obj__ = result_56;
            return __result45__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
            __result46__ = self==((void*)0)||self->it==((void*)0);
            return __result46__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional143;
char* result_58;
char* __result47__;
_Bool _if_conditional144;
char* __result48__;
char* result_59;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_58, 0, sizeof(char*));
memset(&result_59, 0, sizeof(char*));
            if(_if_conditional143=self==((void*)0)||self->it==((void*)0),            _if_conditional143) {
                memset(&result_58,0,sizeof(char*));
                __result47__ = __result_obj__ = result_58;
                return __result47__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result48__ = __result_obj__ = self->it->item;
                return __result48__;
            }
            memset(&result_59,0,sizeof(char*));
            __result49__ = __result_obj__ = result_59;
            return __result49__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional145;
struct list_item$1sTypeph* it_60;
int i_61;
_Bool _while_condtional10;
_Bool _if_conditional146;
struct sType* __result50__;
struct sType* default_value_62;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_61, 0, sizeof(int));
memset(&default_value_62, 0, sizeof(struct sType*));
                if(_if_conditional145=position<0,                _if_conditional145) {
                    position+=self->len;
                }
                it_60=self->head;
                i_61=0;
                while(_while_condtional10=it_60!=((void*)0),                _while_condtional10) {
                    if(_if_conditional146=position==i_61,                    _if_conditional146) {
                        __result50__ = __result_obj__ = it_60->item;
                        return __result50__;
                    }
                    it_60=it_60->next;
                    i_61++;
                }
                memset(&default_value_62,0,sizeof(struct sType*));
                __result51__ = __result_obj__ = default_value_62;
                come_call_finalizer2(sType_finalize,default_value_62, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer2(sType_finalize,default_value_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
        __result52__ = self->len;
        return __result52__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional149;
struct sNode* result_67;
struct sNode* __result53__;
_Bool _if_conditional150;
struct sNode* __result54__;
struct sNode* result_68;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct sNode*));
memset(&result_68, 0, sizeof(struct sNode*));
            if(_if_conditional149=self==((void*)0),            _if_conditional149) {
                memset(&result_67,0,sizeof(struct sNode*));
                __result53__ = __result_obj__ = result_67;
                return __result53__;
            }
            self->it=self->head;
            if(self->it) {
                __result54__ = __result_obj__ = self->it->item;
                return __result54__;
            }
            memset(&result_68,0,sizeof(struct sNode*));
            __result55__ = __result_obj__ = result_68;
            return __result55__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
            __result56__ = self==((void*)0)||self->it==((void*)0);
            return __result56__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional151;
struct sNode* result_70;
struct sNode* __result57__;
_Bool _if_conditional152;
struct sNode* __result58__;
struct sNode* result_71;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(struct sNode*));
memset(&result_71, 0, sizeof(struct sNode*));
            if(_if_conditional151=self==((void*)0)||self->it==((void*)0),            _if_conditional151) {
                memset(&result_70,0,sizeof(struct sNode*));
                __result57__ = __result_obj__ = result_70;
                return __result57__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result58__ = __result_obj__ = self->it->item;
                return __result58__;
            }
            memset(&result_71,0,sizeof(struct sNode*));
            __result59__ = __result_obj__ = result_71;
            return __result59__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result60__ = __result_obj__ = self;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer2(list$1sRightValueObjectphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_73;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sRightValueObjectph*));
                    it_73=self->head;
                    while(_while_condtional11=it_73!=((void*)0),                    _while_condtional11) {
                        prev_it_74=it_73;
                        it_73=it_73->next;
                        come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional153=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional153) {
                                come_call_finalizer2(sRightValueObject_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional154=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional154) {
                                        come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional155=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional155) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional156=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional156) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                __result61__ = self->len;
                return __result61__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_78;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_79;
struct list$1sRightValueObjectph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_78, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_79, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_78=self->head;
                while(_while_condtional12=it_78!=((void*)0),                _while_condtional12) {
                    prev_it_79=it_78;
                    it_78=it_78->next;
                    come_call_finalizer2(list_item$1sRightValueObjectphp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result62__ = __result_obj__ = self;
                return __result62__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional159=list$1CVALUEph_length(info->stack)>top,    _if_conditional159) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional160=list$1CVALUEph_length(info->stack)<top,    _if_conditional160) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional161;
_Bool _if_conditional162;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional161=*info->p!=c,    _if_conditional161) {
        if(_if_conditional162=!info->no_output_err,        _if_conditional162) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result64__ = 0;
    return __result64__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_80;
_Bool _if_conditional163;
_Bool dquort_81;
_Bool squort_82;
int sline_83;
int nest_84;
_Bool _while_condtional13;
_Bool _if_conditional164;
_Bool _if_conditional165;
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
char* tail_85;
void* right_value88;
char* buf_86;
void* right_value89;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_80, 0, sizeof(char*));
memset(&dquort_81, 0, sizeof(_Bool));
memset(&squort_82, 0, sizeof(_Bool));
memset(&sline_83, 0, sizeof(int));
memset(&nest_84, 0, sizeof(int));
memset(&tail_85, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&buf_86, 0, sizeof(char*));
right_value89 = (void*)0;
    head_80=info->p;
    if(_if_conditional163=*info->p==123,    _if_conditional163) {
        info->p++;
        dquort_81=(_Bool)0;
        squort_82=(_Bool)0;
        sline_83=0;
        nest_84=0;
        while(_while_condtional13=1,        _while_condtional13) {
            if(dquort_81) {
                if(_if_conditional165=*info->p==92,                _if_conditional165) {
                    info->p++;
                    if(_if_conditional166=*info->p==0,                    _if_conditional166) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                        exit(2);
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional167=*info->p==34,                    _if_conditional167) {
                        info->p++;
                        dquort_81=!dquort_81;
                    }
                    else {
                        info->p++;
                        if(_if_conditional168=*info->p==0,                        _if_conditional168) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                            exit(2);
                        }
                    }
                }
            }
            else {
                if(squort_82) {
                    if(_if_conditional170=*info->p==92,                    _if_conditional170) {
                        info->p++;
                        if(_if_conditional171=*info->p==0,                        _if_conditional171) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                            exit(2);
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional172=*info->p==39,                        _if_conditional172) {
                            info->p++;
                            squort_82=!squort_82;
                        }
                        else {
                            info->p++;
                            if(_if_conditional173=*info->p==0,                            _if_conditional173) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_83);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional174=*info->p==39,                    _if_conditional174) {
                        sline_83=info->sline;
                        info->p++;
                        squort_82=!squort_82;
                    }
                    else {
                        if(_if_conditional175=*info->p==34,                        _if_conditional175) {
                            sline_83=info->sline;
                            info->p++;
                            dquort_81=!dquort_81;
                        }
                        else {
                            if(_if_conditional176=*info->p==35,                            _if_conditional176) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional177=*info->p==123,                                _if_conditional177) {
                                    info->p++;
                                    nest_84++;
                                }
                                else {
                                    if(_if_conditional178=*info->p==125,                                    _if_conditional178) {
                                        info->p++;
                                        if(_if_conditional179=nest_84==0,                                        _if_conditional179) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_84--;
                                    }
                                    else {
                                        if(_if_conditional180=*info->p==0,                                        _if_conditional180) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional181=*info->p==10,                                            _if_conditional181) {
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
    tail_85=info->p;
    buf_86=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(tail_85-head_80+1)), "05function2.c", 488, "char"))));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_86,head_80,tail_85-head_80);
    buf_86[tail_85-head_80]=0;
    __result65__ = __result_obj__ = ((char*)(right_value89=__builtin_string(buf_86)));
    buf_86 = come_decrement_ref_count2(buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
    buf_86 = come_decrement_ref_count2(buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_87;
char* p3_88;
int i_89;
_Bool _if_conditional182;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_87, 0, sizeof(_Bool));
memset(&p3_88, 0, sizeof(char*));
memset(&i_89, 0, sizeof(int));
    terminated_87=(_Bool)0;
    p3_88=p;
    for(    i_89=0;    i_89<strlen(p2);    i_89++    ){
        if(_if_conditional182=*p3_88==0,        _if_conditional182) {
            terminated_87=(_Bool)1;
            break;
        }
        p3_88++;
    }
    __result66__ = !terminated_87&&memcmp(p,p2,strlen(p2))==0;
    return __result66__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value90;
void* right_value91;
struct buffer* asm_fun_name_90;
_Bool _while_condtional14;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
int brace_num_91;
_Bool _while_condtional15;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
int len_92;
_Bool in_dquort_93;
int brace_num_94;
_Bool _while_condtional16;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
int brace_num_95;
_Bool _while_condtional17;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value92;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&asm_fun_name_90, 0, sizeof(struct buffer*));
memset(&brace_num_91, 0, sizeof(int));
memset(&len_92, 0, sizeof(int));
memset(&in_dquort_93, 0, sizeof(_Bool));
memset(&brace_num_94, 0, sizeof(int));
memset(&brace_num_95, 0, sizeof(int));
right_value92 = (void*)0;
    asm_fun_name_90=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 511, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional183=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional183) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional184=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional184) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional185=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional185) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional186=strmemcmp(info->p,"__wur"),                    _if_conditional186) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional187=strmemcmp(info->p,"__noreturn"),                        _if_conditional187) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional188=strmemcmp(info->p,"__attribute__"),                            _if_conditional188) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_91=0;
                                while(_while_condtional15=*info->p,                                _while_condtional15) {
                                    if(_if_conditional189=*info->p==40,                                    _if_conditional189) {
                                        info->p++;
                                        brace_num_91++;
                                    }
                                    else {
                                        if(_if_conditional190=*info->p==41,                                        _if_conditional190) {
                                            info->p++;
                                            brace_num_91--;
                                            if(_if_conditional191=brace_num_91==0,                                            _if_conditional191) {
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
                                if(_if_conditional192=strmemcmp(info->p,"__asm__"),                                _if_conditional192) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_92=0;
                                    in_dquort_93=(_Bool)0;
                                    brace_num_94=0;
                                    while(_while_condtional16=*info->p,                                    _while_condtional16) {
                                        if(_if_conditional193=*info->p==34,                                        _if_conditional193) {
                                            info->p++;
                                            in_dquort_93=!in_dquort_93;
                                        }
                                        else {
                                            if(in_dquort_93) {
                                                buffer_append_char(asm_fun_name_90,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional195=*info->p==40,                                                _if_conditional195) {
                                                    info->p++;
                                                    brace_num_94++;
                                                }
                                                else {
                                                    if(_if_conditional196=*info->p==41,                                                    _if_conditional196) {
                                                        info->p++;
                                                        brace_num_94--;
                                                        if(_if_conditional197=brace_num_94==0,                                                        _if_conditional197) {
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
                                    if(_if_conditional198=strmemcmp(info->p,"__asm"),                                    _if_conditional198) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_95=0;
                                        while(_while_condtional17=*info->p,                                        _while_condtional17) {
                                            if(_if_conditional199=*info->p==40,                                            _if_conditional199) {
                                                info->p++;
                                                brace_num_95++;
                                            }
                                            else {
                                                if(_if_conditional200=*info->p==41,                                                _if_conditional200) {
                                                    info->p++;
                                                    brace_num_95--;
                                                    if(_if_conditional201=brace_num_95==0,                                                    _if_conditional201) {
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
    __result67__ = __result_obj__ = ((char*)(right_value92=buffer_to_string(asm_fun_name_90)));
    come_call_finalizer2(buffer_finalize,asm_fun_name_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
    come_call_finalizer2(buffer_finalize,asm_fun_name_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional18;
char* head_96;
int head_sline_97;
void* right_value93;
char* buf_98;
_Bool _if_conditional202;
void* right_value94;
struct sNode* node_99;
_Bool _while_condtional19;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_96, 0, sizeof(char*));
memset(&head_sline_97, 0, sizeof(int));
right_value93 = (void*)0;
memset(&buf_98, 0, sizeof(char*));
right_value94 = (void*)0;
memset(&node_99, 0, sizeof(struct sNode*));
    while(_while_condtional18=*info->p,    _while_condtional18) {
        parse_sharp_v5(info);
        head_96=info->p;
        head_sline_97=info->sline;
        buf_98=(char*)come_increment_ref_count(((char*)(right_value93=parse_word(info))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional202=block&&*info->p==125,        _if_conditional202) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_98 = come_decrement_ref_count2(buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=top_level_v99(buf_98,head_96,head_sline_97,info))));
        if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional19=*info->p==59,        _while_condtional19) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional203=node_99!=((void*)0),        _if_conditional203) {
            if(_if_conditional204=!node_compile(node_99,info),            _if_conditional204) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional205=block&&*info->p==125,        _if_conditional205) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_98 = come_decrement_ref_count2(buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_99) { node_99 = come_decrement_ref_count2(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_98 = come_decrement_ref_count2(buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_99) { node_99 = come_decrement_ref_count2(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* name_100;
void* right_value96;
void* right_value97;
struct sType* result_type_101;
void* right_value98;
void* right_value99;
void* right_value100;
void* right_value101;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
void* right_value107;
struct sType* __list_values1___102[5];
void* right_value111;
void* right_value112;
struct list$1sTypeph* param_types_107;
void* right_value113;
void* right_value114;
void* right_value115;
void* right_value116;
void* right_value117;
char* __list_values2___108[5];
void* right_value121;
void* right_value122;
struct list$1charph* param_names_113;
void* right_value123;
void* right_value124;
struct list$1charph* param_default_parametors_114;
void* right_value125;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
void* right_value131;
struct sFun* main_fun_115;
void* right_value140;
void* right_value141;
char* name_160;
void* right_value142;
void* right_value143;
struct sType* result_type_161;
void* right_value144;
void* right_value145;
struct sType* __list_values3___162[1];
void* right_value146;
void* right_value147;
struct list$1sTypeph* param_types_163;
void* right_value148;
char* __list_values4___164[1];
void* right_value149;
void* right_value150;
struct list$1charph* param_names_165;
void* right_value151;
void* right_value152;
struct list$1charph* param_default_parametors_166;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
struct sFun* main_fun_167;
void* right_value157;
void* right_value158;
char* name_168;
void* right_value159;
void* right_value160;
struct sType* result_type_169;
void* right_value161;
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
struct sType* __list_values5___170[7];
void* right_value175;
void* right_value176;
struct list$1sTypeph* param_types_171;
void* right_value177;
void* right_value178;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
void* right_value183;
char* __list_values6___172[7];
void* right_value184;
void* right_value185;
struct list$1charph* param_names_173;
void* right_value186;
void* right_value187;
struct list$1charph* param_default_parametors_174;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
struct sFun* main_fun_175;
void* right_value192;
void* right_value193;
char* name_176;
void* right_value194;
void* right_value195;
struct sType* result_type_177;
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
struct sType* __list_values7___178[5];
void* right_value206;
void* right_value207;
struct list$1sTypeph* param_types_179;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
void* right_value212;
char* __list_values8___180[5];
void* right_value213;
void* right_value214;
struct list$1charph* param_names_181;
void* right_value215;
void* right_value216;
struct list$1charph* param_default_parametors_182;
void* right_value217;
void* right_value218;
void* right_value219;
void* right_value220;
struct sFun* main_fun_183;
void* right_value221;
void* right_value222;
char* name_184;
void* right_value223;
void* right_value224;
struct sType* result_type_185;
void* right_value225;
void* right_value226;
struct sType* __list_values9___186[1];
void* right_value227;
void* right_value228;
struct list$1sTypeph* param_types_187;
void* right_value229;
char* __list_values10___188[1];
void* right_value230;
void* right_value231;
struct list$1charph* param_names_189;
void* right_value232;
void* right_value233;
struct list$1charph* param_default_parametors_190;
void* right_value234;
void* right_value235;
void* right_value236;
void* right_value237;
struct sFun* main_fun_191;
void* right_value238;
void* right_value239;
char* name_192;
void* right_value240;
void* right_value241;
struct sType* result_type_193;
void* right_value242;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
struct sType* __list_values11___194[4];
void* right_value250;
void* right_value251;
struct list$1sTypeph* param_types_195;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
char* __list_values12___196[4];
void* right_value256;
void* right_value257;
struct list$1charph* param_names_197;
void* right_value258;
void* right_value259;
struct list$1charph* param_default_parametors_198;
void* right_value260;
void* right_value261;
void* right_value262;
void* right_value263;
void* right_value264;
void* right_value265;
void* right_value266;
struct sFun* main_fun_199;
void* right_value267;
void* right_value268;
char* name_200;
void* right_value269;
void* right_value270;
struct sType* result_type_201;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
struct sType* __list_values13___202[3];
void* right_value277;
void* right_value278;
struct list$1sTypeph* param_types_203;
void* right_value279;
void* right_value280;
void* right_value281;
char* __list_values14___204[3];
void* right_value282;
void* right_value283;
struct list$1charph* param_names_205;
void* right_value284;
void* right_value285;
struct list$1charph* param_default_parametors_206;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
struct sFun* main_fun_207;
void* right_value290;
void* right_value291;
char* name_208;
void* right_value292;
void* right_value293;
struct sType* result_type_209;
void* right_value294;
void* right_value295;
struct sType* __list_values15___210[1];
void* right_value296;
void* right_value297;
struct list$1sTypeph* param_types_211;
void* right_value298;
char* __list_values16___212[1];
void* right_value299;
void* right_value300;
struct list$1charph* param_names_213;
void* right_value301;
void* right_value302;
struct list$1charph* param_default_parametors_214;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
struct sFun* main_fun_215;
void* right_value307;
void* right_value308;
char* name_216;
void* right_value309;
void* right_value310;
struct sType* result_type_217;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* __list_values17___218[3];
void* right_value317;
void* right_value318;
struct list$1sTypeph* param_types_219;
void* right_value319;
void* right_value320;
void* right_value321;
char* __list_values18___220[3];
void* right_value322;
void* right_value323;
struct list$1charph* param_names_221;
void* right_value324;
void* right_value325;
struct list$1charph* param_default_parametors_222;
void* right_value326;
void* right_value327;
void* right_value328;
void* right_value329;
struct sFun* main_fun_223;
void* right_value330;
void* right_value331;
char* name_224;
void* right_value332;
void* right_value333;
struct sType* result_type_225;
void* right_value334;
void* right_value335;
struct list$1sTypeph* param_types_226;
void* right_value336;
void* right_value337;
struct list$1charph* param_names_227;
void* right_value338;
void* right_value339;
struct list$1charph* param_default_parametors_228;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
struct sFun* main_fun_229;
void* right_value344;
void* right_value345;
char* name_230;
void* right_value346;
void* right_value347;
struct sType* result_type_231;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
struct sType* __list_values19___232[3];
void* right_value354;
void* right_value355;
struct list$1sTypeph* param_types_233;
void* right_value356;
void* right_value357;
void* right_value358;
char* __list_values20___234[3];
void* right_value359;
void* right_value360;
struct list$1charph* param_names_235;
void* right_value361;
void* right_value362;
struct list$1charph* param_default_parametors_236;
void* right_value363;
void* right_value364;
void* right_value365;
void* right_value366;
struct sFun* main_fun_237;
void* right_value367;
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&name_100, 0, sizeof(char*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_type_101, 0, sizeof(struct sType*));
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
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&param_types_107, 0, sizeof(struct list$1sTypeph*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&param_names_113, 0, sizeof(struct list$1charph*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&param_default_parametors_114, 0, sizeof(struct list$1charph*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&main_fun_115, 0, sizeof(struct sFun*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&name_160, 0, sizeof(char*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_type_161, 0, sizeof(struct sType*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&param_types_163, 0, sizeof(struct list$1sTypeph*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&param_names_165, 0, sizeof(struct list$1charph*));
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&param_default_parametors_166, 0, sizeof(struct list$1charph*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&main_fun_167, 0, sizeof(struct sFun*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&name_168, 0, sizeof(char*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&result_type_169, 0, sizeof(struct sType*));
right_value161 = (void*)0;
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
memset(&param_types_171, 0, sizeof(struct list$1sTypeph*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&param_names_173, 0, sizeof(struct list$1charph*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&param_default_parametors_174, 0, sizeof(struct list$1charph*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&main_fun_175, 0, sizeof(struct sFun*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&name_176, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&result_type_177, 0, sizeof(struct sType*));
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
memset(&param_types_179, 0, sizeof(struct list$1sTypeph*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&param_names_181, 0, sizeof(struct list$1charph*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&param_default_parametors_182, 0, sizeof(struct list$1charph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&main_fun_183, 0, sizeof(struct sFun*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&name_184, 0, sizeof(char*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&param_types_187, 0, sizeof(struct list$1sTypeph*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&param_names_189, 0, sizeof(struct list$1charph*));
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&param_default_parametors_190, 0, sizeof(struct list$1charph*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&main_fun_191, 0, sizeof(struct sFun*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&name_192, 0, sizeof(char*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&result_type_193, 0, sizeof(struct sType*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&param_types_195, 0, sizeof(struct list$1sTypeph*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&param_names_197, 0, sizeof(struct list$1charph*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&param_default_parametors_198, 0, sizeof(struct list$1charph*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&main_fun_199, 0, sizeof(struct sFun*));
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&name_200, 0, sizeof(char*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&result_type_201, 0, sizeof(struct sType*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&param_types_203, 0, sizeof(struct list$1sTypeph*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_names_205, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&param_default_parametors_206, 0, sizeof(struct list$1charph*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&main_fun_207, 0, sizeof(struct sFun*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&name_208, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_type_209, 0, sizeof(struct sType*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&param_types_211, 0, sizeof(struct list$1sTypeph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_names_213, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&param_default_parametors_214, 0, sizeof(struct list$1charph*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&main_fun_215, 0, sizeof(struct sFun*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&name_216, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&result_type_217, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&param_types_219, 0, sizeof(struct list$1sTypeph*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&param_names_221, 0, sizeof(struct list$1charph*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&param_default_parametors_222, 0, sizeof(struct list$1charph*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&main_fun_223, 0, sizeof(struct sFun*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&name_224, 0, sizeof(char*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&result_type_225, 0, sizeof(struct sType*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&param_types_226, 0, sizeof(struct list$1sTypeph*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&param_names_227, 0, sizeof(struct list$1charph*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&param_default_parametors_228, 0, sizeof(struct list$1charph*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&main_fun_229, 0, sizeof(struct sFun*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&name_230, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_231, 0, sizeof(struct sType*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&param_types_233, 0, sizeof(struct list$1sTypeph*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&param_names_235, 0, sizeof(struct list$1charph*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&param_default_parametors_236, 0, sizeof(struct list$1charph*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&main_fun_237, 0, sizeof(struct sFun*));
right_value367 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_100=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string("come_calloc"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 680, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___102[0]=come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___102[1]=come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___102[2]=come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"char*",(_Bool)0,info))));
__list_values1___102[3]=come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"int",(_Bool)0,info))));
__list_values1___102[4]=come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 681, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_107=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value112=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 681, "struct list$1sTypeph")))),5,__list_values1___102))));
        come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___108[0]=come_increment_ref_count(((char*)(right_value113=__builtin_string("count"))));
__list_values2___108[1]=come_increment_ref_count(((char*)(right_value114=__builtin_string("size"))));
__list_values2___108[2]=come_increment_ref_count(((char*)(right_value115=__builtin_string("sname"))));
__list_values2___108[3]=come_increment_ref_count(((char*)(right_value116=__builtin_string("sline"))));
__list_values2___108[4]=come_increment_ref_count(((char*)(right_value117=__builtin_string("class_name"))));
}        param_names_113=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 682, "struct list$1charph")))),5,__list_values2___108))));
        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 683, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_114,((void*)0));
        list$1charph_push_back(param_default_parametors_114,((void*)0));
        list$1charph_push_back(param_default_parametors_114,(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string("null")))));
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_114,(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string("0")))));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_114,(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("null")))));
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_115=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value131=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value128=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 689, "struct sFun")))),(char*)come_increment_ref_count(name_100),(struct sType*)come_increment_ref_count(result_type_101),(struct list$1sTypeph*)come_increment_ref_count(param_types_107),(struct list$1charph*)come_increment_ref_count(param_names_113),(struct list$1charph*)come_increment_ref_count(param_default_parametors_114),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value129=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(name_100)))),(struct sFun*)come_increment_ref_count(main_fun_115));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_100 = come_decrement_ref_count2(name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_160=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string("come_increment_ref_count"))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 700, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___162[0]=come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 701, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_163=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value146=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 701, "struct list$1sTypeph")))),1,__list_values3___162))));
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___164[0]=come_increment_ref_count(((char*)(right_value148=__builtin_string("mem"))));
}        param_names_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 702, "struct list$1charph")))),1,__list_values4___164))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value152=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 703, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_167=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value156=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value153=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 704, "struct sFun")))),(char*)come_increment_ref_count(name_160),(struct sType*)come_increment_ref_count(result_type_161),(struct list$1sTypeph*)come_increment_ref_count(param_types_163),(struct list$1charph*)come_increment_ref_count(param_names_165),(struct list$1charph*)come_increment_ref_count(param_default_parametors_166),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(name_160)))),(struct sFun*)come_increment_ref_count(main_fun_167));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_160 = come_decrement_ref_count2(name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_168=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string("come_call_finalizer"))));
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 715, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values5___170[0]=come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___170[1]=come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___170[2]=come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___170[3]=come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"void*",(_Bool)0,info))));
__list_values5___170[4]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___170[5]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
__list_values5___170[6]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 716, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_171=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value176=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value175=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 716, "struct list$1sTypeph")))),7,__list_values5___170))));
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
        come_call_finalizer2(list$1sTypeph_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values6___172[0]=come_increment_ref_count(((char*)(right_value177=__builtin_string("fun"))));
__list_values6___172[1]=come_increment_ref_count(((char*)(right_value178=__builtin_string("mem"))));
__list_values6___172[2]=come_increment_ref_count(((char*)(right_value179=__builtin_string("protocol_fun"))));
__list_values6___172[3]=come_increment_ref_count(((char*)(right_value180=__builtin_string("protocol_obj"))));
__list_values6___172[4]=come_increment_ref_count(((char*)(right_value181=__builtin_string("call_finalizer_only"))));
__list_values6___172[5]=come_increment_ref_count(((char*)(right_value182=__builtin_string("no_decrement"))));
__list_values6___172[6]=come_increment_ref_count(((char*)(right_value183=__builtin_string("no_free"))));
}        param_names_173=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 717, "struct list$1charph")))),7,__list_values6___172))));
        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_174=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value187=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value186=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 718, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_175=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value191=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value188=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 719, "struct sFun")))),(char*)come_increment_ref_count(name_168),(struct sType*)come_increment_ref_count(result_type_169),(struct list$1sTypeph*)come_increment_ref_count(param_types_171),(struct list$1charph*)come_increment_ref_count(param_names_173),(struct list$1charph*)come_increment_ref_count(param_default_parametors_174),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(name_168)))),(struct sFun*)come_increment_ref_count(main_fun_175));
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_176=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string("come_decrement_ref_count"))));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 730, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values7___178[0]=come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___178[1]=come_increment_ref_count(((struct sType*)(right_value199=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___178[2]=come_increment_ref_count(((struct sType*)(right_value201=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value200=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"void*",(_Bool)0,info))));
__list_values7___178[3]=come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"bool",(_Bool)0,info))));
__list_values7___178[4]=come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 731, "struct sType")))),"bool",(_Bool)0,info))));
}        param_types_179=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value207=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value206=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 731, "struct list$1sTypeph")))),5,__list_values7___178))));
        come_call_finalizer2(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values8___180[0]=come_increment_ref_count(((char*)(right_value208=__builtin_string("mem"))));
__list_values8___180[1]=come_increment_ref_count(((char*)(right_value209=__builtin_string("protocol_fun"))));
__list_values8___180[2]=come_increment_ref_count(((char*)(right_value210=__builtin_string("protocol_obj"))));
__list_values8___180[3]=come_increment_ref_count(((char*)(right_value211=__builtin_string("no_decrement"))));
__list_values8___180[4]=come_increment_ref_count(((char*)(right_value212=__builtin_string("no_free"))));
}        param_names_181=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value214=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value213=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 732, "struct list$1charph")))),5,__list_values8___180))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_182=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value215=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 733, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_183=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value220=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value217=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 734, "struct sFun")))),(char*)come_increment_ref_count(name_176),(struct sType*)come_increment_ref_count(result_type_177),(struct list$1sTypeph*)come_increment_ref_count(param_types_179),(struct list$1charph*)come_increment_ref_count(param_names_181),(struct list$1charph*)come_increment_ref_count(param_default_parametors_182),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(name_176)))),(struct sFun*)come_increment_ref_count(main_fun_183));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_176 = come_decrement_ref_count2(name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_184=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string("come_free_object"))));
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value223=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 745, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values9___186[0]=come_increment_ref_count(((struct sType*)(right_value226=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value225=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 746, "struct sType")))),"void*",(_Bool)0,info))));
}        param_types_187=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value228=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value227=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 746, "struct list$1sTypeph")))),1,__list_values9___186))));
        come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values10___188[0]=come_increment_ref_count(((char*)(right_value229=__builtin_string("mem"))));
}        param_names_189=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value230=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 747, "struct list$1charph")))),1,__list_values10___188))));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_190=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value233=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 748, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_191=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value237=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value234=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 749, "struct sFun")))),(char*)come_increment_ref_count(name_184),(struct sType*)come_increment_ref_count(result_type_185),(struct list$1sTypeph*)come_increment_ref_count(param_types_187),(struct list$1charph*)come_increment_ref_count(param_names_189),(struct list$1charph*)come_increment_ref_count(param_default_parametors_190),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(name_184)))),(struct sFun*)come_increment_ref_count(main_fun_191));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_192=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string("come_memdup"))));
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 760, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values11___194[0]=come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"void*",(_Bool)0,info))));
__list_values11___194[1]=come_increment_ref_count(((struct sType*)(right_value245=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value244=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"char*",(_Bool)0,info))));
__list_values11___194[2]=come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"int",(_Bool)0,info))));
__list_values11___194[3]=come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 761, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_195=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value251=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value250=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 761, "struct list$1sTypeph")))),4,__list_values11___194))));
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values12___196[0]=come_increment_ref_count(((char*)(right_value252=__builtin_string("block"))));
__list_values12___196[1]=come_increment_ref_count(((char*)(right_value253=__builtin_string("sname"))));
__list_values12___196[2]=come_increment_ref_count(((char*)(right_value254=__builtin_string("sline"))));
__list_values12___196[3]=come_increment_ref_count(((char*)(right_value255=__builtin_string("class_name"))));
}        param_names_197=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value257=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 762, "struct list$1charph")))),4,__list_values12___196))));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_198=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value259=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value258=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 763, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_198,((void*)0));
        list$1charph_push_back(param_default_parametors_198,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string("null")))));
        right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_198,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string("0")))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_198,(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("null")))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_199=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value266=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value263=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 768, "struct sFun")))),(char*)come_increment_ref_count(name_192),(struct sType*)come_increment_ref_count(result_type_193),(struct list$1sTypeph*)come_increment_ref_count(param_types_195),(struct list$1charph*)come_increment_ref_count(param_names_197),(struct list$1charph*)come_increment_ref_count(param_default_parametors_198),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(name_192)))),(struct sFun*)come_increment_ref_count(main_fun_199));
        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_192 = come_decrement_ref_count2(name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_197, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_200=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string("memset"))));
        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_201=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 779, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values13___202[0]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"void*",(_Bool)0,info))));
__list_values13___202[1]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"int",(_Bool)0,info))));
__list_values13___202[2]=come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 780, "struct sType")))),"long",(_Bool)0,info))));
}        param_types_203=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value278=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 780, "struct list$1sTypeph")))),3,__list_values13___202))));
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values14___204[0]=come_increment_ref_count(((char*)(right_value279=__builtin_string("b"))));
__list_values14___204[1]=come_increment_ref_count(((char*)(right_value280=__builtin_string("c"))));
__list_values14___204[2]=come_increment_ref_count(((char*)(right_value281=__builtin_string("len"))));
}        param_names_205=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 781, "struct list$1charph")))),3,__list_values14___204))));
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_206=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value285=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 782, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_207=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value289=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value286=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 783, "struct sFun")))),(char*)come_increment_ref_count(name_200),(struct sType*)come_increment_ref_count(result_type_201),(struct list$1sTypeph*)come_increment_ref_count(param_types_203),(struct list$1charph*)come_increment_ref_count(param_names_205),(struct list$1charph*)come_increment_ref_count(param_default_parametors_206),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(name_200)))),(struct sFun*)come_increment_ref_count(main_fun_207));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_200 = come_decrement_ref_count2(name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_205, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_208=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("__builtin_string"))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 794, "struct sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values15___210[0]=come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 795, "struct sType")))),"char*",(_Bool)0,info))));
}        param_types_211=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 795, "struct list$1sTypeph")))),1,__list_values15___210))));
        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values16___212[0]=come_increment_ref_count(((char*)(right_value298=__builtin_string("str"))));
}        param_names_213=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 796, "struct list$1charph")))),1,__list_values16___212))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_214=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 797, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_215=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 798, "struct sFun")))),(char*)come_increment_ref_count(name_208),(struct sType*)come_increment_ref_count(result_type_209),(struct list$1sTypeph*)come_increment_ref_count(param_types_211),(struct list$1charph*)come_increment_ref_count(param_names_213),(struct list$1charph*)come_increment_ref_count(param_default_parametors_214),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(name_208)))),(struct sFun*)come_increment_ref_count(main_fun_215));
        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_208 = come_decrement_ref_count2(name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_216=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("come_heap_init"))));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 809, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values17___218[0]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
__list_values17___218[1]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
__list_values17___218[2]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 810, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_219=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value318=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 810, "struct list$1sTypeph")))),3,__list_values17___218))));
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values18___220[0]=come_increment_ref_count(((char*)(right_value319=xsprintf("come_malloc"))));
__list_values18___220[1]=come_increment_ref_count(((char*)(right_value320=xsprintf("come_debug"))));
__list_values18___220[2]=come_increment_ref_count(((char*)(right_value321=xsprintf("come_gc"))));
}        param_names_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value323=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value322=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 811, "struct list$1charph")))),3,__list_values18___220))));
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_222=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value324=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 812, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_222,((void*)0));
        main_fun_223=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value329=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value326=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 814, "struct sFun")))),(char*)come_increment_ref_count(name_216),(struct sType*)come_increment_ref_count(result_type_217),(struct list$1sTypeph*)come_increment_ref_count(param_types_219),(struct list$1charph*)come_increment_ref_count(param_names_221),(struct list$1charph*)come_increment_ref_count(param_default_parametors_222),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value328=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(name_216)))),(struct sFun*)come_increment_ref_count(main_fun_223));
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_221, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_224=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("come_heap_final"))));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 825, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_226=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value334=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 826, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_names_227=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value337=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value336=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 827, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_228=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value339=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value338=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 828, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_229=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value343=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value340=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 829, "struct sFun")))),(char*)come_increment_ref_count(name_224),(struct sType*)come_increment_ref_count(result_type_225),(struct list$1sTypeph*)come_increment_ref_count(param_types_226),(struct list$1charph*)come_increment_ref_count(param_names_227),(struct list$1charph*)come_increment_ref_count(param_default_parametors_228),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value341=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(name_224)))),(struct sFun*)come_increment_ref_count(main_fun_229));
        right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    {
        name_230=(char*)come_increment_ref_count(((char*)(right_value345=__builtin_string("come_null_check"))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 840, "struct sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values19___232[0]=come_increment_ref_count(((struct sType*)(right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"void*",(_Bool)0,info))));
__list_values19___232[1]=come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"char*",(_Bool)0,info))));
__list_values19___232[2]=come_increment_ref_count(((struct sType*)(right_value353=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 841, "struct sType")))),"int",(_Bool)0,info))));
}        param_types_233=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value355=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value354=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 841, "struct list$1sTypeph")))),3,__list_values19___232))));
        come_call_finalizer2(sType_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values20___234[0]=come_increment_ref_count(((char*)(right_value356=__builtin_string("mem"))));
__list_values20___234[1]=come_increment_ref_count(((char*)(right_value357=__builtin_string("sname"))));
__list_values20___234[2]=come_increment_ref_count(((char*)(right_value358=__builtin_string("sline"))));
}        param_names_235=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value360=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 842, "struct list$1charph")))),3,__list_values20___234))));
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_236=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value362=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value361=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 843, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        main_fun_237=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value366=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value363=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 844, "struct sFun")))),(char*)come_increment_ref_count(name_230),(struct sType*)come_increment_ref_count(result_type_231),(struct list$1sTypeph*)come_increment_ref_count(param_types_233),(struct list$1charph*)come_increment_ref_count(param_names_235),(struct list$1charph*)come_increment_ref_count(param_default_parametors_236),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value364=__builtin_string("void* come_null_check(void* mem, char* sname, int sline)")))),(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value367=__builtin_string(name_230)))),(struct sFun*)come_increment_ref_count(main_fun_237));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_230 = come_decrement_ref_count2(name_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_236, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,main_fun_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    __result96__ = 0;
    return __result96__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_103;
struct list$1sTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_103, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_103=0;            i_103<num_value;            i_103++            ){
                list$1sTypeph_push_back(self,values[i_103]);
            }
            __result69__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result69__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional206;
void* right_value108;
struct list_item$1sTypeph* litem_104;
struct sType* __dec_obj61;
_Bool _if_conditional207;
void* right_value109;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj62;
void* right_value110;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj63;
struct list$1sTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sTypeph*));
right_value109 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
right_value110 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional206=self->len==0,                    _if_conditional206) {
                        litem_104=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value108=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_104->prev=((void*)0);
                        litem_104->next=((void*)0);
                        __dec_obj61=litem_104->item;
                        litem_104->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_104;
                        self->head=litem_104;
                    }
                    else {
                        if(_if_conditional207=self->len==1,                        _if_conditional207) {
                            litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value109=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_105->prev=self->head;
                            litem_105->next=((void*)0);
                            __dec_obj62=litem_105->item;
                            litem_105->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_105;
                            self->head->next=litem_105;
                        }
                        else {
                            litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value110=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_106->prev=self->tail;
                            litem_106->next=((void*)0);
                            __dec_obj63=litem_106->item;
                            litem_106->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_106;
                            self->tail=litem_106;
                        }
                    }
                    self->len++;
                    __result68__ = __result_obj__ = self;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_109;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_109, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_109=0;            i_109<num_value;            i_109++            ){
                list$1charph_push_back(self,values[i_109]);
            }
            __result71__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional208;
void* right_value118;
struct list_item$1charph* litem_110;
char* __dec_obj64;
_Bool _if_conditional209;
void* right_value119;
struct list_item$1charph* litem_111;
char* __dec_obj65;
void* right_value120;
struct list_item$1charph* litem_112;
char* __dec_obj66;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
right_value120 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional208=self->len==0,                    _if_conditional208) {
                        litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_110->prev=((void*)0);
                        litem_110->next=((void*)0);
                        __dec_obj64=litem_110->item;
                        litem_110->item=(char*)come_increment_ref_count(item);
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_110;
                        self->head=litem_110;
                    }
                    else {
                        if(_if_conditional209=self->len==1,                        _if_conditional209) {
                            litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_111->prev=self->head;
                            litem_111->next=((void*)0);
                            __dec_obj65=litem_111->item;
                            litem_111->item=(char*)come_increment_ref_count(item);
                            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_111;
                            self->head->next=litem_111;
                        }
                        else {
                            litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value120=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_112->prev=self->tail;
                            litem_112->next=((void*)0);
                            __dec_obj66=litem_112->item;
                            litem_112->item=(char*)come_increment_ref_count(item);
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_112;
                            self->tail=litem_112;
                        }
                    }
                    self->len++;
                    __result70__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result70__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional210;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional22;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool same_key_exist_151;
char* it2_154;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct map$2charphsFunph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
memset(&same_key_exist_151, 0, sizeof(_Bool));
memset(&it2_154, 0, sizeof(char*));
            if(_if_conditional210=self->len*10>=self->size,            _if_conditional210) {
                map$2charphsFunph_rehash(self);
            }
            hash_133=string_get_hash_key(key)%self->size;
            it_134=hash_133;
            while(_while_condtional22=(_Bool)1,            _while_condtional22) {
                if(_if_conditional222=self->item_existance[it_134],                _if_conditional222) {
                    if(_if_conditional223=string_equals(self->keys[it_134],key),                    _if_conditional223) {
                        if(_if_conditional224=1,                        _if_conditional224) {
                            list$1charp_remove(self->key_list,self->keys[it_134]);
                            self->keys[it_134] = come_decrement_ref_count2(self->keys[it_134], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_134]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_134]);
                            self->keys[it_134]=key;
                        }
                        if(_if_conditional244=1,                        _if_conditional244) {
                            come_call_finalizer2(sFun_finalize,self->items[it_134], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_134]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_134]=item;
                        }
                        break;
                    }
                    it_134++;
                    if(_if_conditional245=it_134>=self->size,                    _if_conditional245) {
                        it_134=0;
                    }
                    else {
                        if(_if_conditional246=it_134==hash_133,                        _if_conditional246) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_134]=(_Bool)1;
                    if(_if_conditional247=1,                    _if_conditional247) {
                        self->keys[it_134]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_134]=key;
                    }
                    if(_if_conditional248=1,                    _if_conditional248) {
                        self->items[it_134]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_134]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_151=(_Bool)0;
            for(            it2_154=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_154=list$1charp_next(self->key_list)            ){
                if(_if_conditional253=string_equals(it2_154,key),                _if_conditional253) {
                    same_key_exist_151=(_Bool)1;
                }
            }
            if(_if_conditional254=!same_key_exist_151,            _if_conditional254) {
                list$1charp_push_back(self->key_list,key);
            }
            __result95__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result95__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_116;
void* right_value132;
char** keys_117;
void* right_value133;
struct sFun** items_118;
void* right_value134;
_Bool* item_existance_119;
int len_120;
char* it_123;
struct sFun* default_value_126;
void* right_value135;
struct sFun* it2_129;
unsigned int hash_130;
int n_131;
_Bool _while_condtional21;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct sFun* default_value_132;
void* right_value136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_116, 0, sizeof(int));
right_value132 = (void*)0;
memset(&keys_117, 0, sizeof(char**));
right_value133 = (void*)0;
memset(&items_118, 0, sizeof(struct sFun**));
right_value134 = (void*)0;
memset(&item_existance_119, 0, sizeof(_Bool*));
memset(&len_120, 0, sizeof(int));
memset(&it_123, 0, sizeof(char*));
memset(&default_value_126, 0, sizeof(struct sFun*));
right_value135 = (void*)0;
memset(&it2_129, 0, sizeof(struct sFun*));
memset(&hash_130, 0, sizeof(unsigned int));
memset(&n_131, 0, sizeof(int));
memset(&default_value_132, 0, sizeof(struct sFun*));
right_value136 = (void*)0;
                    size_116=self->size*10;
                    keys_117=(char**)come_increment_ref_count(((char**)(right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(size_116)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_118=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value133=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_116)), "/usr/local/include/comelang2.h", 1315, "struct sFun*"))));
                    come_call_finalizer2(sFun_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_119=(_Bool*)come_increment_ref_count(((_Bool*)(right_value134=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_116)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_120=0;
                    for(                    it_123=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_123=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_126,0,sizeof(struct sFun*));
                        it2_129=((struct sFun*)(right_value135=map$2charphsFunph_at(self,it_123,default_value_126)));
                        come_call_finalizer2(sFun_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_130=string_get_hash_key(it_123)%size_116;
                        n_131=hash_130;
                        while(_while_condtional21=(_Bool)1,                        _while_condtional21) {
                            if(_if_conditional219=item_existance_119[n_131],                            _if_conditional219) {
                                n_131++;
                                if(_if_conditional220=n_131>=size_116,                                _if_conditional220) {
                                    n_131=0;
                                }
                                else {
                                    if(_if_conditional221=n_131==hash_130,                                    _if_conditional221) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_119[n_131]=(_Bool)1;
                                keys_117[n_131]=it_123;
                                items_118[n_131]=((struct sFun*)(right_value136=map$2charphsFunph_at(self,it_123,default_value_132)));
                                come_call_finalizer2(sFun_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_120++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_117;
                    self->items=items_118;
                    self->item_existance=item_existance_119;
                    self->size=size_116;
                    self->len=len_120;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional211;
char* result_121;
char* __result72__;
_Bool _if_conditional212;
char* __result73__;
char* result_122;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                        if(_if_conditional211=self==((void*)0),                        _if_conditional211) {
                            memset(&result_121,0,sizeof(char*));
                            __result72__ = __result_obj__ = result_121;
                            return __result72__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result73__ = __result_obj__ = self->key_list->it->item;
                            return __result73__;
                        }
                        memset(&result_122,0,sizeof(char*));
                        __result74__ = __result_obj__ = result_122;
                        return __result74__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result75__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result75__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional213;
char* result_124;
char* __result76__;
_Bool _if_conditional214;
char* __result77__;
char* result_125;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                        if(_if_conditional213=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional213) {
                            memset(&result_124,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_124;
                            return __result76__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result77__ = __result_obj__ = self->key_list->it->item;
                            return __result77__;
                        }
                        memset(&result_125,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_125;
                        return __result78__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_127;
unsigned int it_128;
_Bool _while_condtional20;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* __result79__;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sFun* __result80__;
struct sFun* __result81__;
struct sFun* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_127, 0, sizeof(unsigned int));
memset(&it_128, 0, sizeof(unsigned int));
                            hash_127=string_get_hash_key(((char*)key))%self->size;
                            it_128=hash_127;
                            while(_while_condtional20=(_Bool)1,                            _while_condtional20) {
                                if(_if_conditional215=self->item_existance[it_128],                                _if_conditional215) {
                                    if(_if_conditional216=string_equals(self->keys[it_128],key),                                    _if_conditional216) {
                                        __result79__ = __result_obj__ = self->items[it_128];
                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result79__;
                                    }
                                    it_128++;
                                    if(_if_conditional217=it_128>=self->size,                                    _if_conditional217) {
                                        it_128=0;
                                    }
                                    else {
                                        if(_if_conditional218=it_128==hash_127,                                        _if_conditional218) {
                                            __result80__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result80__;
                                        }
                                    }
                                }
                                else {
                                    __result81__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result81__;
                                }
                            }
                            __result82__ = __result_obj__ = default_value;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_135;
struct list_item$1charp* it_136;
_Bool _while_condtional23;
_Bool _if_conditional225;
struct list$1charp* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_135, 0, sizeof(int));
memset(&it_136, 0, sizeof(struct list_item$1charp*));
                                it2_135=0;
                                it_136=self->head;
                                while(_while_condtional23=it_136!=((void*)0),                                _while_condtional23) {
                                    if(_if_conditional225=string_equals(it_136->item,item),                                    _if_conditional225) {
                                        list$1charp_delete(self,it2_135,it2_135+1);
                                        break;
                                    }
                                    it2_135++;
                                    it_136=it_136->next;
                                }
                                __result86__ = __result_obj__ = self;
                                return __result86__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
int tmp_137;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list$1charp* __result83__;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* it_140;
int i_141;
_Bool _while_condtional25;
_Bool _if_conditional234;
struct list_item$1charp* prev_it_142;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* it_143;
int i_144;
_Bool _while_condtional26;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* prev_it_145;
struct list_item$1charp* it_146;
struct list_item$1charp* head_prev_it_147;
struct list_item$1charp* tail_it_148;
int i_149;
_Bool _while_condtional27;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* prev_it_150;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_137, 0, sizeof(int));
memset(&it_140, 0, sizeof(struct list_item$1charp*));
memset(&i_141, 0, sizeof(int));
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&i_144, 0, sizeof(int));
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*));
memset(&it_146, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_147, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_148, 0, sizeof(struct list_item$1charp*));
memset(&i_149, 0, sizeof(int));
memset(&prev_it_150, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional226=head<0,                                            _if_conditional226) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional227=tail<0,                                            _if_conditional227) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional228=head>tail,                                            _if_conditional228) {
                                                tmp_137=tail;
                                                tail=head;
                                                head=tmp_137;
                                            }
                                            if(_if_conditional229=head<0,                                            _if_conditional229) {
                                                head=0;
                                            }
                                            if(_if_conditional230=tail>self->len,                                            _if_conditional230) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional231=head==tail,                                            _if_conditional231) {
                                                __result83__ = __result_obj__ = self;
                                                return __result83__;
                                            }
                                            if(_if_conditional232=head==0&&tail==self->len,                                            _if_conditional232) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional233=head==0,                                                _if_conditional233) {
                                                    it_140=self->head;
                                                    i_141=0;
                                                    while(_while_condtional25=it_140!=((void*)0),                                                    _while_condtional25) {
                                                        if(_if_conditional234=i_141<tail,                                                        _if_conditional234) {
                                                            prev_it_142=it_140;
                                                            it_140=it_140->next;
                                                            i_141++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional235=i_141==tail,                                                            _if_conditional235) {
                                                                self->head=it_140;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_140=it_140->next;
                                                                i_141++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional236=tail==self->len,                                                    _if_conditional236) {
                                                        it_143=self->head;
                                                        i_144=0;
                                                        while(_while_condtional26=it_143!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional237=i_144==head,                                                            _if_conditional237) {
                                                                self->tail=it_143->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional238=i_144>=head,                                                            _if_conditional238) {
                                                                prev_it_145=it_143;
                                                                it_143=it_143->next;
                                                                i_144++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_143=it_143->next;
                                                                i_144++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_146=self->head;
                                                        head_prev_it_147=((void*)0);
                                                        tail_it_148=((void*)0);
                                                        i_149=0;
                                                        while(_while_condtional27=it_146!=((void*)0),                                                        _while_condtional27) {
                                                            if(_if_conditional239=i_149==head,                                                            _if_conditional239) {
                                                                head_prev_it_147=it_146->prev;
                                                            }
                                                            if(_if_conditional240=i_149==tail,                                                            _if_conditional240) {
                                                                tail_it_148=it_146;
                                                            }
                                                            if(_if_conditional241=i_149>=head&&i_149<tail,                                                            _if_conditional241) {
                                                                prev_it_150=it_146;
                                                                it_146=it_146->next;
                                                                i_149++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_146=it_146->next;
                                                                i_149++;
                                                            }
                                                        }
                                                        if(_if_conditional242=head_prev_it_147!=((void*)0),                                                        _if_conditional242) {
                                                            head_prev_it_147->next=tail_it_148;
                                                        }
                                                        if(_if_conditional243=tail_it_148!=((void*)0),                                                        _if_conditional243) {
                                                            tail_it_148->prev=head_prev_it_147;
                                                        }
                                                    }
                                                }
                                            }
                                            __result85__ = __result_obj__ = self;
                                            return __result85__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_138;
_Bool _while_condtional24;
struct list_item$1charp* prev_it_139;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_138, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_139, 0, sizeof(struct list_item$1charp*));
                                                    it_138=self->head;
                                                    while(_while_condtional24=it_138!=((void*)0),                                                    _while_condtional24) {
                                                        prev_it_139=it_138;
                                                        it_138=it_138->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result84__ = __result_obj__ = self;
                                                    return __result84__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional249;
char* result_152;
char* __result87__;
_Bool _if_conditional250;
char* __result88__;
char* result_153;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_152, 0, sizeof(char*));
memset(&result_153, 0, sizeof(char*));
                if(_if_conditional249=self==((void*)0),                _if_conditional249) {
                    memset(&result_152,0,sizeof(char*));
                    __result87__ = __result_obj__ = result_152;
                    return __result87__;
                }
                self->it=self->head;
                if(self->it) {
                    __result88__ = __result_obj__ = self->it->item;
                    return __result88__;
                }
                memset(&result_153,0,sizeof(char*));
                __result89__ = __result_obj__ = result_153;
                return __result89__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                __result90__ = self==((void*)0)||self->it==((void*)0);
                return __result90__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional251;
char* result_155;
char* __result91__;
_Bool _if_conditional252;
char* __result92__;
char* result_156;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
                if(_if_conditional251=self==((void*)0)||self->it==((void*)0),                _if_conditional251) {
                    memset(&result_155,0,sizeof(char*));
                    __result91__ = __result_obj__ = result_155;
                    return __result91__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result92__ = __result_obj__ = self->it->item;
                    return __result92__;
                }
                memset(&result_156,0,sizeof(char*));
                __result93__ = __result_obj__ = result_156;
                return __result93__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional255;
void* right_value137;
struct list_item$1charp* litem_157;
_Bool _if_conditional256;
void* right_value138;
struct list_item$1charp* litem_158;
void* right_value139;
struct list_item$1charp* litem_159;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charp*));
right_value138 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1charp*));
right_value139 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional255=self->len==0,                    _if_conditional255) {
                        litem_157=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value137=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_157->prev=((void*)0);
                        litem_157->next=((void*)0);
                        litem_157->item=item;
                        self->tail=litem_157;
                        self->head=litem_157;
                    }
                    else {
                        if(_if_conditional256=self->len==1,                        _if_conditional256) {
                            litem_158=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value138=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_158->prev=self->head;
                            litem_158->next=((void*)0);
                            litem_158->item=item;
                            self->tail=litem_158;
                            self->head->next=litem_158;
                        }
                        else {
                            litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_159->prev=self->tail;
                            litem_159->next=((void*)0);
                            litem_159->item=item;
                            self->tail->next=litem_159;
                            self->tail=litem_159;
                        }
                    }
                    self->len++;
                    __result94__ = __result_obj__ = self;
                    return __result94__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_238;
int sline_239;
_Bool define_struct_nobody_240;
char* p_241;
int sline_242;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value368;
char* word_243;
_Bool _if_conditional259;
_Bool define_function_pointer_result_function_244;
_Bool define_variable_between_brace_245;
_Bool _if_conditional260;
char* p_246;
_Bool _if_conditional261;
void* right_value369;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_247;
char* fun_name_248;
_Bool err_249;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value370;
char* word_250;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool define_function_flag_251;
_Bool _if_conditional269;
char* p_252;
_Bool invalid_type_253;
_Bool _if_conditional270;
void* right_value371;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_254;
char* fun_name_255;
_Bool err_256;
_Bool _if_conditional271;
char* word_257;
_Bool _if_conditional272;
void* right_value372;
char* __dec_obj67;
_Bool _if_conditional273;
void* right_value373;
char* __dec_obj68;
char* __dec_obj69;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _while_condtional28;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value374;
char* __dec_obj70;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool define_variable_258;
_Bool _if_conditional281;
char* p_259;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value375;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_260;
char* fun_name_261;
_Bool err_262;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value376;
char* word_263;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value377;
char* word_264;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _while_condtional29;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value378;
char* word_265;
_Bool _if_conditional297;
void* right_value379;
void* right_value380;
struct list$1charph* __dec_obj71;
void* right_value381;
char* word_266;
void* right_value382;
char* p_267;
int sline_268;
void* right_value383;
struct sNode* node_269;
struct sNode* __result97__;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value384;
struct sNode* __result98__;
_Bool _if_conditional300;
char* header_head_270;
void* right_value385;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_271;
char* fun_name_272;
_Bool err_273;
_Bool _if_conditional301;
void* right_value386;
void* right_value387;
struct list$1sTypeph* param_types_274;
void* right_value388;
void* right_value389;
struct list$1charph* param_names_275;
_Bool _if_conditional302;
_Bool _while_condtional30;
void* right_value390;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_276;
char* param_name_277;
_Bool err_278;
_Bool _if_conditional303;
static int num_function_pointer_result_var_name_a_279=0;
void* right_value391;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value392;
void* right_value393;
struct list$1sTypeph* param_types2_280;
void* right_value394;
void* right_value395;
struct list$1charph* param_names2_281;
_Bool _if_conditional307;
_Bool _while_condtional31;
void* right_value396;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_282;
char* param_name_283;
_Bool err_284;
_Bool _if_conditional308;
static int num_function_pointer_result_var_name_b_285=0;
void* right_value397;
_Bool _if_conditional309;
_Bool _if_conditional310;
char* header_tail_286;
void* right_value398;
void* right_value399;
struct sType* result_type2_287;
void* right_value400;
void* right_value401;
struct tuple1$1sTypeph* __dec_obj73;
void* right_value402;
struct list$1sTypeph* __dec_obj74;
void* right_value403;
struct list$1charph* __dec_obj75;
_Bool var_args_288;
void* right_value404;
void* right_value405;
struct buffer* header_buf_289;
void* right_value406;
void* right_value407;
struct list$1charph* param_default_parametors_290;
void* right_value408;
void* right_value409;
void* right_value410;
void* right_value411;
void* right_value412;
struct sFun* fun_291;
void* right_value413;
void* right_value414;
struct sFun* fun2_295;
_Bool _if_conditional315;
void* right_value415;
void* right_value416;
void* right_value417;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value459;
struct sNode* __result130__;
_Bool _if_conditional390;
void* right_value460;
struct sNode* __result131__;
_Bool _if_conditional391;
void* right_value461;
struct sNode* __result132__;
void* right_value462;
char* buf2_331;
void* right_value463;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_238, 0, sizeof(_Bool));
memset(&sline_239, 0, sizeof(int));
memset(&define_struct_nobody_240, 0, sizeof(_Bool));
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value368 = (void*)0;
memset(&word_243, 0, sizeof(char*));
memset(&define_function_pointer_result_function_244, 0, sizeof(_Bool));
memset(&define_variable_between_brace_245, 0, sizeof(_Bool));
memset(&p_246, 0, sizeof(char*));
right_value369 = (void*)0;
memset(&result_type_247, 0, sizeof(struct sType*));
memset(&fun_name_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
memset(&result_type_247, 0, sizeof(struct sType*));
memset(&fun_name_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
right_value370 = (void*)0;
memset(&word_250, 0, sizeof(char*));
memset(&define_function_flag_251, 0, sizeof(_Bool));
memset(&p_252, 0, sizeof(char*));
memset(&invalid_type_253, 0, sizeof(_Bool));
right_value371 = (void*)0;
memset(&result_type_254, 0, sizeof(struct sType*));
memset(&fun_name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
memset(&result_type_254, 0, sizeof(struct sType*));
memset(&fun_name_255, 0, sizeof(char*));
memset(&err_256, 0, sizeof(_Bool));
memset(&word_257, 0, sizeof(char*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&define_variable_258, 0, sizeof(_Bool));
memset(&p_259, 0, sizeof(char*));
right_value375 = (void*)0;
memset(&result_type_260, 0, sizeof(struct sType*));
memset(&fun_name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
memset(&result_type_260, 0, sizeof(struct sType*));
memset(&fun_name_261, 0, sizeof(char*));
memset(&err_262, 0, sizeof(_Bool));
right_value376 = (void*)0;
memset(&word_263, 0, sizeof(char*));
right_value377 = (void*)0;
memset(&word_264, 0, sizeof(char*));
right_value378 = (void*)0;
memset(&word_265, 0, sizeof(char*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&word_266, 0, sizeof(char*));
right_value382 = (void*)0;
memset(&p_267, 0, sizeof(char*));
memset(&sline_268, 0, sizeof(int));
right_value383 = (void*)0;
memset(&node_269, 0, sizeof(struct sNode*));
right_value384 = (void*)0;
memset(&header_head_270, 0, sizeof(char*));
right_value385 = (void*)0;
memset(&result_type_271, 0, sizeof(struct sType*));
memset(&fun_name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
memset(&result_type_271, 0, sizeof(struct sType*));
memset(&fun_name_272, 0, sizeof(char*));
memset(&err_273, 0, sizeof(_Bool));
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&param_types_274, 0, sizeof(struct list$1sTypeph*));
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&param_names_275, 0, sizeof(struct list$1charph*));
right_value390 = (void*)0;
memset(&param_type_276, 0, sizeof(struct sType*));
memset(&param_name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
memset(&param_type_276, 0, sizeof(struct sType*));
memset(&param_name_277, 0, sizeof(char*));
memset(&err_278, 0, sizeof(_Bool));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&param_types2_280, 0, sizeof(struct list$1sTypeph*));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&param_names2_281, 0, sizeof(struct list$1charph*));
right_value396 = (void*)0;
memset(&param_type_282, 0, sizeof(struct sType*));
memset(&param_name_283, 0, sizeof(char*));
memset(&err_284, 0, sizeof(_Bool));
memset(&param_type_282, 0, sizeof(struct sType*));
memset(&param_name_283, 0, sizeof(char*));
memset(&err_284, 0, sizeof(_Bool));
right_value397 = (void*)0;
memset(&header_tail_286, 0, sizeof(char*));
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&result_type2_287, 0, sizeof(struct sType*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&var_args_288, 0, sizeof(_Bool));
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&header_buf_289, 0, sizeof(struct buffer*));
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&param_default_parametors_290, 0, sizeof(struct list$1charph*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&fun_291, 0, sizeof(struct sFun*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&fun2_295, 0, sizeof(struct sFun*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&buf2_331, 0, sizeof(char*));
right_value463 = (void*)0;
    is_type_name_flag_238=is_type_name(buf,info);
    sline_239=info->sline;
    define_struct_nobody_240=(_Bool)0;
    {
        p_241=info->p;
        sline_242=info->sline;
        if(_if_conditional257=charp_operator_equals(buf,"struct"),        _if_conditional257) {
            if(_if_conditional258=xisalpha(*info->p)||*info->p==95,            _if_conditional258) {
                word_243=(char*)come_increment_ref_count(((char*)(right_value368=parse_word(info))));
                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional259=*info->p==59,                _if_conditional259) {
                    define_struct_nobody_240=(_Bool)1;
                }
                word_243 = come_decrement_ref_count2(word_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_242;
    }
    define_function_pointer_result_function_244=(_Bool)0;
    define_variable_between_brace_245=(_Bool)0;
    if(is_type_name_flag_238) {
        p_246=info->p;
        info->p=head;
        if(_if_conditional261=xisalpha(*info->p)||*info->p==95,        _if_conditional261) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value369=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_247=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_248=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_249=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional264=*info->p==40,            _if_conditional264) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional265=*info->p!=42,                _if_conditional265) {
                    define_function_pointer_result_function_244=(_Bool)1;
                    if(_if_conditional266=xisalpha(*info->p)||*info->p==95,                    _if_conditional266) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_250=(char*)come_increment_ref_count(((char*)(right_value370=parse_word(info))));
                        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional267=!is_type_name(word_250,info)&&*info->p==41,                        _if_conditional267) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional268=*info->p==40,                            _if_conditional268) {
                            }
                            else {
                                define_variable_between_brace_245=(_Bool)1;
                            }
                        }
                        word_250 = come_decrement_ref_count2(word_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_248 = come_decrement_ref_count2(fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_239;
    }
    define_function_flag_251=(_Bool)0;
    if(_if_conditional269=is_type_name_flag_238&&!define_function_pointer_result_function_244&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional269) {
        p_252=info->p;
        info->p=head;
        invalid_type_253=(_Bool)0;
        info->no_output_err=(_Bool)1;
        if(_if_conditional270=xisalpha(*info->p)||*info->p==95,        _if_conditional270) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value371=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_254=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_255=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_256=multiple_assign_var2->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,result_type_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_255 = come_decrement_ref_count2(fun_name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->no_output_err=(_Bool)0;
        if(_if_conditional271=!info->define_struct,        _if_conditional271) {
            info->define_struct=(_Bool)0;
            word_257=((void*)0);
            if(_if_conditional272=xisalnum(*info->p)||*info->p==95,            _if_conditional272) {
                __dec_obj67=word_257;
                word_257=(char*)come_increment_ref_count(((char*)(right_value372=parse_word(info))));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional273=string_operator_equals(word_257,"extern"),                _if_conditional273) {
                    __dec_obj68=word_257;
                    word_257=(char*)come_increment_ref_count(((char*)(right_value373=parse_word(info))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj69=word_257;
                word_257=((void*)0);
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_257) {
                if(_if_conditional275=is_type_name(word_257,info),                _if_conditional275) {
                    while(_while_condtional28=*info->p==42,                    _while_condtional28) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional276=*info->p==58,                    _if_conditional276) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional277=*info->p==58,                    _if_conditional277) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional278=xisalnum(*info->p)||*info->p==95,                    _if_conditional278) {
                        __dec_obj70=word_257;
                        word_257=(char*)come_increment_ref_count(((char*)(right_value374=parse_word(info))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional279=strlen(word_257)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional279) {
                    if(is_type_name_flag_238) {
                        define_function_flag_251=(_Bool)1;
                    }
                }
            }
            word_257 = come_decrement_ref_count2(word_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_252;
        info->sline=sline_239;
    }
    define_variable_258=(_Bool)1;
    if(_if_conditional281=is_type_name_flag_238&&!define_function_pointer_result_function_244,    _if_conditional281) {
        p_259=info->p;
        info->p=head;
        if(_if_conditional282=!is_type_name_flag_238,        _if_conditional282) {
            define_variable_258=(_Bool)0;
        }
        if(_if_conditional283=xisalpha(*info->p)||*info->p==95,        _if_conditional283) {
            info->no_output_err=(_Bool)1;
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value375=parse_type(info,(_Bool)0,(_Bool)1)));
            result_type_260=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_261=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_262=multiple_assign_var3->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=(_Bool)0;
            if(_if_conditional284=*info->p==40,            _if_conditional284) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional285=*info->p==42,                _if_conditional285) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional286=xisalpha(*info->p)||*info->p==95,                    _if_conditional286) {
                        word_263=(char*)come_increment_ref_count(((char*)(right_value376=parse_word(info))));
                        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional287=*info->p==41,                        _if_conditional287) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional288=*info->p==40,                            _if_conditional288) {
                                define_variable_258=(_Bool)1;
                            }
                        }
                        word_263 = come_decrement_ref_count2(word_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional289=xisalpha(*info->p)||*info->p==95,                    _if_conditional289) {
                        word_264=(char*)come_increment_ref_count(((char*)(right_value377=parse_word(info))));
                        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional290=*info->p==41,                        _if_conditional290) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional291=!is_type_name(word_264,info)&&*info->p!=40,                            _if_conditional291) {
                                define_variable_258=(_Bool)1;
                            }
                        }
                        word_264 = come_decrement_ref_count2(word_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer2(sType_finalize,result_type_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name_261 = come_decrement_ref_count2(fun_name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_258=(_Bool)0;
        }
        else {
            if(define_variable_258) {
            }
            else {
                if(_if_conditional294=!(xisalpha(*info->p)||*info->p==95),                _if_conditional294) {
                    define_variable_258=(_Bool)0;
                }
                while(_while_condtional29=xisalpha(*info->p)||*info->p==95,                _while_condtional29) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional295=*info->p==40||*info->p==58,                _if_conditional295) {
                    define_variable_258=(_Bool)0;
                }
            }
        }
        info->p=p_259;
        info->sline=sline_239;
    }
    else {
        define_variable_258=(_Bool)0;
    }
    if(_if_conditional296=charp_operator_equals(buf,"template"),    _if_conditional296) {
        word_265=(char*)come_increment_ref_count(((char*)(right_value378=parse_word(info))));
        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional297=*info->p==60,        _if_conditional297) {
            info->p++;
            skip_spaces_and_lf(info);
            __dec_obj71=info->method_generics_type_names;
            info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value380=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value379=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1079, "struct list$1charph"))))))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            word_266=(char*)come_increment_ref_count(((char*)(right_value381=parse_word(info))));
            right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value382=string_clone(word_266)))));
            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            expected_next_character(62,info);
            p_267=info->p;
            sline_268=info->sline;
            node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=parse_function(info))));
            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result97__ = __result_obj__ = node_269;
            word_266 = come_decrement_ref_count2(word_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_265 = come_decrement_ref_count2(word_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result97__;
            word_266 = come_decrement_ref_count2(word_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_265 = come_decrement_ref_count2(word_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_240) {
        }
        else {
            if(define_variable_between_brace_245) {
                info->p=head;
                info->sline=sline_239;
                __result98__ = __result_obj__ = ((struct sNode*)(right_value384=parse_global_variable(info)));
                if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result98__;
            }
            else {
                if(define_function_pointer_result_function_244) {
                    header_head_270=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value385=parse_type(info,(_Bool)0,(_Bool)1)));
                    result_type_271=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_272=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_273=multiple_assign_var4->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional301=*info->p==40,                    _if_conditional301) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_274=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value387=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value386=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1110, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        param_names_275=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value389=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value388=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1111, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional302=*info->p==41,                        _if_conditional302) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional30=(_Bool)1,                            _while_condtional30) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value390=parse_type(info,(_Bool)0,(_Bool)0)));
                                param_type_276=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_277=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_278=multiple_assign_var5->v3;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional303=!err_278,                                _if_conditional303) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_274,(struct sType*)come_increment_ref_count(param_type_276));
                                list$1charph_push_back(param_names_275,(char*)come_increment_ref_count(((char*)(right_value391=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_279)))));
                                right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional304=*info->p==44,                                _if_conditional304) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional305=*info->p==41,                                    _if_conditional305) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer2(sType_finalize,param_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        param_name_277 = come_decrement_ref_count2(param_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer2(sType_finalize,param_type_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                param_name_277 = come_decrement_ref_count2(param_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(_if_conditional306=*info->p==40,                        _if_conditional306) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_280=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value393=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value392=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1153, "struct list$1sTypeph"))))))));
                            come_call_finalizer2(list$1sTypephp_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            param_names2_281=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value395=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1154, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional307=*info->p==41,                            _if_conditional307) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional31=(_Bool)1,                                _while_condtional31) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value396=parse_type(info,(_Bool)0,(_Bool)0)));
                                    param_type_282=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_283=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_284=multiple_assign_var6->v3;
                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional308=!err_284,                                    _if_conditional308) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_280,(struct sType*)come_increment_ref_count(param_type_282));
                                    list$1charph_push_back(param_names2_281,(char*)come_increment_ref_count(((char*)(right_value397=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_285)))));
                                    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional309=*info->p==44,                                    _if_conditional309) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional310=*info->p==41,                                        _if_conditional310) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer2(sType_finalize,param_type_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            param_name_283 = come_decrement_ref_count2(param_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer2(sType_finalize,param_type_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    param_name_283 = come_decrement_ref_count2(param_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_286=info->p;
                            result_type2_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value398=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1192, "struct sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj73=result_type2_287->mResultType;
                            result_type2_287->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value401=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value400=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function2.c", 1194, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_271)))));
                            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj74=result_type2_287->mParamTypes;
                            result_type2_287->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value402=list$1sTypephp_clone(param_types2_280))));
                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            __dec_obj75=result_type2_287->mParamNames;
                            result_type2_287->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value403=list$1charphp_clone(param_names2_281))));
                            come_call_finalizer2(list$1charph_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            result_type2_287->mVarArgs=(_Bool)0;
                            result_type2_287->mStatic=(_Bool)0;
                            var_args_288=(_Bool)0;
                            header_buf_289=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value405=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value404=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1202, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_289,header_head_270,header_tail_286-header_head_270);
                            buffer_append_char(header_buf_289,0);
                            param_default_parametors_290=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1206, "struct list$1charph"))))))));
                            come_call_finalizer2(list$1charphp_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(list$1charphp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun_291=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value412=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value408=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1208, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string(fun_name_272)))),(struct sType*)come_increment_ref_count(result_type2_287),(struct list$1sTypeph*)come_increment_ref_count(param_types_274),(struct list$1charph*)come_increment_ref_count(param_names_275),(struct list$1charph*)come_increment_ref_count(param_default_parametors_290),(_Bool)1,var_args_288,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value410=buffer_to_string(header_buf_289)))),(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string(info->sname)))),info))));
                            come_call_finalizer2(sFun_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            fun2_295=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value414=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value413=__builtin_string(fun_name_272)))))));
                            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFun_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional315=fun2_295==((void*)0)||fun2_295->mExternal,                            _if_conditional315) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value415=string_clone(fun_name_272)))),(struct sFun*)come_increment_ref_count(fun_291));
                                right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1220, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value417=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value416=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1220, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_291),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sFunNode_sline;
                            _inf_value1->sname=(void*)sFunNode_sname;
                            _inf_value1->terminated=(void*)sFunNode_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result130__ = __result_obj__ = ((struct sNode*)(right_value459=_inf_value1));
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun2_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1sTypephp_finalize,param_types_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            fun_name_272 = come_decrement_ref_count2(fun_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFunNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sFunNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result130__;
                            come_call_finalizer2(list$1sTypephp_finalize,param_types2_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_names2_281, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,result_type2_287, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(buffer_finalize,header_buf_289, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun_291, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sFun_finalize,fun2_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_274, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_275, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer2(sType_finalize,result_type_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    fun_name_272 = come_decrement_ref_count2(fun_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_251) {
                        info->p=head;
                        info->sline=sline_239;
                        __result131__ = __result_obj__ = ((struct sNode*)(right_value460=parse_function(info)));
                        if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result131__;
                    }
                    else {
                        if(define_variable_258) {
                            info->p=head;
                            info->sline=sline_239;
                            __result132__ = __result_obj__ = ((struct sNode*)(right_value461=parse_global_variable(info)));
                            if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result132__;
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_239;
    buf2_331=(char*)come_increment_ref_count(((char*)(right_value462=parse_word(info))));
    right_value462 = come_decrement_ref_count2(right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result133__ = __result_obj__ = ((struct sNode*)(right_value463=top_level_v98(buf2_331,head,head_sline,info)));
    buf2_331 = come_decrement_ref_count2(buf2_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result133__;
    buf2_331 = come_decrement_ref_count2(buf2_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional262=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional262) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional263=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional263) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj72;
struct tuple1$1sTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj72=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __result99__ = __result_obj__ = self;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result99__;
                                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_292;
unsigned int hash_293;
unsigned int it_294;
_Bool _while_condtional32;
_Bool _if_conditional311;
_Bool _if_conditional312;
struct sFun* __result100__;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct sFun* __result101__;
struct sFun* __result102__;
struct sFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_292, 0, sizeof(struct sFun*));
memset(&hash_293, 0, sizeof(unsigned int));
memset(&it_294, 0, sizeof(unsigned int));
                                memset(&default_value_292,0,sizeof(struct sFun*));
                                hash_293=string_get_hash_key(((char*)key))%self->size;
                                it_294=hash_293;
                                while(_while_condtional32=(_Bool)1,                                _while_condtional32) {
                                    if(_if_conditional311=self->item_existance[it_294],                                    _if_conditional311) {
                                        if(_if_conditional312=string_equals(self->keys[it_294],key),                                        _if_conditional312) {
                                            __result100__ = __result_obj__ = self->items[it_294];
                                            come_call_finalizer2(sFun_finalize,default_value_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            return __result100__;
                                        }
                                        it_294++;
                                        if(_if_conditional313=it_294>=self->size,                                        _if_conditional313) {
                                            it_294=0;
                                        }
                                        else {
                                            if(_if_conditional314=it_294==hash_293,                                            _if_conditional314) {
                                                __result101__ = __result_obj__ = default_value_292;
                                                come_call_finalizer2(sFun_finalize,default_value_292, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result101__;
                                            }
                                        }
                                    }
                                    else {
                                        __result102__ = __result_obj__ = default_value_292;
                                        come_call_finalizer2(sFun_finalize,default_value_292, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result102__;
                                    }
                                }
                                __result103__ = __result_obj__ = default_value_292;
                                come_call_finalizer2(sFun_finalize,default_value_292, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result103__;
                                come_call_finalizer2(sFun_finalize,default_value_292, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional320;
struct sFun* __result105__;
void* right_value419;
struct sFun* result_297;
_Bool _if_conditional321;
void* right_value420;
char* __dec_obj76;
_Bool _if_conditional322;
void* right_value421;
struct sType* __dec_obj77;
_Bool _if_conditional323;
void* right_value422;
struct list$1sTypeph* __dec_obj78;
_Bool _if_conditional324;
void* right_value423;
struct list$1charph* __dec_obj79;
_Bool _if_conditional325;
void* right_value424;
struct list$1charph* __dec_obj80;
_Bool _if_conditional326;
void* right_value425;
struct sType* __dec_obj81;
_Bool _if_conditional327;
void* right_value450;
struct sBlock* __dec_obj90;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value451;
struct buffer* __dec_obj91;
_Bool _if_conditional381;
void* right_value452;
struct buffer* __dec_obj92;
_Bool _if_conditional382;
void* right_value453;
struct buffer* __dec_obj93;
_Bool _if_conditional383;
void* right_value454;
struct buffer* __dec_obj94;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value455;
char* __dec_obj95;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value456;
char* __dec_obj96;
struct sFun* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
memset(&result_297, 0, sizeof(struct sFun*));
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value456 = (void*)0;
                                        if(_if_conditional320=self==(void*)0,                                        _if_conditional320) {
                                            __result105__ = __result_obj__ = (void*)0;
                                            return __result105__;
                                        }
                                        result_297=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value419=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun"))));
                                        come_call_finalizer2(sFun_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional321=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional321) {
                                            __dec_obj76=result_297->mName;
                                            result_297->mName=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->mName))));
                                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional322=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional322) {
                                            __dec_obj77=result_297->mResultType;
                                            result_297->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value421=sType_clone(self->mResultType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional323=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional323) {
                                            __dec_obj78=result_297->mParamTypes;
                                            result_297->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value422=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional324=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional324) {
                                            __dec_obj79=result_297->mParamNames;
                                            result_297->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value423=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional325=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional325) {
                                            __dec_obj80=result_297->mParamDefaultParametors;
                                            result_297->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value424=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer2(list$1charph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(list$1charphp_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional326=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional326) {
                                            __dec_obj81=result_297->mLambdaType;
                                            result_297->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value425=sType_clone(self->mLambdaType))));
                                            come_call_finalizer2(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional327=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional327) {
                                            __dec_obj90=result_297->mBlock;
                                            result_297->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value450=sBlock_clone(self->mBlock))));
                                            come_call_finalizer2(sBlock_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sBlock_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional378=self!=((void*)0),                                        _if_conditional378) {
                                            result_297->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional379=self!=((void*)0),                                        _if_conditional379) {
                                            result_297->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional380=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional380) {
                                            __dec_obj91=result_297->mSource;
                                            result_297->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value451=buffer_clone(self->mSource))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional381=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional381) {
                                            __dec_obj92=result_297->mSourceHead;
                                            result_297->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value452=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional382=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional382) {
                                            __dec_obj93=result_297->mSourceHead2;
                                            result_297->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value453=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional383=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional383) {
                                            __dec_obj94=result_297->mSourceDefer;
                                            result_297->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value454=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer2(buffer_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional384=self!=((void*)0),                                        _if_conditional384) {
                                            result_297->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional385=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional385) {
                                            __dec_obj95=result_297->mComeHeader;
                                            result_297->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(self->mComeHeader))));
                                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional386=self!=((void*)0),                                        _if_conditional386) {
                                            result_297->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional387=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional387) {
                                            __dec_obj96=result_297->mDeclareSName;
                                            result_297->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->mDeclareSName))));
                                            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result128__ = __result_obj__ = result_297;
                                        come_call_finalizer2(sFun_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result128__;
                                        come_call_finalizer2(sFun_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional328;
struct sBlock* __result106__;
void* right_value426;
struct sBlock* result_298;
_Bool _if_conditional329;
void* right_value427;
struct list$1sNodeph* __dec_obj82;
_Bool _if_conditional330;
void* right_value449;
struct sVarTable* __dec_obj89;
struct sBlock* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value426 = (void*)0;
memset(&result_298, 0, sizeof(struct sBlock*));
right_value427 = (void*)0;
right_value449 = (void*)0;
                                                if(_if_conditional328=self==(void*)0,                                                _if_conditional328) {
                                                    __result106__ = __result_obj__ = (void*)0;
                                                    return __result106__;
                                                }
                                                result_298=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value426=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock"))));
                                                come_call_finalizer2(sBlock_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional329=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional329) {
                                                    __dec_obj82=result_298->mNodes;
                                                    result_298->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value427=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(list$1sNodephp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional330=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional330) {
                                                    __dec_obj89=result_298->mVarTable;
                                                    result_298->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value449=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer2(sVarTable_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer2(sVarTable_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result127__ = __result_obj__ = result_298;
                                                come_call_finalizer2(sBlock_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result127__;
                                                come_call_finalizer2(sBlock_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional331;
struct sVarTable* __result107__;
void* right_value428;
struct sVarTable* result_299;
_Bool _if_conditional332;
void* right_value448;
struct map$2charphsVarph* __dec_obj88;
_Bool _if_conditional375;
_Bool _if_conditional376;
_Bool _if_conditional377;
struct sVarTable* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_299, 0, sizeof(struct sVarTable*));
right_value448 = (void*)0;
                                                        if(_if_conditional331=self==(void*)0,                                                        _if_conditional331) {
                                                            __result107__ = __result_obj__ = (void*)0;
                                                            return __result107__;
                                                        }
                                                        result_299=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value428=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable"))));
                                                        come_call_finalizer2(sVarTable_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional332=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional332) {
                                                            __dec_obj88=result_299->mVars;
                                                            result_299->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value448=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer2(map$2charphsVarph_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(map$2charphsVarphp_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional375=self!=((void*)0),                                                        _if_conditional375) {
                                                            result_299->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional376=self!=((void*)0),                                                        _if_conditional376) {
                                                            result_299->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional377=self!=((void*)0),                                                        _if_conditional377) {
                                                            result_299->mID=self->mID;
                                                        }
                                                        __result126__ = __result_obj__ = result_299;
                                                        come_call_finalizer2(sVarTable_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result126__;
                                                        come_call_finalizer2(sVarTable_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional333;
struct map$2charphsVarph* __result108__;
void* right_value429;
void* right_value435;
struct map$2charphsVarph* result_305;
char* it_308;
struct sVar* default_value_311;
void* right_value436;
struct sVar* it2_314;
void* right_value447;
struct map$2charphsVarph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
right_value435 = (void*)0;
memset(&result_305, 0, sizeof(struct map$2charphsVarph*));
memset(&it_308, 0, sizeof(char*));
memset(&default_value_311, 0, sizeof(struct sVar*));
right_value436 = (void*)0;
memset(&it2_314, 0, sizeof(struct sVar*));
right_value447 = (void*)0;
                                                                if(_if_conditional333=self==((void*)0),                                                                _if_conditional333) {
                                                                    __result108__ = __result_obj__ = ((void*)0);
                                                                    return __result108__;
                                                                }
                                                                result_305=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value435=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value429=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang2.h", 1159, "struct map$2charphsVarph"))))))));
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_308=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_308=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_311,0,sizeof(struct sVar*));
                                                                    it2_314=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value436=map$2charphsVarph_at(self,it_308,default_value_311))));
                                                                    come_call_finalizer2(sVar_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    map$2charphsVarph_insert2(result_305,it_308,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value447=sVar_clone(it2_314)))));
                                                                    come_call_finalizer2(sVar_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sVar_finalize,it2_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                __result125__ = __result_obj__ = result_305;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_305, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result125__;
                                                                come_call_finalizer2(map$2charphsVarphp_finalize,result_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value430;
void* right_value431;
void* right_value432;
int i_300;
void* right_value433;
void* right_value434;
struct list$1charp* __dec_obj83;
struct map$2charphsVarph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&i_300, 0, sizeof(int));
right_value433 = (void*)0;
right_value434 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value430=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "/usr/local/include/comelang2.h", 1066, "char*"))));
                                                                    right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value431=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "/usr/local/include/comelang2.h", 1067, "struct sVar*"))));
                                                                    come_call_finalizer2(sVar_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value432=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "/usr/local/include/comelang2.h", 1068, "_Bool"))));
                                                                    right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_300=0;                                                                    i_300<1024;                                                                    i_300++                                                                    ){
                                                                        self->item_existance[i_300]=(_Bool)0;
                                                                    }
                                                                    self->size=1024;
                                                                    self->len=0;
                                                                    __dec_obj83=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value434=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value433=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang2.h", 1078, "struct list$1charp"))))))));
                                                                    come_call_finalizer2(list$1charp_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(list$1charpp_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result110__ = __result_obj__ = self;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                    return __result110__;
                                                                    come_call_finalizer2(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional334=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional334) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional335=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional335) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional336=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional336) {
                                                                            come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional337=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional337) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result109__ = __result_obj__ = self;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result109__;
                                                                        come_call_finalizer2(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_301;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_301, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_302, 0, sizeof(struct list_item$1charp*));
                                                                            it_301=self->head;
                                                                            while(_while_condtional33=it_301!=((void*)0),                                                                            _while_condtional33) {
                                                                                prev_it_302=it_301;
                                                                                it_301=it_301->next;
                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_303;
_Bool _if_conditional338;
_Bool _if_conditional339;
int i_304;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_303, 0, sizeof(int));
memset(&i_304, 0, sizeof(int));
                                                                        for(                                                                        i_303=0;                                                                        i_303<self->size;                                                                        i_303++                                                                        ){
                                                                            if(_if_conditional338=self->item_existance[i_303],                                                                            _if_conditional338) {
                                                                                if(_if_conditional339=1,                                                                                _if_conditional339) {
                                                                                    come_call_finalizer2(sVar_finalize,self->items[i_303], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_304=0;                                                                        i_304<self->size;                                                                        i_304++                                                                        ){
                                                                            if(_if_conditional340=self->item_existance[i_304],                                                                            _if_conditional340) {
                                                                                if(_if_conditional341=1,                                                                                _if_conditional341) {
                                                                                    self->keys[i_304] = come_decrement_ref_count2(self->keys[i_304], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional342;
char* result_306;
char* __result111__;
_Bool _if_conditional343;
char* __result112__;
char* result_307;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_306, 0, sizeof(char*));
memset(&result_307, 0, sizeof(char*));
                                                                    if(_if_conditional342=self==((void*)0),                                                                    _if_conditional342) {
                                                                        memset(&result_306,0,sizeof(char*));
                                                                        __result111__ = __result_obj__ = result_306;
                                                                        return __result111__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result112__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result112__;
                                                                    }
                                                                    memset(&result_307,0,sizeof(char*));
                                                                    __result113__ = __result_obj__ = result_307;
                                                                    return __result113__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result114__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result114__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional344;
char* result_309;
char* __result115__;
_Bool _if_conditional345;
char* __result116__;
char* result_310;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_309, 0, sizeof(char*));
memset(&result_310, 0, sizeof(char*));
                                                                    if(_if_conditional344=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional344) {
                                                                        memset(&result_309,0,sizeof(char*));
                                                                        __result115__ = __result_obj__ = result_309;
                                                                        return __result115__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result116__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result116__;
                                                                    }
                                                                    memset(&result_310,0,sizeof(char*));
                                                                    __result117__ = __result_obj__ = result_310;
                                                                    return __result117__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_312;
unsigned int it_313;
_Bool _while_condtional34;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct sVar* __result118__;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct sVar* __result119__;
struct sVar* __result120__;
struct sVar* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_312, 0, sizeof(unsigned int));
memset(&it_313, 0, sizeof(unsigned int));
                                                                        hash_312=string_get_hash_key(((char*)key))%self->size;
                                                                        it_313=hash_312;
                                                                        while(_while_condtional34=(_Bool)1,                                                                        _while_condtional34) {
                                                                            if(_if_conditional346=self->item_existance[it_313],                                                                            _if_conditional346) {
                                                                                if(_if_conditional347=string_equals(self->keys[it_313],key),                                                                                _if_conditional347) {
                                                                                    __result118__ = __result_obj__ = self->items[it_313];
                                                                                    come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result118__;
                                                                                }
                                                                                it_313++;
                                                                                if(_if_conditional348=it_313>=self->size,                                                                                _if_conditional348) {
                                                                                    it_313=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional349=it_313==hash_312,                                                                                    _if_conditional349) {
                                                                                        __result119__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result119__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result120__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result120__;
                                                                            }
                                                                        }
                                                                        __result121__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result121__;
                                                                        come_call_finalizer2(sVar_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional350;
unsigned int hash_326;
int it_327;
_Bool _while_condtional36;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool same_key_exist_328;
char* it2_329;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct map$2charphsVarph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_326, 0, sizeof(unsigned int));
memset(&it_327, 0, sizeof(int));
memset(&same_key_exist_328, 0, sizeof(_Bool));
memset(&it2_329, 0, sizeof(char*));
                                                                        if(_if_conditional350=self->len*2>=self->size,                                                                        _if_conditional350) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_326=string_get_hash_key(key)%self->size;
                                                                        it_327=hash_326;
                                                                        while(_while_condtional36=(_Bool)1,                                                                        _while_condtional36) {
                                                                            if(_if_conditional354=self->item_existance[it_327],                                                                            _if_conditional354) {
                                                                                if(_if_conditional355=string_equals(self->keys[it_327],key),                                                                                _if_conditional355) {
                                                                                    if(_if_conditional356=1,                                                                                    _if_conditional356) {
                                                                                        self->keys[it_327] = come_decrement_ref_count2(self->keys[it_327], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_327]);
                                                                                        self->keys[it_327]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_327]);
                                                                                        self->keys[it_327]=key;
                                                                                    }
                                                                                    if(_if_conditional357=1,                                                                                    _if_conditional357) {
                                                                                        come_call_finalizer2(sVar_finalize,self->items[it_327], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_327]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_327]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_327++;
                                                                                if(_if_conditional358=it_327>=self->size,                                                                                _if_conditional358) {
                                                                                    it_327=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional359=it_327==hash_326,                                                                                    _if_conditional359) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_327]=(_Bool)1;
                                                                                if(_if_conditional360=1,                                                                                _if_conditional360) {
                                                                                    self->keys[it_327]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_327]=key;
                                                                                }
                                                                                if(_if_conditional361=1,                                                                                _if_conditional361) {
                                                                                    self->items[it_327]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_327]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_328=(_Bool)0;
                                                                        for(                                                                        it2_329=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_329=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional362=string_equals(it2_329,key),                                                                            _if_conditional362) {
                                                                                same_key_exist_328=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional363=!same_key_exist_328,                                                                        _if_conditional363) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result122__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result122__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer2(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_315;
void* right_value437;
char** keys_316;
void* right_value438;
struct sVar** items_317;
void* right_value439;
_Bool* item_existance_318;
int len_319;
char* it_320;
struct sVar* default_value_321;
void* right_value440;
struct sVar* it2_322;
unsigned int hash_323;
int n_324;
_Bool _while_condtional35;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
struct sVar* default_value_325;
void* right_value441;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_315, 0, sizeof(int));
right_value437 = (void*)0;
memset(&keys_316, 0, sizeof(char**));
right_value438 = (void*)0;
memset(&items_317, 0, sizeof(struct sVar**));
right_value439 = (void*)0;
memset(&item_existance_318, 0, sizeof(_Bool*));
memset(&len_319, 0, sizeof(int));
memset(&it_320, 0, sizeof(char*));
memset(&default_value_321, 0, sizeof(struct sVar*));
right_value440 = (void*)0;
memset(&it2_322, 0, sizeof(struct sVar*));
memset(&hash_323, 0, sizeof(unsigned int));
memset(&n_324, 0, sizeof(int));
memset(&default_value_325, 0, sizeof(struct sVar*));
right_value441 = (void*)0;
                                                                                size_315=self->size*10;
                                                                                keys_316=(char**)come_increment_ref_count(((char**)(right_value437=(char**)come_calloc(1, sizeof(char*)*(1*(size_315)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                                                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_317=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value438=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_315)), "/usr/local/include/comelang2.h", 1315, "struct sVar*"))));
                                                                                come_call_finalizer2(sVar_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_318=(_Bool*)come_increment_ref_count(((_Bool*)(right_value439=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_315)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                                                                                right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_319=0;
                                                                                for(                                                                                it_320=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_320=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_321,0,sizeof(struct sVar*));
                                                                                    it2_322=((struct sVar*)(right_value440=map$2charphsVarph_at(self,it_320,default_value_321)));
                                                                                    come_call_finalizer2(sVar_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    hash_323=string_get_hash_key(it_320)%size_315;
                                                                                    n_324=hash_323;
                                                                                    while(_while_condtional35=(_Bool)1,                                                                                    _while_condtional35) {
                                                                                        if(_if_conditional351=item_existance_318[n_324],                                                                                        _if_conditional351) {
                                                                                            n_324++;
                                                                                            if(_if_conditional352=n_324>=size_315,                                                                                            _if_conditional352) {
                                                                                                n_324=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional353=n_324==hash_323,                                                                                                _if_conditional353) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_318[n_324]=(_Bool)1;
                                                                                            keys_316[n_324]=it_320;
                                                                                            items_317[n_324]=((struct sVar*)(right_value441=map$2charphsVarph_at(self,it_320,default_value_325)));
                                                                                            come_call_finalizer2(sVar_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            len_319++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_316;
                                                                                self->items=items_317;
                                                                                self->item_existance=item_existance_318;
                                                                                self->size=size_315;
                                                                                self->len=len_319;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional364;
struct sVar* __result123__;
void* right_value442;
struct sVar* result_330;
_Bool _if_conditional365;
void* right_value443;
char* __dec_obj84;
_Bool _if_conditional366;
void* right_value444;
char* __dec_obj85;
_Bool _if_conditional367;
void* right_value445;
struct sType* __dec_obj86;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value446;
char* __dec_obj87;
struct sVar* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
memset(&result_330, 0, sizeof(struct sVar*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
                                                                        if(_if_conditional364=self==(void*)0,                                                                        _if_conditional364) {
                                                                            __result123__ = __result_obj__ = (void*)0;
                                                                            return __result123__;
                                                                        }
                                                                        result_330=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value442=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar"))));
                                                                        come_call_finalizer2(sVar_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional365=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional365) {
                                                                            __dec_obj84=result_330->mName;
                                                                            result_330->mName=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(self->mName))));
                                                                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional366=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional366) {
                                                                            __dec_obj85=result_330->mCValueName;
                                                                            result_330->mCValueName=(char*)come_increment_ref_count(((char*)(right_value444=string_clone(self->mCValueName))));
                                                                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional367=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional367) {
                                                                            __dec_obj86=result_330->mType;
                                                                            result_330->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value445=sType_clone(self->mType))));
                                                                            come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sType_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        if(_if_conditional368=self!=((void*)0),                                                                        _if_conditional368) {
                                                                            result_330->mBlockLevel=self->mBlockLevel;
                                                                        }
                                                                        if(_if_conditional369=self!=((void*)0),                                                                        _if_conditional369) {
                                                                            result_330->mGlobal=self->mGlobal;
                                                                        }
                                                                        if(_if_conditional370=self!=((void*)0),                                                                        _if_conditional370) {
                                                                            result_330->mAllocaValue=self->mAllocaValue;
                                                                        }
                                                                        if(_if_conditional371=self!=((void*)0),                                                                        _if_conditional371) {
                                                                            result_330->mFunctionParam=self->mFunctionParam;
                                                                        }
                                                                        if(_if_conditional372=self!=((void*)0),                                                                        _if_conditional372) {
                                                                            result_330->mNoFree=self->mNoFree;
                                                                        }
                                                                        if(_if_conditional373=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional373) {
                                                                            __dec_obj87=result_330->mFunName;
                                                                            result_330->mFunName=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->mFunName))));
                                                                            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        __result124__ = __result_obj__ = result_330;
                                                                        come_call_finalizer2(sVar_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result124__;
                                                                        come_call_finalizer2(sVar_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional374;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional374=self!=((void*)0)&&self->key_list!=((void*)0),                                                                _if_conditional374) {
                                                                    come_call_finalizer2(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
void* right_value464;
struct sClass* klass_337;
void* right_value465;
struct sType* type_341;
void* right_value466;
struct sClass* generics_class_342;
void* right_value467;
_Bool generics_type_name_344;
void* right_value468;
_Bool mgenerics_type_name_345;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value464 = (void*)0;
memset(&klass_337, 0, sizeof(struct sClass*));
right_value465 = (void*)0;
memset(&type_341, 0, sizeof(struct sType*));
right_value466 = (void*)0;
memset(&generics_class_342, 0, sizeof(struct sClass*));
right_value467 = (void*)0;
memset(&generics_type_name_344, 0, sizeof(_Bool));
right_value468 = (void*)0;
memset(&mgenerics_type_name_345, 0, sizeof(_Bool));
    klass_337=((struct sClass*)(right_value464=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_341=((struct sType*)(right_value465=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer2(sType_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_class_342=((struct sClass*)(right_value466=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer2(sClass_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    generics_type_name_344=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value467=__builtin_string(buf)))));
    right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_345=info->method_generics_type_names&&list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value468=__builtin_string(buf)))));
    right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result144__ = generics_class_342||generics_type_name_344||mgenerics_type_name_345||klass_337||type_341||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result144__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_332;
unsigned int hash_333;
unsigned int it_334;
_Bool _while_condtional37;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct sClass* __result134__;
_Bool _if_conditional400;
_Bool _if_conditional401;
struct sClass* __result135__;
struct sClass* __result136__;
struct sClass* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_332, 0, sizeof(struct sClass*));
memset(&hash_333, 0, sizeof(unsigned int));
memset(&it_334, 0, sizeof(unsigned int));
        memset(&default_value_332,0,sizeof(struct sClass*));
        hash_333=string_get_hash_key(((char*)key))%self->size;
        it_334=hash_333;
        while(_while_condtional37=(_Bool)1,        _while_condtional37) {
            if(_if_conditional392=self->item_existance[it_334],            _if_conditional392) {
                if(_if_conditional393=string_equals(self->keys[it_334],key),                _if_conditional393) {
                    __result134__ = __result_obj__ = self->items[it_334];
                    come_call_finalizer2(sClass_finalize,default_value_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result134__;
                }
                it_334++;
                if(_if_conditional400=it_334>=self->size,                _if_conditional400) {
                    it_334=0;
                }
                else {
                    if(_if_conditional401=it_334==hash_333,                    _if_conditional401) {
                        __result135__ = __result_obj__ = default_value_332;
                        come_call_finalizer2(sClass_finalize,default_value_332, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result135__;
                    }
                }
            }
            else {
                __result136__ = __result_obj__ = default_value_332;
                come_call_finalizer2(sClass_finalize,default_value_332, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result136__;
            }
        }
        __result137__ = __result_obj__ = default_value_332;
        come_call_finalizer2(sClass_finalize,default_value_332, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result137__;
        come_call_finalizer2(sClass_finalize,default_value_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional399;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional394=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional394) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional395=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional395) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional399=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional399) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_335;
_Bool _while_condtional38;
struct list_item$1tuple2$2charphsTypephph* prev_it_336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_335, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_336, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_335=self->head;
                                while(_while_condtional38=it_335!=((void*)0),                                _while_condtional38) {
                                    prev_it_336=it_335;
                                    it_335=it_335->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_336, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional396=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional396) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional397;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional397=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional397) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional398=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional398) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_338;
unsigned int hash_339;
unsigned int it_340;
_Bool _while_condtional39;
_Bool _if_conditional402;
_Bool _if_conditional403;
struct sType* __result138__;
_Bool _if_conditional404;
_Bool _if_conditional405;
struct sType* __result139__;
struct sType* __result140__;
struct sType* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_338, 0, sizeof(struct sType*));
memset(&hash_339, 0, sizeof(unsigned int));
memset(&it_340, 0, sizeof(unsigned int));
        memset(&default_value_338,0,sizeof(struct sType*));
        hash_339=string_get_hash_key(((char*)key))%self->size;
        it_340=hash_339;
        while(_while_condtional39=(_Bool)1,        _while_condtional39) {
            if(_if_conditional402=self->item_existance[it_340],            _if_conditional402) {
                if(_if_conditional403=string_equals(self->keys[it_340],key),                _if_conditional403) {
                    __result138__ = __result_obj__ = self->items[it_340];
                    come_call_finalizer2(sType_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    return __result138__;
                }
                it_340++;
                if(_if_conditional404=it_340>=self->size,                _if_conditional404) {
                    it_340=0;
                }
                else {
                    if(_if_conditional405=it_340==hash_339,                    _if_conditional405) {
                        __result139__ = __result_obj__ = default_value_338;
                        come_call_finalizer2(sType_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result139__;
                    }
                }
            }
            else {
                __result140__ = __result_obj__ = default_value_338;
                come_call_finalizer2(sType_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result140__;
            }
        }
        __result141__ = __result_obj__ = default_value_338;
        come_call_finalizer2(sType_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result141__;
        come_call_finalizer2(sType_finalize,default_value_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_343;
_Bool _if_conditional406;
_Bool __result142__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_343, 0, sizeof(char*));
        for(        it_343=list$1charph_begin(self);        !list$1charph_end(self);        it_343=list$1charph_next(self)        ){
            if(_if_conditional406=string_operator_equals(it_343,item),            _if_conditional406) {
                __result142__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result142__;
            }
        }
        __result143__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result143__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_346;
int caller_line_347;
char* caller_sname_348;
char* last_code_349;
char* __dec_obj99;
char* last_code2_350;
char* __dec_obj100;
char* last_code3_351;
char* __dec_obj101;
void* right_value469;
char* sname_top_352;
int sline_top_353;
_Bool _if_conditional407;
void* right_value470;
struct sFun* funX_354;
_Bool _if_conditional408;
_Bool __result145__;
void* right_value471;
struct sType* result_type_355;
void* right_value472;
void* right_value473;
struct list$1sTypeph* param_types_356;
struct list$1sTypeph* o2_saved_357;
struct sType* it_360;
void* right_value474;
void* right_value475;
struct sType* param_type_363;
void* right_value476;
void* right_value477;
struct list$1charph* param_names_364;
void* right_value478;
struct list$1charph* param_default_parametors_365;
char* p_366;
int sline_367;
char* sname_368;
char* head_369;
struct buffer* source_370;
void* right_value479;
struct buffer* __dec_obj102;
struct sType* generics_type_saved_371;
void* right_value480;
struct sType* __dec_obj103;
void* right_value481;
struct list$1charph* __dec_obj104;
char* __dec_obj105;
void* right_value482;
struct sBlock* block_374;
struct buffer* __dec_obj106;
char* __dec_obj107;
_Bool var_args_375;
void* right_value483;
void* right_value484;
void* right_value485;
void* right_value486;
void* right_value487;
struct sFun* fun_376;
void* right_value488;
void* right_value489;
void* right_value490;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value494;
struct sNode* node_378;
_Bool _if_conditional419;
_Bool __result156__;
_Bool _if_conditional420;
void* right_value495;
void* right_value496;
struct list$1sTypeph* __dec_obj110;
void* right_value497;
void* right_value498;
void* right_value499;
struct sType* result_type_383;
void* right_value500;
void* right_value501;
struct list$1sTypeph* param_types_384;
struct list$1sTypeph* o2_saved_385;
struct sType* it_386;
void* right_value502;
void* right_value503;
struct sType* param_type_387;
void* right_value504;
void* right_value505;
struct list$1charph* param_names_388;
void* right_value506;
struct list$1charph* param_default_parametors_389;
char* p_390;
int sline_391;
char* sname_392;
char* head_393;
struct buffer* source_394;
void* right_value507;
struct buffer* __dec_obj111;
struct sType* generics_type_saved_395;
void* right_value508;
struct sType* __dec_obj112;
void* right_value509;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
void* right_value510;
struct sBlock* block_396;
struct buffer* __dec_obj115;
char* __dec_obj116;
_Bool var_args_397;
void* right_value511;
void* right_value512;
void* right_value513;
void* right_value514;
void* right_value515;
struct sFun* fun_398;
void* right_value516;
void* right_value517;
void* right_value518;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value522;
struct sNode* node_400;
_Bool _if_conditional433;
_Bool __result162__;
struct sType* __dec_obj119;
void* right_value523;
char* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_346, 0, sizeof(struct sFun*));
memset(&caller_line_347, 0, sizeof(int));
memset(&caller_sname_348, 0, sizeof(char*));
memset(&last_code_349, 0, sizeof(char*));
memset(&last_code2_350, 0, sizeof(char*));
memset(&last_code3_351, 0, sizeof(char*));
right_value469 = (void*)0;
memset(&sname_top_352, 0, sizeof(char*));
memset(&sline_top_353, 0, sizeof(int));
right_value470 = (void*)0;
memset(&funX_354, 0, sizeof(struct sFun*));
right_value471 = (void*)0;
memset(&result_type_355, 0, sizeof(struct sType*));
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&param_types_356, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_357, 0, sizeof(struct list$1sTypeph*));
memset(&it_360, 0, sizeof(struct sType*));
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&param_type_363, 0, sizeof(struct sType*));
right_value476 = (void*)0;
right_value477 = (void*)0;
memset(&param_names_364, 0, sizeof(struct list$1charph*));
right_value478 = (void*)0;
memset(&param_default_parametors_365, 0, sizeof(struct list$1charph*));
memset(&p_366, 0, sizeof(char*));
memset(&sline_367, 0, sizeof(int));
memset(&sname_368, 0, sizeof(char*));
memset(&head_369, 0, sizeof(char*));
memset(&source_370, 0, sizeof(struct buffer*));
right_value479 = (void*)0;
memset(&generics_type_saved_371, 0, sizeof(struct sType*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value482 = (void*)0;
memset(&block_374, 0, sizeof(struct sBlock*));
memset(&var_args_375, 0, sizeof(_Bool));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
memset(&fun_376, 0, sizeof(struct sFun*));
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value494 = (void*)0;
memset(&node_378, 0, sizeof(struct sNode*));
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&result_type_383, 0, sizeof(struct sType*));
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&param_types_384, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_385, 0, sizeof(struct list$1sTypeph*));
memset(&it_386, 0, sizeof(struct sType*));
right_value502 = (void*)0;
right_value503 = (void*)0;
memset(&param_type_387, 0, sizeof(struct sType*));
right_value504 = (void*)0;
right_value505 = (void*)0;
memset(&param_names_388, 0, sizeof(struct list$1charph*));
right_value506 = (void*)0;
memset(&param_default_parametors_389, 0, sizeof(struct list$1charph*));
memset(&p_390, 0, sizeof(char*));
memset(&sline_391, 0, sizeof(int));
memset(&sname_392, 0, sizeof(char*));
memset(&head_393, 0, sizeof(char*));
memset(&source_394, 0, sizeof(struct buffer*));
right_value507 = (void*)0;
memset(&generics_type_saved_395, 0, sizeof(struct sType*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
memset(&block_396, 0, sizeof(struct sBlock*));
memset(&var_args_397, 0, sizeof(_Bool));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
memset(&fun_398, 0, sizeof(struct sFun*));
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value522 = (void*)0;
memset(&node_400, 0, sizeof(struct sNode*));
right_value523 = (void*)0;
    caller_fun_346=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_347=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_348=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_349=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj99=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_350=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj100=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_351=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj101=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_352=(char*)come_increment_ref_count(((char*)(right_value469=__builtin_string(info->sname))));
    right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_353=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_354=((struct sFun*)(right_value470=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer2(sFun_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(funX_354) {
        __result145__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_349 = come_decrement_ref_count2(last_code_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_350 = come_decrement_ref_count2(last_code2_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_351 = come_decrement_ref_count2(last_code3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_352 = come_decrement_ref_count2(sname_top_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    result_type_355=(struct sType*)come_increment_ref_count(((struct sType*)(right_value471=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_types_356=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value473=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value472=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1535, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_357=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_360=list$1sTypeph_begin((o2_saved_357));    !list$1sTypeph_end((o2_saved_357));    it_360=list$1sTypeph_next((o2_saved_357))    ){
        param_type_363=(struct sType*)come_increment_ref_count(((struct sType*)(right_value475=solve_generics(((struct sType*)(right_value474=sType_clone(it_360))),generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_type_363->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_356,(struct sType*)come_increment_ref_count(((struct sType*)(right_value476=sType_clone(param_type_363)))));
        come_call_finalizer2(sType_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,param_type_363, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_357, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    param_names_364=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value477=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer2(list$1charphp_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value478=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer2(list$1charphp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    p_366=info->p;
    sline_367=info->sline;
    sname_368=(char*)come_increment_ref_count(info->sname);
    head_369=info->head;
    source_370=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj102=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value479=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer2(buffer_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_371=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj103=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value480=sType_clone(generics_type))));
    come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1charph_reset(info->generics_type_names);
    __dec_obj104=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value481=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj105=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_374=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value482=parse_block(info,(_Bool)0))));
    come_call_finalizer2(sBlock_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    info->head=head_369;
    __dec_obj106=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_370);
    come_call_finalizer2(buffer_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    info->p=p_366;
    info->sline=sline_367;
    __dec_obj107=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_368);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_355->mInline=(_Bool)0;
    var_args_375=generics_fun->mVarArgs;
    fun_376=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value487=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value483=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1577, "struct sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_355),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value484=list$1sTypephp_clone(param_types_356)))),(struct list$1charph*)come_increment_ref_count(param_names_364),(struct list$1charph*)come_increment_ref_count(param_default_parametors_365),(_Bool)0,var_args_375,(struct sBlock*)come_increment_ref_count(block_374),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value485=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value486=__builtin_string("")))),info))));
    come_call_finalizer2(sFun_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value485 = come_decrement_ref_count2(right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFun_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value488=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_376));
    right_value488 = come_decrement_ref_count2(right_value488, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1584, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value490=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value489=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1584, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_376),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sFunNode_sline;
    _inf_value2->sname=(void*)sFunNode_sname;
    _inf_value2->terminated=(void*)sFunNode_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=_inf_value2)));
    come_call_finalizer2(sFunNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFunNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value494) { right_value494 = come_decrement_ref_count2(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional419=!node_compile(node_378,info),    _if_conditional419) {
        __result156__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_349 = come_decrement_ref_count2(last_code_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_350 = come_decrement_ref_count2(last_code2_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_351 = come_decrement_ref_count2(last_code3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_352 = come_decrement_ref_count2(sname_top_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_368 = come_decrement_ref_count2(sname_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result156__;
    }
    if(_if_conditional420=info->method_generics_type_names&&list$1charph_length(info->method_generics_type_names)>0,    _if_conditional420) {
        __dec_obj110=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypep*)come_increment_ref_count(((struct list$1sTypep*)(right_value496=list$1sTypep_initialize((struct list$1sTypep*)come_increment_ref_count(((struct list$1sTypep*)(right_value495=(struct list$1sTypep*)come_calloc(1, sizeof(struct list$1sTypep)*(1), "05function2.c", 1591, "struct list$1sTypep"))))))));
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypepp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypepp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_push_back(info->method_generics_types,(struct sType*)come_increment_ref_count(((struct sType*)(right_value497=sType_clone(info->function_result_type)))));
        come_call_finalizer2(sType_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_remove(info->funcs,((char*)(right_value498=__builtin_string(fun_name))));
        right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_383=(struct sType*)come_increment_ref_count(((struct sType*)(right_value499=solve_generics(generics_fun->mResultType,generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_types_384=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value501=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value500=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1598, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_385=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_386=list$1sTypeph_begin((o2_saved_385));        !list$1sTypeph_end((o2_saved_385));        it_386=list$1sTypeph_next((o2_saved_385))        ){
            param_type_387=(struct sType*)come_increment_ref_count(((struct sType*)(right_value503=solve_generics(((struct sType*)(right_value502=sType_clone(it_386))),generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_type_387->mFunctionParam=(_Bool)1;
            list$1sTypeph_add(param_types_384,(struct sType*)come_increment_ref_count(((struct sType*)(right_value504=sType_clone(param_type_387)))));
            come_call_finalizer2(sType_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,param_type_387, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_385, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        param_names_388=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value505=list$1charphp_clone(generics_fun->mParamNames))));
        come_call_finalizer2(list$1charphp_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_389=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value506=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
        come_call_finalizer2(list$1charphp_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        p_390=info->p;
        sline_391=info->sline;
        sname_392=(char*)come_increment_ref_count(info->sname);
        head_393=info->head;
        source_394=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj111=info->source;
        info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value507=string_to_buffer(generics_fun->mBlock))));
        come_call_finalizer2(buffer_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->p=info->source->buf;
        info->head=info->source->buf;
        generics_type_saved_395=(struct sType*)come_increment_ref_count(info->generics_type);
        __dec_obj112=info->generics_type;
        info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value508=sType_clone(generics_type))));
        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_reset(info->generics_type_names);
        __dec_obj113=info->generics_type_names;
        info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value509=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->sline=generics_fun->mGenericsSLine;
        __dec_obj114=info->sname;
        info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        block_396=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value510=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        info->head=head_393;
        __dec_obj115=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_394);
        come_call_finalizer2(buffer_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_390;
        info->sline=sline_391;
        __dec_obj116=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_392);
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_383->mInline=(_Bool)0;
        var_args_397=generics_fun->mVarArgs;
        fun_398=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value515=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value511=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1640, "struct sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_383),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value512=list$1sTypephp_clone(param_types_384)))),(struct list$1charph*)come_increment_ref_count(param_names_388),(struct list$1charph*)come_increment_ref_count(param_default_parametors_389),(_Bool)0,var_args_397,(struct sBlock*)come_increment_ref_count(block_396),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value513=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value514=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value513 = come_decrement_ref_count2(right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value516=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_398));
        right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1647, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value518=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value517=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1647, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_398),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sFunNode_finalize;
        _inf_value3->clone=(void*)sFunNode_clone;
        _inf_value3->compile=(void*)sFunNode_compile;
        _inf_value3->sline=(void*)sFunNode_sline;
        _inf_value3->sname=(void*)sFunNode_sname;
        _inf_value3->terminated=(void*)sFunNode_terminated;
        _inf_value3->kind=(void*)sFunNode_kind;
        node_400=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=_inf_value3)));
        come_call_finalizer2(sFunNode_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional433=!node_compile(node_400,info),        _if_conditional433) {
            __result162__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_392 = come_decrement_ref_count2(sname_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,generics_type_saved_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,block_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,fun_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            last_code_349 = come_decrement_ref_count2(last_code_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            last_code2_350 = come_decrement_ref_count2(last_code2_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            last_code3_351 = come_decrement_ref_count2(last_code3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            sname_top_352 = come_decrement_ref_count2(sname_top_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            sname_368 = come_decrement_ref_count2(sname_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,source_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,generics_type_saved_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sBlock_finalize,block_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sFun_finalize,fun_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
            return __result162__;
        }
        list$1charph_reset(info->method_generics_type_names);
        list$1sTypeph_reset(info->method_generics_types);
        come_call_finalizer2(sType_finalize,result_type_383, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_384, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_388, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_389, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_392 = come_decrement_ref_count2(sname_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_394, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,generics_type_saved_395, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_396, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_398, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __dec_obj119=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_371);
    come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj120=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value523=__builtin_string(sname_top_352))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value523 = come_decrement_ref_count2(right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_353;
    __dec_obj121=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_349);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_350);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_351);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_346;
    info->caller_line=caller_line_347;
    info->caller_sname=caller_sname_348;
    __result164__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_349 = come_decrement_ref_count2(last_code_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_350 = come_decrement_ref_count2(last_code2_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_351 = come_decrement_ref_count2(last_code3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_352 = come_decrement_ref_count2(sname_top_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_368 = come_decrement_ref_count2(sname_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result164__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_349 = come_decrement_ref_count2(last_code_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_350 = come_decrement_ref_count2(last_code2_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_351 = come_decrement_ref_count2(last_code3_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_352 = come_decrement_ref_count2(sname_top_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_355, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_356, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_364, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    sname_368 = come_decrement_ref_count2(sname_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,source_370, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,generics_type_saved_371, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sBlock_finalize,block_374, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sFun_finalize,fun_376, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional409;
struct sType* result_358;
struct sType* __result146__;
_Bool _if_conditional410;
struct sType* __result147__;
struct sType* result_359;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_358, 0, sizeof(struct sType*));
memset(&result_359, 0, sizeof(struct sType*));
        if(_if_conditional409=self==((void*)0),        _if_conditional409) {
            memset(&result_358,0,sizeof(struct sType*));
            __result146__ = __result_obj__ = result_358;
            return __result146__;
        }
        self->it=self->head;
        if(self->it) {
            __result147__ = __result_obj__ = self->it->item;
            return __result147__;
        }
        memset(&result_359,0,sizeof(struct sType*));
        __result148__ = __result_obj__ = result_359;
        return __result148__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
        __result149__ = self==((void*)0)||self->it==((void*)0);
        return __result149__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional411;
struct sType* result_361;
struct sType* __result150__;
_Bool _if_conditional412;
struct sType* __result151__;
struct sType* result_362;
struct sType* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_361, 0, sizeof(struct sType*));
memset(&result_362, 0, sizeof(struct sType*));
        if(_if_conditional411=self==((void*)0)||self->it==((void*)0),        _if_conditional411) {
            memset(&result_361,0,sizeof(struct sType*));
            __result150__ = __result_obj__ = result_361;
            return __result150__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result151__ = __result_obj__ = self->it->item;
            return __result151__;
        }
        memset(&result_362,0,sizeof(struct sType*));
        __result152__ = __result_obj__ = result_362;
        return __result152__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_372;
_Bool _while_condtional40;
struct list_item$1charph* prev_it_373;
struct list$1charph* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_372, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_373, 0, sizeof(struct list_item$1charph*));
        it_372=self->head;
        while(_while_condtional40=it_372!=((void*)0),        _while_condtional40) {
            prev_it_373=it_372;
            it_372=it_372->next;
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_373, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result153__ = __result_obj__ = self;
        return __result153__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
        __result157__ = self->len;
        return __result157__;
}

static struct list$1sTypep* list$1sTypep_initialize(struct list$1sTypep* self){
void* __result_obj__;
struct list$1sTypep* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result158__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypepp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result158__;
            come_call_finalizer2(list$1sTypepp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypepp_finalize(struct list$1sTypep* self){
void* __result_obj__;
struct list_item$1sTypep* it_379;
_Bool _while_condtional41;
struct list_item$1sTypep* prev_it_380;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_379, 0, sizeof(struct list_item$1sTypep*));
memset(&prev_it_380, 0, sizeof(struct list_item$1sTypep*));
                it_379=self->head;
                while(_while_condtional41=it_379!=((void*)0),                _while_condtional41) {
                    prev_it_380=it_379;
                    it_379=it_379->next;
                    come_call_finalizer2(list_item$1sTypepp_finalize,prev_it_380, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypepp_finalize(struct list_item$1sTypep* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
unsigned int hash_381;
unsigned int it_382;
_Bool _while_condtional42;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
struct map$2charphsFunph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_381, 0, sizeof(unsigned int));
memset(&it_382, 0, sizeof(unsigned int));
            hash_381=string_get_hash_key(((char*)key))%self->size;
            it_382=hash_381;
            while(_while_condtional42=(_Bool)1,            _while_condtional42) {
                if(_if_conditional421=self->item_existance[it_382],                _if_conditional421) {
                    if(_if_conditional422=string_equals(self->keys[it_382],key),                    _if_conditional422) {
                        list$1charp_remove(self->key_list,self->keys[it_382]);
                        self->item_existance[it_382]=(_Bool)0;
                        if(_if_conditional423=1,                        _if_conditional423) {
                            self->keys[it_382] = come_decrement_ref_count2(self->keys[it_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        self->keys[it_382]=((void*)0);
                        if(_if_conditional424=1,                        _if_conditional424) {
                            come_call_finalizer2(sFun_finalize,self->items[it_382], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        self->items[it_382]=((void*)0);
                        self->len--;
                        break;
                    }
                    it_382++;
                    if(_if_conditional425=it_382>=self->size,                    _if_conditional425) {
                        it_382=0;
                    }
                    else {
                        if(_if_conditional426=it_382==hash_381,                        _if_conditional426) {
                            break;
                        }
                    }
                }
                else {
                    break;
                }
            }
            __result159__ = __result_obj__ = self;
            return __result159__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_401;
_Bool _while_condtional43;
struct list_item$1sTypeph* prev_it_402;
struct list$1sTypeph* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_401, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_402, 0, sizeof(struct list_item$1sTypeph*));
            it_401=self->head;
            while(_while_condtional43=it_401!=((void*)0),            _while_condtional43) {
                prev_it_402=it_401;
                it_401=it_401->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_402, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result163__ = __result_obj__ = self;
            return __result163__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_403;
void* right_value524;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type_404;
char* var_name_405;
_Bool err_406;
_Bool _if_conditional434;
_Bool method_definition_407;
char* p_408;
int sline_409;
void* right_value525;
void* right_value526;
struct buffer* buf2_410;
_Bool _while_condtional44;
_Bool _while_condtional45;
_Bool _while_condtional46;
_Bool _if_conditional435;
char* fun_name_411;
char* base_fun_name_412;
_Bool _if_conditional436;
void* right_value527;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_413;
char* name_414;
_Bool err_415;
_Bool _if_conditional437;
void* right_value528;
void* right_value529;
char* __dec_obj124;
_Bool _if_conditional438;
void* right_value530;
void* right_value531;
char* __dec_obj125;
void* right_value532;
char* __dec_obj126;
void* right_value533;
void* right_value534;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_416;
struct list$1charph* param_names_417;
struct list$1charph* param_default_parametors_418;
_Bool var_args_419;
char* header_tail_420;
void* right_value535;
void* right_value536;
struct buffer* header_buf_421;
int version_422;
_Bool _if_conditional442;
int n_423;
_Bool _while_condtional47;
_Bool _if_conditional443;
void* right_value537;
struct sBlock* block_424;
static int lambda_num_425=0;
void* right_value538;
char* fun_name_426;
void* right_value539;
void* right_value540;
void* right_value541;
void* right_value542;
void* right_value543;
struct sFun* fun_427;
void* right_value544;
void* right_value545;
struct sFun* fun2_428;
_Bool _if_conditional444;
void* right_value546;
void* right_value547;
void* right_value548;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value551;
struct sNode* __result167__;
_Bool _if_conditional450;
void* right_value552;
char* none_generics_name_430;
void* right_value553;
char* generics_sname_431;
int generics_sline_432;
void* right_value554;
char* block_433;
void* right_value555;
void* right_value556;
void* right_value557;
void* right_value558;
void* right_value559;
void* right_value560;
struct sGenericsFun* fun_434;
void* right_value561;
char* fun_name3_435;
void* right_value567;
struct sNode* __result180__;
_Bool _if_conditional473;
void* right_value568;
struct sBlock* block_457;
_Bool static__458;
_Bool _if_conditional474;
_Bool _if_conditional475;
void* right_value569;
void* right_value570;
char* new_fun_name_459;
void* right_value571;
char* __dec_obj128;
void* right_value572;
void* right_value573;
void* right_value574;
void* right_value575;
void* right_value576;
void* right_value577;
struct sFun* fun_460;
void* right_value578;
void* right_value579;
struct sFun* fun2_461;
_Bool _if_conditional476;
void* right_value580;
void* right_value581;
void* right_value582;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value586;
struct sNode* __result183__;
_Bool _if_conditional483;
_Bool _if_conditional484;
void* right_value587;
char* new_fun_name_463;
void* right_value588;
char* __dec_obj131;
_Bool _if_conditional485;
void* right_value589;
void* right_value590;
void* right_value591;
void* right_value592;
void* right_value593;
struct sFun* fun_464;
void* right_value594;
void* right_value595;
struct sFun* fun2_465;
_Bool _if_conditional486;
void* right_value596;
void* right_value597;
void* right_value598;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value602;
struct sNode* __result186__;
void* right_value603;
char* asm_fun_467;
_Bool _if_conditional493;
void* right_value604;
char* __dec_obj134;
void* right_value605;
void* right_value606;
void* right_value607;
void* right_value608;
void* right_value609;
struct sFun* fun_468;
void* right_value610;
void* right_value611;
struct sFun* fun2_469;
_Bool _if_conditional494;
void* right_value612;
void* right_value613;
void* right_value614;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value618;
struct sNode* __result189__;
struct sNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_403, 0, sizeof(char*));
right_value524 = (void*)0;
memset(&result_type_404, 0, sizeof(struct sType*));
memset(&var_name_405, 0, sizeof(char*));
memset(&err_406, 0, sizeof(_Bool));
memset(&result_type_404, 0, sizeof(struct sType*));
memset(&var_name_405, 0, sizeof(char*));
memset(&err_406, 0, sizeof(_Bool));
memset(&method_definition_407, 0, sizeof(_Bool));
memset(&p_408, 0, sizeof(char*));
memset(&sline_409, 0, sizeof(int));
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&buf2_410, 0, sizeof(struct buffer*));
memset(&fun_name_411, 0, sizeof(char*));
memset(&base_fun_name_412, 0, sizeof(char*));
right_value527 = (void*)0;
memset(&obj_type_413, 0, sizeof(struct sType*));
memset(&name_414, 0, sizeof(char*));
memset(&err_415, 0, sizeof(_Bool));
memset(&obj_type_413, 0, sizeof(struct sType*));
memset(&name_414, 0, sizeof(char*));
memset(&err_415, 0, sizeof(_Bool));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&param_types_416, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_417, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_418, 0, sizeof(struct list$1charph*));
memset(&var_args_419, 0, sizeof(_Bool));
memset(&param_types_416, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_417, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_418, 0, sizeof(struct list$1charph*));
memset(&var_args_419, 0, sizeof(_Bool));
memset(&header_tail_420, 0, sizeof(char*));
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&header_buf_421, 0, sizeof(struct buffer*));
memset(&version_422, 0, sizeof(int));
memset(&n_423, 0, sizeof(int));
right_value537 = (void*)0;
memset(&block_424, 0, sizeof(struct sBlock*));
right_value538 = (void*)0;
memset(&fun_name_426, 0, sizeof(char*));
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
right_value543 = (void*)0;
memset(&fun_427, 0, sizeof(struct sFun*));
right_value544 = (void*)0;
right_value545 = (void*)0;
memset(&fun2_428, 0, sizeof(struct sFun*));
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
memset(&none_generics_name_430, 0, sizeof(char*));
right_value553 = (void*)0;
memset(&generics_sname_431, 0, sizeof(char*));
memset(&generics_sline_432, 0, sizeof(int));
right_value554 = (void*)0;
memset(&block_433, 0, sizeof(char*));
right_value555 = (void*)0;
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
right_value560 = (void*)0;
memset(&fun_434, 0, sizeof(struct sGenericsFun*));
right_value561 = (void*)0;
memset(&fun_name3_435, 0, sizeof(char*));
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&block_457, 0, sizeof(struct sBlock*));
memset(&static__458, 0, sizeof(_Bool));
right_value569 = (void*)0;
right_value570 = (void*)0;
memset(&new_fun_name_459, 0, sizeof(char*));
right_value571 = (void*)0;
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&fun_460, 0, sizeof(struct sFun*));
right_value578 = (void*)0;
right_value579 = (void*)0;
memset(&fun2_461, 0, sizeof(struct sFun*));
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
memset(&new_fun_name_463, 0, sizeof(char*));
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&fun_464, 0, sizeof(struct sFun*));
right_value594 = (void*)0;
right_value595 = (void*)0;
memset(&fun2_465, 0, sizeof(struct sFun*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&asm_fun_467, 0, sizeof(char*));
right_value604 = (void*)0;
right_value605 = (void*)0;
right_value606 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
memset(&fun_468, 0, sizeof(struct sFun*));
right_value610 = (void*)0;
right_value611 = (void*)0;
memset(&fun2_469, 0, sizeof(struct sFun*));
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value618 = (void*)0;
    header_head_403=info->p;
    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value524=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_404=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    var_name_405=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_406=multiple_assign_var7->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional434=!err_406,    _if_conditional434) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    method_definition_407=(_Bool)0;
    {
        p_408=info->p;
        sline_409=info->sline;
        buf2_410=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value526=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value525=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1691, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional44=xisalnum(*info->p)||*info->p==95,        _while_condtional44) {
            buffer_append_char(buf2_410,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional45=*info->p==42,        _while_condtional45) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional46=*info->p==37,        _while_condtional46) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional435=buffer_length(buf2_410)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional435) {
            method_definition_407=(_Bool)1;
        }
        info->p=p_408;
        info->sline=sline_409;
        come_call_finalizer2(buffer_finalize,buf2_410, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_412=((void*)0);
    if(method_definition_407) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value527=parse_type(info,(_Bool)0,(_Bool)1)));
        obj_type_413=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_414=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_415=multiple_assign_var8->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional437=!err_415,        _if_conditional437) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        base_fun_name_412=(char*)come_increment_ref_count(((char*)(right_value528=parse_word(info))));
        right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj124=fun_name_411;
        fun_name_411=(char*)come_increment_ref_count(((char*)(right_value529=create_method_name(obj_type_413,(_Bool)0,base_fun_name_412,info))));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value529 = come_decrement_ref_count2(right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,obj_type_413, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_414 = come_decrement_ref_count2(name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type) {
            base_fun_name_412=(char*)come_increment_ref_count(((char*)(right_value530=parse_word(info))));
            right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj125=fun_name_411;
            fun_name_411=(char*)come_increment_ref_count(((char*)(right_value531=create_method_name(info->impl_type,(_Bool)0,base_fun_name_412,info))));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj126=fun_name_411;
            fun_name_411=(char*)come_increment_ref_count(((char*)(right_value532=parse_word(info))));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value532 = come_decrement_ref_count2(right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_412=(char*)come_increment_ref_count(((char*)(right_value533=__builtin_string(fun_name_411))));
            right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value534=parse_params(info)));
    param_types_416=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_417=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_418=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_419=multiple_assign_var9->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    header_tail_420=info->p;
    header_buf_421=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value536=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value535=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1744, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_421,header_head_403,header_tail_420-header_head_403);
    buffer_append_char(header_buf_421,0);
    version_422=0;
    if(_if_conditional442=strmemcmp(info->p,"version"),    _if_conditional442) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_423=0;
        while(_while_condtional47=xisdigit(*info->p),        _while_condtional47) {
            n_423=n_423*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_422=n_423;
    }
    if(_if_conditional443=charp_operator_equals(base_fun_name_412,"lambda"),    _if_conditional443) {
        block_424=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value537=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        lambda_num_425++;
        fun_name_426=(char*)come_increment_ref_count(((char*)(right_value538=xsprintf("lambda%d",lambda_num_425))));
        right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_404->mStatic=(_Bool)0;
        fun_427=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value543=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value539=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1774, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value540=__builtin_string(fun_name_426)))),(struct sType*)come_increment_ref_count(result_type_404),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_418),(_Bool)0,var_args_419,(struct sBlock*)come_increment_ref_count(block_424),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value541=buffer_to_string(header_buf_421)))),(char*)come_increment_ref_count(((char*)(right_value542=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value540 = come_decrement_ref_count2(right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_428=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value545=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value544=__builtin_string(fun_name_426)))))));
        right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional444=fun2_428==((void*)0)||fun2_428->mExternal,        _if_conditional444) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value546=string_clone(fun_name_426)))),(struct sFun*)come_increment_ref_count(fun_427));
            right_value546 = come_decrement_ref_count2(right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1786, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value548=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value547=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function2.c", 1786, "struct sLambdaNode")))),fun_427,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sLambdaNode_sline;
        _inf_value4->sname=(void*)sLambdaNode_sname;
        _inf_value4->terminated=(void*)sLambdaNode_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result167__ = __result_obj__ = ((struct sNode*)(right_value551=_inf_value4));
        come_call_finalizer2(sBlock_finalize,block_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_426 = come_decrement_ref_count2(fun_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_427, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sLambdaNode_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sLambdaNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result167__;
        come_call_finalizer2(sBlock_finalize,block_424, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name_426 = come_decrement_ref_count2(fun_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_427, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_428, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional450=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional450) {
            none_generics_name_430=(char*)come_increment_ref_count(((char*)(right_value552=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value552 = come_decrement_ref_count2(right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_431=(char*)come_increment_ref_count(((char*)(right_value553=__builtin_string(info->sname))));
            right_value553 = come_decrement_ref_count2(right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_432=info->sline;
            block_433=(char*)come_increment_ref_count(((char*)(right_value554=skip_block(info))));
            right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_434=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value560=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value555=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function2.c", 1796, "struct sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value556=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value557=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value558=__builtin_string(fun_name_411)))),(struct sType*)come_increment_ref_count(result_type_404),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_418),var_args_419,(char*)come_increment_ref_count(block_433),info,(char*)come_increment_ref_count(((char*)(right_value559=__builtin_string(generics_sname_431)))),generics_sline_432))));
            come_call_finalizer2(sGenericsFun_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value559 = come_decrement_ref_count2(right_value559, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGenericsFun_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            fun_name3_435=(char*)come_increment_ref_count(((char*)(right_value561=xsprintf("%s_%s",none_generics_name_430,base_fun_name_412))));
            right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value567=__builtin_string(fun_name3_435)))),(struct sGenericsFun*)come_increment_ref_count(fun_434));
            right_value567 = come_decrement_ref_count2(right_value567, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result180__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_430 = come_decrement_ref_count2(none_generics_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_431 = come_decrement_ref_count2(generics_sname_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_433 = come_decrement_ref_count2(block_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_435 = come_decrement_ref_count2(fun_name3_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result180__;
            none_generics_name_430 = come_decrement_ref_count2(none_generics_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_431 = come_decrement_ref_count2(generics_sname_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_433 = come_decrement_ref_count2(block_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sGenericsFun_finalize,fun_434, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            fun_name3_435 = come_decrement_ref_count2(fun_name3_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional473=*info->p==123,            _if_conditional473) {
                block_457=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value568=parse_block(info,(_Bool)0))));
                come_call_finalizer2(sBlock_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                static__458=(_Bool)0;
                if(result_type_404->mStatic) {
                    result_type_404->mStatic=(_Bool)0;
                    static__458=(_Bool)1;
                }
                if(_if_conditional475=version_422>0,                _if_conditional475) {
                    new_fun_name_459=(char*)come_increment_ref_count(((char*)(right_value570=xsprintf("%s_v%d",((char*)(right_value569=__builtin_string(fun_name_411))),version_422))));
                    right_value569 = come_decrement_ref_count2(right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value570 = come_decrement_ref_count2(right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj128=fun_name_411;
                    fun_name_411=(char*)come_increment_ref_count(((char*)(right_value571=__builtin_string(new_fun_name_459))));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value571 = come_decrement_ref_count2(right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_459 = come_decrement_ref_count2(new_fun_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                fun_460=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value577=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value572=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1820, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value573=__builtin_string(fun_name_411)))),(struct sType*)come_increment_ref_count(result_type_404),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_418),(_Bool)0,var_args_419,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value574=sBlock_clone(block_457)))),static__458,(char*)come_increment_ref_count(((char*)(right_value575=buffer_to_string(header_buf_421)))),(char*)come_increment_ref_count(((char*)(right_value576=__builtin_string(info->sname)))),info))));
                come_call_finalizer2(sFun_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value573 = come_decrement_ref_count2(right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sBlock_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value576 = come_decrement_ref_count2(right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                fun2_461=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value579=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value578=__builtin_string(fun_name_411)))))));
                right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFun_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional476=fun2_461==((void*)0)||fun2_461->mExternal,                _if_conditional476) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value580=string_clone(fun_name_411)))),(struct sFun*)come_increment_ref_count(fun_460));
                    right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1837, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value582=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value581=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1837, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_460),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sFunNode_finalize;
                _inf_value5->clone=(void*)sFunNode_clone;
                _inf_value5->compile=(void*)sFunNode_compile;
                _inf_value5->sline=(void*)sFunNode_sline;
                _inf_value5->sname=(void*)sFunNode_sname;
                _inf_value5->terminated=(void*)sFunNode_terminated;
                _inf_value5->kind=(void*)sFunNode_kind;
                __result183__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value5));
                come_call_finalizer2(sBlock_finalize,block_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFunNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFunNode_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result183__;
                come_call_finalizer2(sBlock_finalize,block_457, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun_460, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,fun2_461, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional483=xisalpha(*info->p)||*info->p==95||*info->p==59,                _if_conditional483) {
                    if(_if_conditional484=version_422>0,                    _if_conditional484) {
                        new_fun_name_463=(char*)come_increment_ref_count(((char*)(right_value587=xsprintf("%s_v%d",fun_name_411,version_422))));
                        right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj131=fun_name_411;
                        fun_name_411=(char*)come_increment_ref_count(((char*)(right_value588=__builtin_string(new_fun_name_463))));
                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value588 = come_decrement_ref_count2(right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_463 = come_decrement_ref_count2(new_fun_name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional485=*info->p==59,                    _if_conditional485) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        result_type_404->mStatic=(_Bool)0;
                        fun_464=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value593=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value589=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1851, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value590=__builtin_string(fun_name_411)))),(struct sType*)come_increment_ref_count(result_type_404),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_418),(_Bool)1,var_args_419,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value591=buffer_to_string(header_buf_421)))),(char*)come_increment_ref_count(((char*)(right_value592=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value592 = come_decrement_ref_count2(right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_465=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value595=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value594=__builtin_string(fun_name_411)))))));
                        right_value594 = come_decrement_ref_count2(right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional486=fun2_465==((void*)0)||fun2_465->mExternal,                        _if_conditional486) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value596=string_clone(fun_name_411)))),(struct sFun*)come_increment_ref_count(fun_464));
                            right_value596 = come_decrement_ref_count2(right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1864, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value598=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value597=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1864, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_464),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sFunNode_finalize;
                        _inf_value6->clone=(void*)sFunNode_clone;
                        _inf_value6->compile=(void*)sFunNode_compile;
                        _inf_value6->sline=(void*)sFunNode_sline;
                        _inf_value6->sname=(void*)sFunNode_sname;
                        _inf_value6->terminated=(void*)sFunNode_terminated;
                        _inf_value6->kind=(void*)sFunNode_kind;
                        __result186__ = __result_obj__ = ((struct sNode*)(right_value602=_inf_value6));
                        come_call_finalizer2(sFun_finalize,fun_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value602) { right_value602 = come_decrement_ref_count2(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result186__;
                        come_call_finalizer2(sFun_finalize,fun_464, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_465, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        asm_fun_467=(char*)come_increment_ref_count(((char*)(right_value603=parse_attribute(info))));
                        right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional493=string_operator_not_equals(asm_fun_467,""),                        _if_conditional493) {
                            __dec_obj134=fun_name_411;
                            fun_name_411=(char*)come_increment_ref_count(((char*)(right_value604=__builtin_string(asm_fun_467))));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value604 = come_decrement_ref_count2(right_value604, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        expected_next_character(59,info);
                        result_type_404->mStatic=(_Bool)0;
                        fun_468=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value609=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value605=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 1877, "struct sFun")))),(char*)come_increment_ref_count(((char*)(right_value606=__builtin_string(fun_name_411)))),(struct sType*)come_increment_ref_count(result_type_404),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_418),(_Bool)1,var_args_419,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value607=buffer_to_string(header_buf_421)))),(char*)come_increment_ref_count(((char*)(right_value608=__builtin_string(info->sname)))),info))));
                        come_call_finalizer2(sFun_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value606 = come_decrement_ref_count2(right_value606, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        fun2_469=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value611=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value610=__builtin_string(fun_name_411)))))));
                        right_value610 = come_decrement_ref_count2(right_value610, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFun_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional494=fun2_469==((void*)0)||fun2_469->mExternal,                        _if_conditional494) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value612=string_clone(fun_name_411)))),(struct sFun*)come_increment_ref_count(fun_468));
                            right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 1890, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value614=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value613=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 1890, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_468),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sFunNode_finalize;
                        _inf_value7->clone=(void*)sFunNode_clone;
                        _inf_value7->compile=(void*)sFunNode_compile;
                        _inf_value7->sline=(void*)sFunNode_sline;
                        _inf_value7->sname=(void*)sFunNode_sname;
                        _inf_value7->terminated=(void*)sFunNode_terminated;
                        _inf_value7->kind=(void*)sFunNode_kind;
                        __result189__ = __result_obj__ = ((struct sNode*)(right_value618=_inf_value7));
                        asm_fun_467 = come_decrement_ref_count2(asm_fun_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFunNode_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sFunNode_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result189__;
                        asm_fun_467 = come_decrement_ref_count2(asm_fun_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun_468, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sFun_finalize,fun2_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"invalid character(%c)(2)\n",*info->p);
                    exit(2);
                }
            }
        }
    }
    base_fun_name_412 = come_decrement_ref_count2(base_fun_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result190__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result190__;
    come_call_finalizer2(sType_finalize,result_type_404, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_405 = come_decrement_ref_count2(var_name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_411 = come_decrement_ref_count2(fun_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_416, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_417, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_418, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,header_buf_421, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional439=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional439) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional440=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional440) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional441=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional441) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional445;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional445=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional445) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional446;
struct sLambdaNode* __result165__;
void* right_value549;
struct sLambdaNode* result_429;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value550;
char* __dec_obj127;
struct sLambdaNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value549 = (void*)0;
memset(&result_429, 0, sizeof(struct sLambdaNode*));
right_value550 = (void*)0;
            if(_if_conditional446=self==(void*)0,            _if_conditional446) {
                __result165__ = __result_obj__ = (void*)0;
                return __result165__;
            }
            result_429=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value549=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode"))));
            come_call_finalizer2(sLambdaNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional447=self!=((void*)0),            _if_conditional447) {
                result_429->mFun=self->mFun;
            }
            if(_if_conditional448=self!=((void*)0),            _if_conditional448) {
                result_429->sline=self->sline;
            }
            if(_if_conditional449=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional449) {
                __dec_obj127=result_429->sname;
                result_429->sname=(char*)come_increment_ref_count(((char*)(right_value550=string_clone(self->sname))));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result166__ = __result_obj__ = result_429;
            come_call_finalizer2(sLambdaNode_finalize,result_429, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result166__;
            come_call_finalizer2(sLambdaNode_finalize,result_429, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional451;
unsigned int hash_453;
unsigned int it_454;
_Bool _while_condtional50;
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool same_key_exist_455;
char* it2_456;
_Bool _if_conditional471;
_Bool _if_conditional472;
struct map$2charphsGenericsFunph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_453, 0, sizeof(unsigned int));
memset(&it_454, 0, sizeof(unsigned int));
memset(&same_key_exist_455, 0, sizeof(_Bool));
memset(&it2_456, 0, sizeof(char*));
                if(_if_conditional451=self->len*10>=self->size,                _if_conditional451) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_453=string_get_hash_key(key)%self->size;
                it_454=hash_453;
                while(_while_condtional50=(_Bool)1,                _while_condtional50) {
                    if(_if_conditional463=self->item_existance[it_454],                    _if_conditional463) {
                        if(_if_conditional464=string_equals(self->keys[it_454],key),                        _if_conditional464) {
                            if(_if_conditional465=1,                            _if_conditional465) {
                                list$1charp_remove(self->key_list,self->keys[it_454]);
                                self->keys[it_454] = come_decrement_ref_count2(self->keys[it_454], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_454]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_454]);
                                self->keys[it_454]=key;
                            }
                            if(_if_conditional466=1,                            _if_conditional466) {
                                come_call_finalizer2(sGenericsFun_finalize,self->items[it_454], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->items[it_454]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_454]=item;
                            }
                            break;
                        }
                        it_454++;
                        if(_if_conditional467=it_454>=self->size,                        _if_conditional467) {
                            it_454=0;
                        }
                        else {
                            if(_if_conditional468=it_454==hash_453,                            _if_conditional468) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_454]=(_Bool)1;
                        if(_if_conditional469=1,                        _if_conditional469) {
                            self->keys[it_454]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_454]=key;
                        }
                        if(_if_conditional470=1,                        _if_conditional470) {
                            self->items[it_454]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_454]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_455=(_Bool)0;
                for(                it2_456=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_456=list$1charp_next(self->key_list)                ){
                    if(_if_conditional471=string_equals(it2_456,key),                    _if_conditional471) {
                        same_key_exist_455=(_Bool)1;
                    }
                }
                if(_if_conditional472=!same_key_exist_455,                _if_conditional472) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result179__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result179__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sGenericsFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_436;
void* right_value562;
char** keys_437;
void* right_value563;
struct sGenericsFun** items_438;
void* right_value564;
_Bool* item_existance_439;
int len_440;
char* it_443;
struct sGenericsFun* default_value_446;
void* right_value565;
struct sGenericsFun* it2_449;
unsigned int hash_450;
int n_451;
_Bool _while_condtional49;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
struct sGenericsFun* default_value_452;
void* right_value566;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_436, 0, sizeof(int));
right_value562 = (void*)0;
memset(&keys_437, 0, sizeof(char**));
right_value563 = (void*)0;
memset(&items_438, 0, sizeof(struct sGenericsFun**));
right_value564 = (void*)0;
memset(&item_existance_439, 0, sizeof(_Bool*));
memset(&len_440, 0, sizeof(int));
memset(&it_443, 0, sizeof(char*));
memset(&default_value_446, 0, sizeof(struct sGenericsFun*));
right_value565 = (void*)0;
memset(&it2_449, 0, sizeof(struct sGenericsFun*));
memset(&hash_450, 0, sizeof(unsigned int));
memset(&n_451, 0, sizeof(int));
memset(&default_value_452, 0, sizeof(struct sGenericsFun*));
right_value566 = (void*)0;
                        size_436=self->size*10;
                        keys_437=(char**)come_increment_ref_count(((char**)(right_value562=(char**)come_calloc(1, sizeof(char*)*(1*(size_436)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                        right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_438=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value563=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_436)), "/usr/local/include/comelang2.h", 1315, "struct sGenericsFun*"))));
                        come_call_finalizer2(sGenericsFun_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        item_existance_439=(_Bool*)come_increment_ref_count(((_Bool*)(right_value564=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_436)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                        right_value564 = come_decrement_ref_count2(right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_440=0;
                        for(                        it_443=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_443=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_446,0,sizeof(struct sGenericsFun*));
                            it2_449=((struct sGenericsFun*)(right_value565=map$2charphsGenericsFunph_at(self,it_443,default_value_446)));
                            come_call_finalizer2(sGenericsFun_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            hash_450=string_get_hash_key(it_443)%size_436;
                            n_451=hash_450;
                            while(_while_condtional49=(_Bool)1,                            _while_condtional49) {
                                if(_if_conditional460=item_existance_439[n_451],                                _if_conditional460) {
                                    n_451++;
                                    if(_if_conditional461=n_451>=size_436,                                    _if_conditional461) {
                                        n_451=0;
                                    }
                                    else {
                                        if(_if_conditional462=n_451==hash_450,                                        _if_conditional462) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_439[n_451]=(_Bool)1;
                                    keys_437[n_451]=it_443;
                                    items_438[n_451]=((struct sGenericsFun*)(right_value566=map$2charphsGenericsFunph_at(self,it_443,default_value_452)));
                                    come_call_finalizer2(sGenericsFun_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    len_440++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_437;
                        self->items=items_438;
                        self->item_existance=item_existance_439;
                        self->size=size_436;
                        self->len=len_440;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional452;
char* result_441;
char* __result168__;
_Bool _if_conditional453;
char* __result169__;
char* result_442;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_441, 0, sizeof(char*));
memset(&result_442, 0, sizeof(char*));
                            if(_if_conditional452=self==((void*)0),                            _if_conditional452) {
                                memset(&result_441,0,sizeof(char*));
                                __result168__ = __result_obj__ = result_441;
                                return __result168__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result169__ = __result_obj__ = self->key_list->it->item;
                                return __result169__;
                            }
                            memset(&result_442,0,sizeof(char*));
                            __result170__ = __result_obj__ = result_442;
                            return __result170__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result171__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result171__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional454;
char* result_444;
char* __result172__;
_Bool _if_conditional455;
char* __result173__;
char* result_445;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_444, 0, sizeof(char*));
memset(&result_445, 0, sizeof(char*));
                            if(_if_conditional454=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional454) {
                                memset(&result_444,0,sizeof(char*));
                                __result172__ = __result_obj__ = result_444;
                                return __result172__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result173__ = __result_obj__ = self->key_list->it->item;
                                return __result173__;
                            }
                            memset(&result_445,0,sizeof(char*));
                            __result174__ = __result_obj__ = result_445;
                            return __result174__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_447;
unsigned int it_448;
_Bool _while_condtional48;
_Bool _if_conditional456;
_Bool _if_conditional457;
struct sGenericsFun* __result175__;
_Bool _if_conditional458;
_Bool _if_conditional459;
struct sGenericsFun* __result176__;
struct sGenericsFun* __result177__;
struct sGenericsFun* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_447, 0, sizeof(unsigned int));
memset(&it_448, 0, sizeof(unsigned int));
                                hash_447=string_get_hash_key(((char*)key))%self->size;
                                it_448=hash_447;
                                while(_while_condtional48=(_Bool)1,                                _while_condtional48) {
                                    if(_if_conditional456=self->item_existance[it_448],                                    _if_conditional456) {
                                        if(_if_conditional457=string_equals(self->keys[it_448],key),                                        _if_conditional457) {
                                            __result175__ = __result_obj__ = self->items[it_448];
                                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result175__;
                                        }
                                        it_448++;
                                        if(_if_conditional458=it_448>=self->size,                                        _if_conditional458) {
                                            it_448=0;
                                        }
                                        else {
                                            if(_if_conditional459=it_448==hash_447,                                            _if_conditional459) {
                                                __result176__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result176__;
                                            }
                                        }
                                    }
                                    else {
                                        __result177__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result177__;
                                    }
                                }
                                __result178__ = __result_obj__ = default_value;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result178__;
                                come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_471;
char* __dec_obj137;
char* last_code2_472;
char* __dec_obj138;
char* last_code3_473;
char* __dec_obj139;
struct sClass* current_stack_frame_struct_474;
struct sFun* finalizer_475;
void* right_value619;
char* real_fun_name_476;
void* right_value620;
struct sType* type2_477;
struct sClass* klass_478;
_Bool _if_conditional501;
void* right_value621;
void* right_value622;
struct buffer* source_479;
void* right_value623;
struct list$1tuple2$2charphsTypephph* o2_saved_480;
struct tuple2$2charphsTypeph* it_483;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_486;
struct sType* field_type_487;
_Bool _if_conditional506;
_Bool _if_conditional507;
char* p_489;
int sline_490;
char* sname_491;
char* head_492;
struct buffer* source3_493;
struct buffer* __dec_obj140;
void* right_value624;
char* __dec_obj141;
void* right_value625;
struct sBlock* block_494;
void* right_value626;
void* right_value627;
struct sType* result_type_495;
void* right_value628;
char* name_496;
void* right_value629;
struct sType* self_type_497;
_Bool _if_conditional508;
struct sType* __list_values21___498[1];
void* right_value630;
void* right_value631;
struct list$1sTypeph* param_types_499;
void* right_value632;
char* __list_values22___500[1];
void* right_value633;
void* right_value634;
struct list$1charph* param_names_501;
void* right_value635;
void* right_value636;
struct list$1charph* param_default_parametors_502;
void* right_value637;
void* right_value638;
struct buffer* header_buf_503;
void* right_value639;
int i_504;
void* right_value640;
struct sType* param_type_505;
void* right_value641;
char* param_name_509;
void* right_value642;
_Bool _if_conditional511;
void* right_value643;
void* right_value644;
void* right_value645;
void* right_value646;
struct sFun* fun_510;
void* right_value647;
void* right_value648;
struct sFun* fun2_511;
_Bool _if_conditional512;
void* right_value649;
void* right_value650;
void* right_value651;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value655;
struct sNode* node_513;
_Bool _if_conditional519;
struct buffer* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
void* right_value656;
void* right_value657;
struct tuple2$2sFunpcharph* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_471, 0, sizeof(char*));
memset(&last_code2_472, 0, sizeof(char*));
memset(&last_code3_473, 0, sizeof(char*));
memset(&current_stack_frame_struct_474, 0, sizeof(struct sClass*));
memset(&finalizer_475, 0, sizeof(struct sFun*));
right_value619 = (void*)0;
memset(&real_fun_name_476, 0, sizeof(char*));
right_value620 = (void*)0;
memset(&type2_477, 0, sizeof(struct sType*));
memset(&klass_478, 0, sizeof(struct sClass*));
right_value621 = (void*)0;
right_value622 = (void*)0;
memset(&source_479, 0, sizeof(struct buffer*));
right_value623 = (void*)0;
memset(&o2_saved_480, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_483, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_486, 0, sizeof(char*));
memset(&field_type_487, 0, sizeof(struct sType*));
memset(&name_486, 0, sizeof(char*));
memset(&field_type_487, 0, sizeof(struct sType*));
memset(&p_489, 0, sizeof(char*));
memset(&sline_490, 0, sizeof(int));
memset(&sname_491, 0, sizeof(char*));
memset(&head_492, 0, sizeof(char*));
memset(&source3_493, 0, sizeof(struct buffer*));
right_value624 = (void*)0;
right_value625 = (void*)0;
memset(&block_494, 0, sizeof(struct sBlock*));
right_value626 = (void*)0;
right_value627 = (void*)0;
memset(&result_type_495, 0, sizeof(struct sType*));
right_value628 = (void*)0;
memset(&name_496, 0, sizeof(char*));
right_value629 = (void*)0;
memset(&self_type_497, 0, sizeof(struct sType*));
right_value630 = (void*)0;
right_value631 = (void*)0;
memset(&param_types_499, 0, sizeof(struct list$1sTypeph*));
right_value632 = (void*)0;
right_value633 = (void*)0;
right_value634 = (void*)0;
memset(&param_names_501, 0, sizeof(struct list$1charph*));
right_value635 = (void*)0;
right_value636 = (void*)0;
memset(&param_default_parametors_502, 0, sizeof(struct list$1charph*));
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&header_buf_503, 0, sizeof(struct buffer*));
right_value639 = (void*)0;
memset(&i_504, 0, sizeof(int));
right_value640 = (void*)0;
memset(&param_type_505, 0, sizeof(struct sType*));
right_value641 = (void*)0;
memset(&param_name_509, 0, sizeof(char*));
right_value642 = (void*)0;
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value646 = (void*)0;
memset(&fun_510, 0, sizeof(struct sFun*));
right_value647 = (void*)0;
right_value648 = (void*)0;
memset(&fun2_511, 0, sizeof(struct sFun*));
right_value649 = (void*)0;
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value655 = (void*)0;
memset(&node_513, 0, sizeof(struct sNode*));
right_value656 = (void*)0;
right_value657 = (void*)0;
    last_code_471=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj137=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_472=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj138=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_473=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj139=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_474=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_475=((void*)0);
    real_fun_name_476=(char*)come_increment_ref_count(((char*)(right_value619=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_477=(struct sType*)come_increment_ref_count(((struct sType*)(right_value620=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_477;
    klass_478=type->mClass;
    if(_if_conditional501=type->mPointerNum>0&&klass_478->mStruct,    _if_conditional501) {
        source_479=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value622=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value621=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1926, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_479,123);
        klass_478=((struct sClass*)(right_value623=map$2charphsClassphp_operator_load_element(info->classes,klass_478->mName)));
        come_call_finalizer2(sClass_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_480=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_478->mFields)),it_483=list$1tuple2$2charphsTypephph_begin((o2_saved_480));        !list$1tuple2$2charphsTypephph_end((o2_saved_480));        it_483=list$1tuple2$2charphsTypephph_next((o2_saved_480))        ){
            multiple_assign_var10=it_483;
            name_486=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_487=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional506=string_operator_equals(type->mClass->mName,field_type_487->mClass->mName)&&type->mPointerNum==field_type_487->mPointerNum&&field_type_487->mHeap,            _if_conditional506) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_487->mHeap) {
                char source2_488[1024];
                memset(&source2_488, 0, sizeof(char)                *(1024)                );
                snprintf(source2_488,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_486,name_486);
                buffer_append_str(source_479,source2_488);
            }
            name_486 = come_decrement_ref_count2(name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_487, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_480, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_479,125);
        p_489=info->p;
        sline_490=info->sline;
        sname_491=(char*)come_increment_ref_count(info->sname);
        head_492=info->head;
        source3_493=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj140=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_479);
        come_call_finalizer2(buffer_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_479->buf;
        info->head=source_479->buf;
        __dec_obj141=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value624=__builtin_string(real_fun_name_476))));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_494=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value625=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_495=(struct sType*)come_increment_ref_count(((struct sType*)(right_value627=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value626=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 1965, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_496=(char*)come_increment_ref_count(((char*)(right_value628=string_clone(real_fun_name_476))));
        right_value628 = come_decrement_ref_count2(right_value628, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_497=(struct sType*)come_increment_ref_count(((struct sType*)(right_value629=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_497->mHeap=(_Bool)0;
        if(_if_conditional508=self_type_497->mPointerNum>1,        _if_conditional508) {
            self_type_497->mPointerNum=1;
        }
        {__list_values21___498[0]=come_increment_ref_count(self_type_497);
}        param_types_499=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value631=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value630=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 1972, "struct list$1sTypeph")))),1,__list_values21___498))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values22___500[0]=come_increment_ref_count(((char*)(right_value632=__builtin_string("self"))));
}        param_names_501=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value634=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value633=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1973, "struct list$1charph")))),1,__list_values22___500))));
        right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_502=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value636=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value635=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 1974, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_502,((void*)0));
        header_buf_503=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value638=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value637=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 1977, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_503,((char*)(right_value639=make_come_type_name_string(result_type_495,info))));
        right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_503," ");
        buffer_append_str(header_buf_503,real_fun_name_476);
        buffer_append_str(header_buf_503,"(");
        for(        i_504=0;        i_504<list$1sTypeph_length(param_types_499);        i_504++        ){
            param_type_505=((struct sType*)(right_value640=list$1sTypephp_operator_load_element(param_types_499,i_504)));
            come_call_finalizer2(sType_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_509=((char*)(right_value641=list$1charphp_operator_load_element(param_names_501,i_504)));
            right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_503,((char*)(right_value642=make_come_type_name_string(param_type_505,info))));
            right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_503," ");
            buffer_append_str(header_buf_503,param_name_509);
            if(_if_conditional511=i_504!=list$1sTypeph_length(param_types_499)-1,            _if_conditional511) {
                buffer_append_str(header_buf_503,",");
            }
        }
        buffer_append_str(header_buf_503,")");
        result_type_495->mStatic=(_Bool)0;
        fun_510=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value646=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value643=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2000, "struct sFun")))),(char*)come_increment_ref_count(name_496),(struct sType*)come_increment_ref_count(result_type_495),(struct list$1sTypeph*)come_increment_ref_count(param_types_499),(struct list$1charph*)come_increment_ref_count(param_names_501),(struct list$1charph*)come_increment_ref_count(param_default_parametors_502),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_494),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value644=buffer_to_string(header_buf_503)))),(char*)come_increment_ref_count(((char*)(right_value645=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value644 = come_decrement_ref_count2(right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value645 = come_decrement_ref_count2(right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_511=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value648=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value647=__builtin_string(fun_name)))))));
        right_value647 = come_decrement_ref_count2(right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional512=fun2_511==((void*)0)||fun2_511->mExternal,        _if_conditional512) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value649=string_clone(name_496)))),(struct sFun*)come_increment_ref_count(fun_510));
            right_value649 = come_decrement_ref_count2(right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_475=fun_510;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2016, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value651=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value650=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2016, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_510),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sFunNode_sline;
        _inf_value8->sname=(void*)sFunNode_sname;
        _inf_value8->terminated=(void*)sFunNode_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_513=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=_inf_value8)));
        come_call_finalizer2(sFunNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional519=!node_compile(node_513,info),        _if_conditional519) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj144=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_493);
        come_call_finalizer2(buffer_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_489;
        info->head=head_492;
        info->sline=sline_490;
        __dec_obj145=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_491);
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_479, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_491 = come_decrement_ref_count2(sname_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_493, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_494, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_495, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_496 = come_decrement_ref_count2(name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_497, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_499, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_501, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_502, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_503, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_510, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_511, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_513) { node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_474;
    __dec_obj146=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_471);
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_472);
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj148=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_473);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result204__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value657=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value656=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2036, "struct tuple2$2sFunpcharph")))),finalizer_475,(char*)come_increment_ref_count(real_fun_name_476))));
    last_code_471 = come_decrement_ref_count2(last_code_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_472 = come_decrement_ref_count2(last_code2_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_473 = come_decrement_ref_count2(last_code3_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_476 = come_decrement_ref_count2(real_fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_477, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result204__;
    last_code_471 = come_decrement_ref_count2(last_code_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_472 = come_decrement_ref_count2(last_code2_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_473 = come_decrement_ref_count2(last_code3_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_476 = come_decrement_ref_count2(real_fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_477, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional502;
struct tuple2$2charphsTypeph* result_481;
struct tuple2$2charphsTypeph* __result191__;
_Bool _if_conditional503;
struct tuple2$2charphsTypeph* __result192__;
struct tuple2$2charphsTypeph* result_482;
struct tuple2$2charphsTypeph* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_481, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_482, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional502=self==((void*)0),            _if_conditional502) {
                memset(&result_481,0,sizeof(struct tuple2$2charphsTypeph*));
                __result191__ = __result_obj__ = result_481;
                return __result191__;
            }
            self->it=self->head;
            if(self->it) {
                __result192__ = __result_obj__ = self->it->item;
                return __result192__;
            }
            memset(&result_482,0,sizeof(struct tuple2$2charphsTypeph*));
            __result193__ = __result_obj__ = result_482;
            return __result193__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
            __result194__ = self==((void*)0)||self->it==((void*)0);
            return __result194__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional504;
struct tuple2$2charphsTypeph* result_484;
struct tuple2$2charphsTypeph* __result195__;
_Bool _if_conditional505;
struct tuple2$2charphsTypeph* __result196__;
struct tuple2$2charphsTypeph* result_485;
struct tuple2$2charphsTypeph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_484, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_485, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional504=self==((void*)0)||self->it==((void*)0),            _if_conditional504) {
                memset(&result_484,0,sizeof(struct tuple2$2charphsTypeph*));
                __result195__ = __result_obj__ = result_484;
                return __result195__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result196__ = __result_obj__ = self->it->item;
                return __result196__;
            }
            memset(&result_485,0,sizeof(struct tuple2$2charphsTypeph*));
            __result197__ = __result_obj__ = result_485;
            return __result197__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result198__;
memset(&__result_obj__, 0, sizeof(void*));
            __result198__ = self->len;
            return __result198__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional509;
struct list_item$1charph* it_506;
int i_507;
_Bool _while_condtional51;
_Bool _if_conditional510;
char* __result199__;
char* default_value_508;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_506, 0, sizeof(struct list_item$1charph*));
memset(&i_507, 0, sizeof(int));
memset(&default_value_508, 0, sizeof(char*));
                if(_if_conditional509=position<0,                _if_conditional509) {
                    position+=self->len;
                }
                it_506=self->head;
                i_507=0;
                while(_while_condtional51=it_506!=((void*)0),                _while_condtional51) {
                    if(_if_conditional510=position==i_507,                    _if_conditional510) {
                        __result199__ = __result_obj__ = it_506->item;
                        return __result199__;
                    }
                    it_506=it_506->next;
                    i_507++;
                }
                memset(&default_value_508,0,sizeof(char*));
                __result200__ = __result_obj__ = default_value_508;
                default_value_508 = come_decrement_ref_count2(default_value_508, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result200__;
                default_value_508 = come_decrement_ref_count2(default_value_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj149;
struct tuple2$2sFunpcharph* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj149=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result203__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result203__;
        come_call_finalizer2(tuple2$2sFunpcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional520;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional520=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional520) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_514;
char* __dec_obj150;
char* last_code2_515;
char* __dec_obj151;
char* last_code3_516;
char* __dec_obj152;
struct sClass* current_stack_frame_struct_517;
struct sFun* finalizer_518;
void* right_value658;
char* real_fun_name_519;
void* right_value659;
struct sType* type2_520;
struct sClass* klass_521;
_Bool _if_conditional521;
void* right_value660;
void* right_value661;
struct buffer* source_522;
void* right_value662;
struct list$1tuple2$2charphsTypephph* o2_saved_523;
struct tuple2$2charphsTypeph* it_524;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_525;
struct sType* field_type_526;
_Bool _if_conditional522;
_Bool _if_conditional523;
char* p_528;
int sline_529;
char* sname_530;
char* head_531;
struct buffer* source3_532;
struct buffer* __dec_obj153;
void* right_value663;
char* __dec_obj154;
void* right_value664;
struct sBlock* block_533;
void* right_value665;
void* right_value666;
struct sType* result_type_534;
void* right_value667;
char* name_535;
void* right_value668;
struct sType* self_type_536;
_Bool _if_conditional524;
struct sType* __list_values23___537[1];
void* right_value669;
void* right_value670;
struct list$1sTypeph* param_types_538;
void* right_value671;
char* __list_values24___539[1];
void* right_value672;
void* right_value673;
struct list$1charph* param_names_540;
void* right_value674;
void* right_value675;
struct list$1charph* param_default_parametors_541;
void* right_value676;
void* right_value677;
struct buffer* header_buf_542;
void* right_value678;
int i_543;
void* right_value679;
struct sType* param_type_544;
void* right_value680;
char* param_name_545;
void* right_value681;
_Bool _if_conditional525;
void* right_value682;
void* right_value683;
void* right_value684;
void* right_value685;
struct sFun* fun_546;
void* right_value686;
void* right_value687;
struct sFun* fun2_547;
_Bool _if_conditional526;
void* right_value688;
void* right_value689;
void* right_value690;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value694;
struct sNode* node_549;
_Bool _if_conditional533;
struct buffer* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
char* __dec_obj161;
void* right_value695;
void* right_value696;
struct tuple2$2sFunpcharph* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_514, 0, sizeof(char*));
memset(&last_code2_515, 0, sizeof(char*));
memset(&last_code3_516, 0, sizeof(char*));
memset(&current_stack_frame_struct_517, 0, sizeof(struct sClass*));
memset(&finalizer_518, 0, sizeof(struct sFun*));
right_value658 = (void*)0;
memset(&real_fun_name_519, 0, sizeof(char*));
right_value659 = (void*)0;
memset(&type2_520, 0, sizeof(struct sType*));
memset(&klass_521, 0, sizeof(struct sClass*));
right_value660 = (void*)0;
right_value661 = (void*)0;
memset(&source_522, 0, sizeof(struct buffer*));
right_value662 = (void*)0;
memset(&o2_saved_523, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_524, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_525, 0, sizeof(char*));
memset(&field_type_526, 0, sizeof(struct sType*));
memset(&name_525, 0, sizeof(char*));
memset(&field_type_526, 0, sizeof(struct sType*));
memset(&p_528, 0, sizeof(char*));
memset(&sline_529, 0, sizeof(int));
memset(&sname_530, 0, sizeof(char*));
memset(&head_531, 0, sizeof(char*));
memset(&source3_532, 0, sizeof(struct buffer*));
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&block_533, 0, sizeof(struct sBlock*));
right_value665 = (void*)0;
right_value666 = (void*)0;
memset(&result_type_534, 0, sizeof(struct sType*));
right_value667 = (void*)0;
memset(&name_535, 0, sizeof(char*));
right_value668 = (void*)0;
memset(&self_type_536, 0, sizeof(struct sType*));
right_value669 = (void*)0;
right_value670 = (void*)0;
memset(&param_types_538, 0, sizeof(struct list$1sTypeph*));
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
memset(&param_names_540, 0, sizeof(struct list$1charph*));
right_value674 = (void*)0;
right_value675 = (void*)0;
memset(&param_default_parametors_541, 0, sizeof(struct list$1charph*));
right_value676 = (void*)0;
right_value677 = (void*)0;
memset(&header_buf_542, 0, sizeof(struct buffer*));
right_value678 = (void*)0;
memset(&i_543, 0, sizeof(int));
right_value679 = (void*)0;
memset(&param_type_544, 0, sizeof(struct sType*));
right_value680 = (void*)0;
memset(&param_name_545, 0, sizeof(char*));
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
right_value685 = (void*)0;
memset(&fun_546, 0, sizeof(struct sFun*));
right_value686 = (void*)0;
right_value687 = (void*)0;
memset(&fun2_547, 0, sizeof(struct sFun*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value694 = (void*)0;
memset(&node_549, 0, sizeof(struct sNode*));
right_value695 = (void*)0;
right_value696 = (void*)0;
    last_code_514=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj150=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_515=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj151=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_516=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj152=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_517=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_518=((void*)0);
    real_fun_name_519=(char*)come_increment_ref_count(((char*)(right_value658=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_520=(struct sType*)come_increment_ref_count(((struct sType*)(right_value659=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_520;
    klass_521=type->mClass;
    if(_if_conditional521=type->mPointerNum>0&&klass_521->mStruct,    _if_conditional521) {
        source_522=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value661=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value660=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2063, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_522,123);
        klass_521=((struct sClass*)(right_value662=map$2charphsClassphp_operator_load_element(info->classes,klass_521->mName)));
        come_call_finalizer2(sClass_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_523=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_521->mFields)),it_524=list$1tuple2$2charphsTypephph_begin((o2_saved_523));        !list$1tuple2$2charphsTypephph_end((o2_saved_523));        it_524=list$1tuple2$2charphsTypephph_next((o2_saved_523))        ){
            multiple_assign_var11=it_524;
            name_525=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_526=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional522=string_operator_equals(type->mClass->mName,field_type_526->mClass->mName)&&type->mPointerNum==field_type_526->mPointerNum&&field_type_526->mHeap,            _if_conditional522) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_526->mHeap) {
                char source2_527[1024];
                memset(&source2_527, 0, sizeof(char)                *(1024)                );
                snprintf(source2_527,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_525,name_525);
                buffer_append_str(source_522,source2_527);
            }
            name_525 = come_decrement_ref_count2(name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,field_type_526, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_523, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_522,125);
        p_528=info->p;
        sline_529=info->sline;
        sname_530=(char*)come_increment_ref_count(info->sname);
        head_531=info->head;
        source3_532=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj153=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_522);
        come_call_finalizer2(buffer_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_522->buf;
        info->head=source_522->buf;
        __dec_obj154=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(real_fun_name_519))));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_533=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value664=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_534=(struct sType*)come_increment_ref_count(((struct sType*)(right_value666=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value665=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2102, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_535=(char*)come_increment_ref_count(((char*)(right_value667=string_clone(real_fun_name_519))));
        right_value667 = come_decrement_ref_count2(right_value667, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_536=(struct sType*)come_increment_ref_count(((struct sType*)(right_value668=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_536->mHeap=(_Bool)0;
        if(_if_conditional524=self_type_536->mPointerNum>1,        _if_conditional524) {
            self_type_536->mPointerNum=1;
        }
        {__list_values23___537[0]=come_increment_ref_count(self_type_536);
}        param_types_538=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value670=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value669=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2109, "struct list$1sTypeph")))),1,__list_values23___537))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values24___539[0]=come_increment_ref_count(((char*)(right_value671=__builtin_string("self"))));
}        param_names_540=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value673=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value672=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2110, "struct list$1charph")))),1,__list_values24___539))));
        right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_541=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value675=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value674=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2111, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_541,((void*)0));
        header_buf_542=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value677=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value676=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2114, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_542,((char*)(right_value678=make_come_type_name_string(result_type_534,info))));
        right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_542," ");
        buffer_append_str(header_buf_542,real_fun_name_519);
        buffer_append_str(header_buf_542,"(");
        for(        i_543=0;        i_543<list$1sTypeph_length(param_types_538);        i_543++        ){
            param_type_544=((struct sType*)(right_value679=list$1sTypephp_operator_load_element(param_types_538,i_543)));
            come_call_finalizer2(sType_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_545=((char*)(right_value680=list$1charphp_operator_load_element(param_names_540,i_543)));
            right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_542,((char*)(right_value681=make_come_type_name_string(param_type_544,info))));
            right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_542," ");
            buffer_append_str(header_buf_542,param_name_545);
            if(_if_conditional525=i_543!=list$1sTypeph_length(param_types_538)-1,            _if_conditional525) {
                buffer_append_str(header_buf_542,",");
            }
        }
        buffer_append_str(header_buf_542,")");
        result_type_534->mStatic=(_Bool)0;
        fun_546=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value685=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value682=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2137, "struct sFun")))),(char*)come_increment_ref_count(name_535),(struct sType*)come_increment_ref_count(result_type_534),(struct list$1sTypeph*)come_increment_ref_count(param_types_538),(struct list$1charph*)come_increment_ref_count(param_names_540),(struct list$1charph*)come_increment_ref_count(param_default_parametors_541),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_533),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value683=buffer_to_string(header_buf_542)))),(char*)come_increment_ref_count(((char*)(right_value684=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_547=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value687=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value686=__builtin_string(fun_name)))))));
        right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional526=fun2_547==((void*)0)||fun2_547->mExternal,        _if_conditional526) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value688=string_clone(name_535)))),(struct sFun*)come_increment_ref_count(fun_546));
            right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_518=fun_546;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2153, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value690=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value689=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2153, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_546),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sFunNode_sline;
        _inf_value9->sname=(void*)sFunNode_sname;
        _inf_value9->terminated=(void*)sFunNode_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_549=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=_inf_value9)));
        come_call_finalizer2(sFunNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional533=!node_compile(node_549,info),        _if_conditional533) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj157=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_532);
        come_call_finalizer2(buffer_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_528;
        info->head=head_531;
        info->sline=sline_529;
        __dec_obj158=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_530);
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_522, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_530 = come_decrement_ref_count2(sname_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_532, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_533, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_534, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_535 = come_decrement_ref_count2(name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_536, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_538, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_540, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_541, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_542, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_546, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_547, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_517;
    __dec_obj159=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_514);
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj160=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_515);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_516);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result207__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value696=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value695=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2173, "struct tuple2$2sFunpcharph")))),finalizer_518,(char*)come_increment_ref_count(real_fun_name_519))));
    last_code_514 = come_decrement_ref_count2(last_code_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_515 = come_decrement_ref_count2(last_code2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_516 = come_decrement_ref_count2(last_code3_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_519 = come_decrement_ref_count2(real_fun_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_520, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value695 = come_decrement_ref_count2(right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result207__;
    last_code_514 = come_decrement_ref_count2(last_code_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_515 = come_decrement_ref_count2(last_code2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_516 = come_decrement_ref_count2(last_code3_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_519 = come_decrement_ref_count2(real_fun_name_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_520, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_550;
char* __dec_obj162;
char* last_code2_551;
char* __dec_obj163;
char* last_code3_552;
char* __dec_obj164;
struct sClass* current_stack_frame_struct_553;
struct sFun* equaler_554;
void* right_value697;
char* real_fun_name_555;
void* right_value698;
struct sType* type2_556;
struct sClass* klass_557;
_Bool _if_conditional534;
void* right_value699;
void* right_value700;
struct buffer* source_558;
_Bool _if_conditional535;
char* name_559;
void* right_value701;
struct list$1tuple2$2charphsTypephph* o2_saved_561;
struct tuple2$2charphsTypeph* it_562;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_563;
struct sType* field_type_564;
_Bool _if_conditional536;
char* p_566;
int sline_567;
char* sname_568;
char* head_569;
struct buffer* source3_570;
struct buffer* __dec_obj165;
void* right_value702;
char* __dec_obj166;
void* right_value703;
struct sBlock* block_571;
void* right_value704;
void* right_value705;
struct sType* result_type_572;
void* right_value706;
char* name_573;
void* right_value707;
struct sType* left_type_574;
void* right_value708;
struct sType* right_type_575;
struct sType* __list_values25___576[2];
void* right_value709;
void* right_value710;
struct list$1sTypeph* param_types_577;
void* right_value711;
void* right_value712;
char* __list_values26___578[2];
void* right_value713;
void* right_value714;
struct list$1charph* param_names_579;
void* right_value715;
void* right_value716;
struct list$1charph* param_default_parametors_580;
void* right_value717;
void* right_value718;
struct buffer* header_buf_581;
void* right_value719;
int i_582;
void* right_value720;
struct sType* param_type_583;
void* right_value721;
char* param_name_584;
void* right_value722;
_Bool _if_conditional537;
void* right_value723;
void* right_value724;
void* right_value725;
void* right_value726;
struct sFun* fun_585;
void* right_value727;
void* right_value728;
struct sFun* fun2_586;
_Bool _if_conditional538;
void* right_value729;
void* right_value730;
void* right_value731;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value735;
struct sNode* node_588;
_Bool _if_conditional545;
struct buffer* __dec_obj169;
char* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
char* __dec_obj173;
void* right_value736;
void* right_value737;
struct tuple2$2sFunpcharph* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_550, 0, sizeof(char*));
memset(&last_code2_551, 0, sizeof(char*));
memset(&last_code3_552, 0, sizeof(char*));
memset(&current_stack_frame_struct_553, 0, sizeof(struct sClass*));
memset(&equaler_554, 0, sizeof(struct sFun*));
right_value697 = (void*)0;
memset(&real_fun_name_555, 0, sizeof(char*));
right_value698 = (void*)0;
memset(&type2_556, 0, sizeof(struct sType*));
memset(&klass_557, 0, sizeof(struct sClass*));
right_value699 = (void*)0;
right_value700 = (void*)0;
memset(&source_558, 0, sizeof(struct buffer*));
memset(&name_559, 0, sizeof(char*));
right_value701 = (void*)0;
memset(&o2_saved_561, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_562, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_563, 0, sizeof(char*));
memset(&field_type_564, 0, sizeof(struct sType*));
memset(&name_563, 0, sizeof(char*));
memset(&field_type_564, 0, sizeof(struct sType*));
memset(&p_566, 0, sizeof(char*));
memset(&sline_567, 0, sizeof(int));
memset(&sname_568, 0, sizeof(char*));
memset(&head_569, 0, sizeof(char*));
memset(&source3_570, 0, sizeof(struct buffer*));
right_value702 = (void*)0;
right_value703 = (void*)0;
memset(&block_571, 0, sizeof(struct sBlock*));
right_value704 = (void*)0;
right_value705 = (void*)0;
memset(&result_type_572, 0, sizeof(struct sType*));
right_value706 = (void*)0;
memset(&name_573, 0, sizeof(char*));
right_value707 = (void*)0;
memset(&left_type_574, 0, sizeof(struct sType*));
right_value708 = (void*)0;
memset(&right_type_575, 0, sizeof(struct sType*));
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&param_types_577, 0, sizeof(struct list$1sTypeph*));
right_value711 = (void*)0;
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
memset(&param_names_579, 0, sizeof(struct list$1charph*));
right_value715 = (void*)0;
right_value716 = (void*)0;
memset(&param_default_parametors_580, 0, sizeof(struct list$1charph*));
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&header_buf_581, 0, sizeof(struct buffer*));
right_value719 = (void*)0;
memset(&i_582, 0, sizeof(int));
right_value720 = (void*)0;
memset(&param_type_583, 0, sizeof(struct sType*));
right_value721 = (void*)0;
memset(&param_name_584, 0, sizeof(char*));
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
memset(&fun_585, 0, sizeof(struct sFun*));
right_value727 = (void*)0;
right_value728 = (void*)0;
memset(&fun2_586, 0, sizeof(struct sFun*));
right_value729 = (void*)0;
right_value730 = (void*)0;
right_value731 = (void*)0;
right_value735 = (void*)0;
memset(&node_588, 0, sizeof(struct sNode*));
right_value736 = (void*)0;
right_value737 = (void*)0;
    last_code_550=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj162=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_551=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj163=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_552=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj164=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_553=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_554=((void*)0);
    real_fun_name_555=(char*)come_increment_ref_count(((char*)(right_value697=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_556=(struct sType*)come_increment_ref_count(((struct sType*)(right_value698=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_556;
    klass_557=type->mClass;
    if(_if_conditional534=type->mPointerNum>0&&!klass_557->mNumber,    _if_conditional534) {
        source_558=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value700=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value699=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2198, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_558,123);
        if(klass_557->mProtocol) {
            name_559="_protocol_obj";
            char source2_560[1024];
            memset(&source2_560, 0, sizeof(char)            *(1024)            );
            snprintf(source2_560,1024,"return left.%s.equals(right.%s);\n",name_559,name_559);
            buffer_append_str(source_558,source2_560);
        }
        else {
            klass_557=((struct sClass*)(right_value701=map$2charphsClassphp_operator_load_element(info->classes,klass_557->mName)));
            come_call_finalizer2(sClass_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_561=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_557->mFields)),it_562=list$1tuple2$2charphsTypephph_begin((o2_saved_561));            !list$1tuple2$2charphsTypephph_end((o2_saved_561));            it_562=list$1tuple2$2charphsTypephph_next((o2_saved_561))            ){
                multiple_assign_var12=it_562;
                name_563=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_564=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional536=string_operator_equals(type->mClass->mName,field_type_564->mClass->mName)&&type->mPointerNum==field_type_564->mPointerNum&&field_type_564->mHeap,                _if_conditional536) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_565[1024];
                memset(&source2_565, 0, sizeof(char)                *(1024)                );
                snprintf(source2_565,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_563,name_563);
                buffer_append_str(source_558,source2_565);
                name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_564, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_561, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_558,"return true;");
        buffer_append_char(source_558,125);
        p_566=info->p;
        sline_567=info->sline;
        sname_568=(char*)come_increment_ref_count(info->sname);
        head_569=info->head;
        source3_570=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj165=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_558);
        come_call_finalizer2(buffer_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_558->buf;
        info->head=source_558->buf;
        __dec_obj166=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value702=__builtin_string(real_fun_name_555))));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_571=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value703=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value703, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_572=(struct sType*)come_increment_ref_count(((struct sType*)(right_value705=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value704=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2244, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_573=(char*)come_increment_ref_count(((char*)(right_value706=string_clone(real_fun_name_555))));
        right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_574=(struct sType*)come_increment_ref_count(((struct sType*)(right_value707=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_574->mHeap=(_Bool)0;
        right_type_575=(struct sType*)come_increment_ref_count(((struct sType*)(right_value708=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_575->mHeap=(_Bool)0;
        {__list_values25___576[0]=come_increment_ref_count(left_type_574);
__list_values25___576[1]=come_increment_ref_count(right_type_575);
}        param_types_577=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value710=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value709=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2250, "struct list$1sTypeph")))),2,__list_values25___576))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value709, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value710, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values26___578[0]=come_increment_ref_count(((char*)(right_value711=__builtin_string("left"))));
__list_values26___578[1]=come_increment_ref_count(((char*)(right_value712=__builtin_string("right"))));
}        param_names_579=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value714=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value713=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2251, "struct list$1charph")))),2,__list_values26___578))));
        right_value711 = come_decrement_ref_count2(right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_580=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value716=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value715=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2252, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value716, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_580,((void*)0));
        list$1charph_push_back(param_default_parametors_580,((void*)0));
        header_buf_581=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value718=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value717=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2256, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value717, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value718, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_581,((char*)(right_value719=make_come_type_name_string(result_type_572,info))));
        right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_581," ");
        buffer_append_str(header_buf_581,real_fun_name_555);
        buffer_append_str(header_buf_581,"(");
        for(        i_582=0;        i_582<list$1sTypeph_length(param_types_577);        i_582++        ){
            param_type_583=((struct sType*)(right_value720=list$1sTypephp_operator_load_element(param_types_577,i_582)));
            come_call_finalizer2(sType_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_584=((char*)(right_value721=list$1charphp_operator_load_element(param_names_579,i_582)));
            right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_581,((char*)(right_value722=make_come_type_name_string(param_type_583,info))));
            right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_581," ");
            buffer_append_str(header_buf_581,param_name_584);
            if(_if_conditional537=i_582!=list$1sTypeph_length(param_types_577)-1,            _if_conditional537) {
                buffer_append_str(header_buf_581,",");
            }
        }
        buffer_append_str(header_buf_581,")");
        result_type_572->mStatic=(_Bool)0;
        fun_585=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value726=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value723=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2279, "struct sFun")))),(char*)come_increment_ref_count(name_573),(struct sType*)come_increment_ref_count(result_type_572),(struct list$1sTypeph*)come_increment_ref_count(param_types_577),(struct list$1charph*)come_increment_ref_count(param_names_579),(struct list$1charph*)come_increment_ref_count(param_default_parametors_580),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_571),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value724=buffer_to_string(header_buf_581)))),(char*)come_increment_ref_count(((char*)(right_value725=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value724 = come_decrement_ref_count2(right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_586=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value728=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value727=__builtin_string(fun_name)))))));
        right_value727 = come_decrement_ref_count2(right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional538=fun2_586==((void*)0)||fun2_586->mExternal,        _if_conditional538) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value729=string_clone(name_573)))),(struct sFun*)come_increment_ref_count(fun_585));
            right_value729 = come_decrement_ref_count2(right_value729, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_554=fun_585;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2295, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value731=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value730=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2295, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_585),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sFunNode_sline;
        _inf_value10->sname=(void*)sFunNode_sname;
        _inf_value10->terminated=(void*)sFunNode_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_588=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value735=_inf_value10)));
        come_call_finalizer2(sFunNode_finalize,right_value730, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value731, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value735) { right_value735 = come_decrement_ref_count2(right_value735, ((struct sNode*)right_value735)->finalize, ((struct sNode*)right_value735)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional545=!node_compile(node_588,info),        _if_conditional545) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj169=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_570);
        come_call_finalizer2(buffer_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_566;
        info->head=head_569;
        info->sline=sline_567;
        __dec_obj170=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_568);
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_558, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_568 = come_decrement_ref_count2(sname_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_570, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_571, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_572, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_574, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_575, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_577, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_579, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_580, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_581, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_585, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_586, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_588) { node_588 = come_decrement_ref_count2(node_588, ((struct sNode*)node_588)->finalize, ((struct sNode*)node_588)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_553;
    __dec_obj171=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_550);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_551);
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_552);
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result210__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value737=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value736=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2315, "struct tuple2$2sFunpcharph")))),equaler_554,(char*)come_increment_ref_count(real_fun_name_555))));
    last_code_550 = come_decrement_ref_count2(last_code_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_551 = come_decrement_ref_count2(last_code2_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_552 = come_decrement_ref_count2(last_code3_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_555 = come_decrement_ref_count2(real_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_556, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value736 = come_decrement_ref_count2(right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value737, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result210__;
    last_code_550 = come_decrement_ref_count2(last_code_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_551 = come_decrement_ref_count2(last_code2_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_552 = come_decrement_ref_count2(last_code3_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_555 = come_decrement_ref_count2(real_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_556, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_589;
char* __dec_obj174;
char* last_code2_590;
char* __dec_obj175;
char* last_code3_591;
char* __dec_obj176;
struct sClass* current_stack_frame_struct_592;
struct sFun* equaler_593;
void* right_value738;
char* real_fun_name_594;
void* right_value739;
struct sType* type2_595;
struct sClass* klass_596;
_Bool _if_conditional546;
void* right_value740;
void* right_value741;
struct buffer* source_597;
_Bool _if_conditional547;
char* name_598;
int i_601;
void* right_value742;
struct list$1tuple2$2charphsTypephph* o2_saved_602;
struct tuple2$2charphsTypeph* it_603;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_604;
struct sType* field_type_605;
_Bool _if_conditional548;
_Bool _if_conditional549;
char* p_609;
int sline_610;
char* sname_611;
char* head_612;
struct buffer* source3_613;
struct buffer* __dec_obj177;
void* right_value743;
char* __dec_obj178;
void* right_value744;
struct sBlock* block_614;
void* right_value745;
void* right_value746;
struct sType* result_type_615;
void* right_value747;
char* name_616;
void* right_value748;
struct sType* left_type_617;
void* right_value749;
struct sType* right_type_618;
struct sType* __list_values27___619[2];
void* right_value750;
void* right_value751;
struct list$1sTypeph* param_types_620;
void* right_value752;
void* right_value753;
char* __list_values28___621[2];
void* right_value754;
void* right_value755;
struct list$1charph* param_names_622;
void* right_value756;
void* right_value757;
struct list$1charph* param_default_parametors_623;
void* right_value758;
void* right_value759;
struct buffer* header_buf_624;
void* right_value760;
int i_625;
void* right_value761;
struct sType* param_type_626;
void* right_value762;
char* param_name_627;
void* right_value763;
_Bool _if_conditional550;
void* right_value764;
void* right_value765;
void* right_value766;
void* right_value767;
struct sFun* fun_628;
void* right_value768;
void* right_value769;
struct sFun* fun2_629;
_Bool _if_conditional551;
void* right_value770;
void* right_value771;
void* right_value772;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value776;
struct sNode* node_631;
_Bool _if_conditional558;
struct buffer* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
char* __dec_obj185;
void* right_value777;
void* right_value778;
struct tuple2$2sFunpcharph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_589, 0, sizeof(char*));
memset(&last_code2_590, 0, sizeof(char*));
memset(&last_code3_591, 0, sizeof(char*));
memset(&current_stack_frame_struct_592, 0, sizeof(struct sClass*));
memset(&equaler_593, 0, sizeof(struct sFun*));
right_value738 = (void*)0;
memset(&real_fun_name_594, 0, sizeof(char*));
right_value739 = (void*)0;
memset(&type2_595, 0, sizeof(struct sType*));
memset(&klass_596, 0, sizeof(struct sClass*));
right_value740 = (void*)0;
right_value741 = (void*)0;
memset(&source_597, 0, sizeof(struct buffer*));
memset(&name_598, 0, sizeof(char*));
memset(&i_601, 0, sizeof(int));
right_value742 = (void*)0;
memset(&o2_saved_602, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_603, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_604, 0, sizeof(char*));
memset(&field_type_605, 0, sizeof(struct sType*));
memset(&name_604, 0, sizeof(char*));
memset(&field_type_605, 0, sizeof(struct sType*));
memset(&p_609, 0, sizeof(char*));
memset(&sline_610, 0, sizeof(int));
memset(&sname_611, 0, sizeof(char*));
memset(&head_612, 0, sizeof(char*));
memset(&source3_613, 0, sizeof(struct buffer*));
right_value743 = (void*)0;
right_value744 = (void*)0;
memset(&block_614, 0, sizeof(struct sBlock*));
right_value745 = (void*)0;
right_value746 = (void*)0;
memset(&result_type_615, 0, sizeof(struct sType*));
right_value747 = (void*)0;
memset(&name_616, 0, sizeof(char*));
right_value748 = (void*)0;
memset(&left_type_617, 0, sizeof(struct sType*));
right_value749 = (void*)0;
memset(&right_type_618, 0, sizeof(struct sType*));
right_value750 = (void*)0;
right_value751 = (void*)0;
memset(&param_types_620, 0, sizeof(struct list$1sTypeph*));
right_value752 = (void*)0;
right_value753 = (void*)0;
right_value754 = (void*)0;
right_value755 = (void*)0;
memset(&param_names_622, 0, sizeof(struct list$1charph*));
right_value756 = (void*)0;
right_value757 = (void*)0;
memset(&param_default_parametors_623, 0, sizeof(struct list$1charph*));
right_value758 = (void*)0;
right_value759 = (void*)0;
memset(&header_buf_624, 0, sizeof(struct buffer*));
right_value760 = (void*)0;
memset(&i_625, 0, sizeof(int));
right_value761 = (void*)0;
memset(&param_type_626, 0, sizeof(struct sType*));
right_value762 = (void*)0;
memset(&param_name_627, 0, sizeof(char*));
right_value763 = (void*)0;
right_value764 = (void*)0;
right_value765 = (void*)0;
right_value766 = (void*)0;
right_value767 = (void*)0;
memset(&fun_628, 0, sizeof(struct sFun*));
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&fun2_629, 0, sizeof(struct sFun*));
right_value770 = (void*)0;
right_value771 = (void*)0;
right_value772 = (void*)0;
right_value776 = (void*)0;
memset(&node_631, 0, sizeof(struct sNode*));
right_value777 = (void*)0;
right_value778 = (void*)0;
    last_code_589=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj174=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_590=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj175=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_591=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj176=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_592=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_593=((void*)0);
    real_fun_name_594=(char*)come_increment_ref_count(((char*)(right_value738=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value738 = come_decrement_ref_count2(right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_595=(struct sType*)come_increment_ref_count(((struct sType*)(right_value739=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value739, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_595;
    klass_596=type->mClass;
    if(_if_conditional546=type->mPointerNum>0&&!klass_596->mNumber,    _if_conditional546) {
        source_597=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value741=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value740=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2340, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value740, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value741, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_597,123);
        if(klass_596->mProtocol) {
            name_598="_protocol_obj";
            char source2_599[1024];
            memset(&source2_599, 0, sizeof(char)            *(1024)            );
            snprintf(source2_599,1024,"return !left.%s.equals(right.%s);\n",name_598,name_598);
            buffer_append_str(source_597,source2_599);
        }
        else {
            char source2_600[1024];
            memset(&source2_600, 0, sizeof(char)            *(1024)            );
            snprintf(source2_600,1024,"return !(");
            buffer_append_str(source_597,source2_600);
            i_601=0;
            klass_596=((struct sClass*)(right_value742=map$2charphsClassphp_operator_load_element(info->classes,klass_596->mName)));
            come_call_finalizer2(sClass_finalize,right_value742, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_602=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_596->mFields)),it_603=list$1tuple2$2charphsTypephph_begin((o2_saved_602));            !list$1tuple2$2charphsTypephph_end((o2_saved_602));            it_603=list$1tuple2$2charphsTypephph_next((o2_saved_602))            ){
                multiple_assign_var13=it_603;
                name_604=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_605=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional548=string_operator_equals(type->mClass->mName,field_type_605->mClass->mName)&&type->mPointerNum==field_type_605->mPointerNum&&field_type_605->mHeap,                _if_conditional548) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_606[1024];
                memset(&source2_606, 0, sizeof(char)                *(1024)                );
                snprintf(source2_606,1024,"left.%s.equals(right.%s)",name_604,name_604);
                buffer_append_str(source_597,source2_606);
                if(_if_conditional549=i_601==list$1tuple2$2charphsTypephph_length(klass_596->mFields)-1,                _if_conditional549) {
                    char source2_607[1024];
                    memset(&source2_607, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_607,1024,");");
                    buffer_append_str(source_597,source2_607);
                }
                else {
                    char source2_608[1024];
                    memset(&source2_608, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_608,1024," && ");
                    buffer_append_str(source_597,source2_608);
                }
                i_601++;
                name_604 = come_decrement_ref_count2(name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_605, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_602, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_597,125);
        p_609=info->p;
        sline_610=info->sline;
        sname_611=(char*)come_increment_ref_count(info->sname);
        head_612=info->head;
        source3_613=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj177=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_597);
        come_call_finalizer2(buffer_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_597->buf;
        info->head=source_597->buf;
        __dec_obj178=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value743=__builtin_string(real_fun_name_594))));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_614=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value744=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value744, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_615=(struct sType*)come_increment_ref_count(((struct sType*)(right_value746=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value745=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2403, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value745, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value746, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_616=(char*)come_increment_ref_count(((char*)(right_value747=string_clone(real_fun_name_594))));
        right_value747 = come_decrement_ref_count2(right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_617=(struct sType*)come_increment_ref_count(((struct sType*)(right_value748=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value748, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_617->mHeap=(_Bool)0;
        right_type_618=(struct sType*)come_increment_ref_count(((struct sType*)(right_value749=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value749, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_618->mHeap=(_Bool)0;
        {__list_values27___619[0]=come_increment_ref_count(left_type_617);
__list_values27___619[1]=come_increment_ref_count(right_type_618);
}        param_types_620=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value751=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value750=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2409, "struct list$1sTypeph")))),2,__list_values27___619))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value750, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value751, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values28___621[0]=come_increment_ref_count(((char*)(right_value752=__builtin_string("left"))));
__list_values28___621[1]=come_increment_ref_count(((char*)(right_value753=__builtin_string("right"))));
}        param_names_622=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value755=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value754=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2410, "struct list$1charph")))),2,__list_values28___621))));
        right_value752 = come_decrement_ref_count2(right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value753 = come_decrement_ref_count2(right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value754, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value755, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_623=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value757=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value756=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2411, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value756, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value757, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_623,((void*)0));
        list$1charph_push_back(param_default_parametors_623,((void*)0));
        header_buf_624=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value759=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value758=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2415, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value758, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value759, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_624,((char*)(right_value760=make_come_type_name_string(result_type_615,info))));
        right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_624," ");
        buffer_append_str(header_buf_624,real_fun_name_594);
        buffer_append_str(header_buf_624,"(");
        for(        i_625=0;        i_625<list$1sTypeph_length(param_types_620);        i_625++        ){
            param_type_626=((struct sType*)(right_value761=list$1sTypephp_operator_load_element(param_types_620,i_625)));
            come_call_finalizer2(sType_finalize,right_value761, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_627=((char*)(right_value762=list$1charphp_operator_load_element(param_names_622,i_625)));
            right_value762 = come_decrement_ref_count2(right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_624,((char*)(right_value763=make_come_type_name_string(param_type_626,info))));
            right_value763 = come_decrement_ref_count2(right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_624," ");
            buffer_append_str(header_buf_624,param_name_627);
            if(_if_conditional550=i_625!=list$1sTypeph_length(param_types_620)-1,            _if_conditional550) {
                buffer_append_str(header_buf_624,",");
            }
        }
        buffer_append_str(header_buf_624,")");
        result_type_615->mStatic=(_Bool)0;
        fun_628=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value767=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value764=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2438, "struct sFun")))),(char*)come_increment_ref_count(name_616),(struct sType*)come_increment_ref_count(result_type_615),(struct list$1sTypeph*)come_increment_ref_count(param_types_620),(struct list$1charph*)come_increment_ref_count(param_names_622),(struct list$1charph*)come_increment_ref_count(param_default_parametors_623),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_614),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value765=buffer_to_string(header_buf_624)))),(char*)come_increment_ref_count(((char*)(right_value766=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value764, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value765 = come_decrement_ref_count2(right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value766 = come_decrement_ref_count2(right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value767, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_629=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value769=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value768=__builtin_string(fun_name)))))));
        right_value768 = come_decrement_ref_count2(right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value769, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional551=fun2_629==((void*)0)||fun2_629->mExternal,        _if_conditional551) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value770=string_clone(name_616)))),(struct sFun*)come_increment_ref_count(fun_628));
            right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_593=fun_628;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2454, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value772=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value771=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2454, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_628),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sFunNode_sline;
        _inf_value11->sname=(void*)sFunNode_sname;
        _inf_value11->terminated=(void*)sFunNode_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_631=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value776=_inf_value11)));
        come_call_finalizer2(sFunNode_finalize,right_value771, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value772, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value776) { right_value776 = come_decrement_ref_count2(right_value776, ((struct sNode*)right_value776)->finalize, ((struct sNode*)right_value776)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional558=!node_compile(node_631,info),        _if_conditional558) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj181=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_613);
        come_call_finalizer2(buffer_finalize,__dec_obj181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_609;
        info->head=head_612;
        info->sline=sline_610;
        __dec_obj182=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_611);
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_597, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_611 = come_decrement_ref_count2(sname_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_613, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_614, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_615, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_616 = come_decrement_ref_count2(name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_617, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_618, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_620, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_622, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_623, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_624, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_628, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_629, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_631) { node_631 = come_decrement_ref_count2(node_631, ((struct sNode*)node_631)->finalize, ((struct sNode*)node_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_592;
    __dec_obj183=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_589);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_590);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj185=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_591);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result214__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value778=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value777=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2474, "struct tuple2$2sFunpcharph")))),equaler_593,(char*)come_increment_ref_count(real_fun_name_594))));
    last_code_589 = come_decrement_ref_count2(last_code_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_590 = come_decrement_ref_count2(last_code2_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_591 = come_decrement_ref_count2(last_code3_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_594 = come_decrement_ref_count2(real_fun_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_595, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value778, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result214__;
    last_code_589 = come_decrement_ref_count2(last_code_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_590 = come_decrement_ref_count2(last_code2_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_591 = come_decrement_ref_count2(last_code3_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_594 = come_decrement_ref_count2(real_fun_name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_595, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result211__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result211__ = self->len;
                    return __result211__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_632;
char* __dec_obj186;
char* last_code2_633;
char* __dec_obj187;
char* last_code3_634;
char* __dec_obj188;
struct sClass* current_stack_frame_struct_635;
struct sFun* equaler_636;
void* right_value779;
char* real_fun_name_637;
void* right_value780;
struct sType* type2_638;
struct sClass* klass_639;
_Bool _if_conditional559;
void* right_value781;
void* right_value782;
struct buffer* source_640;
_Bool _if_conditional560;
char* name_641;
void* right_value783;
struct list$1tuple2$2charphsTypephph* o2_saved_643;
struct tuple2$2charphsTypeph* it_644;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_645;
struct sType* field_type_646;
_Bool _if_conditional561;
char* p_648;
int sline_649;
char* sname_650;
char* head_651;
struct buffer* source3_652;
struct buffer* __dec_obj189;
void* right_value784;
char* __dec_obj190;
void* right_value785;
struct sBlock* block_653;
void* right_value786;
void* right_value787;
struct sType* result_type_654;
void* right_value788;
char* name_655;
void* right_value789;
struct sType* left_type_656;
void* right_value790;
struct sType* right_type_657;
struct sType* __list_values29___658[2];
void* right_value791;
void* right_value792;
struct list$1sTypeph* param_types_659;
void* right_value793;
void* right_value794;
char* __list_values30___660[2];
void* right_value795;
void* right_value796;
struct list$1charph* param_names_661;
void* right_value797;
void* right_value798;
struct list$1charph* param_default_parametors_662;
void* right_value799;
void* right_value800;
struct buffer* header_buf_663;
void* right_value801;
int i_664;
void* right_value802;
struct sType* param_type_665;
void* right_value803;
char* param_name_666;
void* right_value804;
_Bool _if_conditional562;
void* right_value805;
void* right_value806;
void* right_value807;
void* right_value808;
struct sFun* fun_667;
void* right_value809;
void* right_value810;
struct sFun* fun2_668;
_Bool _if_conditional563;
void* right_value811;
void* right_value812;
void* right_value813;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value817;
struct sNode* node_670;
_Bool _if_conditional570;
struct buffer* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
char* __dec_obj196;
char* __dec_obj197;
void* right_value818;
void* right_value819;
struct tuple2$2sFunpcharph* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_632, 0, sizeof(char*));
memset(&last_code2_633, 0, sizeof(char*));
memset(&last_code3_634, 0, sizeof(char*));
memset(&current_stack_frame_struct_635, 0, sizeof(struct sClass*));
memset(&equaler_636, 0, sizeof(struct sFun*));
right_value779 = (void*)0;
memset(&real_fun_name_637, 0, sizeof(char*));
right_value780 = (void*)0;
memset(&type2_638, 0, sizeof(struct sType*));
memset(&klass_639, 0, sizeof(struct sClass*));
right_value781 = (void*)0;
right_value782 = (void*)0;
memset(&source_640, 0, sizeof(struct buffer*));
memset(&name_641, 0, sizeof(char*));
right_value783 = (void*)0;
memset(&o2_saved_643, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_644, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_645, 0, sizeof(char*));
memset(&field_type_646, 0, sizeof(struct sType*));
memset(&name_645, 0, sizeof(char*));
memset(&field_type_646, 0, sizeof(struct sType*));
memset(&p_648, 0, sizeof(char*));
memset(&sline_649, 0, sizeof(int));
memset(&sname_650, 0, sizeof(char*));
memset(&head_651, 0, sizeof(char*));
memset(&source3_652, 0, sizeof(struct buffer*));
right_value784 = (void*)0;
right_value785 = (void*)0;
memset(&block_653, 0, sizeof(struct sBlock*));
right_value786 = (void*)0;
right_value787 = (void*)0;
memset(&result_type_654, 0, sizeof(struct sType*));
right_value788 = (void*)0;
memset(&name_655, 0, sizeof(char*));
right_value789 = (void*)0;
memset(&left_type_656, 0, sizeof(struct sType*));
right_value790 = (void*)0;
memset(&right_type_657, 0, sizeof(struct sType*));
right_value791 = (void*)0;
right_value792 = (void*)0;
memset(&param_types_659, 0, sizeof(struct list$1sTypeph*));
right_value793 = (void*)0;
right_value794 = (void*)0;
right_value795 = (void*)0;
right_value796 = (void*)0;
memset(&param_names_661, 0, sizeof(struct list$1charph*));
right_value797 = (void*)0;
right_value798 = (void*)0;
memset(&param_default_parametors_662, 0, sizeof(struct list$1charph*));
right_value799 = (void*)0;
right_value800 = (void*)0;
memset(&header_buf_663, 0, sizeof(struct buffer*));
right_value801 = (void*)0;
memset(&i_664, 0, sizeof(int));
right_value802 = (void*)0;
memset(&param_type_665, 0, sizeof(struct sType*));
right_value803 = (void*)0;
memset(&param_name_666, 0, sizeof(char*));
right_value804 = (void*)0;
right_value805 = (void*)0;
right_value806 = (void*)0;
right_value807 = (void*)0;
right_value808 = (void*)0;
memset(&fun_667, 0, sizeof(struct sFun*));
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&fun2_668, 0, sizeof(struct sFun*));
right_value811 = (void*)0;
right_value812 = (void*)0;
right_value813 = (void*)0;
right_value817 = (void*)0;
memset(&node_670, 0, sizeof(struct sNode*));
right_value818 = (void*)0;
right_value819 = (void*)0;
    last_code_632=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj186=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_633=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj187=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_634=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj188=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_635=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_636=((void*)0);
    real_fun_name_637=(char*)come_increment_ref_count(((char*)(right_value779=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value779 = come_decrement_ref_count2(right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_638=(struct sType*)come_increment_ref_count(((struct sType*)(right_value780=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value780, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_638;
    klass_639=type->mClass;
    if(_if_conditional559=type->mPointerNum>0&&!klass_639->mNumber,    _if_conditional559) {
        source_640=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value782=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value781=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2499, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value781, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value782, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_640,123);
        if(klass_639->mProtocol) {
            name_641="_protocol_obj";
            char source2_642[1024];
            memset(&source2_642, 0, sizeof(char)            *(1024)            );
            snprintf(source2_642,1024,"return left.%s.equals(right.%s);\n",name_641,name_641);
            buffer_append_str(source_640,source2_642);
        }
        else {
            klass_639=((struct sClass*)(right_value783=map$2charphsClassphp_operator_load_element(info->classes,klass_639->mName)));
            come_call_finalizer2(sClass_finalize,right_value783, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_643=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_639->mFields)),it_644=list$1tuple2$2charphsTypephph_begin((o2_saved_643));            !list$1tuple2$2charphsTypephph_end((o2_saved_643));            it_644=list$1tuple2$2charphsTypephph_next((o2_saved_643))            ){
                multiple_assign_var14=it_644;
                name_645=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_646=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional561=string_operator_equals(type->mClass->mName,field_type_646->mClass->mName)&&type->mPointerNum==field_type_646->mPointerNum&&field_type_646->mHeap,                _if_conditional561) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_647[1024];
                memset(&source2_647, 0, sizeof(char)                *(1024)                );
                snprintf(source2_647,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_645,name_645);
                buffer_append_str(source_640,source2_647);
                name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_646, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_643, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_640,"return true;\n");
        buffer_append_char(source_640,125);
        p_648=info->p;
        sline_649=info->sline;
        sname_650=(char*)come_increment_ref_count(info->sname);
        head_651=info->head;
        source3_652=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj189=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_640);
        come_call_finalizer2(buffer_finalize,__dec_obj189, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=source_640->buf;
        info->head=source_640->buf;
        __dec_obj190=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value784=__builtin_string(real_fun_name_637))));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_653=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value785=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value785, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_654=(struct sType*)come_increment_ref_count(((struct sType*)(right_value787=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value786=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function2.c", 2545, "struct sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value786, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value787, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_655=(char*)come_increment_ref_count(((char*)(right_value788=string_clone(real_fun_name_637))));
        right_value788 = come_decrement_ref_count2(right_value788, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_656=(struct sType*)come_increment_ref_count(((struct sType*)(right_value789=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value789, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        left_type_656->mHeap=(_Bool)0;
        right_type_657=(struct sType*)come_increment_ref_count(((struct sType*)(right_value790=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value790, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_type_657->mHeap=(_Bool)0;
        {__list_values29___658[0]=come_increment_ref_count(left_type_656);
__list_values29___658[1]=come_increment_ref_count(right_type_657);
}        param_types_659=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value792=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value791=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2551, "struct list$1sTypeph")))),2,__list_values29___658))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value791, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value792, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values30___660[0]=come_increment_ref_count(((char*)(right_value793=__builtin_string("left"))));
__list_values30___660[1]=come_increment_ref_count(((char*)(right_value794=__builtin_string("right"))));
}        param_names_661=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value796=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value795=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2552, "struct list$1charph")))),2,__list_values30___660))));
        right_value793 = come_decrement_ref_count2(right_value793, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value795, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value796, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_662=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value798=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value797=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2553, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value797, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value798, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_662,((void*)0));
        list$1charph_push_back(param_default_parametors_662,((void*)0));
        header_buf_663=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value800=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value799=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2557, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value799, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value800, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_663,((char*)(right_value801=make_come_type_name_string(result_type_654,info))));
        right_value801 = come_decrement_ref_count2(right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_663," ");
        buffer_append_str(header_buf_663,real_fun_name_637);
        buffer_append_str(header_buf_663,"(");
        for(        i_664=0;        i_664<list$1sTypeph_length(param_types_659);        i_664++        ){
            param_type_665=((struct sType*)(right_value802=list$1sTypephp_operator_load_element(param_types_659,i_664)));
            come_call_finalizer2(sType_finalize,right_value802, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_666=((char*)(right_value803=list$1charphp_operator_load_element(param_names_661,i_664)));
            right_value803 = come_decrement_ref_count2(right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_663,((char*)(right_value804=make_come_type_name_string(param_type_665,info))));
            right_value804 = come_decrement_ref_count2(right_value804, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_663," ");
            buffer_append_str(header_buf_663,param_name_666);
            if(_if_conditional562=i_664!=list$1sTypeph_length(param_types_659)-1,            _if_conditional562) {
                buffer_append_str(header_buf_663,",");
            }
        }
        buffer_append_str(header_buf_663,")");
        result_type_654->mStatic=(_Bool)0;
        fun_667=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value808=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value805=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2580, "struct sFun")))),(char*)come_increment_ref_count(name_655),(struct sType*)come_increment_ref_count(result_type_654),(struct list$1sTypeph*)come_increment_ref_count(param_types_659),(struct list$1charph*)come_increment_ref_count(param_names_661),(struct list$1charph*)come_increment_ref_count(param_default_parametors_662),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_653),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value806=buffer_to_string(header_buf_663)))),(char*)come_increment_ref_count(((char*)(right_value807=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value805, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value806 = come_decrement_ref_count2(right_value806, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value807 = come_decrement_ref_count2(right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value808, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun2_668=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value810=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value809=__builtin_string(fun_name)))))));
        right_value809 = come_decrement_ref_count2(right_value809, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value810, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional563=fun2_668==((void*)0)||fun2_668->mExternal,        _if_conditional563) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value811=string_clone(name_655)))),(struct sFun*)come_increment_ref_count(fun_667));
            right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_636=fun_667;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2596, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value813=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value812=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2596, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_667),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sFunNode_sline;
        _inf_value12->sname=(void*)sFunNode_sname;
        _inf_value12->terminated=(void*)sFunNode_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_670=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value817=_inf_value12)));
        come_call_finalizer2(sFunNode_finalize,right_value812, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value813, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value817) { right_value817 = come_decrement_ref_count2(right_value817, ((struct sNode*)right_value817)->finalize, ((struct sNode*)right_value817)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional570=!node_compile(node_670,info),        _if_conditional570) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj193=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_652);
        come_call_finalizer2(buffer_finalize,__dec_obj193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_648;
        info->head=head_651;
        info->sline=sline_649;
        __dec_obj194=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_650);
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer2(buffer_finalize,source_640, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_650 = come_decrement_ref_count2(sname_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_652, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_653, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_654, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,left_type_656, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_type_657, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_659, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_661, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_662, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_663, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_667, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_668, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_670) { node_670 = come_decrement_ref_count2(node_670, ((struct sNode*)node_670)->finalize, ((struct sNode*)node_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_635;
    __dec_obj195=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_632);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_633);
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_634);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result217__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value819=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value818=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2616, "struct tuple2$2sFunpcharph")))),equaler_636,(char*)come_increment_ref_count(real_fun_name_637))));
    last_code_632 = come_decrement_ref_count2(last_code_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_633 = come_decrement_ref_count2(last_code2_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_634 = come_decrement_ref_count2(last_code3_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_637 = come_decrement_ref_count2(real_fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value818 = come_decrement_ref_count2(right_value818, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value819, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result217__;
    last_code_632 = come_decrement_ref_count2(last_code_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_633 = come_decrement_ref_count2(last_code2_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_634 = come_decrement_ref_count2(last_code3_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_637 = come_decrement_ref_count2(real_fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_638, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_671;
char* __dec_obj198;
char* last_code2_672;
char* __dec_obj199;
char* last_code3_673;
char* __dec_obj200;
struct sClass* current_stack_frame_struct_674;
struct sFun* cloner_675;
void* right_value820;
char* real_fun_name_676;
void* right_value821;
struct sType* type2_677;
struct sClass* klass_678;
_Bool _if_conditional571;
void* right_value822;
void* right_value823;
struct buffer* source_679;
void* right_value824;
void* right_value825;
_Bool _if_conditional572;
char* name_680;
void* right_value826;
struct list$1tuple2$2charphsTypephph* o2_saved_682;
struct tuple2$2charphsTypeph* it_683;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_684;
struct sType* field_type_685;
_Bool _if_conditional573;
_Bool _if_conditional574;
_Bool _if_conditional575;
void* right_value827;
struct list$1tuple2$2charphsTypephph* o2_saved_688;
struct tuple2$2charphsTypeph* it_689;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_690;
struct sType* field_type_691;
_Bool _if_conditional576;
_Bool _if_conditional577;
_Bool _if_conditional578;
void* right_value828;
char* p_695;
int sline_696;
char* sname_697;
struct buffer* source3_698;
char* head_699;
struct buffer* __dec_obj201;
void* right_value829;
char* __dec_obj202;
void* right_value830;
struct sBlock* block_700;
void* right_value831;
struct sType* result_type_701;
void* right_value832;
char* name_702;
void* right_value833;
struct sType* self_type_703;
struct sType* __list_values31___704[1];
void* right_value834;
void* right_value835;
struct list$1sTypeph* param_types_705;
void* right_value836;
char* __list_values32___706[1];
void* right_value837;
void* right_value838;
struct list$1charph* param_names_707;
void* right_value839;
void* right_value840;
struct list$1charph* param_default_parametors_708;
void* right_value841;
void* right_value842;
struct buffer* header_buf_709;
void* right_value843;
int i_710;
void* right_value844;
struct sType* param_type_711;
void* right_value845;
char* param_name_712;
void* right_value846;
_Bool _if_conditional579;
void* right_value847;
void* right_value848;
void* right_value849;
void* right_value850;
struct sFun* fun_713;
void* right_value851;
void* right_value852;
struct sFun* fun2_714;
_Bool _if_conditional580;
void* right_value853;
void* right_value854;
void* right_value855;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value859;
struct sNode* node_716;
_Bool _if_conditional587;
char* __dec_obj205;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* right_value860;
void* right_value861;
struct tuple2$2sFunpcharph* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_671, 0, sizeof(char*));
memset(&last_code2_672, 0, sizeof(char*));
memset(&last_code3_673, 0, sizeof(char*));
memset(&current_stack_frame_struct_674, 0, sizeof(struct sClass*));
memset(&cloner_675, 0, sizeof(struct sFun*));
right_value820 = (void*)0;
memset(&real_fun_name_676, 0, sizeof(char*));
right_value821 = (void*)0;
memset(&type2_677, 0, sizeof(struct sType*));
memset(&klass_678, 0, sizeof(struct sClass*));
right_value822 = (void*)0;
right_value823 = (void*)0;
memset(&source_679, 0, sizeof(struct buffer*));
right_value824 = (void*)0;
right_value825 = (void*)0;
memset(&name_680, 0, sizeof(char*));
right_value826 = (void*)0;
memset(&o2_saved_682, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_683, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_684, 0, sizeof(char*));
memset(&field_type_685, 0, sizeof(struct sType*));
memset(&name_684, 0, sizeof(char*));
memset(&field_type_685, 0, sizeof(struct sType*));
right_value827 = (void*)0;
memset(&o2_saved_688, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_689, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_690, 0, sizeof(char*));
memset(&field_type_691, 0, sizeof(struct sType*));
memset(&name_690, 0, sizeof(char*));
memset(&field_type_691, 0, sizeof(struct sType*));
right_value828 = (void*)0;
memset(&p_695, 0, sizeof(char*));
memset(&sline_696, 0, sizeof(int));
memset(&sname_697, 0, sizeof(char*));
memset(&source3_698, 0, sizeof(struct buffer*));
memset(&head_699, 0, sizeof(char*));
right_value829 = (void*)0;
right_value830 = (void*)0;
memset(&block_700, 0, sizeof(struct sBlock*));
right_value831 = (void*)0;
memset(&result_type_701, 0, sizeof(struct sType*));
right_value832 = (void*)0;
memset(&name_702, 0, sizeof(char*));
right_value833 = (void*)0;
memset(&self_type_703, 0, sizeof(struct sType*));
right_value834 = (void*)0;
right_value835 = (void*)0;
memset(&param_types_705, 0, sizeof(struct list$1sTypeph*));
right_value836 = (void*)0;
right_value837 = (void*)0;
right_value838 = (void*)0;
memset(&param_names_707, 0, sizeof(struct list$1charph*));
right_value839 = (void*)0;
right_value840 = (void*)0;
memset(&param_default_parametors_708, 0, sizeof(struct list$1charph*));
right_value841 = (void*)0;
right_value842 = (void*)0;
memset(&header_buf_709, 0, sizeof(struct buffer*));
right_value843 = (void*)0;
memset(&i_710, 0, sizeof(int));
right_value844 = (void*)0;
memset(&param_type_711, 0, sizeof(struct sType*));
right_value845 = (void*)0;
memset(&param_name_712, 0, sizeof(char*));
right_value846 = (void*)0;
right_value847 = (void*)0;
right_value848 = (void*)0;
right_value849 = (void*)0;
right_value850 = (void*)0;
memset(&fun_713, 0, sizeof(struct sFun*));
right_value851 = (void*)0;
right_value852 = (void*)0;
memset(&fun2_714, 0, sizeof(struct sFun*));
right_value853 = (void*)0;
right_value854 = (void*)0;
right_value855 = (void*)0;
right_value859 = (void*)0;
memset(&node_716, 0, sizeof(struct sNode*));
right_value860 = (void*)0;
right_value861 = (void*)0;
    last_code_671=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_672=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_673=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj200=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_674=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_675=((void*)0);
    real_fun_name_676=(char*)come_increment_ref_count(((char*)(right_value820=create_method_name(type,(_Bool)0,fun_name,info))));
    right_value820 = come_decrement_ref_count2(right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_677=(struct sType*)come_increment_ref_count(((struct sType*)(right_value821=solve_generics(type,type,info))));
    come_call_finalizer2(sType_finalize,right_value821, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type=type2_677;
    klass_678=type->mClass;
    if(_if_conditional571=type->mPointerNum>0&&!klass_678->mNumber,    _if_conditional571) {
        source_679=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value823=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value822=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2641, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value822, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value823, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_679,"{\n");
        buffer_append_str(source_679,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_679,((char*)(right_value825=xsprintf("var result = new %s;\n",((char*)(right_value824=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value824 = come_decrement_ref_count2(right_value824, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value825 = come_decrement_ref_count2(right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_678->mProtocol) {
            name_680="_protocol_obj";
            char source2_681[1024];
            memset(&source2_681, 0, sizeof(char)            *(1024)            );
            snprintf(source2_681,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_679,source2_681);
            klass_678=((struct sClass*)(right_value826=map$2charphsClassphp_operator_load_element(info->classes,klass_678->mName)));
            come_call_finalizer2(sClass_finalize,right_value826, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_682=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_678->mFields)),it_683=list$1tuple2$2charphsTypephph_begin((o2_saved_682));            !list$1tuple2$2charphsTypephph_end((o2_saved_682));            it_683=list$1tuple2$2charphsTypephph_next((o2_saved_682))            ){
                multiple_assign_var15=it_683;
                name_684=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_685=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional573=string_operator_equals(type->mClass->mName,field_type_685->mClass->mName)&&type->mPointerNum==field_type_685->mPointerNum&&field_type_685->mHeap,                _if_conditional573) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional574=string_operator_equals(name_684,"_protocol_obj"),                _if_conditional574) {
                }
                else {
                    if(_if_conditional575=list$1sNodeph_length(field_type_685->mArrayNum)>0,                    _if_conditional575) {
                        char source2_686[1024];
                        memset(&source2_686, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_686,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_684,name_684,name_684);
                        buffer_append_str(source_679,source2_686);
                    }
                    else {
                        char source2_687[1024];
                        memset(&source2_687, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_687,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_684,name_684);
                        buffer_append_str(source_679,source2_687);
                    }
                }
                name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_685, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_682, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_678=((struct sClass*)(right_value827=map$2charphsClassphp_operator_load_element(info->classes,klass_678->mName)));
            come_call_finalizer2(sClass_finalize,right_value827, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_688=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_678->mFields)),it_689=list$1tuple2$2charphsTypephph_begin((o2_saved_688));            !list$1tuple2$2charphsTypephph_end((o2_saved_688));            it_689=list$1tuple2$2charphsTypephph_next((o2_saved_688))            ){
                multiple_assign_var16=it_689;
                name_690=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_691=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional576=string_operator_equals(type->mClass->mName,field_type_691->mClass->mName)&&type->mPointerNum==field_type_691->mPointerNum&&field_type_691->mHeap,                _if_conditional576) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_691->mHeap) {
                    char source2_692[1024];
                    memset(&source2_692, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_692,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_690,name_690,name_690);
                    buffer_append_str(source_679,source2_692);
                }
                else {
                    if(_if_conditional578=list$1sNodeph_length(field_type_691->mArrayNum)>0,                    _if_conditional578) {
                        char source2_693[1024];
                        memset(&source2_693, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_693,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_690,name_690,name_690);
                        buffer_append_str(source_679,source2_693);
                    }
                    else {
                        char source2_694[1024];
                        memset(&source2_694, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_694,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_690,name_690);
                        buffer_append_str(source_679,source2_694);
                    }
                }
                name_690 = come_decrement_ref_count2(name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,field_type_691, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_688, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_679,((char*)(right_value828=xsprintf("return result;"))));
        right_value828 = come_decrement_ref_count2(right_value828, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_679,125);
        p_695=info->p;
        sline_696=info->sline;
        sname_697=(char*)come_increment_ref_count(info->sname);
        source3_698=(struct buffer*)come_increment_ref_count(info->source);
        head_699=info->head;
        __dec_obj201=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_679);
        come_call_finalizer2(buffer_finalize,__dec_obj201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj202=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value829=__builtin_string(real_fun_name_676))));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_700=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value830=parse_block(info,(_Bool)0))));
        come_call_finalizer2(sBlock_finalize,right_value830, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        result_type_701=(struct sType*)come_increment_ref_count(((struct sType*)(right_value831=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value831, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        name_702=(char*)come_increment_ref_count(((char*)(right_value832=string_clone(real_fun_name_676))));
        right_value832 = come_decrement_ref_count2(right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_703=(struct sType*)come_increment_ref_count(((struct sType*)(right_value833=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value833, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        self_type_703->mHeap=(_Bool)0;
        {__list_values31___704[0]=come_increment_ref_count(self_type_703);
}        param_types_705=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value835=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value834=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function2.c", 2735, "struct list$1sTypeph")))),1,__list_values31___704))));
        come_call_finalizer2(list$1sTypeph_finalize,right_value834, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value835, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values32___706[0]=come_increment_ref_count(((char*)(right_value836=__builtin_string("self"))));
}        param_names_707=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value838=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value837=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2736, "struct list$1charph")))),1,__list_values32___706))));
        right_value836 = come_decrement_ref_count2(right_value836, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value837, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value838, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_708=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value840=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value839=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function2.c", 2737, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value839, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value840, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_708,((void*)0));
        header_buf_709=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value842=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value841=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function2.c", 2740, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value841, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value842, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_709,((char*)(right_value843=make_come_type_name_string(result_type_701,info))));
        right_value843 = come_decrement_ref_count2(right_value843, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_709," ");
        buffer_append_str(header_buf_709,real_fun_name_676);
        buffer_append_str(header_buf_709,"(");
        for(        i_710=0;        i_710<list$1sTypeph_length(param_types_705);        i_710++        ){
            param_type_711=((struct sType*)(right_value844=list$1sTypephp_operator_load_element(param_types_705,i_710)));
            come_call_finalizer2(sType_finalize,right_value844, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_712=((char*)(right_value845=list$1charphp_operator_load_element(param_names_707,i_710)));
            right_value845 = come_decrement_ref_count2(right_value845, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_709,((char*)(right_value846=make_come_type_name_string(param_type_711,info))));
            right_value846 = come_decrement_ref_count2(right_value846, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_709," ");
            buffer_append_str(header_buf_709,param_name_712);
            if(_if_conditional579=i_710!=list$1sTypeph_length(param_types_705)-1,            _if_conditional579) {
                buffer_append_str(header_buf_709,",");
            }
        }
        buffer_append_str(header_buf_709,")");
        result_type_701->mStatic=(_Bool)0;
        fun_713=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value850=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value847=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function2.c", 2763, "struct sFun")))),(char*)come_increment_ref_count(name_702),(struct sType*)come_increment_ref_count(result_type_701),(struct list$1sTypeph*)come_increment_ref_count(param_types_705),(struct list$1charph*)come_increment_ref_count(param_names_707),(struct list$1charph*)come_increment_ref_count(param_default_parametors_708),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_700),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value848=buffer_to_string(header_buf_709)))),(char*)come_increment_ref_count(((char*)(right_value849=__builtin_string("")))),info))));
        come_call_finalizer2(sFun_finalize,right_value847, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value848 = come_decrement_ref_count2(right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value850, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        fun_713->mCloner=(_Bool)1;
        fun2_714=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value852=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value851=__builtin_string(fun_name)))))));
        right_value851 = come_decrement_ref_count2(right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFun_finalize,right_value852, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional580=fun2_714==((void*)0)||fun2_714->mExternal,        _if_conditional580) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value853=string_clone(name_702)))),(struct sFun*)come_increment_ref_count(fun_713));
            right_value853 = come_decrement_ref_count2(right_value853, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_675=fun_713;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function2.c", 2780, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value855=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value854=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function2.c", 2780, "struct sFunNode")))),(struct sFun*)come_increment_ref_count(fun_713),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sFunNode_sline;
        _inf_value13->sname=(void*)sFunNode_sname;
        _inf_value13->terminated=(void*)sFunNode_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_716=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value859=_inf_value13)));
        come_call_finalizer2(sFunNode_finalize,right_value854, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sFunNode_finalize,right_value855, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value859) { right_value859 = come_decrement_ref_count2(right_value859, ((struct sNode*)right_value859)->finalize, ((struct sNode*)right_value859)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional587=!node_compile(node_716,info),        _if_conditional587) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj205=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_697);
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_696;
        __dec_obj206=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_698);
        come_call_finalizer2(buffer_finalize,__dec_obj206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        info->p=p_695;
        info->head=head_699;
        info->sline=sline_696;
        come_call_finalizer2(buffer_finalize,source_679, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        sname_697 = come_decrement_ref_count2(sname_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,source3_698, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sBlock_finalize,block_700, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,result_type_701, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_702 = come_decrement_ref_count2(name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,self_type_703, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,param_types_705, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_names_707, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,param_default_parametors_708, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,header_buf_709, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun_713, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sFun_finalize,fun2_714, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node_716) { node_716 = come_decrement_ref_count2(node_716, ((struct sNode*)node_716)->finalize, ((struct sNode*)node_716)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_674;
    __dec_obj207=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_671);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj208=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_672);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj209=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_673);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value861=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value860=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function2.c", 2802, "struct tuple2$2sFunpcharph")))),cloner_675,(char*)come_increment_ref_count(real_fun_name_676))));
    last_code_671 = come_decrement_ref_count2(last_code_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_672 = come_decrement_ref_count2(last_code2_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_673 = come_decrement_ref_count2(last_code3_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_676 = come_decrement_ref_count2(real_fun_name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_677, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value860 = come_decrement_ref_count2(right_value860, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value861, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result220__;
    last_code_671 = come_decrement_ref_count2(last_code_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_672 = come_decrement_ref_count2(last_code2_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_673 = come_decrement_ref_count2(last_code3_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_676 = come_decrement_ref_count2(real_fun_name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_677, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional581;
_Bool _if_conditional582;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional581=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional581) {
                come_call_finalizer2(sFun_finalize,self->mFun, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional582=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional582) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional583;
struct sFunNode* __result218__;
void* right_value856;
struct sFunNode* result_715;
_Bool _if_conditional584;
void* right_value857;
struct sFun* __dec_obj203;
_Bool _if_conditional585;
_Bool _if_conditional586;
void* right_value858;
char* __dec_obj204;
struct sFunNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value856 = (void*)0;
memset(&result_715, 0, sizeof(struct sFunNode*));
right_value857 = (void*)0;
right_value858 = (void*)0;
            if(_if_conditional583=self==(void*)0,            _if_conditional583) {
                __result218__ = __result_obj__ = (void*)0;
                return __result218__;
            }
            result_715=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value856=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode"))));
            come_call_finalizer2(sFunNode_finalize,right_value856, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional584=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional584) {
                __dec_obj203=result_715->mFun;
                result_715->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value857=sFun_clone(self->mFun))));
                come_call_finalizer2(sFun_finalize,__dec_obj203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sFun_finalize,right_value857, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional585=self!=((void*)0),            _if_conditional585) {
                result_715->sline=self->sline;
            }
            if(_if_conditional586=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional586) {
                __dec_obj204=result_715->sname;
                result_715->sname=(char*)come_increment_ref_count(((char*)(right_value858=string_clone(self->sname))));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value858 = come_decrement_ref_count2(right_value858, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result219__ = __result_obj__ = result_715;
            come_call_finalizer2(sFunNode_finalize,result_715, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result219__;
            come_call_finalizer2(sFunNode_finalize,result_715, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

