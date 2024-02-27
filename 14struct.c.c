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
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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

char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_5;
_Bool _while_condtional1;
_Bool _if_conditional5;
void* right_value10;
void* right_value11;
char* __result7__;
void* right_value12;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_5, 0, sizeof(char*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value12 = (void*)0;
    p_5=class_name;
    while(_while_condtional1=*p_5,    _while_condtional1) {
        if(_if_conditional5=*p_5==36,        _if_conditional5) {
            __result7__ = __result_obj__ = ((char*)(right_value11=string_substring(((char*)(right_value10=__builtin_string(class_name))),0,p_5-class_name)));
            right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result7__;
        }
        else {
            p_5++;
        }
    }
    __result8__ = __result_obj__ = ((char*)(right_value12=__builtin_string(class_name)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value13;
void* right_value14;
struct buffer* buf_6;
struct sClass* klass_7;
char* class_name_8;
_Bool _if_conditional6;
int i_9;
void* right_value15;
struct sType* type_19;
void* right_value16;
char* type_name_20;
int i_21;
_Bool _if_conditional25;
void* right_value17;
char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&buf_6, 0, sizeof(struct buffer*));
memset(&klass_7, 0, sizeof(struct sClass*));
memset(&class_name_8, 0, sizeof(char*));
memset(&i_9, 0, sizeof(int));
right_value15 = (void*)0;
memset(&type_19, 0, sizeof(struct sType*));
right_value16 = (void*)0;
memset(&type_name_20, 0, sizeof(char*));
memset(&i_21, 0, sizeof(int));
right_value17 = (void*)0;
    buf_6=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value14=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    klass_7=generics_type->mClass;
    class_name_8=klass_7->mName;
    buffer_append_str(buf_6,class_name_8);
    if(_if_conditional6=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional6) {
        buffer_append_char(buf_6,36);
        buffer_append_char(buf_6,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_9=0;        i_9<list$1sTypeph_length(generics_type->mGenericsTypes);        i_9++        ){
            type_19=((struct sType*)(right_value15=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_9)));
            come_call_finalizer2(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type_name_20=(char*)come_increment_ref_count(((char*)(right_value16=create_generics_name(type_19,info))));
            right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_6,type_name_20);
            for(            i_21=0;            i_21<type_19->mPointerNum;            i_21++            ){
                buffer_append_char(buf_6,112);
            }
            if(type_19->mHeap) {
                buffer_append_str(buf_6,"h");
            }
            type_name_20 = come_decrement_ref_count2(type_name_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result13__ = __result_obj__ = ((char*)(right_value17=buffer_to_string(buf_6)));
    come_call_finalizer2(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result13__;
    come_call_finalizer2(buffer_finalize,buf_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result10__;
memset(&__result_obj__, 0, sizeof(void*));
        __result10__ = self->len;
        return __result10__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional7;
struct list_item$1sTypeph* it_10;
int i_11;
_Bool _while_condtional2;
_Bool _if_conditional8;
struct sType* __result11__;
struct sType* default_value_12;
struct sType* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_11, 0, sizeof(int));
memset(&default_value_12, 0, sizeof(struct sType*));
                if(_if_conditional7=position<0,                _if_conditional7) {
                    position+=self->len;
                }
                it_10=self->head;
                i_11=0;
                while(_while_condtional2=it_10!=((void*)0),                _while_condtional2) {
                    if(_if_conditional8=position==i_11,                    _if_conditional8) {
                        __result11__ = __result_obj__ = it_10->item;
                        return __result11__;
                    }
                    it_10=it_10->next;
                    i_11++;
                }
                memset(&default_value_12,0,sizeof(struct sType*));
                __result12__ = __result_obj__ = default_value_12;
                come_call_finalizer2(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result12__;
                come_call_finalizer2(sType_finalize,default_value_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sTypeph*));
                            it_13=self->head;
                            while(_while_condtional3=it_13!=((void*)0),                            _while_condtional3) {
                                prev_it_14=it_13;
                                it_13=it_13->next;
                                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_15;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sNodeph*));
                            it_15=self->head;
                            while(_while_condtional4=it_15!=((void*)0),                            _while_condtional4) {
                                prev_it_16=it_15;
                                it_15=it_15->next;
                                come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_17;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                            it_17=self->head;
                            while(_while_condtional5=it_17!=((void*)0),                            _while_condtional5) {
                                prev_it_18=it_17;
                                it_17=it_17->next;
                                come_call_finalizer2(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional26;
void* right_value18;
void* right_value19;
struct buffer* buf_22;
void* right_value20;
struct list$1tuple2$2charphsTypephph* o2_saved_23;
struct tuple2$2charphsTypeph* it_26;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_29;
struct sType* type_30;
void* right_value21;
_Bool _if_conditional34;
void* right_value22;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&buf_22, 0, sizeof(struct buffer*));
right_value20 = (void*)0;
memset(&o2_saved_23, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_26, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
memset(&name_29, 0, sizeof(char*));
memset(&type_30, 0, sizeof(struct sType*));
right_value21 = (void*)0;
right_value22 = (void*)0;
    if(_if_conditional26=!klass->mOutputed,    _if_conditional26) {
        klass->mOutputed=(_Bool)1;
        buf_22=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value18=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "struct buffer"))))))));
        come_call_finalizer2(buffer_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_22,((char*)(right_value20=xsprintf("struct %s\n{\n",klass->mName))));
        right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        o2_saved_23=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_26=list$1tuple2$2charphsTypephph_begin((o2_saved_23));        !list$1tuple2$2charphsTypephph_end((o2_saved_23));        it_26=list$1tuple2$2charphsTypephph_next((o2_saved_23))        ){
            multiple_assign_var1=it_26;
            name_29=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_30=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_30->mStatic=(_Bool)0;
            buffer_append_str(buf_22,"    ");
            buffer_append_str(buf_22,((char*)(right_value21=make_define_var(type_30,name_29,(_Bool)0,info))));
            right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_22,";\n");
            name_29 = come_decrement_ref_count2(name_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_22,"};\n");
        if(_if_conditional34=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional34) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value22=buffer_to_string(buf_22))));
            right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer2(buffer_finalize,buf_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_24;
struct tuple2$2charphsTypeph* __result14__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result15__;
struct tuple2$2charphsTypeph* result_25;
struct tuple2$2charphsTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional27=self==((void*)0),            _if_conditional27) {
                memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*));
                __result14__ = __result_obj__ = result_24;
                return __result14__;
            }
            self->it=self->head;
            if(self->it) {
                __result15__ = __result_obj__ = self->it->item;
                return __result15__;
            }
            memset(&result_25,0,sizeof(struct tuple2$2charphsTypeph*));
            __result16__ = __result_obj__ = result_25;
            return __result16__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result17__;
memset(&__result_obj__, 0, sizeof(void*));
            __result17__ = self==((void*)0)||self->it==((void*)0);
            return __result17__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional29;
struct tuple2$2charphsTypeph* result_27;
struct tuple2$2charphsTypeph* __result18__;
_Bool _if_conditional30;
struct tuple2$2charphsTypeph* __result19__;
struct tuple2$2charphsTypeph* result_28;
struct tuple2$2charphsTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_27, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_28, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional29=self==((void*)0)||self->it==((void*)0),            _if_conditional29) {
                memset(&result_27,0,sizeof(struct tuple2$2charphsTypeph*));
                __result18__ = __result_obj__ = result_27;
                return __result18__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result19__ = __result_obj__ = self->it->item;
                return __result19__;
            }
            memset(&result_28,0,sizeof(struct tuple2$2charphsTypeph*));
            __result20__ = __result_obj__ = result_28;
            return __result20__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_31;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_31=self->head;
            while(_while_condtional6=it_31!=((void*)0),            _while_condtional6) {
                prev_it_32=it_31;
                it_31=it_31->next;
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional32) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional33=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional33) {
                                come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_33;
_Bool _if_conditional35;
_Bool __result21__;
_Bool _if_conditional36;
_Bool __result22__;
int i_34;
void* right_value23;
_Bool result_35;
_Bool _if_conditional37;
_Bool __result23__;
_Bool __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_33, 0, sizeof(struct sClass*));
memset(&i_34, 0, sizeof(int));
right_value23 = (void*)0;
memset(&result_35, 0, sizeof(_Bool));
    klass_33=type->mClass;
    if(klass_33->mGenerics) {
        __result21__ = (_Bool)0;
        return __result21__;
    }
    if(klass_33->mMethodGenerics) {
        __result22__ = (_Bool)0;
        return __result22__;
    }
    for(    i_34=0;    i_34<list$1sTypeph_length(type->mGenericsTypes);    i_34++    ){
        result_35=is_no_contained_generics_types(((struct sType*)(right_value23=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_34))),info);
        come_call_finalizer2(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional37=!result_35,        _if_conditional37) {
            __result23__ = (_Bool)0;
            return __result23__;
        }
    }
    __result24__ = (_Bool)1;
    return __result24__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value24;
