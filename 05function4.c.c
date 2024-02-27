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
struct tuple4$4voidpvoidpvoidpbool
{
    void* v1;
    void* v2;
    void* v3;
    _Bool v4;
};
struct tuple3$3voidpvoidpbool
{
    void* v1;
    void* v2;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

void backtrace_parse_type(struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

void come_init_v5();

void come_final_v5();

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* post_position_operator3_v5(struct sNode* node, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4);
static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3);
static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
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

void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_5, 0, sizeof(int));
    nest_5=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        if(_if_conditional5=*info->p==40,        _if_conditional5) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_5++;
        }
        else {
            if(_if_conditional6=*info->p==41,            _if_conditional6) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_5--;
                if(_if_conditional7=nest_5==0,                _if_conditional7) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional2;
_Bool _while_condtional3;
_Bool _while_condtional4;
_Bool _if_conditional8;
_Bool _while_condtional5;
_Bool _if_conditional9;
_Bool _if_conditional10;
int line_6;
void* right_value10;
void* right_value11;
struct buffer* fname_7;
_Bool _while_condtional6;
_Bool _if_conditional11;
_Bool _while_condtional7;
_Bool _while_condtional8;
void* right_value12;
char* __dec_obj6;
_Bool _if_conditional12;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _while_condtional11;
_Bool _while_condtional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_6, 0, sizeof(int));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&fname_7, 0, sizeof(struct buffer*));
right_value12 = (void*)0;
    while(_while_condtional2=strmemcmp(info->p,"__attribute__"),    _while_condtional2) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional3=strmemcmp(info->p,"__extension__"),    _while_condtional3) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional4=*info->p==35,    _while_condtional4) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional8=strmemcmp(info->p,"pragma"),        _if_conditional8) {
            while(_while_condtional5=*info->p,            _while_condtional5) {
                if(_if_conditional9=*info->p==10,                _if_conditional9) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional10=xisdigit(*info->p),            _if_conditional10) {
                line_6=0;
                fname_7=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 71, "struct buffer"))))))));
                come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional6=xisdigit(*info->p),                _while_condtional6) {
                    line_6=line_6*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional11=*info->p==34,                _if_conditional11) {
                    info->p++;
                    while(_while_condtional7=*info->p!=34,                    _while_condtional7) {
                        buffer_append_char(fname_7,*info->p);
                        info->p++;
                    }
                    while(_while_condtional8=*info->p!=10,                    _while_condtional8) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_6;
                __dec_obj6=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value12=buffer_to_string(fname_7))));
                __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                skip_spaces_and_lf(info);
                come_call_finalizer2(buffer_finalize,fname_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional12=*info->p==34,                _if_conditional12) {
                    info->p++;
                    while(_while_condtional9=*info->p!=34,                    _while_condtional9) {
                        info->p++;
                    }
                    while(_while_condtional10=*info->p!=10,                    _while_condtional10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional11=strmemcmp(info->p,"__attribute__"),    _while_condtional11) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional12=strmemcmp(info->p,"__extension__"),    _while_condtional12) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_8;
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_8, 0, sizeof(char));
    c_8=*(info->p+strlen(str));
    __result7__ = strmemcmp(info->p,str)&&(c_8==59||c_8==32||c_8==9||c_8==10||c_8==10);
    return __result7__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value13;
void* right_value14;
struct buffer* buf_9;
_Bool _while_condtional13;
void* right_value15;
_Bool _if_conditional13;
void* right_value16;
char* __result8__;
void* right_value17;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_9, 0, sizeof(struct buffer*));
right_value15 = (void*)0;
right_value16 = (void*)0;
right_value17 = (void*)0;
    buf_9=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 145, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    parse_sharp_v5(info);
    while(_while_condtional13=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional13) {
        buffer_append_char(buf_9,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional13=string_length(((char*)(right_value15=buffer_to_string(buf_9))))==0,    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional13) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result8__ = __result_obj__ = ((char*)(right_value16=__builtin_string("")));
        come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result8__;
    }
    __result9__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_9)));
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
    come_call_finalizer2(buffer_finalize,buf_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional14;
_Bool _if_conditional14;
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        if(_if_conditional14=*info->p==32||*info->p==9,        _if_conditional14) {
            info->p++;
        }
        else {
            if(_if_conditional15=*info->p==10,            _if_conditional15) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_10;
struct sType* it_15;
_Bool _if_conditional22;
_Bool __result20__;
_Bool _if_conditional39;
_Bool __result21__;
_Bool __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_10, 0, sizeof(struct list$1sTypeph*));
memset(&it_15, 0, sizeof(struct sType*));
    for(    o2_saved_10=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_15=list$1sTypeph_begin((o2_saved_10));    !list$1sTypeph_end((o2_saved_10));    it_15=list$1sTypeph_next((o2_saved_10))    ){
        if(_if_conditional22=is_contained_generics_class(it_15,info),        _if_conditional22) {
            __result20__ = (_Bool)1;
            come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result20__;
        }
    }
    come_call_finalizer2(list$1sTypephp_finalize,o2_saved_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        __result21__ = (_Bool)1;
        return __result21__;
    }
    __result22__ = (_Bool)0;
    return __result22__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional18;
struct sType* result_13;
struct sType* __result13__;
_Bool _if_conditional19;
struct sType* __result14__;
struct sType* result_14;
struct sType* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct sType*));
memset(&result_14, 0, sizeof(struct sType*));
        if(_if_conditional18=self==((void*)0),        _if_conditional18) {
            memset(&result_13,0,sizeof(struct sType*));
            __result13__ = __result_obj__ = result_13;
            return __result13__;
        }
        self->it=self->head;
        if(self->it) {
            __result14__ = __result_obj__ = self->it->item;
            return __result14__;
        }
        memset(&result_14,0,sizeof(struct sType*));
        __result15__ = __result_obj__ = result_14;
        return __result15__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
        __result16__ = self==((void*)0)||self->it==((void*)0);
        return __result16__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* result_16;
struct sType* __result17__;
_Bool _if_conditional21;
struct sType* __result18__;
struct sType* result_17;
struct sType* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_16, 0, sizeof(struct sType*));
memset(&result_17, 0, sizeof(struct sType*));
        if(_if_conditional20=self==((void*)0)||self->it==((void*)0),        _if_conditional20) {
            memset(&result_16,0,sizeof(struct sType*));
            __result17__ = __result_obj__ = result_16;
            return __result17__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result18__ = __result_obj__ = self->it->item;
            return __result18__;
        }
        memset(&result_17,0,sizeof(struct sType*));
        __result19__ = __result_obj__ = result_17;
        return __result19__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_18;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_19;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_18, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_19, 0, sizeof(struct list_item$1sTypeph*));
                it_18=self->head;
                while(_while_condtional15=it_18!=((void*)0),                _while_condtional15) {
                    prev_it_19=it_18;
                    it_18=it_18->next;
                    come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional23) {
                            come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional24) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional26=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional26) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional27=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional27) {
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional28=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional28) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional29=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional29) {
                                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional31=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional31) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional32=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional32) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional34=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional34) {
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional35=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional35) {
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional36=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional36) {
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional37=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional37) {
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional38=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional38) {
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional25) {
                                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_20;
_Bool _while_condtional16;
struct list_item$1sNodeph* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_21, 0, sizeof(struct list_item$1sNodeph*));
                                        it_20=self->head;
                                        while(_while_condtional16=it_20!=((void*)0),                                        _while_condtional16) {
                                            prev_it_21=it_20;
                                            it_20=it_20->next;
                                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional30) {
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_22;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_23;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_22, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_23, 0, sizeof(struct list_item$1charph*));
                                        it_22=self->head;
                                        while(_while_condtional17=it_22!=((void*)0),                                        _while_condtional17) {
                                            prev_it_23=it_22;
                                            it_22=it_22->next;
                                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional33) {
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info){
void* __result_obj__;
void* right_value18;
void* right_value19;
struct list$1sTypeph* param_types_24;
void* right_value20;
void* right_value21;
struct list$1charph* param_names_25;
void* right_value22;
void* right_value23;
struct list$1charph* param_default_parametors_26;
_Bool var_args_27;
_Bool void_param_28;
char* p_29;
int sline_30;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _while_condtional18;
_Bool _if_conditional45;
void* right_value24;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_31;
char* param_name_32;
_Bool err_33;
_Bool _if_conditional48;
void* right_value25;
void* right_value26;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result26__;
void* right_value27;
struct sType* param_type2_34;
void* right_value65;
void* right_value69;
_Bool _if_conditional123;
char* p_59;
_Bool no_comma_60;
void* right_value70;
struct sNode* node_61;
char* p2_62;
void* right_value71;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value72;
void* right_value73;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&param_types_24, 0, sizeof(struct list$1sTypeph*));
right_value20 = (void*)0;
right_value21 = (void*)0;
memset(&param_names_25, 0, sizeof(struct list$1charph*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&param_default_parametors_26, 0, sizeof(struct list$1charph*));
memset(&var_args_27, 0, sizeof(_Bool));
memset(&void_param_28, 0, sizeof(_Bool));
memset(&p_29, 0, sizeof(char*));
memset(&sline_30, 0, sizeof(int));
right_value24 = (void*)0;
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
memset(&param_type_31, 0, sizeof(struct sType*));
memset(&param_name_32, 0, sizeof(char*));
memset(&err_33, 0, sizeof(_Bool));
right_value25 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&param_type2_34, 0, sizeof(struct sType*));
right_value65 = (void*)0;
right_value69 = (void*)0;
memset(&p_59, 0, sizeof(char*));
memset(&no_comma_60, 0, sizeof(_Bool));
right_value70 = (void*)0;
memset(&node_61, 0, sizeof(struct sNode*));
memset(&p2_62, 0, sizeof(char*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
    param_types_24=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 196, "struct list$1sTypeph"))))))));
    come_call_finalizer2(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_names_25=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value21=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value20=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 197, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 198, "struct list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    var_args_27=(_Bool)0;
    expected_next_character(40,info);
    void_param_28=(_Bool)0;
    {
        p_29=info->p;
        sline_30=info->sline;
        if(_if_conditional40=strmemcmp(info->p,"void"),        _if_conditional40) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional41=*info->p==41,            _if_conditional41) {
                void_param_28=(_Bool)1;
            }
        }
        info->p=p_29;
        info->sline=sline_30;
    }
    if(void_param_28) {
        if(_if_conditional43=strmemcmp(info->p,"void"),        _if_conditional43) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional44=*info->p==41,            _if_conditional44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional45=*info->p==41,            _if_conditional45) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value24=parse_type(info,(_Bool)1,(_Bool)0)));
            param_type_31=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_32=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_33=multiple_assign_var1->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional48=!err_33,            _if_conditional48) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result26__ = __result_obj__ = ((struct tuple4$4voidpvoidpvoidpbool*)(right_value26=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value25=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 247, "struct tuple4$4voidpvoidpvoidpbool")))),((void*)0),((void*)0),((void*)0),(_Bool)0)));
                come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result26__;
            }
            param_type2_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=solve_generics(param_type_31,info->generics_type,info))));
            come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            param_type2_34->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_24,(struct sType*)come_increment_ref_count(((struct sType*)(right_value65=sType_clone(param_type2_34)))));
            come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(param_names_25,(char*)come_increment_ref_count(((char*)(right_value69=string_clone(param_name_32)))));
            right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional123=*info->p==61,            _if_conditional123) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_59=info->p;
                no_comma_60=info->no_comma;
                info->no_comma=(_Bool)1;
                node_61=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value70=expression_v13(info))));
                if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_60;
                p2_62=info->p;
                char buf_63[p2_62-p_59+1];
                memset(&buf_63, 0, sizeof(char)                *(p2_62-p_59+1)                );
                memcpy(buf_63,p_59,p2_62-p_59);
                buf_63[p2_62-p_59]=0;
                list$1charph_push_back(param_default_parametors_26,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(buf_63)))));
                right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_61) { node_61 = come_decrement_ref_count2(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_26,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional124=*info->p==44,            _if_conditional124) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional125=strmemcmp(info->p,"..."),                _if_conditional125) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_27=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(_if_conditional126=*info->p==41,                _if_conditional126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer2(sType_finalize,param_type_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            param_name_32 = come_decrement_ref_count2(param_name_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,param_type2_34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result46__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value73=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value72=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 307, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_24),(struct list$1charph*)come_increment_ref_count(param_names_25),(struct list$1charph*)come_increment_ref_count(param_default_parametors_26),var_args_27)));
    come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result46__;
    come_call_finalizer2(list$1sTypephp_finalize,param_types_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result24__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional46;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional46) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional47=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional47) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4voidpvoidpvoidpbool* tuple4$4voidpvoidpvoidpbool_initialize(struct tuple4$4voidpvoidpvoidpbool* self, void* v1, void* v2, void* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4voidpvoidpvoidpbool* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
                    __result25__ = __result_obj__ = self;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result25__;
                    come_call_finalizer2(tuple4$4voidpvoidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4voidpvoidpvoidpboolp_finalize(struct tuple4$4voidpvoidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional49;
void* right_value28;
struct list_item$1sTypeph* litem_35;
struct sType* __dec_obj7;
_Bool _if_conditional50;
void* right_value29;
struct list_item$1sTypeph* litem_36;
struct sType* __dec_obj8;
void* right_value30;
struct list_item$1sTypeph* litem_37;
struct sType* __dec_obj9;
struct list$1sTypeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1sTypeph*));
right_value29 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1sTypeph*));
right_value30 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional49=self->len==0,                _if_conditional49) {
                    litem_35=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_35->prev=((void*)0);
                    litem_35->next=((void*)0);
                    __dec_obj7=litem_35->item;
                    litem_35->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_35;
                    self->head=litem_35;
                }
                else {
                    if(_if_conditional50=self->len==1,                    _if_conditional50) {
                        litem_36=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_36->prev=self->head;
                        litem_36->next=((void*)0);
                        __dec_obj8=litem_36->item;
                        litem_36->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_36;
                        self->head->next=litem_36;
                    }
                    else {
                        litem_37=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->tail;
                        litem_37->next=((void*)0);
                        __dec_obj9=litem_37->item;
                        litem_37->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_37;
                        self->tail=litem_37;
                    }
                }
                self->len++;
                __result27__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result27__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional51;