char* new_name_36;
_Bool _if_conditional42;
void* right_value59;
struct sType* type2_57;
void* right_value60;
struct sClass* generics_class_61;
_Bool _if_conditional120;
_Bool __result51__;
void* right_value61;
void* right_value62;
struct sClass* new_class_62;
void* right_value71;
int i_107;
struct list$1tuple2$2charphsTypephph* o2_saved_108;
struct tuple2$2charphsTypeph* it_109;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_110;
struct sType* type_111;
void* right_value72;
struct sType* new_type_112;
void* right_value76;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
struct sType* __dec_obj33;
_Bool _if_conditional172;
void* right_value81;
struct sClass* generics_class_118;
_Bool _if_conditional173;
_Bool __result79__;
void* right_value82;
void* right_value83;
struct sClass* new_class_119;
void* right_value84;
int i_120;
struct list$1tuple2$2charphsTypephph* o2_saved_121;
struct tuple2$2charphsTypeph* it_122;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_123;
struct sType* type_124;
void* right_value85;
struct sType* new_type_125;
void* right_value86;
void* right_value87;
void* right_value88;
void* right_value89;
void* right_value90;
struct sType* __dec_obj34;
_Bool _if_conditional174;
void* right_value91;
struct sType* __dec_obj35;
void* right_value92;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&new_name_36, 0, sizeof(char*));
right_value59 = (void*)0;
memset(&type2_57, 0, sizeof(struct sType*));
right_value60 = (void*)0;
memset(&generics_class_61, 0, sizeof(struct sClass*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&new_class_62, 0, sizeof(struct sClass*));
right_value71 = (void*)0;
memset(&i_107, 0, sizeof(int));
memset(&o2_saved_108, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_109, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_110, 0, sizeof(char*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&name_110, 0, sizeof(char*));
memset(&type_111, 0, sizeof(struct sType*));
right_value72 = (void*)0;
memset(&new_type_112, 0, sizeof(struct sType*));
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&generics_class_118, 0, sizeof(struct sClass*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&new_class_119, 0, sizeof(struct sClass*));
right_value84 = (void*)0;
memset(&i_120, 0, sizeof(int));
memset(&o2_saved_121, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_122, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_123, 0, sizeof(char*));
memset(&type_124, 0, sizeof(struct sType*));
memset(&name_123, 0, sizeof(char*));
memset(&type_124, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&new_type_125, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    new_name_36=(char*)come_increment_ref_count(((char*)(right_value24=create_generics_name(type,info))));
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional42=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_36),    _if_conditional42) {
        type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(type))));
        come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        generics_class_61=((struct sClass*)(right_value60=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer2(sClass_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional120=generics_class_61==((void*)0),        _if_conditional120) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result51__ = (_Bool)0;
            come_call_finalizer2(sType_finalize,type2_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            new_name_36 = come_decrement_ref_count2(new_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result51__;
        }
        new_class_62=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value61=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 123, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_62));
        right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_107=0;
        for(        o2_saved_108=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_61->mFields)),it_109=list$1tuple2$2charphsTypephph_begin((o2_saved_108));        !list$1tuple2$2charphsTypephph_end((o2_saved_108));        it_109=list$1tuple2$2charphsTypephph_next((o2_saved_108))        ){
            multiple_assign_var2=it_109;
            name_110=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_111=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            new_type_112=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=solve_generics(type_111,type2_57,info))));
            come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(new_class_62->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value79=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value78=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 133, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value76=string_clone(name_110)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(new_type_112)))))))));
            right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,new_type_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj33=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type))));
        come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_62;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_62,info);
        come_call_finalizer2(sType_finalize,type2_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,new_class_62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional172=!map$2charphsClassph_find(info->classes,new_name_36),        _if_conditional172) {
            generics_class_118=((struct sClass*)(right_value81=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
            come_call_finalizer2(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional173=generics_class_118==((void*)0),            _if_conditional173) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result79__ = (_Bool)0;
                new_name_36 = come_decrement_ref_count2(new_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result79__;
            }
            new_class_119=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value82=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 151, "struct sClass")))),new_name_36,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value84=__builtin_string(new_name_36)))),(struct sClass*)come_increment_ref_count(new_class_119));
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_120=0;
            for(            o2_saved_121=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_118->mFields)),it_122=list$1tuple2$2charphsTypephph_begin((o2_saved_121));            !list$1tuple2$2charphsTypephph_end((o2_saved_121));            it_122=list$1tuple2$2charphsTypephph_next((o2_saved_121))            ){
                multiple_assign_var3=it_122;
                name_123=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                type_124=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                new_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=solve_generics(type_124,generics_type,info))));
                come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(new_class_119->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value88=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 161, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value86=string_clone(name_123)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(new_type_125)))))))));
                right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                name_123 = come_decrement_ref_count2(name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,new_type_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __dec_obj34=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type))));
            come_call_finalizer2(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_119;
            list$1sTypeph_reset(type->mGenericsTypes);
            output_struct(new_class_119,info);
            come_call_finalizer2(sClass_finalize,new_class_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional174=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional174) {
                __dec_obj35=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(type))));
                come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=((struct sClass*)(right_value92=map$2charphsClassphp_operator_load_element(info->classes,new_name_36)));
            come_call_finalizer2(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result80__ = (_Bool)1;
    new_name_36 = come_decrement_ref_count2(new_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result80__;
    new_name_36 = come_decrement_ref_count2(new_name_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_37;
int it_38;
_Bool _while_condtional7;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool __result25__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool __result26__;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(int));
        hash_37=string_get_hash_key(((char*)key))%self->size;
        it_38=hash_37;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional38=self->item_existance[it_38],            _if_conditional38) {
                if(_if_conditional39=string_equals(self->keys[it_38],key),                _if_conditional39) {
                    __result25__ = (_Bool)1;
                    return __result25__;
                }
                it_38++;
                if(_if_conditional40=it_38>=self->size,                _if_conditional40) {
                    it_38=0;
                }
                else {
                    if(_if_conditional41=it_38==hash_37,                    _if_conditional41) {
                        __result26__ = (_Bool)0;
                        return __result26__;
                    }
                }
            }
            else {
                __result27__ = (_Bool)0;
                return __result27__;
            }
        }
        __result28__ = (_Bool)0;
        return __result28__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional43;
struct sType* __result29__;
void* right_value25;
struct sType* result_39;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value28;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional49;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional50;
void* right_value30;
char* __dec_obj9;
_Bool _if_conditional51;
void* right_value37;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional55;
void* right_value45;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value46;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional70;
void* right_value53;
struct list$1charph* __dec_obj22;
_Bool _if_conditional74;
void* right_value54;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value55;
struct sNode* __dec_obj24;
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
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value56;
struct sNode* __dec_obj25;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value57;
char* __dec_obj26;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value58;
char* __dec_obj27;
struct sType* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&result_39, 0, sizeof(struct sType*));
right_value28 = (void*)0;
right_value29 = (void*)0;
right_value30 = (void*)0;
right_value37 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
            if(_if_conditional43=self==(void*)0,            _if_conditional43) {
                __result29__ = __result_obj__ = (void*)0;
                return __result29__;
            }
            result_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value25=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional44=self!=((void*)0),            _if_conditional44) {
                result_39->mClass=self->mClass;
            }
            if(_if_conditional45=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional45) {
                __dec_obj7=result_39->mNoSolvedGenericsType;
                result_39->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value28=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional49) {
                __dec_obj8=result_39->mOriginalLoadVarType;
                result_39->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional50=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional50) {
                __dec_obj9=result_39->mGenericsName;
                result_39->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value30=string_clone(self->mGenericsName))));
                __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional51) {
                __dec_obj13=result_39->mGenericsTypes;
                result_39->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional55=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional55) {
                __dec_obj17=result_39->mArrayNum;
                result_39->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value45=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_39->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional69) {
                __dec_obj18=result_39->mParamTypes;
                result_39->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value46=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional70) {
                __dec_obj22=result_39->mParamNames;
                result_39->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value53=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional74=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional74) {
                __dec_obj23=result_39->mResultType;
                result_39->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_39->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional76=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional76) {
                __dec_obj24=result_39->mAlignas;
                result_39->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mAlignas))));
                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value55) { right_value55 = come_decrement_ref_count2(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_39->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_39->mShort=self->mShort;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_39->mLong=self->mLong;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_39->mLongLong=self->mLongLong;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_39->mConstant=self->mConstant;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_39->mRegister=self->mRegister;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_39->mVolatile=self->mVolatile;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_39->mStatic=self->mStatic;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_39->mExtern=self->mExtern;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_39->mRestrict=self->mRestrict;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_39->mImmutable=self->mImmutable;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_39->mHeap=self->mHeap;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_39->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_39->mDelegate=self->mDelegate;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_39->mShare=self->mShare;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_39->mClone=self->mClone;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_39->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_39->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_39->mRefference=self->mRefference;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_39->mException=self->mException;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_39->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_39->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_39->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional100=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional100) {
                __dec_obj25=result_39->mSizeNum;
                result_39->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mSizeNum))));
                if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value56) { right_value56 = come_decrement_ref_count2(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_39->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_39->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional103=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional103) {
                __dec_obj26=result_39->mOriginalTypeName;
                result_39->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mOriginalTypeName))));
                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_39->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_39->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_39->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_39->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_39->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_39->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_39->mInline=self->mInline;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_39->mNullValue=self->mNullValue;
            }
            if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional112) {
                __dec_obj27=result_39->mAsmName;
                result_39->mAsmName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mAsmName))));
                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result46__ = __result_obj__ = result_39;
            come_call_finalizer2(sType_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result46__;
            come_call_finalizer2(sType_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
struct tuple1$1sTypeph* __result30__;
void* right_value26;
struct tuple1$1sTypeph* result_40;
_Bool _if_conditional48;
void* right_value27;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
memset(&result_40, 0, sizeof(struct tuple1$1sTypeph*));
right_value27 = (void*)0;
                    if(_if_conditional46=self==(void*)0,                    _if_conditional46) {
                        __result30__ = __result_obj__ = (void*)0;
                        return __result30__;
                    }
                    result_40=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional48) {
                        __dec_obj6=result_40->v1;
                        result_40->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result31__ = __result_obj__ = result_40;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result31__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional47) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sTypeph* __result32__;
void* right_value31;
void* right_value32;
struct list$1sTypeph* result_41;
struct list_item$1sTypeph* it_42;
_Bool _while_condtional8;
void* right_value36;
struct list$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&result_41, 0, sizeof(struct list$1sTypeph*));
memset(&it_42, 0, sizeof(struct list_item$1sTypeph*));
right_value36 = (void*)0;
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        __result32__ = __result_obj__ = ((void*)0);
                        return __result32__;
                    }
                    result_41=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_42=self->head;
                    while(_while_condtional8=it_42!=((void*)0),                    _while_condtional8) {
                        list$1sTypeph_add(result_41,(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=sType_clone(it_42->item)))));
                        come_call_finalizer2(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_42=it_42->next;
                    }
                    __result35__ = __result_obj__ = result_41;
                    come_call_finalizer2(list$1sTypephp_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result35__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result33__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result33__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional53;
void* right_value33;
struct list_item$1sTypeph* litem_43;
struct sType* __dec_obj10;
_Bool _if_conditional54;
void* right_value34;
struct list_item$1sTypeph* litem_44;
struct sType* __dec_obj11;
void* right_value35;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj12;
struct list$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1sTypeph*));
right_value34 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1sTypeph*));
right_value35 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional53=self->len==0,                            _if_conditional53) {
                                litem_43=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_43->prev=((void*)0);
                                litem_43->next=((void*)0);
                                __dec_obj10=litem_43->item;
                                litem_43->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_43;
                                self->head=litem_43;
                            }
                            else {
                                if(_if_conditional54=self->len==1,                                _if_conditional54) {
                                    litem_44=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value34=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_44->prev=self->head;
                                    litem_44->next=((void*)0);
                                    __dec_obj11=litem_44->item;
                                    litem_44->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_44;
                                    self->head->next=litem_44;
                                }
                                else {
                                    litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value35=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_45->prev=self->tail;
                                    litem_45->next=((void*)0);
                                    __dec_obj12=litem_45->item;
                                    litem_45->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_45;
                                    self->tail=litem_45;
                                }
                            }
                            self->len++;
                            __result34__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result34__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sNodeph* __result36__;
void* right_value38;
void* right_value39;
struct list$1sNodeph* result_46;
struct list_item$1sNodeph* it_47;
_Bool _while_condtional9;
void* right_value44;
struct list$1sNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value39 = (void*)0;
memset(&result_46, 0, sizeof(struct list$1sNodeph*));
memset(&it_47, 0, sizeof(struct list_item$1sNodeph*));
right_value44 = (void*)0;
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result36__ = __result_obj__ = ((void*)0);
                        return __result36__;
                    }
                    result_46=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value39=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value38=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_47=self->head;
                    while(_while_condtional9=it_47!=((void*)0),                    _while_condtional9) {
                        list$1sNodeph_add(result_46,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(it_47->item)))));
                        if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_47=it_47->next;
                    }
                    __result41__ = __result_obj__ = result_46;
                    come_call_finalizer2(list$1sNodephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result41__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value40;
struct list_item$1sNodeph* litem_48;
struct sNode* __dec_obj14;
_Bool _if_conditional58;
void* right_value41;
struct list_item$1sNodeph* litem_49;
struct sNode* __dec_obj15;
void* right_value42;
struct list_item$1sNodeph* litem_50;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&litem_48, 0, sizeof(struct list_item$1sNodeph*));
right_value41 = (void*)0;
memset(&litem_49, 0, sizeof(struct list_item$1sNodeph*));
right_value42 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional57=self->len==0,                            _if_conditional57) {
                                litem_48=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_48->prev=((void*)0);
                                litem_48->next=((void*)0);
                                __dec_obj14=litem_48->item;
                                litem_48->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_48;
                                self->head=litem_48;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                _if_conditional58) {
                                    litem_49=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value41=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_49->prev=self->head;
                                    litem_49->next=((void*)0);
                                    __dec_obj15=litem_49->item;
                                    litem_49->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_49;
                                    self->head->next=litem_49;
                                }
                                else {
                                    litem_50=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value42=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_50->prev=self->tail;
                                    litem_50->next=((void*)0);
                                    __dec_obj16=litem_50->item;
                                    litem_50->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_50;
                                    self->tail=litem_50;
                                }
                            }
                            self->len++;
                            __result38__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result38__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional59;