struct sType* __result28__;
void* right_value31;
struct sType* result_38;
_Bool _if_conditional52;
_Bool _if_conditional53;
void* right_value34;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional57;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj12;
_Bool _if_conditional58;
void* right_value36;
char* __dec_obj13;
_Bool _if_conditional59;
void* right_value43;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional63;
void* right_value51;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value52;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional78;
void* right_value59;
struct list$1charph* __dec_obj26;
_Bool _if_conditional82;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional83;
_Bool _if_conditional84;
void* right_value61;
struct sNode* __dec_obj28;
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
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
void* right_value62;
struct sNode* __dec_obj29;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void* right_value63;
char* __dec_obj30;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value64;
char* __dec_obj31;
struct sType* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&result_38, 0, sizeof(struct sType*));
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value43 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
                if(_if_conditional51=self==(void*)0,                _if_conditional51) {
                    __result28__ = __result_obj__ = (void*)0;
                    return __result28__;
                }
                result_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                come_call_finalizer2(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional52=self!=((void*)0),                _if_conditional52) {
                    result_38->mClass=self->mClass;
                }
                if(_if_conditional53=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional53) {
                    __dec_obj11=result_38->mNoSolvedGenericsType;
                    result_38->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value34=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional57=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional57) {
                    __dec_obj12=result_38->mOriginalLoadVarType;
                    result_38->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional58=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional58) {
                    __dec_obj13=result_38->mGenericsName;
                    result_38->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(self->mGenericsName))));
                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional59=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional59) {
                    __dec_obj17=result_38->mGenericsTypes;
                    result_38->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional63=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional63) {
                    __dec_obj21=result_38->mArrayNum;
                    result_38->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value51=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional76=self!=((void*)0),                _if_conditional76) {
                    result_38->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional77=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional77) {
                    __dec_obj22=result_38->mParamTypes;
                    result_38->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value52=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional78=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional78) {
                    __dec_obj26=result_38->mParamNames;
                    result_38->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer2(list$1charph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional82=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional82) {
                    __dec_obj27=result_38->mResultType;
                    result_38->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    result_38->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional84=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional84) {
                    __dec_obj28=result_38->mAlignas;
                    result_38->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(self->mAlignas))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value61) { right_value61 = come_decrement_ref_count2(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional85=self!=((void*)0),                _if_conditional85) {
                    result_38->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional86=self!=((void*)0),                _if_conditional86) {
                    result_38->mShort=self->mShort;
                }
                if(_if_conditional87=self!=((void*)0),                _if_conditional87) {
                    result_38->mLong=self->mLong;
                }
                if(_if_conditional88=self!=((void*)0),                _if_conditional88) {
                    result_38->mLongLong=self->mLongLong;
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_38->mConstant=self->mConstant;
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    result_38->mRegister=self->mRegister;
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_38->mVolatile=self->mVolatile;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_38->mStatic=self->mStatic;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_38->mExtern=self->mExtern;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_38->mRestrict=self->mRestrict;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_38->mImmutable=self->mImmutable;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_38->mHeap=self->mHeap;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_38->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_38->mDelegate=self->mDelegate;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_38->mShare=self->mShare;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_38->mClone=self->mClone;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_38->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_38->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_38->mRefference=self->mRefference;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_38->mException=self->mException;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_38->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_38->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_38->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional108=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional108) {
                    __dec_obj29=result_38->mSizeNum;
                    result_38->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(self->mSizeNum))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value62) { right_value62 = come_decrement_ref_count2(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_38->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    result_38->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional111=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional111) {
                    __dec_obj30=result_38->mOriginalTypeName;
                    result_38->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value63=string_clone(self->mOriginalTypeName))));
                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_38->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_38->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_38->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    result_38->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_38->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_38->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional118=self!=((void*)0),                _if_conditional118) {
                    result_38->mInline=self->mInline;
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    result_38->mNullValue=self->mNullValue;
                }
                if(_if_conditional120=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional120) {
                    __dec_obj31=result_38->mAsmName;
                    result_38->mAsmName=(char*)come_increment_ref_count(((char*)(right_value64=string_clone(self->mAsmName))));
                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result43__ = __result_obj__ = result_38;
                come_call_finalizer2(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result43__;
                come_call_finalizer2(sType_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct tuple1$1sTypeph* __result29__;
void* right_value32;
struct tuple1$1sTypeph* result_39;
_Bool _if_conditional56;
void* right_value33;
struct sType* __dec_obj10;
struct tuple1$1sTypeph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&result_39, 0, sizeof(struct tuple1$1sTypeph*));
right_value33 = (void*)0;
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            __result29__ = __result_obj__ = (void*)0;
                            return __result29__;
                        }
                        result_39=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional56=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional56) {
                            __dec_obj10=result_39->v1;
                            result_39->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(self->v1))));
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result30__ = __result_obj__ = result_39;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result30__;
                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional55;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional55=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional55) {
                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct list$1sTypeph* __result31__;
void* right_value37;
void* right_value38;
struct list$1sTypeph* result_40;
struct list_item$1sTypeph* it_41;
_Bool _while_condtional19;
void* right_value42;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
right_value38 = (void*)0;
memset(&result_40, 0, sizeof(struct list$1sTypeph*));
memset(&it_41, 0, sizeof(struct list_item$1sTypeph*));
right_value42 = (void*)0;
                        if(_if_conditional60=self==((void*)0),                        _if_conditional60) {
                            __result31__ = __result_obj__ = ((void*)0);
                            return __result31__;
                        }
                        result_40=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value38=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_41=self->head;
                        while(_while_condtional19=it_41!=((void*)0),                        _while_condtional19) {
                            list$1sTypeph_add(result_40,(struct sType*)come_increment_ref_count(((struct sType*)(right_value42=sType_clone(it_41->item)))));
                            come_call_finalizer2(sType_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            it_41=it_41->next;
                        }
                        __result33__ = __result_obj__ = result_40;
                        come_call_finalizer2(list$1sTypephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result33__;
                        come_call_finalizer2(list$1sTypephp_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value39;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj14;
_Bool _if_conditional62;
void* right_value40;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj15;
void* right_value41;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj16;
struct list$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
right_value40 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
right_value41 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional61=self->len==0,                                _if_conditional61) {
                                    litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value39=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_42->prev=((void*)0);
                                    litem_42->next=((void*)0);
                                    __dec_obj14=litem_42->item;
                                    litem_42->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_42;
                                    self->head=litem_42;
                                }
                                else {
                                    if(_if_conditional62=self->len==1,                                    _if_conditional62) {
                                        litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value40=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_43->prev=self->head;
                                        litem_43->next=((void*)0);
                                        __dec_obj15=litem_43->item;
                                        litem_43->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_43;
                                        self->head->next=litem_43;
                                    }
                                    else {
                                        litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value41=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_44->prev=self->tail;
                                        litem_44->next=((void*)0);
                                        __dec_obj16=litem_44->item;
                                        litem_44->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_44;
                                        self->tail=litem_44;
                                    }
                                }
                                self->len++;
                                __result32__ = __result_obj__ = self;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result32__;
                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct list$1sNodeph* __result34__;
void* right_value44;
void* right_value45;
struct list$1sNodeph* result_45;
struct list_item$1sNodeph* it_46;
_Bool _while_condtional20;
void* right_value50;
struct list$1sNodeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_45, 0, sizeof(struct list$1sNodeph*));
memset(&it_46, 0, sizeof(struct list_item$1sNodeph*));
right_value50 = (void*)0;
                        if(_if_conditional64=self==((void*)0),                        _if_conditional64) {
                            __result34__ = __result_obj__ = ((void*)0);
                            return __result34__;
                        }
                        result_45=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value44=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                        come_call_finalizer2(list$1sNodephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_46=self->head;
                        while(_while_condtional20=it_46!=((void*)0),                        _while_condtional20) {
                            list$1sNodeph_add(result_45,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(it_46->item)))));
                            if(right_value50) { right_value50 = come_decrement_ref_count2(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_46=it_46->next;
                        }
                        __result39__ = __result_obj__ = result_45;
                        come_call_finalizer2(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result39__;
                        come_call_finalizer2(list$1sNodephp_finalize,result_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result35__ = __result_obj__ = self;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result35__;
                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional65;
void* right_value46;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj18;
_Bool _if_conditional66;
void* right_value47;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj19;
void* right_value48;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
right_value47 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
right_value48 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional65=self->len==0,                                _if_conditional65) {
                                    litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value46=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_47->prev=((void*)0);
                                    litem_47->next=((void*)0);
                                    __dec_obj18=litem_47->item;
                                    litem_47->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_47;
                                    self->head=litem_47;
                                }
                                else {
                                    if(_if_conditional66=self->len==1,                                    _if_conditional66) {
                                        litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value47=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_48->prev=self->head;
                                        litem_48->next=((void*)0);
                                        __dec_obj19=litem_48->item;
                                        litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_48;
                                        self->head->next=litem_48;
                                    }
                                    else {
                                        litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value48=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_49->prev=self->tail;
                                        litem_49->next=((void*)0);
                                        __dec_obj20=litem_49->item;
                                        litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_49;
                                        self->tail=litem_49;
                                    }
                                }
                                self->len++;
                                __result36__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result36__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional67;
struct sNode* __result37__;
void* right_value49;
struct sNode* result_50;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&result_50, 0, sizeof(struct sNode*));
                                if(_if_conditional67=self==(void*)0,                                _if_conditional67) {
                                    __result37__ = __result_obj__ = (void*)0;
                                    return __result37__;
                                }
                                result_50=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                if(right_value49) { right_value49 = come_decrement_ref_count2(right_value49, ((struct sNode*)right_value49)->finalize, ((struct sNode*)right_value49)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional68=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional68) {
                                    result_50->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional69=self!=((void*)0),                                _if_conditional69) {
                                    result_50->finalize=self->finalize;
                                }
                                if(_if_conditional70=self!=((void*)0),                                _if_conditional70) {
                                    result_50->clone=self->clone;
                                }
                                if(_if_conditional71=self!=((void*)0),                                _if_conditional71) {
                                    result_50->compile=self->compile;
                                }
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    result_50->sline=self->sline;
                                }
                                if(_if_conditional73=self!=((void*)0),                                _if_conditional73) {
                                    result_50->sname=self->sname;
                                }
                                if(_if_conditional74=self!=((void*)0),                                _if_conditional74) {
                                    result_50->terminated=self->terminated;
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_50->kind=self->kind;
                                }
                                __result38__ = __result_obj__ = result_50;
                                if(result_50) { result_50 = come_decrement_ref_count2(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result38__;
                                if(result_50) { result_50 = come_decrement_ref_count2(result_50, ((struct sNode*)result_50)->finalize, ((struct sNode*)result_50)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional79;
struct list$1charph* __result40__;
void* right_value53;
void* right_value54;
struct list$1charph* result_51;
struct list_item$1charph* it_52;
_Bool _while_condtional21;
void* right_value58;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1charph*));
memset(&it_52, 0, sizeof(struct list_item$1charph*));
right_value58 = (void*)0;
                        if(_if_conditional79=self==((void*)0),                        _if_conditional79) {
                            __result40__ = __result_obj__ = ((void*)0);
                            return __result40__;
                        }
                        result_51=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value54=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                        come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1charphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_52=self->head;
                        while(_while_condtional21=it_52!=((void*)0),                        _while_condtional21) {
                            list$1charph_add(result_51,(char*)come_increment_ref_count(((char*)(right_value58=string_clone(it_52->item)))));
                            right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_52=it_52->next;
                        }
                        __result42__ = __result_obj__ = result_51;
                        come_call_finalizer2(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result42__;
                        come_call_finalizer2(list$1charphp_finalize,result_51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional80;
void* right_value55;
struct list_item$1charph* litem_53;
char* __dec_obj23;
_Bool _if_conditional81;
void* right_value56;
struct list_item$1charph* litem_54;
char* __dec_obj24;
void* right_value57;
struct list_item$1charph* litem_55;
char* __dec_obj25;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
right_value56 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value57 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional80=self->len==0,                                _if_conditional80) {
                                    litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value55=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_53->prev=((void*)0);
                                    litem_53->next=((void*)0);
                                    __dec_obj23=litem_53->item;
                                    litem_53->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_53;
                                    self->head=litem_53;
                                }
                                else {
                                    if(_if_conditional81=self->len==1,                                    _if_conditional81) {
                                        litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value56=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_54->prev=self->head;
                                        litem_54->next=((void*)0);
                                        __dec_obj24=litem_54->item;
                                        litem_54->item=(char*)come_increment_ref_count(item);
                                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_54;
                                        self->head->next=litem_54;
                                    }
                                    else {
                                        litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value57=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                        come_call_finalizer2(list_item$1charphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        litem_55->prev=self->tail;
                                        litem_55->next=((void*)0);
                                        __dec_obj25=litem_55->item;
                                        litem_55->item=(char*)come_increment_ref_count(item);
                                        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_55;
                                        self->tail=litem_55;
                                    }
                                }
                                self->len++;
                                __result41__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result41__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional121;
void* right_value66;
struct list_item$1charph* litem_56;
char* __dec_obj32;
_Bool _if_conditional122;
void* right_value67;
struct list_item$1charph* litem_57;
char* __dec_obj33;
void* right_value68;
struct list_item$1charph* litem_58;
char* __dec_obj34;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
right_value67 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1charph*));
right_value68 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional121=self->len==0,                _if_conditional121) {
                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_56->prev=((void*)0);
                    litem_56->next=((void*)0);
                    __dec_obj32=litem_56->item;
                    litem_56->item=(char*)come_increment_ref_count(item);
                    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_56;
                    self->head=litem_56;
                }
                else {
                    if(_if_conditional122=self->len==1,                    _if_conditional122) {
                        litem_57=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_57->prev=self->head;
                        litem_57->next=((void*)0);
                        __dec_obj33=litem_57->item;
                        litem_57->item=(char*)come_increment_ref_count(item);
                        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_57;
                        self->head->next=litem_57;
                    }
                    else {
                        litem_58=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_58->prev=self->tail;
                        litem_58->next=((void*)0);
                        __dec_obj34=litem_58->item;
                        litem_58->item=(char*)come_increment_ref_count(item);
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_58;
                        self->tail=litem_58;
                    }
                }
                self->len++;
                __result44__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result44__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj35;
struct list$1charph* __dec_obj36;
struct list$1charph* __dec_obj37;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj35=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj36=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer2(list$1charph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj37=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer2(list$1charph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        self->v4=v4;
        __result45__ = __result_obj__ = self;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result45__;
        come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1sTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,v3, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional127) {
                come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional128=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional128) {
                come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional129=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional129) {
                come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
void* right_value74;
struct sType* right_type2_64;
struct sType* left_no_solved_generics_type_65;
struct sType* right_no_solved_generics_type_66;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int i_67;
void* right_value75;
void* right_value76;
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
void* right_value77;
void* right_value78;
struct buffer* buf2_71;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
void* right_value83;
char* __dec_obj38;
void* right_value84;
struct sType* __dec_obj39;
void* right_value85;
struct sType* __dec_obj40;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
void* right_value86;
char* method_name_72;
void* right_value87;
_Bool _if_conditional173;
struct sType* obj_type_75;
_Bool _if_conditional174;
struct sType* obj_type2_76;
void* right_value88;
void* right_value89;
char* __dec_obj41;
void* right_value90;
void* right_value91;
struct buffer* buf2_77;
void* right_value92;
void* right_value93;
struct sType* type_78;
void* right_value94;
void* right_value95;
char* __dec_obj42;
void* right_value96;
struct sType* __dec_obj43;
void* right_value97;
struct sType* __dec_obj44;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&right_type2_64, 0, sizeof(struct sType*));
memset(&left_no_solved_generics_type_65, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_66, 0, sizeof(struct sType*));
memset(&i_67, 0, sizeof(int));
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
memset(&buf2_71, 0, sizeof(struct buffer*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&method_name_72, 0, sizeof(char*));
right_value87 = (void*)0;
memset(&obj_type_75, 0, sizeof(struct sType*));
memset(&obj_type2_76, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&buf2_77, 0, sizeof(struct buffer*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&type_78, 0, sizeof(struct sType*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
    right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(right_type))));
    come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    left_no_solved_generics_type_65=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_66=right_type2_64->mNoSolvedGenericsType->v1;
    if(_if_conditional130=left_no_solved_generics_type_65&&right_no_solved_generics_type_66,    _if_conditional130) {
        if(_if_conditional131=list$1sTypeph_length(left_no_solved_generics_type_65->mGenericsTypes)>0,        _if_conditional131) {
            if(_if_conditional132=list$1sTypeph_length(left_no_solved_generics_type_65->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_66->mGenericsTypes),            _if_conditional132) {
                err_msg(info,"generics type parametor number error");
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(left_no_solved_generics_type_65->mGenericsTypes));
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(right_no_solved_generics_type_66->mGenericsTypes));
                exit(2);
            }
            for(            i_67=0;            i_67<list$1sTypeph_length(left_no_solved_generics_type_65->mGenericsTypes);            i_67++            ){
                check_assign_type(msg,((struct sType*)(right_value75=list$1sTypephp_operator_load_element(left_no_solved_generics_type_65->mGenericsTypes,i_67))),((struct sType*)(right_value76=list$1sTypephp_operator_load_element(right_no_solved_generics_type_66->mGenericsTypes,i_67))),come_value,(_Bool)1,info);
                come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            check_assign_type(msg,left_no_solved_generics_type_65,right_no_solved_generics_type_66,come_value,(_Bool)0,info);
        }
    }
    else {
        if(check_no_pointer) {
            if(_if_conditional136=left_type->mPointerNum>0,            _if_conditional136) {
                if(_if_conditional137=right_type2_64->mPointerNum>0,                _if_conditional137) {
                    if(_if_conditional138=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                    _if_conditional138) {
                    }
                    else {
                        if(_if_conditional139=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                        _if_conditional139) {
                        }
                        else {
                            if(_if_conditional140=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                            _if_conditional140) {
                                err_msg(info,"type error1");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                exit(2);
                            }
                        }
                    }
                }
                else {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                    exit(2);
                }
            }
            else {
                if(_if_conditional141=left_type->mPointerNum==0&&right_type2_64->mPointerNum>0,                _if_conditional141) {
                    err_msg(info,"type error3");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                    exit(2);
                }
                else {
                    if(_if_conditional142=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                    _if_conditional142) {
                        err_msg(info,"type error4");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                        exit(2);
                    }
                }
            }
        }
        else {
            if(_if_conditional143=!left_type->mNullValue&&right_type2_64->mNullValue,            _if_conditional143) {
                if(_if_conditional144=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                _if_conditional144) {
                }
                else {
                    if(_if_conditional145=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum==0,                        _if_conditional146) {
                            err_msg(info,"type error6");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                            exit(2);
                        }
                        else {
                            buf2_71=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value78=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value77=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 387, "struct buffer"))))))));
                            come_call_finalizer2(buffer_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            buffer_append_str(buf2_71,((char*)(right_value82=xsprintf("come_null_check(\%s, \"\%s\", \%s)",((char*)(right_value79=string_to_string(come_value->c_value))),((char*)(right_value80=string_to_string(info->sname))),((char*)(right_value81=int_to_string(info->sline)))))));
                            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj38=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value83=buffer_to_string(buf2_71))));
                            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj39=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_value->var=((void*)0);
                            __dec_obj40=right_type2_64;
                            right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(left_type))));
                            come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(buffer_finalize,buf2_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            else {
                if(_if_conditional147=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                _if_conditional147) {
                    if(_if_conditional148=string_operator_equals(right_type2_64->mClass->mName,"char")&&right_type2_64->mPointerNum==1,                    _if_conditional148) {
                    }
                    else {
                        if(_if_conditional149=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                        _if_conditional149) {
                        }
                        else {
                            if(_if_conditional150=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                            _if_conditional150) {
                            }
                            else {
                                if(_if_conditional151=string_operator_equals(right_type2_64->mClass->mName,"lambda"),                                _if_conditional151) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                    exit(2);
                                }
                                else {
                                    if(_if_conditional152=string_operator_equals(right_type2_64->mClass->mName,"void")&&right_type2_64->mPointerNum>0,                                    _if_conditional152) {
                                    }
                                    else {
                                        if(_if_conditional153=string_operator_equals(right_type2_64->mClass->mName,"void"),                                        _if_conditional153) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                            exit(2);
                                        }
                                        else {
                                            method_name_72=(char*)come_increment_ref_count(((char*)(right_value86=create_method_name(right_type2_64,(_Bool)0,"to_string",info))));
                                            right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional173=((struct sFun*)(right_value87=map$2charphsFunph_at(info->funcs,method_name_72,((void*)0))))==((void*)0),                                            come_call_finalizer2(sFun_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                                            _if_conditional173) {
                                                obj_type_75=right_type2_64->mNoSolvedGenericsType->v1;
                                                if(_if_conditional174=obj_type_75&&list$1sTypeph_length(obj_type_75->mGenericsTypes)>0,                                                _if_conditional174) {
                                                    obj_type2_76=right_type2_64;
                                                    __dec_obj41=method_name_72;
                                                    method_name_72=(char*)come_increment_ref_count(((char*)(right_value89=make_generics_function(obj_type2_76,(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string("to_string")))),info))));
                                                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    err_msg(info,"require to_string implementation(%s)",right_type2_64->mClass->mName);
                                                    exit(1);
                                                }
                                            }
                                            buf2_77=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value90=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 434, "struct buffer"))))))));
                                            come_call_finalizer2(buffer_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(buffer_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            buffer_append_str(buf2_77,method_name_72);
                                            buffer_append_str(buf2_77,"(");
                                            buffer_append_str(buf2_77,come_value->c_value);
                                            buffer_append_str(buf2_77,")");
                                            type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 441, "struct sType")))),"char*",(_Bool)0,info))));
                                            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            type_78->mHeap=(_Bool)1;
                                            __dec_obj42=come_value->c_value;
                                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value95=append_object_to_right_values(((char*)(right_value94=buffer_to_string(buf2_77))),(struct sType*)come_increment_ref_count(type_78),info))));
                                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            __dec_obj43=come_value->type;
                                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(type_78))));
                                            come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_value->var=((void*)0);
                                            __dec_obj44=right_type2_64;
                                            right_type2_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(type_78))));
                                            come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            method_name_72 = come_decrement_ref_count2(method_name_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(buffer_finalize,buf2_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,type_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional175=left_type->mPointerNum>0,                    _if_conditional175) {
                        if(_if_conditional176=right_type2_64->mPointerNum>0,                        _if_conditional176) {
                            if(_if_conditional177=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                            _if_conditional177) {
                            }
                            else {
                                if(_if_conditional178=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                _if_conditional178) {
                                }
                                else {
                                    if(_if_conditional179=string_operator_not_equals(left_type->mClass->mName,right_type2_64->mClass->mName),                                    _if_conditional179) {
                                        err_msg(info,"type error5");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                        exit(2);
                                    }
                                    else {
                                        if(_if_conditional180=left_type->mPointerNum!=right_type2_64->mPointerNum,                                        _if_conditional180) {
                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                        }
                                        else {
                                            if(_if_conditional181=list$1sNodeph_length(right_type2_64->mArrayNum)>0,                                            _if_conditional181) {
                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum,list$1sNodeph_length(right_type2_64->mArrayNum));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional182=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_64->mClass->mName,"void"),                            _if_conditional182) {
                            }
                            else {
                                if(_if_conditional183=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_64->mClass->mName,"va_list"),                                _if_conditional183) {
                                }
                                else {
                                    if(_if_conditional184=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_64->mClass->mName,"__builtin_va_list"),                                    _if_conditional184) {
                                    }
                                    else {
                                        if(_if_conditional185=!(string_operator_equals(right_type2_64->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_64->mPointerNum==0,                                        _if_conditional185) {
                                            err_msg(info,"type error6");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_64->mClass->mName,right_type2_64->mPointerNum);
                                            exit(2);
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
    come_call_finalizer2(sType_finalize,right_type2_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result47__;
memset(&__result_obj__, 0, sizeof(void*));
            __result47__ = self->len;
            return __result47__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional133;
struct list_item$1sTypeph* it_68;
int i_69;
_Bool _while_condtional22;
_Bool _if_conditional134;
struct sType* __result48__;
struct sType* default_value_70;
struct sType* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_69, 0, sizeof(int));
memset(&default_value_70, 0, sizeof(struct sType*));
                    if(_if_conditional133=position<0,                    _if_conditional133) {
                        position+=self->len;
                    }
                    it_68=self->head;
                    i_69=0;
                    while(_while_condtional22=it_68!=((void*)0),                    _while_condtional22) {
                        if(_if_conditional134=position==i_69,                        _if_conditional134) {
                            __result48__ = __result_obj__ = it_68->item;
                            return __result48__;
                        }
                        it_68=it_68->next;
                        i_69++;
                    }
                    memset(&default_value_70,0,sizeof(struct sType*));
                    __result49__ = __result_obj__ = default_value_70;
                    come_call_finalizer2(sType_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result49__;
                    come_call_finalizer2(sType_finalize,default_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_73;
unsigned int it_74;
_Bool _while_condtional23;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sFun* __result50__;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sFun* __result51__;
struct sFun* __result52__;
struct sFun* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_73, 0, sizeof(unsigned int));
memset(&it_74, 0, sizeof(unsigned int));
                                                hash_73=string_get_hash_key(((char*)key))%self->size;
                                                it_74=hash_73;
                                                while(_while_condtional23=(_Bool)1,                                                _while_condtional23) {
                                                    if(_if_conditional154=self->item_existance[it_74],                                                    _if_conditional154) {
                                                        if(_if_conditional155=string_equals(self->keys[it_74],key),                                                        _if_conditional155) {
                                                            __result50__ = __result_obj__ = self->items[it_74];
                                                            come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result50__;
                                                        }
                                                        it_74++;
                                                        if(_if_conditional171=it_74>=self->size,                                                        _if_conditional171) {
                                                            it_74=0;
                                                        }
                                                        else {
                                                            if(_if_conditional172=it_74==hash_73,                                                            _if_conditional172) {
                                                                __result51__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result51__;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        __result52__ = __result_obj__ = default_value;
                                                        come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result52__;
                                                    }
                                                }
                                                __result53__ = __result_obj__ = default_value;
                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result53__;
                                                come_call_finalizer2(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional156=self!=((void*)0)&&self->mName!=((void*)0),                                                                _if_conditional156) {
                                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional157=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                _if_conditional157) {
                                                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional158=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                _if_conditional158) {
                                                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional159=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                _if_conditional159) {
                                                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional160=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                _if_conditional160) {
                                                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional161=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                _if_conditional161) {
                                                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional162=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                _if_conditional162) {
                                                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional165=self!=((void*)0)&&self->mSource!=((void*)0),                                                                _if_conditional165) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional166=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                _if_conditional166) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional167=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                _if_conditional167) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional168=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                _if_conditional168) {
                                                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional169=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                _if_conditional169) {
                                                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional170=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                _if_conditional170) {
                                                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional163;
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional163=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                        _if_conditional163) {
                                                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional164=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                        _if_conditional164) {
                                                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                                                __result54__ = self->len;
                                                return __result54__;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value98;
struct sType* result_type_79;
_Bool _if_conditional186;
char* var_name_80;
char* p_81;
int sline_82;
_Bool _if_conditional187;
void* right_value99;
char* word_83;
_Bool _if_conditional188;
_Bool between_brace_84;
char* p_85;
int sline_86;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value100;
char* word_87;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _while_condtional24;
char* p_88;
int sline_89;
_Bool _if_conditional194;
void* right_value101;
char* word_90;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value102;
char* __dec_obj45;
static int num_anonymous_var_name_91=0;
void* right_value103;
char* __dec_obj46;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool no_comma_92;
void* right_value104;
struct sNode* node_93;
struct sNode* __dec_obj47;
_Bool _while_condtional25;
char* p_94;
int sline_95;
_Bool _if_conditional200;
void* right_value105;
char* word_96;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value106;
struct sNode* node_97;
void* right_value110;
void* right_value111;
struct tuple2$2sTypephcharph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_type_79, 0, sizeof(struct sType*));
memset(&var_name_80, 0, sizeof(char*));
memset(&p_81, 0, sizeof(char*));
memset(&sline_82, 0, sizeof(int));
right_value99 = (void*)0;
memset(&word_83, 0, sizeof(char*));
memset(&between_brace_84, 0, sizeof(_Bool));
memset(&p_85, 0, sizeof(char*));
memset(&sline_86, 0, sizeof(int));
right_value100 = (void*)0;
memset(&word_87, 0, sizeof(char*));
memset(&p_88, 0, sizeof(char*));
memset(&sline_89, 0, sizeof(int));
right_value101 = (void*)0;
memset(&word_90, 0, sizeof(char*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&no_comma_92, 0, sizeof(_Bool));
right_value104 = (void*)0;
memset(&node_93, 0, sizeof(struct sNode*));
memset(&p_94, 0, sizeof(char*));
memset(&sline_95, 0, sizeof(int));
right_value105 = (void*)0;
memset(&word_96, 0, sizeof(char*));
right_value106 = (void*)0;
memset(&node_97, 0, sizeof(struct sNode*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_clone(base_type_name))));
    come_call_finalizer2(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional186=!first,    _if_conditional186) {
        result_type_79->mPointerNum=0;
    }
    var_name_80=((void*)0);
    {
        p_81=info->p;
        sline_82=info->sline;
        if(_if_conditional187=xisalpha(*info->p)||*info->p==95,        _if_conditional187) {
            word_83=(char*)come_increment_ref_count(((char*)(right_value99=parse_word(info))));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=string_operator_equals(word_83,"const")||string_operator_equals(word_83,"__restrict")||string_operator_equals(word_83,"restrict")||string_operator_equals(word_83,"__user")||string_operator_equals(word_83,"volatile")||string_operator_equals(word_83,"_Nonnull")||string_operator_equals(word_83,"_Nullable")||string_operator_equals(word_83,"_Null_unspecified")||string_operator_equals(word_83,"__user"),            _if_conditional188) {
            }
            else {
                info->p=p_81;
                info->sline=sline_82;
            }
            word_83 = come_decrement_ref_count2(word_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_81;
            info->sline=sline_82;
        }
    }
    between_brace_84=(_Bool)0;
    {
        p_85=info->p;
        sline_86=info->sline;
        if(_if_conditional189=*info->p==40,        _if_conditional189) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional190=xisalpha(*info->p)||*info->p==95,            _if_conditional190) {
                word_87=(char*)come_increment_ref_count(((char*)(right_value100=parse_word(info))));
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional191=is_type_name(word_87,info),                _if_conditional191) {
                }
                else {
                    if(_if_conditional192=*info->p==41,                    _if_conditional192) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional193=*info->p!=40,                        _if_conditional193) {
                            between_brace_84=(_Bool)1;
                        }
                    }
                }
                word_87 = come_decrement_ref_count2(word_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_85;
        info->sline=sline_86;
    }
    parse_sharp_v5(info);
    while(_while_condtional24=*info->p==42,    _while_condtional24) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_88=info->p;
            sline_89=info->sline;
            if(_if_conditional194=xisalpha(*info->p)||*info->p==95,            _if_conditional194) {
                word_90=(char*)come_increment_ref_count(((char*)(right_value101=parse_word(info))));
                right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional195=string_operator_equals(word_90,"const")||string_operator_equals(word_90,"__restrict")||string_operator_equals(word_90,"restrict")||string_operator_equals(word_90,"__user")||string_operator_equals(word_90,"volatile")||string_operator_equals(word_90,"_Nonnull")||string_operator_equals(word_90,"_Nullable")||string_operator_equals(word_90,"_Null_unspecified")||string_operator_equals(word_90,"__user"),                _if_conditional195) {
                }
                else {
                    info->p=p_88;
                    info->sline=sline_89;
                }
                word_90 = come_decrement_ref_count2(word_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_88;
                info->sline=sline_89;
            }
        }
        result_type_79->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional196=between_brace_84&&*info->p==40,    _if_conditional196) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional197=xisalnum(*info->p)||*info->p==95,    _if_conditional197) {
        __dec_obj45=var_name_80;
        var_name_80=(char*)come_increment_ref_count(((char*)(right_value102=parse_word(info))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        num_anonymous_var_name_91++;
        __dec_obj46=var_name_80;
        var_name_80=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_91))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional198=between_brace_84&&*info->p==41,    _if_conditional198) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional199=*info->p==58,    _if_conditional199) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_92=info->no_comma;
        info->no_comma=(_Bool)1;
        node_93=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=expression_v13(info))));
        if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_92;
        __dec_obj47=result_type_79->mSizeNum;
        result_type_79->mSizeNum=(struct sNode*)come_increment_ref_count(node_93);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_93) { node_93 = come_decrement_ref_count2(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(_while_condtional25=*info->p==91,    _while_condtional25) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_94=info->p;
            sline_95=info->sline;
            if(_if_conditional200=xisalpha(*info->p)||*info->p==95,            _if_conditional200) {
                word_96=(char*)come_increment_ref_count(((char*)(right_value105=parse_word(info))));
                right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional201=string_operator_equals(word_96,"const")||string_operator_equals(word_96,"__restrict")||string_operator_equals(word_96,"restrict")||string_operator_equals(word_96,"__user")||string_operator_equals(word_96,"volatile")||string_operator_equals(word_96,"_Nonnull")||string_operator_equals(word_96,"_Nullable")||string_operator_equals(word_96,"_Null_unspecified")||string_operator_equals(word_96,"__user"),                _if_conditional201) {
                }
                else {
                    info->p=p_94;
                    info->sline=sline_95;
                }
                word_96 = come_decrement_ref_count2(word_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_94;
                info->sline=sline_95;
            }
        }
        if(_if_conditional202=*info->p==93,        _if_conditional202) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_79->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_97=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=expression_v13(info))));
        if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(result_type_79->mArrayNum,(struct sNode*)come_increment_ref_count(node_97));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_97) { node_97 = come_decrement_ref_count2(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result57__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value111=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value110=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 647, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_79),(char*)come_increment_ref_count(var_name_80))));
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_80 = come_decrement_ref_count2(var_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result57__;
    come_call_finalizer2(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,result_type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_80 = come_decrement_ref_count2(var_name_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional203;
void* right_value107;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj48;
_Bool _if_conditional204;
void* right_value108;
struct list_item$1sNodeph* litem_99;
struct sNode* __dec_obj49;
void* right_value109;
struct list_item$1sNodeph* litem_100;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1sNodeph*));
right_value108 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional203=self->len==0,            _if_conditional203) {
                litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sNodeph"))));
                come_call_finalizer2(list_item$1sNodephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_98->prev=((void*)0);
                litem_98->next=((void*)0);
                __dec_obj48=litem_98->item;
                litem_98->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_98;
                self->head=litem_98;
            }
            else {
                if(_if_conditional204=self->len==1,                _if_conditional204) {
                    litem_99=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_99->prev=self->head;
                    litem_99->next=((void*)0);
                    __dec_obj49=litem_99->item;
                    litem_99->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_99;
                    self->head->next=litem_99;
                }
                else {
                    litem_100=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sNodeph"))));
                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_100->prev=self->tail;
                    litem_100->next=((void*)0);
                    __dec_obj50=litem_100->item;
                    litem_100->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail->next=litem_100;
                    self->tail=litem_100;
                }
            }
            self->len++;
            __result55__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result55__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj51;
char* __dec_obj52;
struct tuple2$2sTypephcharph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj51=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj52=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result56__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result56__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional205=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional205) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional206=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional206) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_101;
int sline_102;
_Bool _if_conditional207;
void* right_value112;
char* word_103;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_101, 0, sizeof(char*));
memset(&sline_102, 0, sizeof(int));
right_value112 = (void*)0;
memset(&word_103, 0, sizeof(char*));
    p_101=info->p;
    sline_102=info->sline;
    if(_if_conditional207=xisalpha(*info->p)||*info->p==95,    _if_conditional207) {
        word_103=(char*)come_increment_ref_count(((char*)(right_value112=parse_word(info))));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional208=string_operator_equals(word_103,"const")||string_operator_equals(word_103,"__restrict")||string_operator_equals(word_103,"restrict")||string_operator_equals(word_103,"__user")||string_operator_equals(word_103,"volatile")||string_operator_equals(word_103,"_Nonnull")||string_operator_equals(word_103,"_Nullable")||string_operator_equals(word_103,"_Null_unspecified")||string_operator_equals(word_103,"__user"),        _if_conditional208) {
        }
        else {
            info->p=p_101;
            info->sline=sline_102;
        }
        word_103 = come_decrement_ref_count2(word_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_101;
        info->sline=sline_102;
    }
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
char* head_104;
int head_sline_105;
void* right_value113;
char* type_name_106;
_Bool _while_condtional26;
void* right_value114;
char* __dec_obj53;
_Bool constant_107;
_Bool static__108;
_Bool volatile__109;
_Bool register__110;
_Bool unsigned__111;
_Bool long__112;
_Bool long_long_113;
_Bool short__114;
_Bool restrict__115;
_Bool struct__116;
_Bool union__117;
_Bool enum__118;
_Bool no_heap_119;
_Bool extern__120;
_Bool inline__121;
_Bool come_mem_core__122;
struct sNode* alignas__123;
_Bool anonymous_type_124;
_Bool anonymous_name_125;
_Bool _while_condtional27;
_Bool _if_conditional209;
_Bool _if_conditional210;
char* p_126;
int sline_127;
void* right_value115;
_Bool _if_conditional211;
void* right_value116;
char* __dec_obj54;
void* right_value117;
char* __dec_obj55;
void* right_value118;
char* __dec_obj56;
_Bool _if_conditional212;
char* p_128;
int sline_129;
_Bool _while_condtional28;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value119;
void* right_value120;
struct tuple3$3sTypephcharphbool* __result59__;
_Bool _if_conditional216;
char* p_130;
int sline_131;
void* right_value121;
_Bool _if_conditional217;
void* right_value122;
void* right_value123;
struct tuple3$3sTypephcharphbool* __result60__;
_Bool _if_conditional218;
_Bool _if_conditional219;
char* p_132;
int sline_133;
void* right_value124;
_Bool _if_conditional220;
void* right_value125;
char* __dec_obj59;
void* right_value126;
char* __dec_obj60;
void* right_value127;
char* __dec_obj61;
_Bool _if_conditional221;
char* p_134;
int sline_135;
void* right_value128;
_Bool _if_conditional222;
void* right_value129;
void* right_value130;
struct tuple3$3sTypephcharphbool* __result61__;
_Bool _if_conditional223;
_Bool _if_conditional224;
char* p_136;
int sline_137;
void* right_value131;
_Bool _if_conditional225;
void* right_value132;
void* right_value133;
struct tuple3$3sTypephcharphbool* __result62__;
void* right_value134;
char* __dec_obj62;
void* right_value135;
char* __dec_obj63;
_Bool _if_conditional226;
char* p_138;
int sline_139;
void* right_value136;
_Bool _if_conditional227;
void* right_value137;
void* right_value138;
struct tuple3$3sTypephcharphbool* __result63__;
_Bool _if_conditional228;
void* right_value139;
struct sNode* exp_140;
struct sNode* __dec_obj64;
void* right_value140;
char* __dec_obj65;
_Bool _if_conditional229;
void* right_value141;
char* __dec_obj66;
_Bool _if_conditional230;
void* right_value142;
char* __dec_obj67;
_Bool _if_conditional231;
void* right_value143;
char* __dec_obj68;
_Bool _if_conditional232;
void* right_value144;
char* __dec_obj69;
_Bool _if_conditional233;
void* right_value145;
char* __dec_obj70;
_Bool _if_conditional234;
void* right_value146;
char* __dec_obj71;
_Bool _if_conditional235;
void* right_value147;
char* __dec_obj72;
_Bool _if_conditional236;
char* p_141;
int sline_142;
_Bool _if_conditional237;
void* right_value148;
char* __dec_obj73;
void* right_value149;
char* __dec_obj74;
_Bool _if_conditional238;
void* right_value150;
char* __dec_obj75;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value151;
char* __dec_obj76;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value152;
char* __dec_obj77;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value153;
char* __dec_obj78;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* p_143;
int sline_144;
void* right_value154;
char* __dec_obj79;
_Bool _if_conditional248;
_Bool _if_conditional249;
char* p_145;
int sline_146;
void* right_value155;
char* __dec_obj80;
_Bool _if_conditional250;
void* right_value156;
char* __dec_obj81;
void* right_value157;
char* __dec_obj82;
_Bool _if_conditional251;
_Bool _if_conditional252;
char* p_147;
int sline_148;
void* right_value158;
char* __dec_obj83;
_Bool _if_conditional253;
void* right_value159;
char* __dec_obj84;
void* right_value160;
char* __dec_obj85;
_Bool _if_conditional254;
void* right_value161;
char* __dec_obj86;
void* right_value162;
char* __dec_obj87;
_Bool _if_conditional255;
void* right_value163;
char* __dec_obj88;
_Bool _if_conditional256;
void* right_value164;
char* __dec_obj89;
_Bool _if_conditional257;
void* right_value165;
char* __dec_obj90;
_Bool _if_conditional258;
void* right_value166;
char* __dec_obj91;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
char* p_149;
int sline_150;
void* right_value167;
char* __dec_obj92;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value168;
char* __dec_obj93;
int pointer_num_151;
_Bool _while_condtional29;
_Bool heap_152;
_Bool _if_conditional265;
_Bool lambda_flag_153;
char* pX_154;
int slineX_155;
_Bool _if_conditional266;
void* right_value169;
_Bool _if_conditional267;
struct sType* type_156;
char* var_name_157;
_Bool function_pointer_flag_158;
char* p_159;
int sline_160;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value170;
char* word_161;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool var_name_between_brace_162;
char* p_163;
int sline_164;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value171;
char* word_165;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
static int anonymous_num_166=0;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value172;
char* __dec_obj94;
void* right_value173;
struct sNode* node_167;
_Bool _if_conditional281;
void* right_value174;
void* right_value175;
struct tuple3$3sTypephcharphbool* __result64__;
int pointer_num_168;
_Bool _while_condtional30;
void* right_value176;
void* right_value177;
struct sType* __dec_obj95;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value178;
char* __dec_obj96;
void* right_value179;
struct sNode* node_169;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value180;
void* right_value181;
struct tuple3$3sTypephcharphbool* __result65__;
void* right_value182;
void* right_value183;
struct sType* __dec_obj97;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value184;
char* __dec_obj98;
void* right_value185;
struct sNode* node_170;
_Bool _if_conditional288;
void* right_value186;
void* right_value187;
struct tuple3$3sTypephcharphbool* __result66__;
int pointer_num_171;
_Bool _while_condtional31;
void* right_value188;
void* right_value189;
struct sType* __dec_obj99;
void* right_value190;
void* right_value191;
struct tuple3$3sTypephcharphbool* __result67__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value192;
char* __dec_obj100;
_Bool _if_conditional292;
static int num_anonymous_var_name_172=0;
void* right_value193;
char* __dec_obj101;
_Bool _if_conditional293;
void* right_value194;
char* __dec_obj102;
static int num_anonymous_var_name_173=0;
void* right_value195;
char* __dec_obj103;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool no_comma_174;
void* right_value196;
struct sNode* node_175;
struct sNode* __dec_obj104;
_Bool _if_conditional296;
struct sType* result_type_176;
void* right_value197;
_Bool _if_conditional301;
void* right_value198;
void* right_value199;
struct sType* __dec_obj105;
_Bool _if_conditional307;
int i_185;
void* right_value200;
_Bool _if_conditional310;
void* right_value201;
void* right_value202;
void* right_value203;
struct sType* __dec_obj106;
_Bool _if_conditional311;
int i_189;
void* right_value204;
_Bool _if_conditional312;
void* right_value205;
void* right_value206;
void* right_value207;
struct sType* __dec_obj107;
void* right_value208;
void* right_value209;
struct sType* __dec_obj108;
struct sNode* __dec_obj109;
void* right_value210;
char* __dec_obj110;
void* right_value211;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var2;
struct list$1sTypeph* param_types_190;
struct list$1charph* param_names_191;
struct list$1charph* param_default_parametors_192;
_Bool var_args_193;
void* right_value212;
void* right_value213;
struct sType* __dec_obj111;
void* right_value214;
void* right_value215;
struct tuple1$1sTypeph* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
_Bool _if_conditional313;
_Bool _if_conditional314;
struct sType* result_type_194;
void* right_value216;
_Bool _if_conditional315;
void* right_value217;
void* right_value218;
struct sType* __dec_obj116;
_Bool _if_conditional316;
int i_195;
void* right_value219;
_Bool _if_conditional317;
void* right_value220;
void* right_value221;
void* right_value222;
struct sType* __dec_obj117;
_Bool _if_conditional318;
int i_196;
void* right_value223;
_Bool _if_conditional319;
void* right_value224;
void* right_value225;
void* right_value226;
struct sType* __dec_obj118;
void* right_value227;
void* right_value228;
struct sType* __dec_obj119;
struct sNode* __dec_obj120;
_Bool _if_conditional320;
void* right_value229;
char* __dec_obj121;
_Bool _if_conditional321;
void* right_value230;
void* right_value231;
struct tuple3$3sTypephcharphbool* __result85__;
static int num_anonymous_var_name_197=0;
void* right_value232;
char* __dec_obj122;
void* right_value233;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_198;
struct list$1charph* param_names_199;
struct list$1charph* param_default_parametors_200;
_Bool var_args_201;
void* right_value234;
void* right_value235;
struct sType* __dec_obj123;
void* right_value236;
void* right_value237;
struct tuple1$1sTypeph* __dec_obj124;
struct list$1sTypeph* __dec_obj125;
struct list$1charph* __dec_obj126;
_Bool _if_conditional322;
void* right_value238;
struct sNode* exp_202;
_Bool _if_conditional323;
void* right_value239;
void* right_value240;
struct tuple3$3sTypephcharphbool* __result87__;
void* right_value241;
struct CVALUE* come_value_203;
void* right_value242;
struct sType* __dec_obj127;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value243;
char* __dec_obj128;
_Bool _if_conditional329;
static int num_anonymous_var_name_204=0;
void* right_value244;
char* __dec_obj129;
_Bool _if_conditional330;
void* right_value245;
char* __dec_obj130;
static int num_anonymous_var_name_205=0;
void* right_value246;
char* __dec_obj131;
_Bool _if_conditional331;
_Bool _if_conditional332;
_Bool no_comma_206;
void* right_value247;
struct sNode* node_207;
struct sNode* __dec_obj132;
void* right_value248;
_Bool _if_conditional333;
void* right_value249;
void* right_value250;
struct sType* __dec_obj133;
void* right_value251;
char* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _if_conditional334;
int i_208;
void* right_value252;
_Bool _if_conditional335;
void* right_value253;
void* right_value254;
void* right_value255;
struct sType* __dec_obj136;
struct sNode* __dec_obj137;
_Bool _if_conditional336;
int i_209;
void* right_value256;
_Bool _if_conditional337;
void* right_value257;
void* right_value258;
void* right_value259;
struct sType* __dec_obj138;
struct sNode* __dec_obj139;
_Bool _if_conditional338;
void* right_value260;
_Bool _if_conditional349;
void* right_value261;
void* right_value262;
struct tuple3$3sTypephcharphbool* __result92__;
void* right_value263;
void* right_value264;
struct sType* __dec_obj140;
_Bool _while_condtional36;
void* right_value265;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* generics_type_215;
char* var_name_216;
_Bool err_217;
_Bool _if_conditional350;
void* right_value266;
void* right_value267;
struct tuple3$3sTypephcharphbool* __result93__;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value268;
void* right_value269;
struct tuple3$3sTypephcharphbool* __result94__;
_Bool _if_conditional353;
void* right_value270;
struct sType* __dec_obj141;
_Bool _if_conditional354;
void* right_value271;
char* new_name_218;
struct sNode* __dec_obj142;
_Bool _if_conditional355;
void* right_value272;
struct sClass* klass_219;
_Bool _if_conditional356;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
struct sType* __dec_obj143;
struct sNode* __dec_obj144;
_Bool _while_condtional45;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _while_condtional46;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value285;
void* right_value286;
struct list$1sTypeph* types_264;
void* right_value287;
_Bool _while_condtional47;
void* right_value288;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type2_265;
char* name_266;
_Bool err_267;
_Bool _if_conditional413;
void* right_value289;
void* right_value290;
struct tuple3$3sTypephcharphbool* __result119__;
void* right_value291;
int num_tuples_268;
void* right_value292;
void* right_value293;
void* right_value294;
struct sType* __dec_obj145;
struct list$1sTypeph* o2_saved_269;
struct sType* it_270;
void* right_value295;
_Bool _if_conditional414;
void* right_value296;
struct sType* __dec_obj146;
_Bool _if_conditional415;
void* right_value297;
char* new_name_271;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value298;
char* __dec_obj147;
_Bool _if_conditional419;
static int num_anonymous_var_name_272=0;
void* right_value299;
char* __dec_obj148;
_Bool _if_conditional420;
void* right_value300;
char* __dec_obj149;
static int num_anonymous_var_name_273=0;
void* right_value301;
char* __dec_obj150;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool no_comma_274;
void* right_value302;
struct sNode* node_275;
struct sNode* __dec_obj151;
_Bool _while_condtional48;
_Bool _if_conditional423;
void* right_value303;
struct sNode* node_276;
void* right_value304;
char* asm_name_277;
char* __dec_obj152;
void* right_value305;
void* right_value306;
struct tuple3$3sTypephcharphbool* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_104, 0, sizeof(char*));
memset(&head_sline_105, 0, sizeof(int));
right_value113 = (void*)0;
memset(&type_name_106, 0, sizeof(char*));
right_value114 = (void*)0;
memset(&constant_107, 0, sizeof(_Bool));
memset(&static__108, 0, sizeof(_Bool));
memset(&volatile__109, 0, sizeof(_Bool));
memset(&register__110, 0, sizeof(_Bool));
memset(&unsigned__111, 0, sizeof(_Bool));
memset(&long__112, 0, sizeof(_Bool));
memset(&long_long_113, 0, sizeof(_Bool));
memset(&short__114, 0, sizeof(_Bool));
memset(&restrict__115, 0, sizeof(_Bool));
memset(&struct__116, 0, sizeof(_Bool));
memset(&union__117, 0, sizeof(_Bool));
memset(&enum__118, 0, sizeof(_Bool));
memset(&no_heap_119, 0, sizeof(_Bool));
memset(&extern__120, 0, sizeof(_Bool));
memset(&inline__121, 0, sizeof(_Bool));
memset(&come_mem_core__122, 0, sizeof(_Bool));
memset(&alignas__123, 0, sizeof(struct sNode*));
memset(&anonymous_type_124, 0, sizeof(_Bool));
memset(&anonymous_name_125, 0, sizeof(_Bool));
memset(&p_126, 0, sizeof(char*));
memset(&sline_127, 0, sizeof(int));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&p_128, 0, sizeof(char*));
memset(&sline_129, 0, sizeof(int));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&p_130, 0, sizeof(char*));
memset(&sline_131, 0, sizeof(int));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&p_132, 0, sizeof(char*));
memset(&sline_133, 0, sizeof(int));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&exp_140, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&p_141, 0, sizeof(char*));
memset(&sline_142, 0, sizeof(int));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&p_143, 0, sizeof(char*));
memset(&sline_144, 0, sizeof(int));
right_value154 = (void*)0;
memset(&p_145, 0, sizeof(char*));
memset(&sline_146, 0, sizeof(int));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
memset(&p_147, 0, sizeof(char*));
memset(&sline_148, 0, sizeof(int));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&p_149, 0, sizeof(char*));
memset(&sline_150, 0, sizeof(int));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&pointer_num_151, 0, sizeof(int));
memset(&heap_152, 0, sizeof(_Bool));
memset(&lambda_flag_153, 0, sizeof(_Bool));
memset(&pX_154, 0, sizeof(char*));
memset(&slineX_155, 0, sizeof(int));
right_value169 = (void*)0;
memset(&type_156, 0, sizeof(struct sType*));
memset(&var_name_157, 0, sizeof(char*));
memset(&function_pointer_flag_158, 0, sizeof(_Bool));
memset(&p_159, 0, sizeof(char*));
memset(&sline_160, 0, sizeof(int));
right_value170 = (void*)0;
memset(&word_161, 0, sizeof(char*));
memset(&var_name_between_brace_162, 0, sizeof(_Bool));
memset(&p_163, 0, sizeof(char*));
memset(&sline_164, 0, sizeof(int));
right_value171 = (void*)0;
memset(&word_165, 0, sizeof(char*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&node_167, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&pointer_num_168, 0, sizeof(int));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&node_169, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&node_170, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&pointer_num_171, 0, sizeof(int));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&no_comma_174, 0, sizeof(_Bool));
right_value196 = (void*)0;
memset(&node_175, 0, sizeof(struct sNode*));
memset(&result_type_176, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&i_185, 0, sizeof(int));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&i_189, 0, sizeof(int));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&param_types_190, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_191, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_192, 0, sizeof(struct list$1charph*));
memset(&var_args_193, 0, sizeof(_Bool));
memset(&param_types_190, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_191, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_192, 0, sizeof(struct list$1charph*));
memset(&var_args_193, 0, sizeof(_Bool));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&result_type_194, 0, sizeof(struct sType*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&i_195, 0, sizeof(int));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&i_196, 0, sizeof(int));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&param_types_198, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_199, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_200, 0, sizeof(struct list$1charph*));
memset(&var_args_201, 0, sizeof(_Bool));
memset(&param_types_198, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_199, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_200, 0, sizeof(struct list$1charph*));
memset(&var_args_201, 0, sizeof(_Bool));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&exp_202, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&no_comma_206, 0, sizeof(_Bool));
right_value247 = (void*)0;
memset(&node_207, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&i_208, 0, sizeof(int));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&i_209, 0, sizeof(int));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&generics_type_215, 0, sizeof(struct sType*));
memset(&var_name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
memset(&generics_type_215, 0, sizeof(struct sType*));
memset(&var_name_216, 0, sizeof(char*));
memset(&err_217, 0, sizeof(_Bool));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&new_name_218, 0, sizeof(char*));
right_value272 = (void*)0;
memset(&klass_219, 0, sizeof(struct sClass*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&types_264, 0, sizeof(struct list$1sTypeph*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
memset(&type2_265, 0, sizeof(struct sType*));
memset(&name_266, 0, sizeof(char*));
memset(&err_267, 0, sizeof(_Bool));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&num_tuples_268, 0, sizeof(int));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&o2_saved_269, 0, sizeof(struct list$1sTypeph*));
memset(&it_270, 0, sizeof(struct sType*));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&new_name_271, 0, sizeof(char*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&no_comma_274, 0, sizeof(_Bool));
right_value302 = (void*)0;
memset(&node_275, 0, sizeof(struct sNode*));
right_value303 = (void*)0;
memset(&node_276, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
memset(&asm_name_277, 0, sizeof(char*));
right_value305 = (void*)0;
right_value306 = (void*)0;
    head_104=info->p;
    head_sline_105=info->sline;
    info->define_struct=(_Bool)0;
    type_name_106=(char*)come_increment_ref_count(((char*)(right_value113=parse_word(info))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    while(_while_condtional26=string_operator_equals(type_name_106,"__extension__"),    _while_condtional26) {
        __dec_obj53=type_name_106;
        type_name_106=(char*)come_increment_ref_count(((char*)(right_value114=parse_word(info))));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    constant_107=(_Bool)0;
    static__108=(_Bool)0;
    volatile__109=(_Bool)0;
    register__110=(_Bool)0;
    unsigned__111=(_Bool)0;
    long__112=(_Bool)0;
    long_long_113=(_Bool)0;
    short__114=(_Bool)0;
    restrict__115=(_Bool)0;
    struct__116=(_Bool)0;
    union__117=(_Bool)0;
    enum__118=(_Bool)0;
    no_heap_119=(_Bool)0;
    extern__120=(_Bool)0;
    inline__121=(_Bool)0;
    come_mem_core__122=(_Bool)0;
    alignas__123=((void*)0);
    anonymous_type_124=(_Bool)0;
    anonymous_name_125=(_Bool)0;
    while(_while_condtional27=(_Bool)1,    _while_condtional27) {
        if(_if_conditional209=string_operator_equals(type_name_106,"struct"),        _if_conditional209) {
            struct__116=(_Bool)1;
            if(_if_conditional210=*info->p==123,            _if_conditional210) {
                p_126=info->p;
                sline_127=info->sline;
                ((char*)(right_value115=skip_block(info)));
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional211=*info->p==59,                _if_conditional211) {
                    anonymous_name_125=(_Bool)1;
                    anonymous_type_124=(_Bool)1;
                    __dec_obj54=type_name_106;
                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(""))));
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_126;
                    info->sline=sline_127;
                    break;
                }
                else {
                    anonymous_type_124=(_Bool)1;
                    __dec_obj55=type_name_106;
                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(""))));
                    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_126;
                    info->sline=sline_127;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj56=type_name_106;
            type_name_106=(char*)come_increment_ref_count(((char*)(right_value118=parse_word(info))));
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional212=*info->p==60,            _if_conditional212) {
                p_128=info->p;
                sline_129=info->sline;
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional28=(_Bool)1,                _while_condtional28) {
                    if(_if_conditional213=*info->p==62,                    _if_conditional213) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional214=*info->p==123,                        _if_conditional214) {
                        }
                        else {
                            info->p=p_128;
                            info->sline=sline_129;
                        }
                        break;
                    }
                    else {
                        if(_if_conditional215=*info->p==0,                        _if_conditional215) {
                            err_msg(info,"invalid struct definition");
                            __result59__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value120=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value119=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 759, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result59__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
            }
            if(_if_conditional216=*info->p==123,            _if_conditional216) {
                p_130=info->p;
                sline_131=info->sline;
                ((char*)(right_value121=skip_block(info)));
                right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional217=*info->p==59,                _if_conditional217) {
                    info->p=head_104;
                    info->sline=head_sline_105;
                    info->define_struct=(_Bool)1;
                    __result60__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value123=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value122=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 777, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result60__;
                }
                else {
                    anonymous_type_124=(_Bool)1;
                    info->p=p_130;
                    info->sline=sline_131;
                    break;
                }
            }
        }
        else {
            if(_if_conditional218=string_operator_equals(type_name_106,"union"),            _if_conditional218) {
                union__117=(_Bool)1;
                if(_if_conditional219=*info->p==123,                _if_conditional219) {
                    p_132=info->p;
                    sline_133=info->sline;
                    ((char*)(right_value124=skip_block(info)));
                    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional220=*info->p==59,                    _if_conditional220) {
                        info->p=head_104;
                        info->sline=head_sline_105;
                        info->define_struct=(_Bool)0;
                        anonymous_type_124=(_Bool)1;
                        __dec_obj59=type_name_106;
                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(""))));
                        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_132;
                        info->sline=sline_133;
                        break;
                    }
                    else {
                        anonymous_type_124=(_Bool)1;
                        __dec_obj60=type_name_106;
                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(""))));
                        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_132;
                        info->sline=sline_133;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj61=type_name_106;
                type_name_106=(char*)come_increment_ref_count(((char*)(right_value127=parse_word(info))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional221=*info->p==123,                _if_conditional221) {
                    p_134=info->p;
                    sline_135=info->sline;
                    ((char*)(right_value128=skip_block(info)));
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional222=*info->p==59,                    _if_conditional222) {
                        info->p=head_104;
                        info->sline=head_sline_105;
                        info->define_struct=(_Bool)1;
                        __result61__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value130=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value129=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 832, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result61__;
                    }
                    else {
                        anonymous_type_124=(_Bool)1;
                        info->p=p_134;
                        info->sline=sline_135;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional223=string_operator_equals(type_name_106,"enum"),                _if_conditional223) {
                    enum__118=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional224=*info->p==123,                    _if_conditional224) {
                        p_136=info->p;
                        sline_137=info->sline;
                        ((char*)(right_value131=skip_block(info)));
                        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional225=*info->p==59,                        _if_conditional225) {
                            info->p=head_104;
                            info->sline=head_sline_105;
                            info->define_struct=(_Bool)1;
                            __result62__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value133=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value132=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 857, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result62__;
                        }
                        else {
                            anonymous_type_124=(_Bool)1;
                            __dec_obj62=type_name_106;
                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value134=__builtin_string(""))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            info->p=p_136;
                            info->sline=sline_137;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj63=type_name_106;
                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value135=parse_word(info))));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional226=*info->p==123,                    _if_conditional226) {
                        p_138=info->p;
                        sline_139=info->sline;
                        ((char*)(right_value136=skip_block(info)));
                        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional227=*info->p==59,                        _if_conditional227) {
                            info->p=head_104;
                            info->sline=head_sline_105;
                            info->define_struct=(_Bool)1;
                            __result63__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value138=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value137=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 884, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            return __result63__;
                        }
                        else {
                            anonymous_type_124=(_Bool)1;
                            info->p=p_138;
                            info->sline=sline_139;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional228=string_operator_equals(type_name_106,"_Alignas"),                    _if_conditional228) {
                        expected_next_character(40,info);
                        exp_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=expression_v13(info))));
                        if(right_value139) { right_value139 = come_decrement_ref_count2(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj64=alignas__123;
                        alignas__123=(struct sNode*)come_increment_ref_count(exp_140);
                        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj65=type_name_106;
                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value140=parse_word(info))));
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_140) { exp_140 = come_decrement_ref_count2(exp_140, ((struct sNode*)exp_140)->finalize, ((struct sNode*)exp_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional229=string_operator_equals(type_name_106,"const"),                        _if_conditional229) {
                            constant_107=(_Bool)1;
                            __dec_obj66=type_name_106;
                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value141=parse_word(info))));
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional230=string_operator_equals(type_name_106,"static"),                            _if_conditional230) {
                                static__108=(_Bool)1;
                                __dec_obj67=type_name_106;
                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value142=parse_word(info))));
                                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional231=string_operator_equals(type_name_106,"come_mem_core"),                                _if_conditional231) {
                                    come_mem_core__122=(_Bool)1;
                                    __dec_obj68=type_name_106;
                                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value143=parse_word(info))));
                                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(_if_conditional232=string_operator_equals(type_name_106,"extern"),                                    _if_conditional232) {
                                        extern__120=(_Bool)1;
                                        __dec_obj69=type_name_106;
                                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value144=parse_word(info))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional233=string_operator_equals(type_name_106,"_Noreturn"),                                        _if_conditional233) {
                                            __dec_obj70=type_name_106;
                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value145=parse_word(info))));
                                            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            if(_if_conditional234=string_operator_equals(type_name_106,"inline")||string_operator_equals(type_name_106,"__inline")||string_operator_equals(type_name_106,"__inline__")||string_operator_equals(type_name_106,"__always_inline"),                                            _if_conditional234) {
                                                inline__121=(_Bool)1;
                                                __dec_obj71=type_name_106;
                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value146=parse_word(info))));
                                                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                if(_if_conditional235=string_operator_equals(type_name_106,"volatile"),                                                _if_conditional235) {
                                                    volatile__109=(_Bool)1;
                                                    __dec_obj72=type_name_106;
                                                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value147=parse_word(info))));
                                                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional236=string_operator_equals(type_name_106,"long"),                                                    _if_conditional236) {
                                                        {
                                                            p_141=info->p;
                                                            sline_142=info->sline;
                                                            if(_if_conditional237=!xisalpha(*info->p),                                                            _if_conditional237) {
                                                                info->p=p_141;
                                                                info->sline=sline_142;
                                                                __dec_obj73=type_name_106;
                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("long"))));
                                                                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                            else {
                                                                __dec_obj74=type_name_106;
                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value149=parse_word(info))));
                                                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional238=string_operator_equals(type_name_106,"unsigned"),                                                                _if_conditional238) {
                                                                    __dec_obj75=type_name_106;
                                                                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value150=parse_word(info))));
                                                                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional239=string_operator_equals(type_name_106,"int"),                                                                    _if_conditional239) {
                                                                        long__112=(_Bool)1;
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional240=string_operator_equals(type_name_106,"long"),                                                                    _if_conditional240) {
                                                                        p_141=info->p;
                                                                        sline_142=info->sline;
                                                                        if(_if_conditional241=xisalpha(*info->p),                                                                        _if_conditional241) {
                                                                            long_long_113=(_Bool)1;
                                                                            __dec_obj76=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value151=parse_word(info))));
                                                                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            long__112=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        if(_if_conditional242=string_operator_equals(type_name_106,"int"),                                                                        _if_conditional242) {
                                                                            long_long_113=(_Bool)1;
                                                                            break;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional243=!is_type_name(type_name_106,info),                                                                            _if_conditional243) {
                                                                                __dec_obj77=type_name_106;
                                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string("long"))));
                                                                                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                long_long_113=(_Bool)1;
                                                                                info->p=p_141;
                                                                                info->sline=sline_142;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional244=is_type_name(type_name_106,info),                                                                        _if_conditional244) {
                                                                            if(long__112) {
                                                                                long_long_113=(_Bool)1;
                                                                                long__112=(_Bool)0;
                                                                            }
                                                                            else {
                                                                                long__112=(_Bool)1;
                                                                            }
                                                                            break;
                                                                        }
                                                                        else {
                                                                            info->p=p_141;
                                                                            info->sline=sline_142;
                                                                            __dec_obj78=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string("long"))));
                                                                            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional246=string_operator_equals(type_name_106,"unsigned"),                                                        _if_conditional246) {
                                                            unsigned__111=(_Bool)1;
                                                            if(_if_conditional247=xisalpha(*info->p)||*info->p==95,                                                            _if_conditional247) {
                                                                p_143=info->p;
                                                                sline_144=info->sline;
                                                                __dec_obj79=type_name_106;
                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value154=parse_word(info))));
                                                                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional248=string_operator_equals(type_name_106,"short"),                                                                _if_conditional248) {
                                                                    if(_if_conditional249=xisalpha(*info->p)||*info->p==95,                                                                    _if_conditional249) {
                                                                        p_145=info->p;
                                                                        sline_146=info->sline;
                                                                        __dec_obj80=type_name_106;
                                                                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value155=parse_word(info))));
                                                                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional250=is_type_name(type_name_106,info),                                                                        _if_conditional250) {
                                                                            short__114=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            short__114=(_Bool)1;
                                                                            __dec_obj81=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("int"))));
                                                                            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_145;
                                                                            info->sline=sline_146;
                                                                        }
                                                                    }
                                                                    else {
                                                                        short__114=(_Bool)1;
                                                                        __dec_obj82=type_name_106;
                                                                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("int"))));
                                                                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        break;
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional251=string_operator_equals(type_name_106,"long"),                                                                    _if_conditional251) {
                                                                        if(_if_conditional252=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional252) {
                                                                            p_147=info->p;
                                                                            sline_148=info->sline;
                                                                            __dec_obj83=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value158=parse_word(info))));
                                                                            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional253=is_type_name(type_name_106,info),                                                                            _if_conditional253) {
                                                                                long__112=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                long__112=(_Bool)1;
                                                                                __dec_obj84=type_name_106;
                                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string("int"))));
                                                                                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_147;
                                                                                info->sline=sline_148;
                                                                            }
                                                                        }
                                                                        else {
                                                                            long__112=(_Bool)1;
                                                                            __dec_obj85=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string("int"))));
                                                                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional254=!is_type_name(type_name_106,info),                                                                        _if_conditional254) {
                                                                            __dec_obj86=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("int"))));
                                                                            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            info->p=p_143;
                                                                            info->sline=sline_144;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __dec_obj87=type_name_106;
                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("int"))));
                                                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                break;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional255=string_operator_equals(type_name_106,"signed")||string_operator_equals(type_name_106,"__signed__"),                                                            _if_conditional255) {
                                                                unsigned__111=(_Bool)0;
                                                                __dec_obj88=type_name_106;
                                                                type_name_106=(char*)come_increment_ref_count(((char*)(right_value163=parse_word(info))));
                                                                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(_if_conditional256=string_operator_equals(type_name_106,"register"),                                                                _if_conditional256) {
                                                                    register__110=(_Bool)1;
                                                                    __dec_obj89=type_name_106;
                                                                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value164=parse_word(info))));
                                                                    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(_if_conditional257=string_operator_equals(type_name_106,"restrict"),                                                                    _if_conditional257) {
                                                                        restrict__115=(_Bool)1;
                                                                        __dec_obj90=type_name_106;
                                                                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value165=parse_word(info))));
                                                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        if(_if_conditional258=string_operator_equals(type_name_106,"__restrict"),                                                                        _if_conditional258) {
                                                                            restrict__115=(_Bool)1;
                                                                            __dec_obj91=type_name_106;
                                                                            type_name_106=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
                                                                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional259=string_operator_equals(type_name_106,"short"),                                                                            _if_conditional259) {
                                                                                short__114=(_Bool)1;
                                                                                if(_if_conditional260=*info->p==58,                                                                                _if_conditional260) {
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional261=xisalnum(*info->p),                                                                                    _if_conditional261) {
                                                                                        p_149=info->p;
                                                                                        sline_150=info->sline;
                                                                                        __dec_obj92=type_name_106;
                                                                                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value167=parse_word(info))));
                                                                                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional262=string_operator_equals(type_name_106,"int"),                                                                                        _if_conditional262) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional263=string_operator_equals(type_name_106,"short"),                                                                                            _if_conditional263) {
                                                                                                short__114=(_Bool)0;
                                                                                                break;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional264=is_type_name(type_name_106,info),                                                                                                _if_conditional264) {
                                                                                                    info->p=p_149;
                                                                                                    info->sline=sline_150;
                                                                                                }
                                                                                                else {
                                                                                                    __dec_obj93=type_name_106;
                                                                                                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("short"))));
                                                                                                    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                    info->p=p_149;
                                                                                                    info->sline=sline_150;
                                                                                                    break;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        break;
                                                                                    }
                                                                                }
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
    skip_pointer_attribute(info);
    pointer_num_151=0;
    while(_while_condtional29=*info->p==42,    _while_condtional29) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_151++;
    }
    heap_152=(_Bool)0;
    if(_if_conditional265=*info->p==37,    _if_conditional265) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_152=(_Bool)1;
    }
    lambda_flag_153=(_Bool)0;
    {
        pX_154=info->p;
        slineX_155=info->sline;
        if(_if_conditional266=xisalpha(*info->p)||*info->p==95,        _if_conditional266) {
            (void)((char*)(right_value169=parse_word(info)));
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional267=*info->p==40&&info->in_typedef,            _if_conditional267) {
                lambda_flag_153=(_Bool)1;
            }
        }
        info->p=pX_154;
        info->sline=slineX_155;
    }
    function_pointer_flag_158=(_Bool)0;
    {
        p_159=info->p;
        sline_160=info->sline;
        if(_if_conditional268=*info->p==40,        _if_conditional268) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional269=*info->p==42||*info->p==94,            _if_conditional269) {
                function_pointer_flag_158=(_Bool)1;
            }
            else {
                if(_if_conditional270=xisalpha(*info->p)||*info->p==95,                _if_conditional270) {
                    word_161=(char*)come_increment_ref_count(((char*)(right_value170=parse_word(info))));
                    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional271=*info->p==41,                    _if_conditional271) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional272=*info->p==40,                        _if_conditional272) {
                            function_pointer_flag_158=(_Bool)1;
                        }
                    }
                    word_161 = come_decrement_ref_count2(word_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_159;
        info->sline=sline_160;
    }
    var_name_between_brace_162=(_Bool)0;
    {
        p_163=info->p;
        sline_164=info->sline;
        if(_if_conditional273=*info->p==40,        _if_conditional273) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional274=xisalpha(*info->p)||*info->p==95,            _if_conditional274) {
                word_165=(char*)come_increment_ref_count(((char*)(right_value171=parse_word(info))));
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional275=is_type_name(word_165,info),                _if_conditional275) {
                }
                else {
                    if(_if_conditional276=*info->p==41,                    _if_conditional276) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional277=*info->p!=40,                        _if_conditional277) {
                            var_name_between_brace_162=(_Bool)1;
                        }
                    }
                }
                word_165 = come_decrement_ref_count2(word_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_163;
        info->sline=sline_164;
    }
    if(_if_conditional278=anonymous_type_124&&*info->p==123,    _if_conditional278) {
        if(struct__116) {
            if(_if_conditional280=string_operator_equals(type_name_106,""),            _if_conditional280) {
                __dec_obj94=type_name_106;
                type_name_106=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("anonymous_typeX%d",++anonymous_num_166))));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=parse_struct((char*)come_increment_ref_count(type_name_106),info))));
            if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional281=!node_compile(node_167,info),            _if_conditional281) {
                err_msg(info,"parse_struct is failed");
                __result64__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value175=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value174=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1247, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                return __result64__;
            }
            pointer_num_168=0;
            while(_while_condtional30=*info->p==42,            _while_condtional30) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_168++;
            }
            __dec_obj95=type_156;
            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1257, "struct sType")))),type_name_106,(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_156->mPointerNum=pointer_num_168;
            if(node_167) { node_167 = come_decrement_ref_count2(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__118) {
                if(_if_conditional283=string_operator_equals(type_name_106,""),                _if_conditional283) {
                    __dec_obj96=type_name_106;
                    type_name_106=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("anonymous_typeY%d",++anonymous_num_166))));
                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                node_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=parse_enum((char*)come_increment_ref_count(type_name_106),info))));
                if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional284=!info->no_output_err,                _if_conditional284) {
                    if(_if_conditional285=!node_compile(node_169,info),                    _if_conditional285) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result65__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value181=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value180=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1271, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_169) { node_169 = come_decrement_ref_count2(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result65__;
                    }
                }
                __dec_obj97=type_156;
                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value182=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1275, "struct sType")))),type_name_106,(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(node_169) { node_169 = come_decrement_ref_count2(node_169, ((struct sNode*)node_169)->finalize, ((struct sNode*)node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__117) {
                    if(_if_conditional287=string_operator_equals(type_name_106,""),                    _if_conditional287) {
                        __dec_obj98=type_name_106;
                        type_name_106=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("anonymous_typeZ%d",++anonymous_num_166))));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    node_170=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=parse_union((char*)come_increment_ref_count(type_name_106),info))));
                    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional288=!node_compile(node_170,info),                    _if_conditional288) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result66__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value187=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value186=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1287, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_170) { node_170 = come_decrement_ref_count2(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result66__;
                    }
                    pointer_num_171=0;
                    while(_while_condtional31=*info->p==42,                    _while_condtional31) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_171++;
                    }
                    __dec_obj99=type_156;
                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1298, "struct sType")))),type_name_106,(_Bool)0,info))));
                    come_call_finalizer2(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    type_156->mPointerNum=pointer_num_171;
                    if(node_170) { node_170 = come_decrement_ref_count2(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result67__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value191=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value190=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1304, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    return __result67__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(_if_conditional290=var_name_between_brace_162&&*info->p==40,            _if_conditional290) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional291=*info->p==58,            _if_conditional291) {
                __dec_obj100=var_name_157;
                var_name_157=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(""))));
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(anonymous_name_125) {
                    num_anonymous_var_name_172++;
                    __dec_obj101=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_172))));
                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional293=xisalnum(*info->p)||*info->p==95,                    _if_conditional293) {
                        __dec_obj102=var_name_157;
                        var_name_157=(char*)come_increment_ref_count(((char*)(right_value194=parse_word(info))));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        num_anonymous_var_name_173++;
                        __dec_obj103=var_name_157;
                        var_name_157=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_173))));
                        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(_if_conditional294=var_name_between_brace_162&&*info->p==41,            _if_conditional294) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional295=*info->p==58,            _if_conditional295) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_174=info->no_comma;
                info->no_comma=(_Bool)1;
                node_175=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=expression_v13(info))));
                if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_174;
                __dec_obj104=type_156->mSizeNum;
                type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_175);
                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_153) {
            if(_if_conditional301=((struct sType*)(right_value197=map$2charphsTypephp_operator_load_element(info->types,type_name_106))),            come_call_finalizer2(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional301) {
                __dec_obj105=result_type_176;
                result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=sType_clone(((struct sType*)(right_value198=map$2charphsTypephp_operator_load_element(info->types,type_name_106)))))));
                come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional307=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_106)),                _if_conditional307) {
                    for(                    i_185=0;                    i_185<list$1charph_length(info->generics_type_names);                    i_185++                    ){
                        if(_if_conditional310=string_operator_equals(((char*)(right_value200=list$1charphp_operator_load_element(info->generics_type_names,i_185))),type_name_106),                        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                        _if_conditional310) {
                            __dec_obj106=result_type_176;
                            result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1357, "struct sType")))),((char*)(right_value202=xsprintf("generics_type%d",i_185))),(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(_if_conditional311=info->method_generics_type_names&&list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_106)),                    _if_conditional311) {
                        for(                        i_189=0;                        i_189<list$1charph_length(info->method_generics_type_names);                        i_189++                        ){
                            if(_if_conditional312=string_operator_equals(((char*)(right_value204=list$1charphp_operator_load_element(info->method_generics_type_names,i_189))),type_name_106),                            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                            _if_conditional312) {
                                __dec_obj107=result_type_176;
                                result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value205=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1364, "struct sType")))),((char*)(right_value206=xsprintf("mgenerics_type%d",i_189))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj108=result_type_176;
                        result_type_176=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1369, "struct sType")))),type_name_106,(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            result_type_176->mConstant=result_type_176->mConstant||constant_107;
            __dec_obj109=result_type_176->mAlignas;
            result_type_176->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_176->mComeMemCore=result_type_176->mComeMemCore||come_mem_core__122;
            result_type_176->mRegister=register__110;
            result_type_176->mUnsigned=result_type_176->mUnsigned||unsigned__111;
            result_type_176->mVolatile=volatile__109;
            result_type_176->mStatic=result_type_176->mStatic||static__108;
            result_type_176->mExtern=result_type_176->mExtern||extern__120;
            result_type_176->mInline=result_type_176->mInline||inline__121;
            result_type_176->mRestrict=result_type_176->mRestrict||restrict__115;
            result_type_176->mLongLong=result_type_176->mLongLong||long_long_113;
            result_type_176->mLong=result_type_176->mLong||long__112;
            result_type_176->mShort=result_type_176->mShort||short__114;
            result_type_176->mPointerNum=pointer_num_151;
            result_type_176->mHeap=result_type_176->mHeap||heap_152;
            __dec_obj110=var_name_157;
            var_name_157=(char*)come_increment_ref_count(((char*)(right_value210=parse_word(info))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var2=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value211=parse_params(info)));
            param_types_190=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var2->v1);
            param_names_191=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v2);
            param_default_parametors_192=(struct list$1charph*)come_increment_ref_count(multiple_assign_var2->v3);
            var_args_193=multiple_assign_var2->v4;
            come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj111=type_156;
            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1392, "struct sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer2(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj113=type_156->mResultType;
            type_156->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value215=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value214=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1394, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_176)))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj114=type_156->mParamTypes;
            type_156->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_190);
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj115=type_156->mParamNames;
            type_156->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_191);
            come_call_finalizer2(list$1charph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_156->mVarArgs=var_args_193;
            type_156->mExtern=extern__120;
            come_call_finalizer2(sType_finalize,result_type_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,param_types_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_names_191, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,param_default_parametors_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_158) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional314=*info->p==42||*info->p==94,                _if_conditional314) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional315=((struct sType*)(right_value216=map$2charphsTypephp_operator_load_element(info->types,type_name_106))),                come_call_finalizer2(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional315) {
                    __dec_obj116=result_type_194;
                    result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(((struct sType*)(right_value217=map$2charphsTypephp_operator_load_element(info->types,type_name_106)))))));
                    come_call_finalizer2(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional316=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_106)),                    _if_conditional316) {
                        for(                        i_195=0;                        i_195<list$1charph_length(info->generics_type_names);                        i_195++                        ){
                            if(_if_conditional317=string_operator_equals(((char*)(right_value219=list$1charphp_operator_load_element(info->generics_type_names,i_195))),type_name_106),                            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                            _if_conditional317) {
                                __dec_obj117=result_type_194;
                                result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1421, "struct sType")))),((char*)(right_value221=xsprintf("generics_type%d",i_195))),(_Bool)0,info))));
                                come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(_if_conditional318=info->method_generics_type_names&&list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_106)),                        _if_conditional318) {
                            for(                            i_196=0;                            i_196<list$1charph_length(info->method_generics_type_names);                            i_196++                            ){
                                if(_if_conditional319=string_operator_equals(((char*)(right_value223=list$1charphp_operator_load_element(info->method_generics_type_names,i_196))),type_name_106),                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                _if_conditional319) {
                                    __dec_obj118=result_type_194;
                                    result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value224=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1428, "struct sType")))),((char*)(right_value225=xsprintf("mgenerics_type%d",i_196))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj119=result_type_194;
                            result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value227=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1433, "struct sType")))),type_name_106,(_Bool)0,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                result_type_194->mConstant=result_type_194->mConstant||constant_107;
                __dec_obj120=result_type_194->mAlignas;
                result_type_194->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_194->mComeMemCore=result_type_194->mComeMemCore||come_mem_core__122;
                result_type_194->mRegister=register__110;
                result_type_194->mUnsigned=result_type_194->mUnsigned||unsigned__111;
                result_type_194->mVolatile=volatile__109;
                result_type_194->mStatic=result_type_194->mStatic||static__108;
                result_type_194->mExtern=result_type_194->mExtern||extern__120;
                result_type_194->mInline=result_type_194->mInline||inline__121;
                result_type_194->mRestrict=result_type_194->mRestrict||restrict__115;
                result_type_194->mLongLong=result_type_194->mLongLong||long_long_113;
                result_type_194->mLong=result_type_194->mLong||long__112;
                result_type_194->mShort=result_type_194->mShort||short__114;
                result_type_194->mPointerNum+=pointer_num_151;
                result_type_194->mHeap=result_type_194->mHeap||heap_152;
                if(_if_conditional320=xisalnum(*info->p)||*info->p==95,                _if_conditional320) {
                    __dec_obj121=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value229=parse_word(info))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional321=*info->p==40,                    _if_conditional321) {
                        __result85__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value231=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value230=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1455, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_194),(char*)come_increment_ref_count(var_name_157),(_Bool)0)));
                        come_call_finalizer2(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result85__;
                    }
                }
                else {
                    num_anonymous_var_name_197++;
                    __dec_obj122=var_name_157;
                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_197))));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(41,info);
                multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value233=parse_params(info)));
                param_types_198=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
                param_names_199=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
                param_default_parametors_200=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
                var_args_201=multiple_assign_var3->v4;
                come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj123=type_156;
                type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1467, "struct sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj124=type_156->mResultType;
                type_156->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value237=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value236=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1469, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_194)))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj125=type_156->mParamTypes;
                type_156->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_198);
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj126=type_156->mParamNames;
                type_156->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_199);
                come_call_finalizer2(list$1charph_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_156->mVarArgs=var_args_201;
                type_156->mExtern=extern__120;
                come_call_finalizer2(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,param_types_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_names_199, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,param_default_parametors_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional322=string_operator_equals(type_name_106,"__typeof__")&&*info->p==40,                _if_conditional322) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_202=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=expression_v13(info))));
                    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(41,info);
                    if(_if_conditional323=!node_compile(exp_202,info),                    _if_conditional323) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result87__ = __result_obj__ = ((struct tuple3$3voidpvoidpbool*)(right_value240=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value239=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1485, "struct tuple3$3voidpvoidpbool")))),((void*)0),((void*)0),(_Bool)0)));
                        if(exp_202) { exp_202 = come_decrement_ref_count2(exp_202, ((struct sNode*)exp_202)->finalize, ((struct sNode*)exp_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        return __result87__;
                    }
                    come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
                    come_call_finalizer2(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    __dec_obj127=type_156;
                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(come_value_203->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional327=var_name_between_brace_162&&*info->p==40,                        _if_conditional327) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional328=*info->p==58,                        _if_conditional328) {
                            __dec_obj128=var_name_157;
                            var_name_157=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(""))));
                            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_125) {
                                num_anonymous_var_name_204++;
                                __dec_obj129=var_name_157;
                                var_name_157=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_204))));
                                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional330=xisalnum(*info->p)||*info->p==95,                                _if_conditional330) {
                                    __dec_obj130=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value245=parse_word(info))));
                                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_205++;
                                    __dec_obj131=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_205))));
                                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional331=var_name_between_brace_162&&*info->p==41,                        _if_conditional331) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional332=*info->p==58,                        _if_conditional332) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_206=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_207=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=expression_v13(info))));
                            if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_206;
                            __dec_obj132=type_156->mSizeNum;
                            type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_207);
                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_207) { node_207 = come_decrement_ref_count2(node_207, ((struct sNode*)node_207)->finalize, ((struct sNode*)node_207)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_202) { exp_202 = come_decrement_ref_count2(exp_202, ((struct sNode*)exp_202)->finalize, ((struct sNode*)exp_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(CVALUE_finalize,come_value_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional333=((struct sType*)(right_value248=map$2charphsTypephp_operator_load_element(info->types,type_name_106))),                    come_call_finalizer2(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                    _if_conditional333) {
                        __dec_obj133=type_156;
                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(((struct sType*)(right_value249=map$2charphsTypephp_operator_load_element(info->types,type_name_106)))))));
                        come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        __dec_obj134=type_156->mOriginalTypeName;
                        type_156->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(type_name_106))));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_156->mOriginalTypeNamePointerNum=pointer_num_151;
                        type_156->mConstant=type_156->mConstant||constant_107;
                        __dec_obj135=type_156->mAlignas;
                        type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                        type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                        type_156->mRegister=register__110;
                        type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                        type_156->mVolatile=volatile__109;
                        type_156->mStatic=type_156->mStatic||static__108;
                        type_156->mExtern=type_156->mExtern||extern__120;
                        type_156->mInline=type_156->mInline||inline__121;
                        type_156->mRestrict=type_156->mRestrict||restrict__115;
                        type_156->mLongLong=type_156->mLongLong||long_long_113;
                        type_156->mLong=type_156->mLong||long__112;
                        type_156->mShort=type_156->mShort||short__114;
                        type_156->mPointerNum+=pointer_num_151;
                        type_156->mHeap=type_156->mHeap||heap_152;
                    }
                    else {
                        if(_if_conditional334=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_106)),                        _if_conditional334) {
                            for(                            i_208=0;                            i_208<list$1charph_length(info->generics_type_names);                            i_208++                            ){
                                if(_if_conditional335=string_operator_equals(((char*)(right_value252=list$1charphp_operator_load_element(info->generics_type_names,i_208))),type_name_106),                                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                _if_conditional335) {
                                    __dec_obj136=type_156;
                                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1562, "struct sType")))),((char*)(right_value254=xsprintf("generics_type%d",i_208))),(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_156->mConstant=type_156->mConstant||constant_107;
                            __dec_obj137=type_156->mAlignas;
                            type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                            type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                            type_156->mRegister=register__110;
                            type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                            type_156->mVolatile=volatile__109;
                            type_156->mStatic=type_156->mStatic||static__108;
                            type_156->mExtern=type_156->mExtern||extern__120;
                            type_156->mInline=type_156->mInline||inline__121;
                            type_156->mRestrict=type_156->mRestrict||restrict__115;
                            type_156->mLongLong=type_156->mLongLong||long_long_113;
                            type_156->mLong=type_156->mLong||long__112;
                            type_156->mShort=type_156->mShort||short__114;
                            type_156->mPointerNum+=pointer_num_151;
                            type_156->mHeap=type_156->mHeap||heap_152;
                        }
                        else {
                            if(_if_conditional336=info->method_generics_type_names&&list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_106)),                            _if_conditional336) {
                                for(                                i_209=0;                                i_209<list$1charph_length(info->method_generics_type_names);                                i_209++                                ){
                                    if(_if_conditional337=string_operator_equals(((char*)(right_value256=list$1charphp_operator_load_element(info->method_generics_type_names,i_209))),type_name_106),                                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
                                    _if_conditional337) {
                                        __dec_obj138=type_156;
                                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1585, "struct sType")))),((char*)(right_value258=xsprintf("mgenerics_type%d",i_209))),(_Bool)0,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sType_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_156->mConstant=type_156->mConstant||constant_107;
                                __dec_obj139=type_156->mAlignas;
                                type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
                                type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                                type_156->mRegister=register__110;
                                type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                                type_156->mVolatile=volatile__109;
                                type_156->mStatic=type_156->mStatic||static__108;
                                type_156->mExtern=type_156->mExtern||extern__120;
                                type_156->mInline=type_156->mInline||inline__121;
                                type_156->mRestrict=type_156->mRestrict||restrict__115;
                                type_156->mLongLong=type_156->mLongLong||long_long_113;
                                type_156->mLong=type_156->mLong||long__112;
                                type_156->mShort=type_156->mShort||short__114;
                                type_156->mPointerNum+=pointer_num_151;
                                type_156->mHeap=type_156->mHeap||heap_152;
                            }
                            else {
                                if(_if_conditional338=*info->p==60,                                _if_conditional338) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional349=((struct sClass*)(right_value260=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_106)))==((void*)0),                                    come_call_finalizer2(sClass_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                                    _if_conditional349) {
                                        __result92__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value262=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value261=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1611, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        return __result92__;
                                    }
                                    __dec_obj140=type_156;
                                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1614, "struct sType")))),type_name_106,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional36=(_Bool)1,                                    _while_condtional36) {
                                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value265=parse_type(info,(_Bool)0,(_Bool)0)));
                                        generics_type_215=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                                        var_name_216=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                                        err_217=multiple_assign_var4->v3;
                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional350=!err_217,                                        _if_conditional350) {
                                            __result93__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value267=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value266=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1620, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer2(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_216 = come_decrement_ref_count2(var_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            return __result93__;
                                        }
                                        list$1sTypeph_push_back(type_156->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_215));
                                        if(_if_conditional351=*info->p==44,                                        _if_conditional351) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(_if_conditional352=*info->p==62,                                            _if_conditional352) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                come_call_finalizer2(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_216 = come_decrement_ref_count2(var_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result94__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value269=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value268=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1637, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer2(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_216 = come_decrement_ref_count2(var_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                return __result94__;
                                            }
                                        }
                                        come_call_finalizer2(sType_finalize,generics_type_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        var_name_216 = come_decrement_ref_count2(var_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional353=is_contained_generics_class(type_156,info),                                    _if_conditional353) {
                                        __dec_obj141=type_156;
                                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=solve_generics(type_156,info->generics_type,info))));
                                        come_call_finalizer2(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional354=!output_generics_struct(type_156,type_156,info),                                        _if_conditional354) {
                                            new_name_218=(char*)come_increment_ref_count(((char*)(right_value271=create_generics_name(type_156,info))));
                                            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_218);
                                            exit(7);
                                            new_name_218 = come_decrement_ref_count2(new_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_156->mConstant=type_156->mConstant||constant_107;
                                    __dec_obj142=type_156->mAlignas;
                                    type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                                    type_156->mRegister=register__110;
                                    type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                                    type_156->mVolatile=volatile__109;
                                    type_156->mStatic=type_156->mStatic||static__108;
                                    type_156->mExtern=type_156->mExtern||extern__120;
                                    type_156->mInline=type_156->mInline||inline__121;
                                    type_156->mRestrict=type_156->mRestrict||restrict__115;
                                    type_156->mLongLong=type_156->mLongLong||long_long_113;
                                    type_156->mLong=type_156->mLong||long__112;
                                    type_156->mShort=type_156->mShort||short__114;
                                    type_156->mPointerNum+=pointer_num_151;
                                    type_156->mHeap=type_156->mHeap||heap_152;
                                }
                                else {
                                    if(struct__116) {
                                        klass_219=((struct sClass*)(right_value272=map$2charphsClassphp_operator_load_element(info->classes,type_name_106)));
                                        come_call_finalizer2(sClass_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional356=klass_219==((void*)0)&&*info->p!=60,                                        _if_conditional356) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_106),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value282=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value281=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1674, "struct sClass")))),type_name_106,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer2(sClass_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sClass_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    __dec_obj143=type_156;
                                    type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value283=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1678, "struct sType")))),type_name_106,(_Bool)0,info))));
                                    come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    type_156->mConstant=type_156->mConstant||constant_107;
                                    __dec_obj144=type_156->mAlignas;
                                    type_156->mAlignas=(struct sNode*)come_increment_ref_count(alignas__123);
                                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_156->mComeMemCore=type_156->mComeMemCore||come_mem_core__122;
                                    type_156->mRegister=register__110;
                                    type_156->mUnsigned=type_156->mUnsigned||unsigned__111;
                                    type_156->mVolatile=volatile__109;
                                    type_156->mStatic=type_156->mStatic||static__108;
                                    type_156->mExtern=type_156->mExtern||extern__120;
                                    type_156->mInline=type_156->mInline||inline__121;
                                    type_156->mRestrict=type_156->mRestrict||restrict__115;
                                    type_156->mLongLong=type_156->mLongLong||long_long_113;
                                    type_156->mLong=type_156->mLong||long__112;
                                    type_156->mShort=type_156->mShort||short__114;
                                    type_156->mPointerNum+=pointer_num_151;
                                    type_156->mHeap=type_156->mHeap||heap_152;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional45=*info->p==42,                    _while_condtional45) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_156->mPointerNum++;
                        if(type_156->mNoSolvedGenericsType->v1) {
                            type_156->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional405=*info->p==37,                    _if_conditional405) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mHeap=(_Bool)1;
                        if(type_156->mNoSolvedGenericsType->v1) {
                            type_156->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional407=*info->p==38,                    _if_conditional407) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNoHeap=(_Bool)1;
                        if(type_156->mNoSolvedGenericsType->v1) {
                            type_156->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional409=*info->p==63,                    _if_conditional409) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNullValue=(_Bool)1;
                    }
                    if(_if_conditional410=*info->p==124,                    _if_conditional410) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_156->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional46=*info->p==42,                    _while_condtional46) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_156->mPointerNum++;
                        if(type_156->mNoSolvedGenericsType->v1) {
                            type_156->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional412=parse_multiple_type&&*info->p==44,                    _if_conditional412) {
                        types_264=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value286=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value285=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1761, "struct list$1sTypeph"))))))));
                        come_call_finalizer2(list$1sTypephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(list$1sTypephp_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_264,(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(type_156)))));
                        come_call_finalizer2(sType_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional47=*info->p==44,                        _while_condtional47) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value288=parse_type(info,(_Bool)0,(_Bool)0)));
                            type2_265=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                            name_266=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            err_267=multiple_assign_var5->v3;
                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional413=!err_267,                            _if_conditional413) {
                                __result119__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value290=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value289=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1772, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer2(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                return __result119__;
                            }
                            list$1sTypeph_push_back(types_264,(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(type2_265)))));
                            come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_268=list$1sTypeph_length(types_264);
                        __dec_obj145=type_156;
                        type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1780, "struct sType")))),((char*)(right_value293=xsprintf("tuple%d",num_tuples_268))),(_Bool)0,info))));
                        come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        type_156->mPointerNum++;
                        type_156->mHeap=(_Bool)1;
                        for(                        o2_saved_269=(struct list$1sTypeph*)come_increment_ref_count((types_264)),it_270=list$1sTypeph_begin((o2_saved_269));                        !list$1sTypeph_end((o2_saved_269));                        it_270=list$1sTypeph_next((o2_saved_269))                        ){
                            list$1sTypeph_push_back(type_156->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(it_270)))));
                            come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,o2_saved_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional414=is_contained_generics_class(type_156,info),                        _if_conditional414) {
                            __dec_obj146=type_156;
                            type_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=solve_generics(type_156,info->generics_type,info))));
                            come_call_finalizer2(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional415=!output_generics_struct(type_156,type_156,info),                            _if_conditional415) {
                                new_name_271=(char*)come_increment_ref_count(((char*)(right_value297=create_generics_name(type_156,info))));
                                right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_271);
                                exit(9);
                                new_name_271 = come_decrement_ref_count2(new_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer2(list$1sTypephp_finalize,types_264, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional417=var_name_between_brace_162&&*info->p==40,                        _if_conditional417) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional418=*info->p==58,                        _if_conditional418) {
                            __dec_obj147=var_name_157;
                            var_name_157=(char*)come_increment_ref_count(((char*)(right_value298=__builtin_string(""))));
                            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_125) {
                                num_anonymous_var_name_272++;
                                __dec_obj148=var_name_157;
                                var_name_157=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_272))));
                                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional420=xisalnum(*info->p)||*info->p==95,                                _if_conditional420) {
                                    __dec_obj149=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value300=parse_word(info))));
                                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_273++;
                                    __dec_obj150=var_name_157;
                                    var_name_157=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_273))));
                                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional421=var_name_between_brace_162&&*info->p==41,                        _if_conditional421) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional422=*info->p==58,                        _if_conditional422) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_274=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=expression_v13(info))));
                            if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_274;
                            __dec_obj151=type_156->mSizeNum;
                            type_156->mSizeNum=(struct sNode*)come_increment_ref_count(node_275);
                            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_275) { node_275 = come_decrement_ref_count2(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional48=*info->p==91,    _while_condtional48) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional423=*info->p==93,        _if_conditional423) {
            info->p++;
            skip_spaces_and_lf(info);
            type_156->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=expression_v13(info))));
        if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(type_156->mArrayNum,(struct sNode*)come_increment_ref_count(node_276));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_277=(char*)come_increment_ref_count(((char*)(right_value304=parse_attribute(info))));
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj152=type_156->mAsmName;
    type_156->mAsmName=(char*)come_increment_ref_count(asm_name_277);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result120__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value306=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value305=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1874, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_156),(char*)come_increment_ref_count(var_name_157),(_Bool)1)));
    type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_277 = come_decrement_ref_count2(asm_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result120__;
    type_name_106 = come_decrement_ref_count2(type_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__123) { alignas__123 = come_decrement_ref_count2(alignas__123, ((struct sNode*)alignas__123)->finalize, ((struct sNode*)alignas__123)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,type_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_157 = come_decrement_ref_count2(var_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_277 = come_decrement_ref_count2(asm_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple3$3sTypephcharphbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj57=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                __dec_obj58=self->v2;
                                self->v2=(char*)come_increment_ref_count(v2);
                                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->v3=v3;
                                __result58__ = __result_obj__ = self;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result58__;
                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_177;
unsigned int hash_178;
unsigned int it_179;
_Bool _while_condtional32;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct sType* __result68__;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sType* __result69__;
struct sType* __result70__;
struct sType* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_177, 0, sizeof(struct sType*));
memset(&hash_178, 0, sizeof(unsigned int));
memset(&it_179, 0, sizeof(unsigned int));
                memset(&default_value_177,0,sizeof(struct sType*));
                hash_178=string_get_hash_key(((char*)key))%self->size;
                it_179=hash_178;
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    if(_if_conditional297=self->item_existance[it_179],                    _if_conditional297) {
                        if(_if_conditional298=string_equals(self->keys[it_179],key),                        _if_conditional298) {
                            __result68__ = __result_obj__ = self->items[it_179];
                            come_call_finalizer2(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result68__;
                        }
                        it_179++;
                        if(_if_conditional299=it_179>=self->size,                        _if_conditional299) {
                            it_179=0;
                        }
                        else {
                            if(_if_conditional300=it_179==hash_178,                            _if_conditional300) {
                                __result69__ = __result_obj__ = default_value_177;
                                come_call_finalizer2(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result69__;
                            }
                        }
                    }
                    else {
                        __result70__ = __result_obj__ = default_value_177;
                        come_call_finalizer2(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result70__;
                    }
                }
                __result71__ = __result_obj__ = default_value_177;
                come_call_finalizer2(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result71__;
                come_call_finalizer2(sType_finalize,default_value_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_182;
_Bool _if_conditional306;
_Bool __result79__;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_182, 0, sizeof(char*));
                    for(                    it_182=list$1charph_begin(self);                    !list$1charph_end(self);                    it_182=list$1charph_next(self)                    ){
                        if(_if_conditional306=string_operator_equals(it_182,item),                        _if_conditional306) {
                            __result79__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result79__;
                        }
                    }
                    __result80__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result80__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional302;
char* result_180;
char* __result72__;
_Bool _if_conditional303;
char* __result73__;
char* result_181;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_180, 0, sizeof(char*));
memset(&result_181, 0, sizeof(char*));
                        if(_if_conditional302=self==((void*)0),                        _if_conditional302) {
                            memset(&result_180,0,sizeof(char*));
                            __result72__ = __result_obj__ = result_180;
                            return __result72__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result73__ = __result_obj__ = self->it->item;
                            return __result73__;
                        }
                        memset(&result_181,0,sizeof(char*));
                        __result74__ = __result_obj__ = result_181;
                        return __result74__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result75__ = self==((void*)0)||self->it==((void*)0);
                        return __result75__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional304;
char* result_183;
char* __result76__;
_Bool _if_conditional305;
char* __result77__;
char* result_184;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                        if(_if_conditional304=self==((void*)0)||self->it==((void*)0),                        _if_conditional304) {
                            memset(&result_183,0,sizeof(char*));
                            __result76__ = __result_obj__ = result_183;
                            return __result76__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result77__ = __result_obj__ = self->it->item;
                            return __result77__;
                        }
                        memset(&result_184,0,sizeof(char*));
                        __result78__ = __result_obj__ = result_184;
                        return __result78__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result81__ = self->len;
                        return __result81__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional308;
struct list_item$1charph* it_186;
int i_187;
_Bool _while_condtional33;
_Bool _if_conditional309;
char* __result82__;
char* default_value_188;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_186, 0, sizeof(struct list_item$1charph*));
memset(&i_187, 0, sizeof(int));
memset(&default_value_188, 0, sizeof(char*));
                            if(_if_conditional308=position<0,                            _if_conditional308) {
                                position+=self->len;
                            }
                            it_186=self->head;
                            i_187=0;
                            while(_while_condtional33=it_186!=((void*)0),                            _while_condtional33) {
                                if(_if_conditional309=position==i_187,                                _if_conditional309) {
                                    __result82__ = __result_obj__ = it_186->item;
                                    return __result82__;
                                }
                                it_186=it_186->next;
                                i_187++;
                            }
                            memset(&default_value_188,0,sizeof(char*));
                            __result83__ = __result_obj__ = default_value_188;
                            default_value_188 = come_decrement_ref_count2(default_value_188, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result83__;
                            default_value_188 = come_decrement_ref_count2(default_value_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj112;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj112=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result84__ = __result_obj__ = self;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result84__;
                come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
struct tuple3$3voidpvoidpbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->v1=v1;
                            self->v2=v2;
                            self->v3=v3;
                            __result86__ = __result_obj__ = self;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result86__;
                            come_call_finalizer2(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3voidpvoidpboolp_finalize(struct tuple3$3voidpvoidpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional324=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional324) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional325=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional325) {
                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_210;
unsigned int hash_211;
unsigned int it_212;
_Bool _while_condtional34;
_Bool _if_conditional339;
_Bool _if_conditional340;
struct sClass* __result88__;
_Bool _if_conditional347;
_Bool _if_conditional348;
struct sClass* __result89__;
struct sClass* __result90__;
struct sClass* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_210, 0, sizeof(struct sClass*));
memset(&hash_211, 0, sizeof(unsigned int));
memset(&it_212, 0, sizeof(unsigned int));
                                        memset(&default_value_210,0,sizeof(struct sClass*));
                                        hash_211=string_get_hash_key(((char*)key))%self->size;
                                        it_212=hash_211;
                                        while(_while_condtional34=(_Bool)1,                                        _while_condtional34) {
                                            if(_if_conditional339=self->item_existance[it_212],                                            _if_conditional339) {
                                                if(_if_conditional340=string_equals(self->keys[it_212],key),                                                _if_conditional340) {
                                                    __result88__ = __result_obj__ = self->items[it_212];
                                                    come_call_finalizer2(sClass_finalize,default_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    return __result88__;
                                                }
                                                it_212++;
                                                if(_if_conditional347=it_212>=self->size,                                                _if_conditional347) {
                                                    it_212=0;
                                                }
                                                else {
                                                    if(_if_conditional348=it_212==hash_211,                                                    _if_conditional348) {
                                                        __result89__ = __result_obj__ = default_value_210;
                                                        come_call_finalizer2(sClass_finalize,default_value_210, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result89__;
                                                    }
                                                }
                                            }
                                            else {
                                                __result90__ = __result_obj__ = default_value_210;
                                                come_call_finalizer2(sClass_finalize,default_value_210, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result90__;
                                            }
                                        }
                                        __result91__ = __result_obj__ = default_value_210;
                                        come_call_finalizer2(sClass_finalize,default_value_210, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result91__;
                                        come_call_finalizer2(sClass_finalize,default_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional341=self!=((void*)0)&&self->mName!=((void*)0),                                                        _if_conditional341) {
                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional342=self!=((void*)0)&&self->mFields!=((void*)0),                                                        _if_conditional342) {
                                                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional346=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                        _if_conditional346) {
                                                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_213;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_214, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_213=self->head;
                                                                while(_while_condtional35=it_213!=((void*)0),                                                                _while_condtional35) {
                                                                    prev_it_214=it_213;
                                                                    it_213=it_213->next;
                                                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional343;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional343=self!=((void*)0)&&self->item!=((void*)0),                                                                        _if_conditional343) {
                                                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional344=self!=((void*)0)&&self->v1!=((void*)0),                                                                                _if_conditional344) {
                                                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional345=self!=((void*)0)&&self->v2!=((void*)0),                                                                                _if_conditional345) {
                                                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional357;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional39;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool same_key_exist_255;
char* it2_258;
_Bool _if_conditional400;
_Bool _if_conditional401;
struct map$2charphsClassph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
memset(&same_key_exist_255, 0, sizeof(_Bool));
memset(&it2_258, 0, sizeof(char*));
                                                if(_if_conditional357=self->len*10>=self->size,                                                _if_conditional357) {
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                hash_237=string_get_hash_key(key)%self->size;
                                                it_238=hash_237;
                                                while(_while_condtional39=(_Bool)1,                                                _while_condtional39) {
                                                    if(_if_conditional369=self->item_existance[it_238],                                                    _if_conditional369) {
                                                        if(_if_conditional370=string_equals(self->keys[it_238],key),                                                        _if_conditional370) {
                                                            if(_if_conditional371=1,                                                            _if_conditional371) {
                                                                list$1charp_remove(self->key_list,self->keys[it_238]);
                                                                self->keys[it_238] = come_decrement_ref_count2(self->keys[it_238], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                self->keys[it_238]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                list$1charp_remove(self->key_list,self->keys[it_238]);
                                                                self->keys[it_238]=key;
                                                            }
                                                            if(_if_conditional391=1,                                                            _if_conditional391) {
                                                                come_call_finalizer2(sClass_finalize,self->items[it_238], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_238]=item;
                                                            }
                                                            break;
                                                        }
                                                        it_238++;
                                                        if(_if_conditional392=it_238>=self->size,                                                        _if_conditional392) {
                                                            it_238=0;
                                                        }
                                                        else {
                                                            if(_if_conditional393=it_238==hash_237,                                                            _if_conditional393) {
                                                                printf("unexpected error in map.insert\n");
                                                                stackframe();
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        self->item_existance[it_238]=(_Bool)1;
                                                        if(_if_conditional394=1,                                                        _if_conditional394) {
                                                            self->keys[it_238]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            self->keys[it_238]=key;
                                                        }
                                                        if(_if_conditional395=1,                                                        _if_conditional395) {
                                                            self->items[it_238]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_238]=item;
                                                        }
                                                        self->len++;
                                                        break;
                                                    }
                                                }
                                                same_key_exist_255=(_Bool)0;
                                                for(                                                it2_258=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_258=list$1charp_next(self->key_list)                                                ){
                                                    if(_if_conditional400=string_equals(it2_258,key),                                                    _if_conditional400) {
                                                        same_key_exist_255=(_Bool)1;
                                                    }
                                                }
                                                if(_if_conditional401=!same_key_exist_255,                                                _if_conditional401) {
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                __result118__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result118__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_220;
void* right_value273;
char** keys_221;
void* right_value274;
struct sClass** items_222;
void* right_value275;
_Bool* item_existance_223;
int len_224;
char* it_227;
struct sClass* default_value_230;
void* right_value276;
struct sClass* it2_233;
unsigned int hash_234;
int n_235;
_Bool _while_condtional38;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
struct sClass* default_value_236;
void* right_value277;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_220, 0, sizeof(int));
right_value273 = (void*)0;
memset(&keys_221, 0, sizeof(char**));
right_value274 = (void*)0;
memset(&items_222, 0, sizeof(struct sClass**));
right_value275 = (void*)0;
memset(&item_existance_223, 0, sizeof(_Bool*));
memset(&len_224, 0, sizeof(int));
memset(&it_227, 0, sizeof(char*));
memset(&default_value_230, 0, sizeof(struct sClass*));
right_value276 = (void*)0;
memset(&it2_233, 0, sizeof(struct sClass*));
memset(&hash_234, 0, sizeof(unsigned int));
memset(&n_235, 0, sizeof(int));
memset(&default_value_236, 0, sizeof(struct sClass*));
right_value277 = (void*)0;
                                                        size_220=self->size*10;
                                                        keys_221=(char**)come_increment_ref_count(((char**)(right_value273=(char**)come_calloc(1, sizeof(char*)*(1*(size_220)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                                                        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        items_222=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value274=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_220)), "/usr/local/include/comelang2.h", 1315, "struct sClass*"))));
                                                        come_call_finalizer2(sClass_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        item_existance_223=(_Bool*)come_increment_ref_count(((_Bool*)(right_value275=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_220)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                                                        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        len_224=0;
                                                        for(                                                        it_227=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_227=map$2charphsClassph_next(self)                                                        ){
                                                            memset(&default_value_230,0,sizeof(struct sClass*));
                                                            it2_233=((struct sClass*)(right_value276=map$2charphsClassph_at(self,it_227,default_value_230)));
                                                            come_call_finalizer2(sClass_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            hash_234=string_get_hash_key(it_227)%size_220;
                                                            n_235=hash_234;
                                                            while(_while_condtional38=(_Bool)1,                                                            _while_condtional38) {
                                                                if(_if_conditional366=item_existance_223[n_235],                                                                _if_conditional366) {
                                                                    n_235++;
                                                                    if(_if_conditional367=n_235>=size_220,                                                                    _if_conditional367) {
                                                                        n_235=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional368=n_235==hash_234,                                                                        _if_conditional368) {
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            stackframe();
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    item_existance_223[n_235]=(_Bool)1;
                                                                    keys_221[n_235]=it_227;
                                                                    items_222[n_235]=((struct sClass*)(right_value277=map$2charphsClassph_at(self,it_227,default_value_236)));
                                                                    come_call_finalizer2(sClass_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    len_224++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        come_free((char*)self->items);
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_free((char*)self->keys);
                                                        self->keys=keys_221;
                                                        self->items=items_222;
                                                        self->item_existance=item_existance_223;
                                                        self->size=size_220;
                                                        self->len=len_224;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional358;
char* result_225;
char* __result95__;
_Bool _if_conditional359;
char* __result96__;
char* result_226;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_225, 0, sizeof(char*));
memset(&result_226, 0, sizeof(char*));
                                                            if(_if_conditional358=self==((void*)0),                                                            _if_conditional358) {
                                                                memset(&result_225,0,sizeof(char*));
                                                                __result95__ = __result_obj__ = result_225;
                                                                return __result95__;
                                                            }
                                                            self->key_list->it=self->key_list->head;
                                                            if(self->key_list->it) {
                                                                __result96__ = __result_obj__ = self->key_list->it->item;
                                                                return __result96__;
                                                            }
                                                            memset(&result_226,0,sizeof(char*));
                                                            __result97__ = __result_obj__ = result_226;
                                                            return __result97__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result98__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result98__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional360;
char* result_228;
char* __result99__;
_Bool _if_conditional361;
char* __result100__;
char* result_229;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_228, 0, sizeof(char*));
memset(&result_229, 0, sizeof(char*));
                                                            if(_if_conditional360=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional360) {
                                                                memset(&result_228,0,sizeof(char*));
                                                                __result99__ = __result_obj__ = result_228;
                                                                return __result99__;
                                                            }
                                                            self->key_list->it=self->key_list->it->next;
                                                            if(self->key_list->it) {
                                                                __result100__ = __result_obj__ = self->key_list->it->item;
                                                                return __result100__;
                                                            }
                                                            memset(&result_229,0,sizeof(char*));
                                                            __result101__ = __result_obj__ = result_229;
                                                            return __result101__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_231;
unsigned int it_232;
_Bool _while_condtional37;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct sClass* __result102__;
_Bool _if_conditional364;
_Bool _if_conditional365;
struct sClass* __result103__;
struct sClass* __result104__;
struct sClass* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_231, 0, sizeof(unsigned int));
memset(&it_232, 0, sizeof(unsigned int));
                                                                hash_231=string_get_hash_key(((char*)key))%self->size;
                                                                it_232=hash_231;
                                                                while(_while_condtional37=(_Bool)1,                                                                _while_condtional37) {
                                                                    if(_if_conditional362=self->item_existance[it_232],                                                                    _if_conditional362) {
                                                                        if(_if_conditional363=string_equals(self->keys[it_232],key),                                                                        _if_conditional363) {
                                                                            __result102__ = __result_obj__ = self->items[it_232];
                                                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result102__;
                                                                        }
                                                                        it_232++;
                                                                        if(_if_conditional364=it_232>=self->size,                                                                        _if_conditional364) {
                                                                            it_232=0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional365=it_232==hash_231,                                                                            _if_conditional365) {
                                                                                __result103__ = __result_obj__ = default_value;
                                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result103__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result104__ = __result_obj__ = default_value;
                                                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                        return __result104__;
                                                                    }
                                                                }
                                                                __result105__ = __result_obj__ = default_value;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result105__;
                                                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_239;
struct list_item$1charp* it_240;
_Bool _while_condtional40;
_Bool _if_conditional372;
struct list$1charp* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_239, 0, sizeof(int));
memset(&it_240, 0, sizeof(struct list_item$1charp*));
                                                                    it2_239=0;
                                                                    it_240=self->head;
                                                                    while(_while_condtional40=it_240!=((void*)0),                                                                    _while_condtional40) {
                                                                        if(_if_conditional372=string_equals(it_240->item,item),                                                                        _if_conditional372) {
                                                                            list$1charp_delete(self,it2_239,it2_239+1);
                                                                            break;
                                                                        }
                                                                        it2_239++;
                                                                        it_240=it_240->next;
                                                                    }
                                                                    __result109__ = __result_obj__ = self;
                                                                    return __result109__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
int tmp_241;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
struct list$1charp* __result106__;
_Bool _if_conditional379;
_Bool _if_conditional380;
struct list_item$1charp* it_244;
int i_245;
_Bool _while_condtional42;
_Bool _if_conditional381;
struct list_item$1charp* prev_it_246;
_Bool _if_conditional382;
_Bool _if_conditional383;
struct list_item$1charp* it_247;
int i_248;
_Bool _while_condtional43;
_Bool _if_conditional384;
_Bool _if_conditional385;
struct list_item$1charp* prev_it_249;
struct list_item$1charp* it_250;
struct list_item$1charp* head_prev_it_251;
struct list_item$1charp* tail_it_252;
int i_253;
_Bool _while_condtional44;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
struct list_item$1charp* prev_it_254;
_Bool _if_conditional389;
_Bool _if_conditional390;
struct list$1charp* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_241, 0, sizeof(int));
memset(&it_244, 0, sizeof(struct list_item$1charp*));
memset(&i_245, 0, sizeof(int));
memset(&prev_it_246, 0, sizeof(struct list_item$1charp*));
memset(&it_247, 0, sizeof(struct list_item$1charp*));
memset(&i_248, 0, sizeof(int));
memset(&prev_it_249, 0, sizeof(struct list_item$1charp*));
memset(&it_250, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_251, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_252, 0, sizeof(struct list_item$1charp*));
memset(&i_253, 0, sizeof(int));
memset(&prev_it_254, 0, sizeof(struct list_item$1charp*));
                                                                                if(_if_conditional373=head<0,                                                                                _if_conditional373) {
                                                                                    head+=self->len;
                                                                                }
                                                                                if(_if_conditional374=tail<0,                                                                                _if_conditional374) {
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                if(_if_conditional375=head>tail,                                                                                _if_conditional375) {
                                                                                    tmp_241=tail;
                                                                                    tail=head;
                                                                                    head=tmp_241;
                                                                                }
                                                                                if(_if_conditional376=head<0,                                                                                _if_conditional376) {
                                                                                    head=0;
                                                                                }
                                                                                if(_if_conditional377=tail>self->len,                                                                                _if_conditional377) {
                                                                                    tail=self->len;
                                                                                }
                                                                                if(_if_conditional378=head==tail,                                                                                _if_conditional378) {
                                                                                    __result106__ = __result_obj__ = self;
                                                                                    return __result106__;
                                                                                }
                                                                                if(_if_conditional379=head==0&&tail==self->len,                                                                                _if_conditional379) {
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional380=head==0,                                                                                    _if_conditional380) {
                                                                                        it_244=self->head;
                                                                                        i_245=0;
                                                                                        while(_while_condtional42=it_244!=((void*)0),                                                                                        _while_condtional42) {
                                                                                            if(_if_conditional381=i_245<tail,                                                                                            _if_conditional381) {
                                                                                                prev_it_246=it_244;
                                                                                                it_244=it_244->next;
                                                                                                i_245++;
                                                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional382=i_245==tail,                                                                                                _if_conditional382) {
                                                                                                    self->head=it_244;
                                                                                                    self->head->prev=((void*)0);
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    it_244=it_244->next;
                                                                                                    i_245++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional383=tail==self->len,                                                                                        _if_conditional383) {
                                                                                            it_247=self->head;
                                                                                            i_248=0;
                                                                                            while(_while_condtional43=it_247!=((void*)0),                                                                                            _while_condtional43) {
                                                                                                if(_if_conditional384=i_248==head,                                                                                                _if_conditional384) {
                                                                                                    self->tail=it_247->prev;
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                if(_if_conditional385=i_248>=head,                                                                                                _if_conditional385) {
                                                                                                    prev_it_249=it_247;
                                                                                                    it_247=it_247->next;
                                                                                                    i_248++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_247=it_247->next;
                                                                                                    i_248++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            it_250=self->head;
                                                                                            head_prev_it_251=((void*)0);
                                                                                            tail_it_252=((void*)0);
                                                                                            i_253=0;
                                                                                            while(_while_condtional44=it_250!=((void*)0),                                                                                            _while_condtional44) {
                                                                                                if(_if_conditional386=i_253==head,                                                                                                _if_conditional386) {
                                                                                                    head_prev_it_251=it_250->prev;
                                                                                                }
                                                                                                if(_if_conditional387=i_253==tail,                                                                                                _if_conditional387) {
                                                                                                    tail_it_252=it_250;
                                                                                                }
                                                                                                if(_if_conditional388=i_253>=head&&i_253<tail,                                                                                                _if_conditional388) {
                                                                                                    prev_it_254=it_250;
                                                                                                    it_250=it_250->next;
                                                                                                    i_253++;
                                                                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_250=it_250->next;
                                                                                                    i_253++;
                                                                                                }
                                                                                            }
                                                                                            if(_if_conditional389=head_prev_it_251!=((void*)0),                                                                                            _if_conditional389) {
                                                                                                head_prev_it_251->next=tail_it_252;
                                                                                            }
                                                                                            if(_if_conditional390=tail_it_252!=((void*)0),                                                                                            _if_conditional390) {
                                                                                                tail_it_252->prev=head_prev_it_251;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                __result108__ = __result_obj__ = self;
                                                                                return __result108__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_242;
_Bool _while_condtional41;
struct list_item$1charp* prev_it_243;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_242, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_243, 0, sizeof(struct list_item$1charp*));
                                                                                        it_242=self->head;
                                                                                        while(_while_condtional41=it_242!=((void*)0),                                                                                        _while_condtional41) {
                                                                                            prev_it_243=it_242;
                                                                                            it_242=it_242->next;
                                                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        self->head=((void*)0);
                                                                                        self->tail=((void*)0);
                                                                                        self->len=0;
                                                                                        __result107__ = __result_obj__ = self;
                                                                                        return __result107__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional396;
char* result_256;
char* __result110__;
_Bool _if_conditional397;
char* __result111__;
char* result_257;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(char*));
memset(&result_257, 0, sizeof(char*));
                                                    if(_if_conditional396=self==((void*)0),                                                    _if_conditional396) {
                                                        memset(&result_256,0,sizeof(char*));
                                                        __result110__ = __result_obj__ = result_256;
                                                        return __result110__;
                                                    }
                                                    self->it=self->head;
                                                    if(self->it) {
                                                        __result111__ = __result_obj__ = self->it->item;
                                                        return __result111__;
                                                    }
                                                    memset(&result_257,0,sizeof(char*));
                                                    __result112__ = __result_obj__ = result_257;
                                                    return __result112__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result113__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result113__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional398;
char* result_259;
char* __result114__;
_Bool _if_conditional399;
char* __result115__;
char* result_260;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_259, 0, sizeof(char*));
memset(&result_260, 0, sizeof(char*));
                                                    if(_if_conditional398=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional398) {
                                                        memset(&result_259,0,sizeof(char*));
                                                        __result114__ = __result_obj__ = result_259;
                                                        return __result114__;
                                                    }
                                                    self->it=self->it->next;
                                                    if(self->it) {
                                                        __result115__ = __result_obj__ = self->it->item;
                                                        return __result115__;
                                                    }
                                                    memset(&result_260,0,sizeof(char*));
                                                    __result116__ = __result_obj__ = result_260;
                                                    return __result116__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional402;
void* right_value278;
struct list_item$1charp* litem_261;
_Bool _if_conditional403;
void* right_value279;
struct list_item$1charp* litem_262;
void* right_value280;
struct list_item$1charp* litem_263;
struct list$1charp* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&litem_261, 0, sizeof(struct list_item$1charp*));
right_value279 = (void*)0;
memset(&litem_262, 0, sizeof(struct list_item$1charp*));
right_value280 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1charp*));
                                                        if(_if_conditional402=self->len==0,                                                        _if_conditional402) {
                                                            litem_261=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value278=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                                                            come_call_finalizer2(list_item$1charpp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_261->prev=((void*)0);
                                                            litem_261->next=((void*)0);
                                                            litem_261->item=item;
                                                            self->tail=litem_261;
                                                            self->head=litem_261;
                                                        }
                                                        else {
                                                            if(_if_conditional403=self->len==1,                                                            _if_conditional403) {
                                                                litem_262=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value279=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_262->prev=self->head;
                                                                litem_262->next=((void*)0);
                                                                litem_262->item=item;
                                                                self->tail=litem_262;
                                                                self->head->next=litem_262;
                                                            }
                                                            else {
                                                                litem_263=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value280=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                                                                come_call_finalizer2(list_item$1charpp_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                litem_263->prev=self->tail;
                                                                litem_263->next=((void*)0);
                                                                litem_263->item=item;
                                                                self->tail->next=litem_263;
                                                                self->tail=litem_263;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result117__ = __result_obj__ = self;
                                                        return __result117__;
}