struct sNode* __result39__;
void* right_value43;
struct sNode* result_51;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
memset(&result_51, 0, sizeof(struct sNode*));
                            if(_if_conditional59=self==(void*)0,                            _if_conditional59) {
                                __result39__ = __result_obj__ = (void*)0;
                                return __result39__;
                            }
                            result_51=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                            if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional60=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional60) {
                                result_51->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_51->finalize=self->finalize;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_51->clone=self->clone;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_51->compile=self->compile;
                            }
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                result_51->sline=self->sline;
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                result_51->sname=self->sname;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                result_51->terminated=self->terminated;
                            }
                            if(_if_conditional67=self!=((void*)0),                            _if_conditional67) {
                                result_51->kind=self->kind;
                            }
                            __result40__ = __result_obj__ = result_51;
                            if(result_51) { result_51 = come_decrement_ref_count2(result_51, ((struct sNode*)result_51)->finalize, ((struct sNode*)result_51)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result40__;
                            if(result_51) { result_51 = come_decrement_ref_count2(result_51, ((struct sNode*)result_51)->finalize, ((struct sNode*)result_51)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1charph* __result42__;
void* right_value47;
void* right_value48;
struct list$1charph* result_52;
struct list_item$1charph* it_53;
_Bool _while_condtional10;
void* right_value52;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&result_52, 0, sizeof(struct list$1charph*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
right_value52 = (void*)0;
                    if(_if_conditional71=self==((void*)0),                    _if_conditional71) {
                        __result42__ = __result_obj__ = ((void*)0);
                        return __result42__;
                    }
                    result_52=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value47=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_53=self->head;
                    while(_while_condtional10=it_53!=((void*)0),                    _while_condtional10) {
                        list$1charph_add(result_52,(char*)come_increment_ref_count(((char*)(right_value52=string_clone(it_53->item)))));
                        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_53=it_53->next;
                    }
                    __result45__ = __result_obj__ = result_52;
                    come_call_finalizer2(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result45__;
                    come_call_finalizer2(list$1charphp_finalize,result_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result43__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result43__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value49;
struct list_item$1charph* litem_54;
char* __dec_obj19;
_Bool _if_conditional73;
void* right_value50;
struct list_item$1charph* litem_55;
char* __dec_obj20;
void* right_value51;
struct list_item$1charph* litem_56;
char* __dec_obj21;
struct list$1charph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1charph*));
right_value50 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1charph*));
right_value51 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional72=self->len==0,                            _if_conditional72) {
                                litem_54=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_54->prev=((void*)0);
                                litem_54->next=((void*)0);
                                __dec_obj19=litem_54->item;
                                litem_54->item=(char*)come_increment_ref_count(item);
                                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_54;
                                self->head=litem_54;
                            }
                            else {
                                if(_if_conditional73=self->len==1,                                _if_conditional73) {
                                    litem_55=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value50=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_55->prev=self->head;
                                    litem_55->next=((void*)0);
                                    __dec_obj20=litem_55->item;
                                    litem_55->item=(char*)come_increment_ref_count(item);
                                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_55;
                                    self->head->next=litem_55;
                                }
                                else {
                                    litem_56=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value51=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_56->prev=self->tail;
                                    litem_56->next=((void*)0);
                                    __dec_obj21=litem_56->item;
                                    litem_56->item=(char*)come_increment_ref_count(item);
                                    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_56;
                                    self->tail=litem_56;
                                }
                            }
                            self->len++;
                            __result44__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result44__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_58;
unsigned int hash_59;
unsigned int it_60;
_Bool _while_condtional11;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct sClass* __result47__;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sClass* __result48__;
struct sClass* __result49__;
struct sClass* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_58, 0, sizeof(struct sClass*));
memset(&hash_59, 0, sizeof(unsigned int));
memset(&it_60, 0, sizeof(unsigned int));
            memset(&default_value_58,0,sizeof(struct sClass*));
            hash_59=string_get_hash_key(((char*)key))%self->size;
            it_60=hash_59;
            while(_while_condtional11=(_Bool)1,            _while_condtional11) {
                if(_if_conditional113=self->item_existance[it_60],                _if_conditional113) {
                    if(_if_conditional114=string_equals(self->keys[it_60],key),                    _if_conditional114) {
                        __result47__ = __result_obj__ = self->items[it_60];
                        come_call_finalizer2(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        return __result47__;
                    }
                    it_60++;
                    if(_if_conditional118=it_60>=self->size,                    _if_conditional118) {
                        it_60=0;
                    }
                    else {
                        if(_if_conditional119=it_60==hash_59,                        _if_conditional119) {
                            __result48__ = __result_obj__ = default_value_58;
                            come_call_finalizer2(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result48__;
                        }
                    }
                }
                else {
                    __result49__ = __result_obj__ = default_value_58;
                    come_call_finalizer2(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result49__;
                }
            }
            __result50__ = __result_obj__ = default_value_58;
            come_call_finalizer2(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result50__;
            come_call_finalizer2(sClass_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional115=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional115) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional116=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional116) {
                                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional117=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional117) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional121;
unsigned int hash_80;
unsigned int it_81;
_Bool _while_condtional14;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool same_key_exist_98;
char* it2_101;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct map$2charphsClassph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_80, 0, sizeof(unsigned int));
memset(&it_81, 0, sizeof(unsigned int));
memset(&same_key_exist_98, 0, sizeof(_Bool));
memset(&it2_101, 0, sizeof(char*));
            if(_if_conditional121=self->len*10>=self->size,            _if_conditional121) {
                map$2charphsClassph_rehash(self);
            }
            hash_80=string_get_hash_key(key)%self->size;
            it_81=hash_80;
            while(_while_condtional14=(_Bool)1,            _while_condtional14) {
                if(_if_conditional133=self->item_existance[it_81],                _if_conditional133) {
                    if(_if_conditional134=string_equals(self->keys[it_81],key),                    _if_conditional134) {
                        if(_if_conditional135=1,                        _if_conditional135) {
                            list$1charp_remove(self->key_list,self->keys[it_81]);
                            self->keys[it_81] = come_decrement_ref_count2(self->keys[it_81], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_81]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_81]);
                            self->keys[it_81]=key;
                        }
                        if(_if_conditional155=1,                        _if_conditional155) {
                            come_call_finalizer2(sClass_finalize,self->items[it_81], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_81]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_81]=item;
                        }
                        break;
                    }
                    it_81++;
                    if(_if_conditional156=it_81>=self->size,                    _if_conditional156) {
                        it_81=0;
                    }
                    else {
                        if(_if_conditional157=it_81==hash_80,                        _if_conditional157) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_81]=(_Bool)1;
                    if(_if_conditional158=1,                    _if_conditional158) {
                        self->keys[it_81]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_81]=key;
                    }
                    if(_if_conditional159=1,                    _if_conditional159) {
                        self->items[it_81]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_81]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_98=(_Bool)0;
            for(            it2_101=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_101=list$1charp_next(self->key_list)            ){
                if(_if_conditional164=string_equals(it2_101,key),                _if_conditional164) {
                    same_key_exist_98=(_Bool)1;
                }
            }
            if(_if_conditional165=!same_key_exist_98,            _if_conditional165) {
                list$1charp_push_back(self->key_list,key);
            }
            __result75__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result75__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_63;
void* right_value63;
char** keys_64;
void* right_value64;
struct sClass** items_65;
void* right_value65;
_Bool* item_existance_66;
int len_67;
char* it_70;
struct sClass* default_value_73;
void* right_value66;
struct sClass* it2_76;
unsigned int hash_77;
int n_78;
_Bool _while_condtional13;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct sClass* default_value_79;
void* right_value67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_63, 0, sizeof(int));
right_value63 = (void*)0;
memset(&keys_64, 0, sizeof(char**));
right_value64 = (void*)0;
memset(&items_65, 0, sizeof(struct sClass**));
right_value65 = (void*)0;
memset(&item_existance_66, 0, sizeof(_Bool*));
memset(&len_67, 0, sizeof(int));
memset(&it_70, 0, sizeof(char*));
memset(&default_value_73, 0, sizeof(struct sClass*));
right_value66 = (void*)0;
memset(&it2_76, 0, sizeof(struct sClass*));
memset(&hash_77, 0, sizeof(unsigned int));
memset(&n_78, 0, sizeof(int));
memset(&default_value_79, 0, sizeof(struct sClass*));
right_value67 = (void*)0;
                    size_63=self->size*10;
                    keys_64=(char**)come_increment_ref_count(((char**)(right_value63=(char**)come_calloc(1, sizeof(char*)*(1*(size_63)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_65=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value64=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_63)), "/usr/local/include/comelang2.h", 1315, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_66=(_Bool*)come_increment_ref_count(((_Bool*)(right_value65=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_63)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_67=0;
                    for(                    it_70=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_70=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_73,0,sizeof(struct sClass*));
                        it2_76=((struct sClass*)(right_value66=map$2charphsClassph_at(self,it_70,default_value_73)));
                        come_call_finalizer2(sClass_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_77=string_get_hash_key(it_70)%size_63;
                        n_78=hash_77;
                        while(_while_condtional13=(_Bool)1,                        _while_condtional13) {
                            if(_if_conditional130=item_existance_66[n_78],                            _if_conditional130) {
                                n_78++;
                                if(_if_conditional131=n_78>=size_63,                                _if_conditional131) {
                                    n_78=0;
                                }
                                else {
                                    if(_if_conditional132=n_78==hash_77,                                    _if_conditional132) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_66[n_78]=(_Bool)1;
                                keys_64[n_78]=it_70;
                                items_65[n_78]=((struct sClass*)(right_value67=map$2charphsClassph_at(self,it_70,default_value_79)));
                                come_call_finalizer2(sClass_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_67++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_64;
                    self->items=items_65;
                    self->item_existance=item_existance_66;
                    self->size=size_63;
                    self->len=len_67;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional122;
char* result_68;
char* __result52__;
_Bool _if_conditional123;
char* __result53__;
char* result_69;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                        if(_if_conditional122=self==((void*)0),                        _if_conditional122) {
                            memset(&result_68,0,sizeof(char*));
                            __result52__ = __result_obj__ = result_68;
                            return __result52__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result53__ = __result_obj__ = self->key_list->it->item;
                            return __result53__;
                        }
                        memset(&result_69,0,sizeof(char*));
                        __result54__ = __result_obj__ = result_69;
                        return __result54__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result55__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result55__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional124;
char* result_71;
char* __result56__;
_Bool _if_conditional125;
char* __result57__;
char* result_72;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(char*));
memset(&result_72, 0, sizeof(char*));
                        if(_if_conditional124=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional124) {
                            memset(&result_71,0,sizeof(char*));
                            __result56__ = __result_obj__ = result_71;
                            return __result56__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result57__ = __result_obj__ = self->key_list->it->item;
                            return __result57__;
                        }
                        memset(&result_72,0,sizeof(char*));
                        __result58__ = __result_obj__ = result_72;
                        return __result58__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_74;
unsigned int it_75;
_Bool _while_condtional12;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sClass* __result59__;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct sClass* __result60__;
struct sClass* __result61__;
struct sClass* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_74, 0, sizeof(unsigned int));
memset(&it_75, 0, sizeof(unsigned int));
                            hash_74=string_get_hash_key(((char*)key))%self->size;
                            it_75=hash_74;
                            while(_while_condtional12=(_Bool)1,                            _while_condtional12) {
                                if(_if_conditional126=self->item_existance[it_75],                                _if_conditional126) {
                                    if(_if_conditional127=string_equals(self->keys[it_75],key),                                    _if_conditional127) {
                                        __result59__ = __result_obj__ = self->items[it_75];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result59__;
                                    }
                                    it_75++;
                                    if(_if_conditional128=it_75>=self->size,                                    _if_conditional128) {
                                        it_75=0;
                                    }
                                    else {
                                        if(_if_conditional129=it_75==hash_74,                                        _if_conditional129) {
                                            __result60__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result60__;
                                        }
                                    }
                                }
                                else {
                                    __result61__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result61__;
                                }
                            }
                            __result62__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_82;
struct list_item$1charp* it_83;
_Bool _while_condtional15;
_Bool _if_conditional136;
struct list$1charp* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_82, 0, sizeof(int));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
                                it2_82=0;
                                it_83=self->head;
                                while(_while_condtional15=it_83!=((void*)0),                                _while_condtional15) {
                                    if(_if_conditional136=string_equals(it_83->item,item),                                    _if_conditional136) {
                                        list$1charp_delete(self,it2_82,it2_82+1);
                                        break;
                                    }
                                    it2_82++;
                                    it_83=it_83->next;
                                }
                                __result66__ = __result_obj__ = self;
                                return __result66__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
int tmp_84;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list$1charp* __result63__;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct list_item$1charp* it_87;
int i_88;
_Bool _while_condtional17;
_Bool _if_conditional145;
struct list_item$1charp* prev_it_89;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct list_item$1charp* it_90;
int i_91;
_Bool _while_condtional18;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct list_item$1charp* prev_it_92;
struct list_item$1charp* it_93;
struct list_item$1charp* head_prev_it_94;
struct list_item$1charp* tail_it_95;
int i_96;
_Bool _while_condtional19;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list_item$1charp* prev_it_97;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_84, 0, sizeof(int));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
memset(&i_88, 0, sizeof(int));
memset(&prev_it_89, 0, sizeof(struct list_item$1charp*));
memset(&it_90, 0, sizeof(struct list_item$1charp*));
memset(&i_91, 0, sizeof(int));
memset(&prev_it_92, 0, sizeof(struct list_item$1charp*));
memset(&it_93, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_94, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_95, 0, sizeof(struct list_item$1charp*));
memset(&i_96, 0, sizeof(int));
memset(&prev_it_97, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional137=head<0,                                            _if_conditional137) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional138=tail<0,                                            _if_conditional138) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional139=head>tail,                                            _if_conditional139) {
                                                tmp_84=tail;
                                                tail=head;
                                                head=tmp_84;
                                            }
                                            if(_if_conditional140=head<0,                                            _if_conditional140) {
                                                head=0;
                                            }
                                            if(_if_conditional141=tail>self->len,                                            _if_conditional141) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional142=head==tail,                                            _if_conditional142) {
                                                __result63__ = __result_obj__ = self;
                                                return __result63__;
                                            }
                                            if(_if_conditional143=head==0&&tail==self->len,                                            _if_conditional143) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional144=head==0,                                                _if_conditional144) {
                                                    it_87=self->head;
                                                    i_88=0;
                                                    while(_while_condtional17=it_87!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional145=i_88<tail,                                                        _if_conditional145) {
                                                            prev_it_89=it_87;
                                                            it_87=it_87->next;
                                                            i_88++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional146=i_88==tail,                                                            _if_conditional146) {
                                                                self->head=it_87;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_87=it_87->next;
                                                                i_88++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional147=tail==self->len,                                                    _if_conditional147) {
                                                        it_90=self->head;
                                                        i_91=0;
                                                        while(_while_condtional18=it_90!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional148=i_91==head,                                                            _if_conditional148) {
                                                                self->tail=it_90->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional149=i_91>=head,                                                            _if_conditional149) {
                                                                prev_it_92=it_90;
                                                                it_90=it_90->next;
                                                                i_91++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_90=it_90->next;
                                                                i_91++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_93=self->head;
                                                        head_prev_it_94=((void*)0);
                                                        tail_it_95=((void*)0);
                                                        i_96=0;
                                                        while(_while_condtional19=it_93!=((void*)0),                                                        _while_condtional19) {
                                                            if(_if_conditional150=i_96==head,                                                            _if_conditional150) {
                                                                head_prev_it_94=it_93->prev;
                                                            }
                                                            if(_if_conditional151=i_96==tail,                                                            _if_conditional151) {
                                                                tail_it_95=it_93;
                                                            }
                                                            if(_if_conditional152=i_96>=head&&i_96<tail,                                                            _if_conditional152) {
                                                                prev_it_97=it_93;
                                                                it_93=it_93->next;
                                                                i_96++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_93=it_93->next;
                                                                i_96++;
                                                            }
                                                        }
                                                        if(_if_conditional153=head_prev_it_94!=((void*)0),                                                        _if_conditional153) {
                                                            head_prev_it_94->next=tail_it_95;
                                                        }
                                                        if(_if_conditional154=tail_it_95!=((void*)0),                                                        _if_conditional154) {
                                                            tail_it_95->prev=head_prev_it_94;
                                                        }
                                                    }
                                                }
                                            }
                                            __result65__ = __result_obj__ = self;
                                            return __result65__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_85;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_86;
struct list$1charp* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_86, 0, sizeof(struct list_item$1charp*));
                                                    it_85=self->head;
                                                    while(_while_condtional16=it_85!=((void*)0),                                                    _while_condtional16) {
                                                        prev_it_86=it_85;
                                                        it_85=it_85->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result64__ = __result_obj__ = self;
                                                    return __result64__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional160;
char* result_99;
char* __result67__;
_Bool _if_conditional161;
char* __result68__;
char* result_100;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_99, 0, sizeof(char*));
memset(&result_100, 0, sizeof(char*));
                if(_if_conditional160=self==((void*)0),                _if_conditional160) {
                    memset(&result_99,0,sizeof(char*));
                    __result67__ = __result_obj__ = result_99;
                    return __result67__;
                }
                self->it=self->head;
                if(self->it) {
                    __result68__ = __result_obj__ = self->it->item;
                    return __result68__;
                }
                memset(&result_100,0,sizeof(char*));
                __result69__ = __result_obj__ = result_100;
                return __result69__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                __result70__ = self==((void*)0)||self->it==((void*)0);
                return __result70__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_102;
char* __result71__;
_Bool _if_conditional163;
char* __result72__;
char* result_103;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_102, 0, sizeof(char*));
memset(&result_103, 0, sizeof(char*));
                if(_if_conditional162=self==((void*)0)||self->it==((void*)0),                _if_conditional162) {
                    memset(&result_102,0,sizeof(char*));
                    __result71__ = __result_obj__ = result_102;
                    return __result71__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result72__ = __result_obj__ = self->it->item;
                    return __result72__;
                }
                memset(&result_103,0,sizeof(char*));
                __result73__ = __result_obj__ = result_103;
                return __result73__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional166;
void* right_value68;
struct list_item$1charp* litem_104;
_Bool _if_conditional167;
void* right_value69;
struct list_item$1charp* litem_105;
void* right_value70;
struct list_item$1charp* litem_106;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
right_value69 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1charp*));
right_value70 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional166=self->len==0,                    _if_conditional166) {
                        litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value68=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_104->prev=((void*)0);
                        litem_104->next=((void*)0);
                        litem_104->item=item;
                        self->tail=litem_104;
                        self->head=litem_104;
                    }
                    else {
                        if(_if_conditional167=self->len==1,                        _if_conditional167) {
                            litem_105=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value69=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_105->prev=self->head;
                            litem_105->next=((void*)0);
                            litem_105->item=item;
                            self->tail=litem_105;
                            self->head->next=litem_105;
                        }
                        else {
                            litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value70=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_106->prev=self->tail;
                            litem_106->next=((void*)0);
                            litem_106->item=item;
                            self->tail->next=litem_106;
                            self->tail=litem_106;
                        }
                    }
                    self->len++;
                    __result74__ = __result_obj__ = self;
                    return __result74__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional168;
void* right_value73;
struct list_item$1tuple2$2charphsTypephph* litem_113;
struct tuple2$2charphsTypeph* __dec_obj28;
_Bool _if_conditional171;
void* right_value74;
struct list_item$1tuple2$2charphsTypephph* litem_114;
struct tuple2$2charphsTypeph* __dec_obj29;
void* right_value75;
struct list_item$1tuple2$2charphsTypephph* litem_115;
struct tuple2$2charphsTypeph* __dec_obj30;
struct list$1tuple2$2charphsTypephph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value74 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value75 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional168=self->len==0,                _if_conditional168) {
                    litem_113=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value73=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_113->prev=((void*)0);
                    litem_113->next=((void*)0);
                    __dec_obj28=litem_113->item;
                    litem_113->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_113;
                    self->head=litem_113;
                }
                else {
                    if(_if_conditional171=self->len==1,                    _if_conditional171) {
                        litem_114=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value74=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_114->prev=self->head;
                        litem_114->next=((void*)0);
                        __dec_obj29=litem_114->item;
                        litem_114->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_114;
                        self->head->next=litem_114;
                    }
                    else {
                        litem_115=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value75=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_115->prev=self->tail;
                        litem_115->next=((void*)0);
                        __dec_obj30=litem_115->item;
                        litem_115->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_115;
                        self->tail=litem_115;
                    }
                }
                self->len++;
                __result76__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result76__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional169;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional169=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional169) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional170=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional170) {
                            come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj31;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj31=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj32=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer2(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __result77__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_116;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_117;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_116, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1sTypeph*));
            it_116=self->head;
            while(_while_condtional20=it_116!=((void*)0),            _while_condtional20) {
                prev_it_117=it_116;
                it_116=it_116->next;
                come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result78__ = __result_obj__ = self;
            return __result78__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __dec_obj36;
void* right_value94;
char* __dec_obj37;
void* right_value108;
struct sClass* __dec_obj46;
struct sStructNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value108 = (void*)0;
    self->sline=info->sline;
    __dec_obj36=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(name))));
    __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value108=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __result89__ = __result_obj__ = self;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional175;
struct sClass* __result81__;
void* right_value95;
struct sClass* result_126;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value96;
char* __dec_obj38;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
void* right_value106;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value107;
char* __dec_obj45;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_126, 0, sizeof(struct sClass*));
right_value96 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
        if(_if_conditional175=self==(void*)0,        _if_conditional175) {
            __result81__ = __result_obj__ = (void*)0;
            return __result81__;
        }
        result_126=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value95=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        come_call_finalizer2(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional176=self!=((void*)0),        _if_conditional176) {
            result_126->mStruct=self->mStruct;
        }
        if(_if_conditional177=self!=((void*)0),        _if_conditional177) {
            result_126->mFloat=self->mFloat;
        }
        if(_if_conditional178=self!=((void*)0),        _if_conditional178) {
            result_126->mUnion=self->mUnion;
        }
        if(_if_conditional179=self!=((void*)0),        _if_conditional179) {
            result_126->mGenerics=self->mGenerics;
        }
        if(_if_conditional180=self!=((void*)0),        _if_conditional180) {
            result_126->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional181=self!=((void*)0),        _if_conditional181) {
            result_126->mEnum=self->mEnum;
        }
        if(_if_conditional182=self!=((void*)0),        _if_conditional182) {
            result_126->mProtocol=self->mProtocol;
        }
        if(_if_conditional183=self!=((void*)0),        _if_conditional183) {
            result_126->mNumber=self->mNumber;
        }
        if(_if_conditional184=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional184) {
            __dec_obj38=result_126->mName;
            result_126->mName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional185=self!=((void*)0),        _if_conditional185) {
            result_126->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional186=self!=((void*)0),        _if_conditional186) {
            result_126->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional187=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional187) {
            __dec_obj44=result_126->mFields;
            result_126->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value106=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional194=self!=((void*)0),        _if_conditional194) {
            result_126->mOutputed=self->mOutputed;
        }
        if(_if_conditional195=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional195) {
            __dec_obj45=result_126->mDeclareSName;
            result_126->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value107=string_clone(self->mDeclareSName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result88__ = __result_obj__ = result_126;
        come_call_finalizer2(sClass_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result88__;
        come_call_finalizer2(sClass_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct list$1tuple2$2charphsTypephph* __result82__;
void* right_value97;
void* right_value98;
struct list$1tuple2$2charphsTypephph* result_127;
struct list_item$1tuple2$2charphsTypephph* it_128;
_Bool _while_condtional21;
void* right_value105;
struct list$1tuple2$2charphsTypephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_127, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value105 = (void*)0;
                if(_if_conditional188=self==((void*)0),                _if_conditional188) {
                    __result82__ = __result_obj__ = ((void*)0);
                    return __result82__;
                }
                result_127=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value98=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value97=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_128=self->head;
                while(_while_condtional21=it_128!=((void*)0),                _while_condtional21) {
                    list$1tuple2$2charphsTypephph_add(result_127,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value105=tuple2$2charphsTypephp_clone(it_128->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_128=it_128->next;
                }
                __result87__ = __result_obj__ = result_127;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result83__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value99;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj39;
_Bool _if_conditional190;
void* right_value100;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj40;
void* right_value101;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj41;
struct list$1tuple2$2charphsTypephph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value100 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value101 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional189=self->len==0,                        _if_conditional189) {
                            litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value99=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_129->prev=((void*)0);
                            litem_129->next=((void*)0);
                            __dec_obj39=litem_129->item;
                            litem_129->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_129;
                            self->head=litem_129;
                        }
                        else {
                            if(_if_conditional190=self->len==1,                            _if_conditional190) {
                                litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value100=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_130->prev=self->head;
                                litem_130->next=((void*)0);
                                __dec_obj40=litem_130->item;
                                litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_130;
                                self->head->next=litem_130;
                            }
                            else {
                                litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value101=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_131->prev=self->tail;
                                litem_131->next=((void*)0);
                                __dec_obj41=litem_131->item;
                                litem_131->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_131;
                                self->tail=litem_131;
                            }
                        }
                        self->len++;
                        __result84__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result84__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional191;
struct tuple2$2charphsTypeph* __result85__;
void* right_value102;
struct tuple2$2charphsTypeph* result_132;
_Bool _if_conditional192;
void* right_value103;
char* __dec_obj42;
_Bool _if_conditional193;
void* right_value104;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&result_132, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value103 = (void*)0;
right_value104 = (void*)0;
                        if(_if_conditional191=self==(void*)0,                        _if_conditional191) {
                            __result85__ = __result_obj__ = (void*)0;
                            return __result85__;
                        }
                        result_132=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value102=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional192=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional192) {
                            __dec_obj42=result_132->v1;
                            result_132->v1=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(self->v1))));
                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional193=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional193) {
                            __dec_obj43=result_132->v2;
                            result_132->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result86__ = __result_obj__ = result_132;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_132, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)1;
    return __result90__;
}

char* sStructNode_kind(){
void* __result_obj__;
void* right_value109;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sStructNode")));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value110;
struct sClass* klass_133;
void* right_value111;
char* name_134;
void* right_value112;
_Bool _if_conditional199;
void* right_value113;
void* right_value114;
_Bool _if_conditional200;
void* right_value115;
struct sClass* klass2_135;
void* right_value116;
struct list$1tuple2$2charphsTypephph* __dec_obj47;
void* right_value117;
void* right_value118;
struct sType* type_136;
void* right_value124;
_Bool _if_conditional223;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&klass_133, 0, sizeof(struct sClass*));
right_value111 = (void*)0;
memset(&name_134, 0, sizeof(char*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&klass2_135, 0, sizeof(struct sClass*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&type_136, 0, sizeof(struct sType*));
right_value124 = (void*)0;
    klass_133=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value110=sClass_clone(self->mClass))));
    come_call_finalizer2(sClass_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    name_134=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(self->mName))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional199=((struct sClass*)(right_value112=map$2charphsClassph_at(info->classes,name_134,((void*)0))))==((void*)0),    come_call_finalizer2(sClass_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional199) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_134),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value113=sClass_clone(klass_133)))));
        come_call_finalizer2(sClass_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional200=list$1tuple2$2charphsTypephph_length(((struct sClass*)(right_value114=map$2charphsClassph_at(info->classes,name_134,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_133->mFields)>0,        come_call_finalizer2(sClass_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional200) {
            klass2_135=((struct sClass*)(right_value115=map$2charphsClassph_at(info->classes,name_134,((void*)0))));
            come_call_finalizer2(sClass_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj47=klass2_135->mFields;
            klass2_135->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value116=list$1tuple2$2charphsTypephphp_clone(klass_133->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 230, "struct sType")))),name_134,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_134),(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type_136)))));
    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(self->mOutput) {
        output_struct(klass_133,info);
    }
    __result105__ = (_Bool)1;
    come_call_finalizer2(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_134 = come_decrement_ref_count2(name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer2(sClass_finalize,klass_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    name_134 = come_decrement_ref_count2(name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
            __result92__ = self->len;
            return __result92__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional201;
unsigned int hash_154;
unsigned int it_155;
_Bool _while_condtional24;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool same_key_exist_156;
char* it2_157;
_Bool _if_conditional221;
_Bool _if_conditional222;
struct map$2charphsTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_154, 0, sizeof(unsigned int));
memset(&it_155, 0, sizeof(unsigned int));
memset(&same_key_exist_156, 0, sizeof(_Bool));
memset(&it2_157, 0, sizeof(char*));
        if(_if_conditional201=self->len*10>=self->size,        _if_conditional201) {
            map$2charphsTypeph_rehash(self);
        }
        hash_154=string_get_hash_key(key)%self->size;
        it_155=hash_154;
        while(_while_condtional24=(_Bool)1,        _while_condtional24) {
            if(_if_conditional213=self->item_existance[it_155],            _if_conditional213) {
                if(_if_conditional214=string_equals(self->keys[it_155],key),                _if_conditional214) {
                    if(_if_conditional215=1,                    _if_conditional215) {
                        list$1charp_remove(self->key_list,self->keys[it_155]);
                        self->keys[it_155] = come_decrement_ref_count2(self->keys[it_155], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_155]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_155]);
                        self->keys[it_155]=key;
                    }
                    if(_if_conditional216=1,                    _if_conditional216) {
                        come_call_finalizer2(sType_finalize,self->items[it_155], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_155]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_155]=item;
                    }
                    break;
                }
                it_155++;
                if(_if_conditional217=it_155>=self->size,                _if_conditional217) {
                    it_155=0;
                }
                else {
                    if(_if_conditional218=it_155==hash_154,                    _if_conditional218) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_155]=(_Bool)1;
                if(_if_conditional219=1,                _if_conditional219) {
                    self->keys[it_155]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_155]=key;
                }
                if(_if_conditional220=1,                _if_conditional220) {
                    self->items[it_155]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_155]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_156=(_Bool)0;
        for(        it2_157=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_157=list$1charp_next(self->key_list)        ){
            if(_if_conditional221=string_equals(it2_157,key),            _if_conditional221) {
                same_key_exist_156=(_Bool)1;
            }
        }
        if(_if_conditional222=!same_key_exist_156,        _if_conditional222) {
            list$1charp_push_back(self->key_list,key);
        }
        __result104__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result104__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_137;
void* right_value119;
char** keys_138;
void* right_value120;
struct sType** items_139;
void* right_value121;
_Bool* item_existance_140;
int len_141;
char* it_144;
struct sType* default_value_147;
void* right_value122;
struct sType* it2_150;
unsigned int hash_151;
int n_152;
_Bool _while_condtional23;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sType* default_value_153;
void* right_value123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_137, 0, sizeof(int));
right_value119 = (void*)0;
memset(&keys_138, 0, sizeof(char**));
right_value120 = (void*)0;
memset(&items_139, 0, sizeof(struct sType**));
right_value121 = (void*)0;
memset(&item_existance_140, 0, sizeof(_Bool*));
memset(&len_141, 0, sizeof(int));
memset(&it_144, 0, sizeof(char*));
memset(&default_value_147, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&it2_150, 0, sizeof(struct sType*));
memset(&hash_151, 0, sizeof(unsigned int));
memset(&n_152, 0, sizeof(int));
memset(&default_value_153, 0, sizeof(struct sType*));
right_value123 = (void*)0;
                size_137=self->size*10;
                keys_138=(char**)come_increment_ref_count(((char**)(right_value119=(char**)come_calloc(1, sizeof(char*)*(1*(size_137)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_139=(struct sType**)come_increment_ref_count(((struct sType**)(right_value120=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_137)), "/usr/local/include/comelang2.h", 1315, "struct sType*"))));
                come_call_finalizer2(sType_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_140=(_Bool*)come_increment_ref_count(((_Bool*)(right_value121=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_137)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_141=0;
                for(                it_144=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_144=map$2charphsTypeph_next(self)                ){
                    memset(&default_value_147,0,sizeof(struct sType*));
                    it2_150=((struct sType*)(right_value122=map$2charphsTypeph_at(self,it_144,default_value_147)));
                    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    hash_151=string_get_hash_key(it_144)%size_137;
                    n_152=hash_151;
                    while(_while_condtional23=(_Bool)1,                    _while_condtional23) {
                        if(_if_conditional210=item_existance_140[n_152],                        _if_conditional210) {
                            n_152++;
                            if(_if_conditional211=n_152>=size_137,                            _if_conditional211) {
                                n_152=0;
                            }
                            else {
                                if(_if_conditional212=n_152==hash_151,                                _if_conditional212) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_140[n_152]=(_Bool)1;
                            keys_138[n_152]=it_144;
                            items_139[n_152]=((struct sType*)(right_value123=map$2charphsTypeph_at(self,it_144,default_value_153)));
                            come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            len_141++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_138;
                self->items=items_139;
                self->item_existance=item_existance_140;
                self->size=size_137;
                self->len=len_141;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional202;
char* result_142;
char* __result93__;
_Bool _if_conditional203;
char* __result94__;
char* result_143;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(char*));
memset(&result_143, 0, sizeof(char*));
                    if(_if_conditional202=self==((void*)0),                    _if_conditional202) {
                        memset(&result_142,0,sizeof(char*));
                        __result93__ = __result_obj__ = result_142;
                        return __result93__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result94__ = __result_obj__ = self->key_list->it->item;
                        return __result94__;
                    }
                    memset(&result_143,0,sizeof(char*));
                    __result95__ = __result_obj__ = result_143;
                    return __result95__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result96__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result96__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional204;
char* result_145;
char* __result97__;
_Bool _if_conditional205;
char* __result98__;
char* result_146;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_145, 0, sizeof(char*));
memset(&result_146, 0, sizeof(char*));
                    if(_if_conditional204=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional204) {
                        memset(&result_145,0,sizeof(char*));
                        __result97__ = __result_obj__ = result_145;
                        return __result97__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    memset(&result_146,0,sizeof(char*));
                    __result99__ = __result_obj__ = result_146;
                    return __result99__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_148;
unsigned int it_149;
_Bool _while_condtional22;
_Bool _if_conditional206;
_Bool _if_conditional207;
struct sType* __result100__;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sType* __result101__;
struct sType* __result102__;
struct sType* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_148, 0, sizeof(unsigned int));
memset(&it_149, 0, sizeof(unsigned int));
                        hash_148=string_get_hash_key(((char*)key))%self->size;
                        it_149=hash_148;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional206=self->item_existance[it_149],                            _if_conditional206) {
                                if(_if_conditional207=string_equals(self->keys[it_149],key),                                _if_conditional207) {
                                    __result100__ = __result_obj__ = self->items[it_149];
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                                it_149++;
                                if(_if_conditional208=it_149>=self->size,                                _if_conditional208) {
                                    it_149=0;
                                }
                                else {
                                    if(_if_conditional209=it_149==hash_148,                                    _if_conditional209) {
                                        __result101__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result101__;
                                    }
                                }
                            }
                            else {
                                __result102__ = __result_obj__ = default_value;
                                come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result102__;
                            }
                        }
                        __result103__ = __result_obj__ = default_value;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result103__;
                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = self->sline;
    return __result106__;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value125;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __dec_obj48;
void* right_value127;
char* __dec_obj49;
void* right_value128;
struct sClass* __dec_obj50;
struct sStructNobodyNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj49=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj50=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value128=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result108__ = __result_obj__ = self;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result108__;
    come_call_finalizer2(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = (_Bool)1;
    return __result109__;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
void* right_value129;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result110__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStructNobodyNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* name_158;
struct sClass* klass_159;
void* right_value131;
_Bool _if_conditional227;
void* right_value132;
void* right_value133;
void* right_value134;
struct sType* type_160;
void* right_value135;
_Bool _if_conditional228;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
memset(&name_158, 0, sizeof(char*));
memset(&klass_159, 0, sizeof(struct sClass*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&type_160, 0, sizeof(struct sType*));
right_value135 = (void*)0;
    name_158=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(self->mName))));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_159=self->mClass;
    if(_if_conditional227=((struct sClass*)(right_value131=map$2charphsClassph_at(info->classes,name_158,((void*)0))))==((void*)0),    come_call_finalizer2(sClass_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional227) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_158),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value132=sClass_clone(klass_159)))));
        come_call_finalizer2(sClass_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 289, "struct sType")))),name_158,(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_158),(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type_160)))));
    come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional228=info->output_header_file&&string_operator_not_equals(klass_159->mDeclareSName,info->base_sname),    _if_conditional228) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_158);
    }
    __result111__ = (_Bool)1;
    name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result111__;
    name_158 = come_decrement_ref_count2(name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = self->sline;
    return __result112__;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value137;
char* __dec_obj51;
struct sGenericsStructNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result114__ = __result_obj__ = self;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result114__;
    come_call_finalizer2(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = (_Bool)1;
    return __result115__;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
void* right_value138;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    __result116__ = __result_obj__ = ((char*)(right_value138=__builtin_string("sGenericsStructNode")));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = (_Bool)1;
    return __result117__;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self->sline;
    return __result118__;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value139;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value139=__builtin_string(self->sname)));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_161;
_Bool output_162;
void* right_value140;
_Bool _if_conditional230;
void* right_value141;
void* right_value142;
void* right_value143;
struct sClass* __dec_obj52;
void* right_value144;
void* right_value145;
void* right_value146;
struct sClass* __dec_obj53;
_Bool _while_condtional26;
_Bool multiple_declare_165;
char* p_166;
int sline_167;
_Bool no_output_err_168;
void* right_value147;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_169;
char* name_170;
_Bool err_171;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value148;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_172;
char* name_173;
_Bool err_174;
void* right_value149;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_175;
char* name2_176;
_Bool _if_conditional237;
void* right_value150;
void* right_value151;
_Bool _while_condtional27;
void* right_value152;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_177;
char* name2_178;
_Bool _if_conditional238;
void* right_value153;
void* right_value154;
void* right_value155;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_179;
char* name_180;
_Bool err_181;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value156;
void* right_value157;
_Bool _if_conditional241;
void* right_value158;
void* right_value159;
void* right_value160;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value165;
struct sNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_161, 0, sizeof(struct sClass*));
memset(&output_162, 0, sizeof(_Bool));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&multiple_declare_165, 0, sizeof(_Bool));
memset(&p_166, 0, sizeof(char*));
memset(&sline_167, 0, sizeof(int));
memset(&no_output_err_168, 0, sizeof(_Bool));
right_value147 = (void*)0;
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
right_value148 = (void*)0;
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
right_value149 = (void*)0;
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value165 = (void*)0;
    if(_if_conditional230=((struct sClass*)(right_value140=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0),    come_call_finalizer2(sClass_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional230) {
        output_162=(_Bool)1;
        __dec_obj52=klass_161;
        klass_161=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value143=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 359, "struct sClass")))),((char*)(right_value142=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_161));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        output_162=(_Bool)0;
        __dec_obj53=klass_161;
        klass_161=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value146=sClass_clone(((struct sClass*)(right_value145=map$2charphsClassph_at(info->classes,type_name,((void*)0))))))));
        come_call_finalizer2(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    list$1tuple2$2charphsTypephph_reset(klass_161->mFields);
    expected_next_character(123,info);
    while(_while_condtional26=(_Bool)1,    _while_condtional26) {
        multiple_declare_165=(_Bool)0;
        {
            p_166=info->p;
            sline_167=info->sline;
            no_output_err_168=info->no_output_err;
            info->no_output_err=(_Bool)1;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value147=parse_type(info,(_Bool)1,(_Bool)1)));
            type_169=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_170=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_171=multiple_assign_var4->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            info->no_output_err=no_output_err_168;
            if(_if_conditional233=err_171&&*info->p==44,            _if_conditional233) {
                multiple_declare_165=(_Bool)1;
            }
            info->p=p_166;
            info->sline=sline_167;
            come_call_finalizer2(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_170 = come_decrement_ref_count2(name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_165) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value148=parse_type(info,(_Bool)0,(_Bool)1)));
            base_type_172=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_173=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_174=multiple_assign_var5->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value149=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)1,info)));
            type2_175=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_176=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional237=!info->no_output_err,            _if_conditional237) {
                list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value151=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value150=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 396, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_176),(struct sType*)come_increment_ref_count(type2_175))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional27=*info->p==44,            _while_condtional27) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value152=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)0,info)));
                type2_177=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_178=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional238=!info->no_output_err,                _if_conditional238) {
                    list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value154=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value153=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 406, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_178),(struct sType*)come_increment_ref_count(type2_177))))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type2_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name2_178 = come_decrement_ref_count2(name2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(sType_finalize,base_type_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_173 = come_decrement_ref_count2(name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type2_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name2_176 = come_decrement_ref_count2(name2_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value155=parse_type(info,(_Bool)1,(_Bool)1)));
            type2_179=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_180=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_181=multiple_assign_var8->v3;
            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional239=!err_181,            _if_conditional239) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(_if_conditional240=!info->no_output_err,            _if_conditional240) {
                list$1tuple2$2charphsTypephph_push_back(klass_161->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value157=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value156=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 419, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(type2_179))))));
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type2_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_180 = come_decrement_ref_count2(name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        expected_next_character(59,info);
        parse_sharp_v5(info);
        if(_if_conditional241=*info->p==125,        _if_conditional241) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 434, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value160=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value158=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 434, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value159=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_161),output_162,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result123__ = __result_obj__ = ((struct sNode*)(right_value165=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sStructNode_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sStructNode_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result123__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_163;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_164;
struct list$1tuple2$2charphsTypephph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_163, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_163=self->head;
        while(_while_condtional25=it_163!=((void*)0),        _while_condtional25) {
            prev_it_164=it_163;
            it_163=it_163->next;
            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result120__ = __result_obj__ = self;
        return __result120__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional231=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional231) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional232=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional232) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional235;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional235=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional235) {
                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional236=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional236) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional251;
char* header_head_183;
void* right_value166;
char* type_name_184;
_Bool _if_conditional252;
struct sClass* struct_class_185;
void* right_value167;
_Bool _if_conditional253;
void* right_value168;
void* right_value169;
struct sClass* __dec_obj57;
void* right_value170;
void* right_value171;
struct sClass* __dec_obj58;
void* right_value172;
void* right_value173;
void* right_value174;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value179;
struct sNode* __result126__;
_Bool _if_conditional262;
_Bool _while_condtional29;
void* right_value180;
char* T_189;
void* right_value184;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct sClass* generics_class_193;
void* right_value185;
_Bool _if_conditional267;
void* right_value186;
void* right_value187;
struct sClass* __dec_obj65;
void* right_value188;
_Bool _if_conditional268;
_Bool _while_condtional30;
void* right_value189;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_194;
char* name_195;
_Bool err_196;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value190;
void* right_value191;
_Bool _while_condtional31;
void* right_value192;
char* name2_197;
void* right_value193;
struct sType* type3_198;
_Bool _if_conditional271;
_Bool no_comma_199;
void* right_value194;
struct sNode* node_200;
struct sNode* __dec_obj66;
void* right_value195;
void* right_value196;
void* right_value197;
void* right_value198;
_Bool _if_conditional272;
void* right_value199;
void* right_value200;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value203;
struct sNode* __result131__;
struct sClass* struct_class_202;
void* right_value204;
_Bool _if_conditional277;
void* right_value205;
void* right_value206;
struct sClass* __dec_obj68;
void* right_value207;
void* right_value208;
struct sClass* __dec_obj69;
_Bool _while_condtional32;
_Bool multiple_declare_203;
char* p_204;
int sline_205;
_Bool no_output_err_206;
void* right_value209;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_207;
char* name_208;
_Bool err_209;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value210;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* base_type_210;
char* name_211;
_Bool err_212;
void* right_value211;
struct tuple2$2sTypephcharph* multiple_assign_var12;
struct sType* type2_213;
char* name2_214;
void* right_value212;
void* right_value213;
_Bool _while_condtional33;
void* right_value214;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_215;
char* name2_216;
void* right_value215;
void* right_value216;
void* right_value217;
struct tuple3$3sTypephcharphbool* multiple_assign_var14;
struct sType* type2_217;
char* name_218;
_Bool err_219;
_Bool _if_conditional280;
void* right_value218;
void* right_value219;
_Bool _if_conditional281;
void* right_value220;
void* right_value221;
void* right_value222;
void* right_value223;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value228;
struct sNode* __result134__;
void* right_value229;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_183, 0, sizeof(char*));
right_value166 = (void*)0;
memset(&type_name_184, 0, sizeof(char*));
memset(&struct_class_185, 0, sizeof(struct sClass*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&T_189, 0, sizeof(char*));
right_value184 = (void*)0;
memset(&generics_class_193, 0, sizeof(struct sClass*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&name2_197, 0, sizeof(char*));
right_value193 = (void*)0;
memset(&type3_198, 0, sizeof(struct sType*));
memset(&no_comma_199, 0, sizeof(_Bool));
right_value194 = (void*)0;
memset(&node_200, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value203 = (void*)0;
memset(&struct_class_202, 0, sizeof(struct sClass*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&multiple_declare_203, 0, sizeof(_Bool));
memset(&p_204, 0, sizeof(char*));
memset(&sline_205, 0, sizeof(int));
memset(&no_output_err_206, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
right_value210 = (void*)0;
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
right_value211 = (void*)0;
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
    if(_if_conditional251=charp_operator_equals(buf,"struct"),    _if_conditional251) {
        header_head_183=head;
        type_name_184=(char*)come_increment_ref_count(((char*)(right_value166=parse_word(info))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional252=*info->p==59,        _if_conditional252) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional253=((struct sClass*)(right_value167=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))==((void*)0),            come_call_finalizer2(sClass_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional253) {
                __dec_obj57=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value169=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 450, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer2(sClass_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj58=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value171=sClass_clone(((struct sClass*)(right_value170=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))))));
                come_call_finalizer2(sClass_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 456, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value174=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value172=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 456, "struct sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(struct_class_185),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result126__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value2));
            come_call_finalizer2(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sStructNobodyNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result126__;
            come_call_finalizer2(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional262=*info->p==60,            _if_conditional262) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional29=(_Bool)1,                _while_condtional29) {
                    T_189=(char*)come_increment_ref_count(((char*)(right_value180=parse_word(info))));
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value184=string_clone(T_189)))));
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional265=*info->p==62,                    _if_conditional265) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_189 = come_decrement_ref_count2(T_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(_if_conditional266=*info->p==44,                        _if_conditional266) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_189 = come_decrement_ref_count2(T_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional267=((struct sClass*)(right_value185=map$2charphsClassph_at(info->generics_classes,type_name_184,((void*)0))))!=((void*)0),                come_call_finalizer2(sClass_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional267) {
                    err_msg(info,"redifined generics struct(%s)",type_name_184);
                    exit(2);
                }
                else {
                    __dec_obj65=generics_class_193;
                    generics_class_193=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value187=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 490, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional268=((struct sClass*)(right_value188=map$2charphsClassph_at(info->generics_classes,type_name_184,((void*)0))))==((void*)0),                come_call_finalizer2(sClass_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional268) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_184),(struct sClass*)come_increment_ref_count(generics_class_193));
                }
                expected_next_character(123,info);
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    parse_sharp_v5(info);
                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value189=parse_type(info,(_Bool)1,(_Bool)1)));
                    type2_194=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                    name_195=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    err_196=multiple_assign_var9->v3;
                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional269=!err_196,                    _if_conditional269) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(_if_conditional270=*info->p==44,                    _if_conditional270) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value191=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value190=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 510, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional31=*info->p==44,                        _while_condtional31) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_197=(char*)come_increment_ref_count(((char*)(right_value192=parse_word(info))));
                            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            type3_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(type2_194))));
                            come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional271=*info->p==58,                            _if_conditional271) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_199=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=expression_v13(info))));
                                if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                info->no_comma=no_comma_199;
                                __dec_obj66=type3_198->mSizeNum;
                                type3_198->mSizeNum=(struct sNode*)come_increment_ref_count(node_200);
                                if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_200) { node_200 = come_decrement_ref_count2(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value196=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value195=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 532, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_197),(struct sType*)come_increment_ref_count(type3_198))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            name2_197 = come_decrement_ref_count2(name2_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,type3_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_193->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value198=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value197=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 536, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional272=*info->p==125,                    _if_conditional272) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer2(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    come_call_finalizer2(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 553, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value200=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value199=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 553, "struct sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result131__ = __result_obj__ = ((struct sNode*)(right_value203=_inf_value3));
                come_call_finalizer2(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sGenericsStructNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result131__;
                come_call_finalizer2(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional277=((struct sClass*)(right_value204=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))==((void*)0),                come_call_finalizer2(sClass_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
                _if_conditional277) {
                    __dec_obj68=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 558, "struct sClass")))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer2(sClass_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj69=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value208=sClass_clone(((struct sClass*)(right_value207=map$2charphsClassph_at(info->classes,type_name_184,((void*)0))))))));
                    come_call_finalizer2(sClass_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sClass_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                expected_next_character(123,info);
                while(_while_condtional32=(_Bool)1,                _while_condtional32) {
                    parse_sharp_v5(info);
                    multiple_declare_203=(_Bool)0;
                    {
                        p_204=info->p;
                        sline_205=info->sline;
                        no_output_err_206=info->no_output_err;
                        info->no_output_err=(_Bool)1;
                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value209=parse_type(info,(_Bool)1,(_Bool)1)));
                        type_207=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                        name_208=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        err_209=multiple_assign_var10->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        info->no_output_err=no_output_err_206;
                        if(_if_conditional278=err_209&&*info->p==44,                        _if_conditional278) {
                            multiple_declare_203=(_Bool)1;
                        }
                        info->p=p_204;
                        info->sline=sline_205;
                        come_call_finalizer2(sType_finalize,type_207, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_208 = come_decrement_ref_count2(name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_203) {
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value210=parse_type(info,(_Bool)0,(_Bool)1)));
                        base_type_210=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_211=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_212=multiple_assign_var11->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var12=((struct tuple2$2sTypephcharph*)(right_value211=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)1,info)));
                        type2_213=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name2_214=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value213=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value212=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 592, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_214),(struct sType*)come_increment_ref_count(type2_213))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional33=*info->p==44,                        _while_condtional33) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value214=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)0,info)));
                            type2_215=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                            name2_216=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value216=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value215=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 600, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_216),(struct sType*)come_increment_ref_count(type2_215))))));
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            name2_216 = come_decrement_ref_count2(name2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer2(sType_finalize,base_type_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_211 = come_decrement_ref_count2(name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,type2_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name2_214 = come_decrement_ref_count2(name2_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(right_value217=parse_type(info,(_Bool)1,(_Bool)1)));
                        type2_217=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                        name_218=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        err_219=multiple_assign_var14->v3;
                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional280=!err_219,                        _if_conditional280) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_202->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value219=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value218=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 610, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_218),(struct sType*)come_increment_ref_count(type2_217))))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        name_218 = come_decrement_ref_count2(name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    expected_next_character(59,info);
                    parse_sharp_v5(info);
                    if(_if_conditional281=*info->p==125,                    _if_conditional281) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 627, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value223=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value220=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 627, "struct sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=sClass_clone(struct_class_202)))),(_Bool)1,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result134__ = __result_obj__ = ((struct sNode*)(right_value228=_inf_value4));
                come_call_finalizer2(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sStructNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sStructNode_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result134__;
                come_call_finalizer2(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_184 = come_decrement_ref_count2(type_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result135__ = __result_obj__ = ((struct sNode*)(right_value229=top_level_v97(buf,head,head_sline,info)));
    if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result135__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional254=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional254) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional255=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional255) {
                    come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional256=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional256) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional257;
struct sStructNobodyNode* __result124__;
void* right_value175;
struct sStructNobodyNode* result_186;
_Bool _if_conditional258;
void* right_value176;
char* __dec_obj59;
_Bool _if_conditional259;
void* right_value177;
struct sClass* __dec_obj60;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value178;
char* __dec_obj61;
struct sStructNobodyNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&result_186, 0, sizeof(struct sStructNobodyNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
                if(_if_conditional257=self==(void*)0,                _if_conditional257) {
                    __result124__ = __result_obj__ = (void*)0;
                    return __result124__;
                }
                result_186=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value175=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode"))));
                come_call_finalizer2(sStructNobodyNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional258=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional258) {
                    __dec_obj59=result_186->mName;
                    result_186->mName=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->mName))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional259=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional259) {
                    __dec_obj60=result_186->mClass;
                    result_186->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value177=sClass_clone(self->mClass))));
                    come_call_finalizer2(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sClass_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional260=self!=((void*)0),                _if_conditional260) {
                    result_186->sline=self->sline;
                }
                if(_if_conditional261=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional261) {
                    __dec_obj61=result_186->sname;
                    result_186->sname=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(self->sname))));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result125__ = __result_obj__ = result_186;
                come_call_finalizer2(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result125__;
                come_call_finalizer2(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_187;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_188;
struct list$1charph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_187, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1charph*));
                    it_187=self->head;
                    while(_while_condtional28=it_187!=((void*)0),                    _while_condtional28) {
                        prev_it_188=it_187;
                        it_187=it_187->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result127__ = __result_obj__ = self;
                    return __result127__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional263;
void* right_value181;
struct list_item$1charph* litem_190;
char* __dec_obj62;
_Bool _if_conditional264;
void* right_value182;
struct list_item$1charph* litem_191;
char* __dec_obj63;
void* right_value183;
struct list_item$1charph* litem_192;
char* __dec_obj64;
struct list$1charph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1charph*));
right_value182 = (void*)0;
memset(&litem_191, 0, sizeof(struct list_item$1charph*));
right_value183 = (void*)0;
memset(&litem_192, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional263=self->len==0,                        _if_conditional263) {
                            litem_190=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value181=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_190->prev=((void*)0);
                            litem_190->next=((void*)0);
                            __dec_obj62=litem_190->item;
                            litem_190->item=(char*)come_increment_ref_count(item);
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_190;
                            self->head=litem_190;
                        }
                        else {
                            if(_if_conditional264=self->len==1,                            _if_conditional264) {
                                litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value182=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_191->prev=self->head;
                                litem_191->next=((void*)0);
                                __dec_obj63=litem_191->item;
                                litem_191->item=(char*)come_increment_ref_count(item);
                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_191;
                                self->head->next=litem_191;
                            }
                            else {
                                litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_192->prev=self->tail;
                                litem_192->next=((void*)0);
                                __dec_obj64=litem_192->item;
                                litem_192->item=(char*)come_increment_ref_count(item);
                                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_192;
                                self->tail=litem_192;
                            }
                        }
                        self->len++;
                        __result128__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result128__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional273=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional273) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional274;
struct sGenericsStructNode* __result129__;
void* right_value201;
struct sGenericsStructNode* result_201;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value202;
char* __dec_obj67;
struct sGenericsStructNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
memset(&result_201, 0, sizeof(struct sGenericsStructNode*));
right_value202 = (void*)0;
                    if(_if_conditional274=self==(void*)0,                    _if_conditional274) {
                        __result129__ = __result_obj__ = (void*)0;
                        return __result129__;
                    }
                    result_201=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value201=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "struct sGenericsStructNode"))));
                    come_call_finalizer2(sGenericsStructNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional275=self!=((void*)0),                    _if_conditional275) {
                        result_201->sline=self->sline;
                    }
                    if(_if_conditional276=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional276) {
                        __dec_obj67=result_201->sname;
                        result_201->sname=(char*)come_increment_ref_count(((char*)(right_value202=string_clone(self->sname))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result130__ = __result_obj__ = result_201;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result130__;
                    come_call_finalizer2(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional282=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional282) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional283=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional283) {
                        come_call_finalizer2(sClass_finalize,self->mClass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional284) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sStructNode* __result132__;
void* right_value224;
struct sStructNode* result_220;
_Bool _if_conditional286;
void* right_value225;
char* __dec_obj70;
_Bool _if_conditional287;
void* right_value226;
struct sClass* __dec_obj71;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value227;
char* __dec_obj72;
_Bool _if_conditional290;
struct sStructNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
memset(&result_220, 0, sizeof(struct sStructNode*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
                    if(_if_conditional285=self==(void*)0,                    _if_conditional285) {
                        __result132__ = __result_obj__ = (void*)0;
                        return __result132__;
                    }
                    result_220=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value224=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode"))));
                    come_call_finalizer2(sStructNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional286=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional286) {
                        __dec_obj70=result_220->mName;
                        result_220->mName=(char*)come_increment_ref_count(((char*)(right_value225=string_clone(self->mName))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional287=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional287) {
                        __dec_obj71=result_220->mClass;
                        result_220->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value226=sClass_clone(self->mClass))));
                        come_call_finalizer2(sClass_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sClass_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional288=self!=((void*)0),                    _if_conditional288) {
                        result_220->sline=self->sline;
                    }
                    if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional289) {
                        __dec_obj72=result_220->sname;
                        result_220->sname=(char*)come_increment_ref_count(((char*)(right_value227=string_clone(self->sname))));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional290=self!=((void*)0),                    _if_conditional290) {
                        result_220->mOutput=self->mOutput;
                    }
                    __result133__ = __result_obj__ = result_220;
                    come_call_finalizer2(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result133__;
                    come_call_finalizer2(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_221;
char* p_222;
int sline_223;
_Bool _if_conditional291;
void* right_value230;
char* type_name_224;
_Bool _if_conditional292;
void* right_value231;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value232;
char* type_name_225;
void* right_value233;
struct sNode* __result136__;
void* right_value234;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_221, 0, sizeof(_Bool));
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
right_value230 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&type_name_225, 0, sizeof(char*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    define_struct_221=(_Bool)0;
    {
        p_222=info->p;
        sline_223=info->sline;
        if(_if_conditional291=charp_operator_equals(buf,"struct"),        _if_conditional291) {
            type_name_224=(char*)come_increment_ref_count(((char*)(right_value230=parse_word(info))));
            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional292=*info->p==123,            _if_conditional292) {
                ((char*)(right_value231=skip_block(info)));
                right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional293=*info->p==59,                _if_conditional293) {
                    define_struct_221=(_Bool)1;
                }
            }
            type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_222;
        info->sline=sline_223;
    }
    if(define_struct_221) {
        type_name_225=(char*)come_increment_ref_count(((char*)(right_value232=parse_word(info))));
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result136__ = __result_obj__ = ((struct sNode*)(right_value233=parse_struct((char*)come_increment_ref_count(type_name_225),info)));
        type_name_225 = come_decrement_ref_count2(type_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result136__;
        type_name_225 = come_decrement_ref_count2(type_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result137__ = __result_obj__ = ((struct sNode*)(right_value234=string_node_v13(buf,head,head_sline,info)));
    if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result137__;
}

