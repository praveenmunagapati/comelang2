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
struct sEnumNode
{
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    int sline;
    char* sname;
    _Bool mOutput;
    char* mDeclareSName;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
_Bool sEnumNode_terminated();

char* sEnumNode_kind();

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info);

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info);

struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
void* right_value22;
struct list$1tuple2$2charphsNodephph* __dec_obj13;
void* right_value23;
char* __dec_obj14;
struct sEnumNode* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value22 = (void*)0;
right_value23 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(type_name))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj13=self->mElements;
    self->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value22=list$1tuple2$2charphsNodephphp_clone(elements))));
    come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __dec_obj14=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value23=__builtin_string(info->sname))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result15__ = __result_obj__ = self;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result15__;
    come_call_finalizer2(sEnumNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional5;
struct list$1tuple2$2charphsNodephph* __result7__;
void* right_value12;
void* right_value13;
struct list$1tuple2$2charphsNodephph* result_9;
struct list_item$1tuple2$2charphsNodephph* it_10;
_Bool _while_condtional3;
void* right_value21;
struct list$1tuple2$2charphsNodephph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&result_9, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_10, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value21 = (void*)0;
        if(_if_conditional5=self==((void*)0),        _if_conditional5) {
            __result7__ = __result_obj__ = ((void*)0);
            return __result7__;
        }
        result_9=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value13=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value12=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_10=self->head;
        while(_while_condtional3=it_10!=((void*)0),        _while_condtional3) {
            list$1tuple2$2charphsNodephph_add(result_9,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value21=tuple2$2charphsNodephp_clone(it_10->item)))));
            come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_10=it_10->next;
        }
        __result14__ = __result_obj__ = result_9;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result14__;
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result8__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result8__;
            come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional6=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional6) {
                            come_call_finalizer2(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional7) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional8=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional8) {
                                    if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_7;
_Bool _while_condtional2;
struct list_item$1tuple2$2charphsNodephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_7=self->head;
                while(_while_condtional2=it_7!=((void*)0),                _while_condtional2) {
                    prev_it_8=it_7;
                    it_7=it_7->next;
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional9;
void* right_value14;
struct list_item$1tuple2$2charphsNodephph* litem_11;
struct tuple2$2charphsNodeph* __dec_obj8;
_Bool _if_conditional12;
void* right_value15;
struct list_item$1tuple2$2charphsNodephph* litem_12;
struct tuple2$2charphsNodeph* __dec_obj9;
void* right_value16;
struct list_item$1tuple2$2charphsNodephph* litem_13;
struct tuple2$2charphsNodeph* __dec_obj10;
struct list$1tuple2$2charphsNodephph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&litem_11, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value15 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value16 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional9=self->len==0,                _if_conditional9) {
                    litem_11=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value14=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_11->prev=((void*)0);
                    litem_11->next=((void*)0);
                    __dec_obj8=litem_11->item;
                    litem_11->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_11;
                    self->head=litem_11;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_12=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value15=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_12->prev=self->head;
                        litem_12->next=((void*)0);
                        __dec_obj9=litem_12->item;
                        litem_12->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_12;
                        self->head->next=litem_12;
                    }
                    else {
                        litem_13=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value16=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->tail;
                        litem_13->next=((void*)0);
                        __dec_obj10=litem_13->item;
                        litem_13->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_13;
                        self->tail=litem_13;
                    }
                }
                self->len++;
                __result9__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional10;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional10=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional10) {
                            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional11=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional11) {
                            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional13;
struct tuple2$2charphsNodeph* __result10__;
void* right_value17;
struct tuple2$2charphsNodeph* result_14;
_Bool _if_conditional14;
void* right_value18;
char* __dec_obj11;
_Bool _if_conditional15;
void* right_value20;
struct sNode* __dec_obj12;
struct tuple2$2charphsNodeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
memset(&result_14, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value18 = (void*)0;
right_value20 = (void*)0;
                if(_if_conditional13=self==(void*)0,                _if_conditional13) {
                    __result10__ = __result_obj__ = (void*)0;
                    return __result10__;
                }
                result_14=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value17=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "struct tuple2$2charphsNodeph"))));
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional14=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional14) {
                    __dec_obj11=result_14->v1;
                    result_14->v1=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(self->v1))));
                    __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional15=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional15) {
                    __dec_obj12=result_14->v2;
                    result_14->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value20=sNode_clone(self->v2))));
                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value20) { right_value20 = come_decrement_ref_count2(right_value20, ((struct sNode*)right_value20)->finalize, ((struct sNode*)right_value20)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result13__ = __result_obj__ = result_14;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(tuple2$2charphsNodeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional16;
struct sNode* __result11__;
void* right_value19;
struct sNode* result_15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
struct sNode* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
memset(&result_15, 0, sizeof(struct sNode*));
                        if(_if_conditional16=self==(void*)0,                        _if_conditional16) {
                            __result11__ = __result_obj__ = (void*)0;
                            return __result11__;
                        }
                        result_15=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value19) { right_value19 = come_decrement_ref_count2(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional17=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional17) {
                            result_15->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional18=self!=((void*)0),                        _if_conditional18) {
                            result_15->finalize=self->finalize;
                        }
                        if(_if_conditional19=self!=((void*)0),                        _if_conditional19) {
                            result_15->clone=self->clone;
                        }
                        if(_if_conditional20=self!=((void*)0),                        _if_conditional20) {
                            result_15->compile=self->compile;
                        }
                        if(_if_conditional21=self!=((void*)0),                        _if_conditional21) {
                            result_15->sline=self->sline;
                        }
                        if(_if_conditional22=self!=((void*)0),                        _if_conditional22) {
                            result_15->sname=self->sname;
                        }
                        if(_if_conditional23=self!=((void*)0),                        _if_conditional23) {
                            result_15->terminated=self->terminated;
                        }
                        if(_if_conditional24=self!=((void*)0),                        _if_conditional24) {
                            result_15->kind=self->kind;
                        }
                        __result12__ = __result_obj__ = result_15;
                        if(result_15) { result_15 = come_decrement_ref_count2(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result12__;
                        if(result_15) { result_15 = come_decrement_ref_count2(result_15, ((struct sNode*)result_15)->finalize, ((struct sNode*)result_15)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sEnumNode_terminated(){
void* __result_obj__;
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = (_Bool)1;
    return __result16__;
}

char* sEnumNode_kind(){
void* __result_obj__;
void* right_value24;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
    __result17__ = __result_obj__ = ((char*)(right_value24=__builtin_string("sEnumNode")));
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result17__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_16;
struct list$1tuple2$2charphsNodephph* elements_17;
void* right_value25;
void* right_value26;
struct buffer* buf_18;
_Bool _if_conditional29;
void* right_value27;
void* right_value28;
int i_19;
int n_20;
struct list$1tuple2$2charphsNodephph* o2_saved_21;
struct tuple2$2charphsNodeph* it_24;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_27;
struct sNode* value_28;
_Bool _if_conditional34;
_Bool _if_conditional35;
void* right_value29;
char* c_value_29;
void* right_value30;
void* right_value31;
_Bool _if_conditional52;
_Bool __result26__;
void* right_value32;
struct CVALUE* right_value_36;
void* right_value33;
void* right_value34;
void* right_value35;
_Bool _if_conditional55;
void* right_value36;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value37;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_16, 0, sizeof(char*));
memset(&elements_17, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&buf_18, 0, sizeof(struct buffer*));
right_value27 = (void*)0;
right_value28 = (void*)0;
memset(&i_19, 0, sizeof(int));
memset(&n_20, 0, sizeof(int));
memset(&o2_saved_21, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_24, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&name_27, 0, sizeof(char*));
memset(&value_28, 0, sizeof(struct sNode*));
memset(&name_27, 0, sizeof(char*));
memset(&value_28, 0, sizeof(struct sNode*));
right_value29 = (void*)0;
memset(&c_value_29, 0, sizeof(char*));
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value32 = (void*)0;
memset(&right_value_36, 0, sizeof(struct CVALUE*));
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value35 = (void*)0;
right_value36 = (void*)0;
right_value37 = (void*)0;
    type_name_16=(char*)come_increment_ref_count(self->mTypeName);
    elements_17=self->mElements;
    buf_18=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 46, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional29=string_operator_equals(type_name_16,""),    _if_conditional29) {
        buffer_append_str(buf_18,((char*)(right_value27=xsprintf("enum { ",type_name_16))));
        right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        buffer_append_str(buf_18,((char*)(right_value28=xsprintf("enum %s { ",type_name_16))));
        right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    i_19=0;
    n_20=0;
    for(    o2_saved_21=(elements_17),it_24=list$1tuple2$2charphsNodephph_begin((o2_saved_21));    !list$1tuple2$2charphsNodephph_end((o2_saved_21));    it_24=list$1tuple2$2charphsNodephph_next((o2_saved_21))    ){
        multiple_assign_var1=it_24;
        name_27=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_28=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional34=value_28==((void*)0),        _if_conditional34) {
            buffer_append_str(buf_18,name_27);
            buffer_append_str(buf_18,"\n");
            if(_if_conditional35=i_19!=list$1tuple2$2charphsNodephph_length(elements_17)-1,            _if_conditional35) {
                buffer_append_str(buf_18,",");
            }
            c_value_29=(char*)come_increment_ref_count(((char*)(right_value29=xsprintf("%d",n_20))));
            right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_variable_to_global_table_with_int_value(name_27,(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value30=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 70, "struct sType")))),"int",(_Bool)0,info)))),c_value_29,info);
            come_call_finalizer2(sType_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            c_value_29 = come_decrement_ref_count2(c_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional52=!node_compile(value_28,info),            _if_conditional52) {
                __result26__ = (_Bool)0;
                name_27 = come_decrement_ref_count2(name_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_28) { value_28 = come_decrement_ref_count2(value_28, ((struct sNode*)value_28)->finalize, ((struct sNode*)value_28)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_16 = come_decrement_ref_count2(type_name_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                return __result26__;
            }
            right_value_36=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value32=get_value_from_stack(-1,info))));
            come_call_finalizer2(CVALUE_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            dec_stack_ptr(1,info);
            add_variable_to_global_table_with_int_value(name_27,(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value33=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 80, "struct sType")))),"int",(_Bool)0,info)))),right_value_36->c_value,info);
            come_call_finalizer2(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_18,((char*)(right_value35=xsprintf("%s=%s",name_27,right_value_36->c_value))));
            right_value35 = come_decrement_ref_count2(right_value35, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional55=i_19!=list$1tuple2$2charphsNodephph_length(elements_17)-1,            _if_conditional55) {
                buffer_append_str(buf_18,",");
            }
            buffer_append_str(buf_18,"\n");
            n_20=atoi(right_value_36->c_value);
            come_call_finalizer2(CVALUE_finalize,right_value_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        i_19++;
        n_20++;
        name_27 = come_decrement_ref_count2(name_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_28) { value_28 = come_decrement_ref_count2(value_28, ((struct sNode*)value_28)->finalize, ((struct sNode*)value_28)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    buffer_append_str(buf_18,((char*)(right_value36=xsprintf("};\n",type_name_16))));
    right_value36 = come_decrement_ref_count2(right_value36, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional56=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),    _if_conditional56) {
    }
    else {
        if(self->mOutput) {
            add_come_code_at_source_head(info,"%s",((char*)(right_value37=buffer_to_string(buf_18))));
            right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result27__ = (_Bool)1;
    type_name_16 = come_decrement_ref_count2(type_name_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result27__;
    type_name_16 = come_decrement_ref_count2(type_name_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct tuple2$2charphsNodeph* result_22;
struct tuple2$2charphsNodeph* __result18__;
_Bool _if_conditional31;
struct tuple2$2charphsNodeph* __result19__;
struct tuple2$2charphsNodeph* result_23;
struct tuple2$2charphsNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_23, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional30=self==((void*)0),        _if_conditional30) {
            memset(&result_22,0,sizeof(struct tuple2$2charphsNodeph*));
            __result18__ = __result_obj__ = result_22;
            return __result18__;
        }
        self->it=self->head;
        if(self->it) {
            __result19__ = __result_obj__ = self->it->item;
            return __result19__;
        }
        memset(&result_23,0,sizeof(struct tuple2$2charphsNodeph*));
        __result20__ = __result_obj__ = result_23;
        return __result20__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result21__;
memset(&__result_obj__, 0, sizeof(void*));
        __result21__ = self==((void*)0)||self->it==((void*)0);
        return __result21__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct tuple2$2charphsNodeph* result_25;
struct tuple2$2charphsNodeph* __result22__;
_Bool _if_conditional33;
struct tuple2$2charphsNodeph* __result23__;
struct tuple2$2charphsNodeph* result_26;
struct tuple2$2charphsNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_25, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_26, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional32=self==((void*)0)||self->it==((void*)0),        _if_conditional32) {
            memset(&result_25,0,sizeof(struct tuple2$2charphsNodeph*));
            __result22__ = __result_obj__ = result_25;
            return __result22__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result23__ = __result_obj__ = self->it->item;
            return __result23__;
        }
        memset(&result_26,0,sizeof(struct tuple2$2charphsNodeph*));
        __result24__ = __result_obj__ = result_26;
        return __result24__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
                __result25__ = self->len;
                return __result25__;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional42;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional36=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional36) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional38) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional39=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional39) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional40=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional40) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional42) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional44=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional44) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional45=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional45) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional47=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional47) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional48=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional48) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional49=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional49) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional50=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional50) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional51=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional51) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional37=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional37) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_30;
_Bool _while_condtional4;
struct list_item$1sTypeph* prev_it_31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_30, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_31, 0, sizeof(struct list_item$1sTypeph*));
                        it_30=self->head;
                        while(_while_condtional4=it_30!=((void*)0),                        _while_condtional4) {
                            prev_it_31=it_30;
                            it_30=it_30->next;
                            come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional41) {
                                    come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_32;
_Bool _while_condtional5;
struct list_item$1sNodeph* prev_it_33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_32, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_33, 0, sizeof(struct list_item$1sNodeph*));
                        it_32=self->head;
                        while(_while_condtional5=it_32!=((void*)0),                        _while_condtional5) {
                            prev_it_33=it_32;
                            it_32=it_32->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional43=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional43) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_34;
_Bool _while_condtional6;
struct list_item$1charph* prev_it_35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_34, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_35, 0, sizeof(struct list_item$1charph*));
                        it_34=self->head;
                        while(_while_condtional6=it_34!=((void*)0),                        _while_condtional6) {
                            prev_it_35=it_34;
                            it_34=it_34->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional46=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional46) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional53;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional53=self!=((void*)0)&&self->c_value!=((void*)0),                _if_conditional53) {
                    self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional54=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional54) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

int sEnumNode_sline(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = self->sline;
    return __result28__;
}

char* sEnumNode_sname(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value38;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
    __result29__ = __result_obj__ = ((char*)(right_value38=__builtin_string(self->sname)));
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result29__;
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_37;
_Bool output_38;
void* right_value39;
_Bool _if_conditional68;
void* right_value40;
void* right_value41;
struct sClass* __dec_obj15;
void* right_value50;
void* right_value101;
struct sClass* __dec_obj48;
void* right_value102;
void* right_value103;
struct list$1tuple2$2charphsNodephph* elements_111;
_Bool _while_condtional20;
void* right_value104;
char* element_name_112;
_Bool _if_conditional200;
_Bool no_comma_113;
void* right_value105;
struct sNode* element_value_114;
_Bool _if_conditional201;
void* right_value109;
void* right_value110;
_Bool _if_conditional204;
void* right_value111;
void* right_value112;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value113;
void* right_value114;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value120;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_37, 0, sizeof(struct sClass*));
memset(&output_38, 0, sizeof(_Bool));
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value50 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&elements_111, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value104 = (void*)0;
memset(&element_name_112, 0, sizeof(char*));
memset(&no_comma_113, 0, sizeof(_Bool));
right_value105 = (void*)0;
memset(&element_value_114, 0, sizeof(struct sNode*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value120 = (void*)0;
    if(_if_conditional68=((struct sClass*)(right_value39=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0),    come_call_finalizer2(sClass_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
    _if_conditional68) {
        output_38=(_Bool)1;
        __dec_obj15=klass_37;
        klass_37=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value41=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value40=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 125, "struct sClass")))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))));
        come_call_finalizer2(sClass_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_37));
    }
    else {
        output_38=(_Bool)0;
        __dec_obj48=klass_37;
        klass_37=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value101=sClass_clone(((struct sClass*)(right_value50=map$2charphsClassph_at(info->classes,type_name,((void*)0))))))));
        come_call_finalizer2(sClass_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    }
    expected_next_character(123,info);
    elements_111=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value103=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value102=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 135, "struct list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        parse_sharp_v5(info);
        element_name_112=(char*)come_increment_ref_count(((char*)(right_value104=parse_word(info))));
        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional200=*info->p==61,        _if_conditional200) {
            info->p++;
            skip_spaces_and_lf(info);
            no_comma_113=info->no_comma;
            info->no_comma=(_Bool)1;
            element_value_114=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=expression_v13(info))));
            if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_113;
            if(_if_conditional201=!info->no_output_err,            _if_conditional201) {
                list$1tuple2$2charphsNodephph_push_back(elements_111,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value110=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value109=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 155, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_112),(struct sNode*)come_increment_ref_count(element_value_114))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_114) { element_value_114 = come_decrement_ref_count2(element_value_114, ((struct sNode*)element_value_114)->finalize, ((struct sNode*)element_value_114)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional204=!info->no_output_err,            _if_conditional204) {
                list$1tuple2$2charphsNodephph_push_back(elements_111,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value112=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value111=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 160, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_112),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional205=*info->p==44,        _if_conditional205) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional206=*info->p==125,        _if_conditional206) {
            info->p++;
            skip_spaces_and_lf(info);
            element_name_112 = come_decrement_ref_count2(element_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_112 = come_decrement_ref_count2(element_name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 180, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sEnumNode*)(right_value114=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value113=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 180, "struct sEnumNode")))),(char*)come_increment_ref_count(type_name),elements_111,output_38,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sEnumNode_sline;
    _inf_value1->sname=(void*)sEnumNode_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result86__ = __result_obj__ = ((struct sNode*)(right_value120=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sEnumNode_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sEnumNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result86__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass_37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_39;
unsigned int it_40;
_Bool _while_condtional7;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct sClass* __result30__;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sClass* __result31__;
struct sClass* __result32__;
struct sClass* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_39, 0, sizeof(unsigned int));
memset(&it_40, 0, sizeof(unsigned int));
        hash_39=string_get_hash_key(((char*)key))%self->size;
        it_40=hash_39;
        while(_while_condtional7=(_Bool)1,        _while_condtional7) {
            if(_if_conditional58=self->item_existance[it_40],            _if_conditional58) {
                if(_if_conditional59=string_equals(self->keys[it_40],key),                _if_conditional59) {
                    __result30__ = __result_obj__ = self->items[it_40];
                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result30__;
                }
                it_40++;
                if(_if_conditional66=it_40>=self->size,                _if_conditional66) {
                    it_40=0;
                }
                else {
                    if(_if_conditional67=it_40==hash_39,                    _if_conditional67) {
                        __result31__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result31__;
                    }
                }
            }
            else {
                __result32__ = __result_obj__ = default_value;
                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result32__;
            }
        }
        __result33__ = __result_obj__ = default_value;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result33__;
        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional60=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional60) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional61=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional61) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional65=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional65) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_41;
_Bool _while_condtional8;
struct list_item$1tuple2$2charphsTypephph* prev_it_42;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_41, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_42, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_41=self->head;
                                while(_while_condtional8=it_41!=((void*)0),                                _while_condtional8) {
                                    prev_it_42=it_41;
                                    it_41=it_41->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional62=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional62) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional63;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional63) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional64=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional64) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional69;
unsigned int hash_58;
unsigned int it_59;
_Bool _while_condtional10;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool same_key_exist_76;
char* it2_79;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct map$2charphsClassph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_58, 0, sizeof(unsigned int));
memset(&it_59, 0, sizeof(unsigned int));
memset(&same_key_exist_76, 0, sizeof(_Bool));
memset(&it2_79, 0, sizeof(char*));
            if(_if_conditional69=self->len*10>=self->size,            _if_conditional69) {
                map$2charphsClassph_rehash(self);
            }
            hash_58=string_get_hash_key(key)%self->size;
            it_59=hash_58;
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                if(_if_conditional77=self->item_existance[it_59],                _if_conditional77) {
                    if(_if_conditional78=string_equals(self->keys[it_59],key),                    _if_conditional78) {
                        if(_if_conditional79=1,                        _if_conditional79) {
                            list$1charp_remove(self->key_list,self->keys[it_59]);
                            self->keys[it_59] = come_decrement_ref_count2(self->keys[it_59], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_59]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_59]);
                            self->keys[it_59]=key;
                        }
                        if(_if_conditional99=1,                        _if_conditional99) {
                            come_call_finalizer2(sClass_finalize,self->items[it_59], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_59]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_59]=item;
                        }
                        break;
                    }
                    it_59++;
                    if(_if_conditional100=it_59>=self->size,                    _if_conditional100) {
                        it_59=0;
                    }
                    else {
                        if(_if_conditional101=it_59==hash_58,                        _if_conditional101) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_59]=(_Bool)1;
                    if(_if_conditional102=1,                    _if_conditional102) {
                        self->keys[it_59]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_59]=key;
                    }
                    if(_if_conditional103=1,                    _if_conditional103) {
                        self->items[it_59]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_59]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_76=(_Bool)0;
            for(            it2_79=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_79=list$1charp_next(self->key_list)            ){
                if(_if_conditional108=string_equals(it2_79,key),                _if_conditional108) {
                    same_key_exist_76=(_Bool)1;
                }
            }
            if(_if_conditional109=!same_key_exist_76,            _if_conditional109) {
                list$1charp_push_back(self->key_list,key);
            }
            __result53__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result53__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_43;
void* right_value42;
char** keys_44;
void* right_value43;
struct sClass** items_45;
void* right_value44;
_Bool* item_existance_46;
int len_47;
char* it_50;
struct sClass* default_value_53;
void* right_value45;
struct sClass* it2_54;
unsigned int hash_55;
int n_56;
_Bool _while_condtional9;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct sClass* default_value_57;
void* right_value46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_43, 0, sizeof(int));
right_value42 = (void*)0;
memset(&keys_44, 0, sizeof(char**));
right_value43 = (void*)0;
memset(&items_45, 0, sizeof(struct sClass**));
right_value44 = (void*)0;
memset(&item_existance_46, 0, sizeof(_Bool*));
memset(&len_47, 0, sizeof(int));
memset(&it_50, 0, sizeof(char*));
memset(&default_value_53, 0, sizeof(struct sClass*));
right_value45 = (void*)0;
memset(&it2_54, 0, sizeof(struct sClass*));
memset(&hash_55, 0, sizeof(unsigned int));
memset(&n_56, 0, sizeof(int));
memset(&default_value_57, 0, sizeof(struct sClass*));
right_value46 = (void*)0;
                    size_43=self->size*10;
                    keys_44=(char**)come_increment_ref_count(((char**)(right_value42=(char**)come_calloc(1, sizeof(char*)*(1*(size_43)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                    right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_45=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value43=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_43)), "/usr/local/include/comelang2.h", 1315, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_46=(_Bool*)come_increment_ref_count(((_Bool*)(right_value44=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_43)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                    right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_47=0;
                    for(                    it_50=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_50=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_53,0,sizeof(struct sClass*));
                        it2_54=((struct sClass*)(right_value45=map$2charphsClassph_at(self,it_50,default_value_53)));
                        come_call_finalizer2(sClass_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_55=string_get_hash_key(it_50)%size_43;
                        n_56=hash_55;
                        while(_while_condtional9=(_Bool)1,                        _while_condtional9) {
                            if(_if_conditional74=item_existance_46[n_56],                            _if_conditional74) {
                                n_56++;
                                if(_if_conditional75=n_56>=size_43,                                _if_conditional75) {
                                    n_56=0;
                                }
                                else {
                                    if(_if_conditional76=n_56==hash_55,                                    _if_conditional76) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_46[n_56]=(_Bool)1;
                                keys_44[n_56]=it_50;
                                items_45[n_56]=((struct sClass*)(right_value46=map$2charphsClassph_at(self,it_50,default_value_57)));
                                come_call_finalizer2(sClass_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_47++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_44;
                    self->items=items_45;
                    self->item_existance=item_existance_46;
                    self->size=size_43;
                    self->len=len_47;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional70;
char* result_48;
char* __result34__;
_Bool _if_conditional71;
char* __result35__;
char* result_49;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_48, 0, sizeof(char*));
memset(&result_49, 0, sizeof(char*));
                        if(_if_conditional70=self==((void*)0),                        _if_conditional70) {
                            memset(&result_48,0,sizeof(char*));
                            __result34__ = __result_obj__ = result_48;
                            return __result34__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result35__ = __result_obj__ = self->key_list->it->item;
                            return __result35__;
                        }
                        memset(&result_49,0,sizeof(char*));
                        __result36__ = __result_obj__ = result_49;
                        return __result36__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result37__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result37__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional72;
char* result_51;
char* __result38__;
_Bool _if_conditional73;
char* __result39__;
char* result_52;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_51, 0, sizeof(char*));
memset(&result_52, 0, sizeof(char*));
                        if(_if_conditional72=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional72) {
                            memset(&result_51,0,sizeof(char*));
                            __result38__ = __result_obj__ = result_51;
                            return __result38__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result39__ = __result_obj__ = self->key_list->it->item;
                            return __result39__;
                        }
                        memset(&result_52,0,sizeof(char*));
                        __result40__ = __result_obj__ = result_52;
                        return __result40__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_60;
struct list_item$1charp* it_61;
_Bool _while_condtional11;
_Bool _if_conditional80;
struct list$1charp* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_60, 0, sizeof(int));
memset(&it_61, 0, sizeof(struct list_item$1charp*));
                                it2_60=0;
                                it_61=self->head;
                                while(_while_condtional11=it_61!=((void*)0),                                _while_condtional11) {
                                    if(_if_conditional80=string_equals(it_61->item,item),                                    _if_conditional80) {
                                        list$1charp_delete(self,it2_60,it2_60+1);
                                        break;
                                    }
                                    it2_60++;
                                    it_61=it_61->next;
                                }
                                __result44__ = __result_obj__ = self;
                                return __result44__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
int tmp_62;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
struct list$1charp* __result41__;
_Bool _if_conditional87;
_Bool _if_conditional88;
struct list_item$1charp* it_65;
int i_66;
_Bool _while_condtional13;
_Bool _if_conditional89;
struct list_item$1charp* prev_it_67;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct list_item$1charp* it_68;
int i_69;
_Bool _while_condtional14;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list_item$1charp* prev_it_70;
struct list_item$1charp* it_71;
struct list_item$1charp* head_prev_it_72;
struct list_item$1charp* tail_it_73;
int i_74;
_Bool _while_condtional15;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list_item$1charp* prev_it_75;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct list$1charp* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_62, 0, sizeof(int));
memset(&it_65, 0, sizeof(struct list_item$1charp*));
memset(&i_66, 0, sizeof(int));
memset(&prev_it_67, 0, sizeof(struct list_item$1charp*));
memset(&it_68, 0, sizeof(struct list_item$1charp*));
memset(&i_69, 0, sizeof(int));
memset(&prev_it_70, 0, sizeof(struct list_item$1charp*));
memset(&it_71, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_72, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_73, 0, sizeof(struct list_item$1charp*));
memset(&i_74, 0, sizeof(int));
memset(&prev_it_75, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional81=head<0,                                            _if_conditional81) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional82=tail<0,                                            _if_conditional82) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional83=head>tail,                                            _if_conditional83) {
                                                tmp_62=tail;
                                                tail=head;
                                                head=tmp_62;
                                            }
                                            if(_if_conditional84=head<0,                                            _if_conditional84) {
                                                head=0;
                                            }
                                            if(_if_conditional85=tail>self->len,                                            _if_conditional85) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional86=head==tail,                                            _if_conditional86) {
                                                __result41__ = __result_obj__ = self;
                                                return __result41__;
                                            }
                                            if(_if_conditional87=head==0&&tail==self->len,                                            _if_conditional87) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional88=head==0,                                                _if_conditional88) {
                                                    it_65=self->head;
                                                    i_66=0;
                                                    while(_while_condtional13=it_65!=((void*)0),                                                    _while_condtional13) {
                                                        if(_if_conditional89=i_66<tail,                                                        _if_conditional89) {
                                                            prev_it_67=it_65;
                                                            it_65=it_65->next;
                                                            i_66++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional90=i_66==tail,                                                            _if_conditional90) {
                                                                self->head=it_65;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_65=it_65->next;
                                                                i_66++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional91=tail==self->len,                                                    _if_conditional91) {
                                                        it_68=self->head;
                                                        i_69=0;
                                                        while(_while_condtional14=it_68!=((void*)0),                                                        _while_condtional14) {
                                                            if(_if_conditional92=i_69==head,                                                            _if_conditional92) {
                                                                self->tail=it_68->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional93=i_69>=head,                                                            _if_conditional93) {
                                                                prev_it_70=it_68;
                                                                it_68=it_68->next;
                                                                i_69++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_68=it_68->next;
                                                                i_69++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_71=self->head;
                                                        head_prev_it_72=((void*)0);
                                                        tail_it_73=((void*)0);
                                                        i_74=0;
                                                        while(_while_condtional15=it_71!=((void*)0),                                                        _while_condtional15) {
                                                            if(_if_conditional94=i_74==head,                                                            _if_conditional94) {
                                                                head_prev_it_72=it_71->prev;
                                                            }
                                                            if(_if_conditional95=i_74==tail,                                                            _if_conditional95) {
                                                                tail_it_73=it_71;
                                                            }
                                                            if(_if_conditional96=i_74>=head&&i_74<tail,                                                            _if_conditional96) {
                                                                prev_it_75=it_71;
                                                                it_71=it_71->next;
                                                                i_74++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_71=it_71->next;
                                                                i_74++;
                                                            }
                                                        }
                                                        if(_if_conditional97=head_prev_it_72!=((void*)0),                                                        _if_conditional97) {
                                                            head_prev_it_72->next=tail_it_73;
                                                        }
                                                        if(_if_conditional98=tail_it_73!=((void*)0),                                                        _if_conditional98) {
                                                            tail_it_73->prev=head_prev_it_72;
                                                        }
                                                    }
                                                }
                                            }
                                            __result43__ = __result_obj__ = self;
                                            return __result43__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_63;
_Bool _while_condtional12;
struct list_item$1charp* prev_it_64;
struct list$1charp* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_63, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
                                                    it_63=self->head;
                                                    while(_while_condtional12=it_63!=((void*)0),                                                    _while_condtional12) {
                                                        prev_it_64=it_63;
                                                        it_63=it_63->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result42__ = __result_obj__ = self;
                                                    return __result42__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional104;
char* result_77;
char* __result45__;
_Bool _if_conditional105;
char* __result46__;
char* result_78;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_77, 0, sizeof(char*));
memset(&result_78, 0, sizeof(char*));
                if(_if_conditional104=self==((void*)0),                _if_conditional104) {
                    memset(&result_77,0,sizeof(char*));
                    __result45__ = __result_obj__ = result_77;
                    return __result45__;
                }
                self->it=self->head;
                if(self->it) {
                    __result46__ = __result_obj__ = self->it->item;
                    return __result46__;
                }
                memset(&result_78,0,sizeof(char*));
                __result47__ = __result_obj__ = result_78;
                return __result47__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                __result48__ = self==((void*)0)||self->it==((void*)0);
                return __result48__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional106;
char* result_80;
char* __result49__;
_Bool _if_conditional107;
char* __result50__;
char* result_81;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_80, 0, sizeof(char*));
memset(&result_81, 0, sizeof(char*));
                if(_if_conditional106=self==((void*)0)||self->it==((void*)0),                _if_conditional106) {
                    memset(&result_80,0,sizeof(char*));
                    __result49__ = __result_obj__ = result_80;
                    return __result49__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result50__ = __result_obj__ = self->it->item;
                    return __result50__;
                }
                memset(&result_81,0,sizeof(char*));
                __result51__ = __result_obj__ = result_81;
                return __result51__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional110;
void* right_value47;
struct list_item$1charp* litem_82;
_Bool _if_conditional111;
void* right_value48;
struct list_item$1charp* litem_83;
void* right_value49;
struct list_item$1charp* litem_84;
struct list$1charp* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charp*));
right_value48 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charp*));
right_value49 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional110=self->len==0,                    _if_conditional110) {
                        litem_82=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value47=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_82->prev=((void*)0);
                        litem_82->next=((void*)0);
                        litem_82->item=item;
                        self->tail=litem_82;
                        self->head=litem_82;
                    }
                    else {
                        if(_if_conditional111=self->len==1,                        _if_conditional111) {
                            litem_83=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value48=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_83->prev=self->head;
                            litem_83->next=((void*)0);
                            litem_83->item=item;
                            self->tail=litem_83;
                            self->head->next=litem_83;
                        }
                        else {
                            litem_84=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value49=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_84->prev=self->tail;
                            litem_84->next=((void*)0);
                            litem_84->item=item;
                            self->tail->next=litem_84;
                            self->tail=litem_84;
                        }
                    }
                    self->len++;
                    __result52__ = __result_obj__ = self;
                    return __result52__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional112;
struct sClass* __result54__;
void* right_value51;
struct sClass* result_85;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value52;
char* __dec_obj16;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value99;
struct list$1tuple2$2charphsTypephph* __dec_obj46;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value100;
char* __dec_obj47;
struct sClass* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&result_85, 0, sizeof(struct sClass*));
right_value52 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
            if(_if_conditional112=self==(void*)0,            _if_conditional112) {
                __result54__ = __result_obj__ = (void*)0;
                return __result54__;
            }
            result_85=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value51=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
            come_call_finalizer2(sClass_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_85->mStruct=self->mStruct;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_85->mFloat=self->mFloat;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_85->mUnion=self->mUnion;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_85->mGenerics=self->mGenerics;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                result_85->mMethodGenerics=self->mMethodGenerics;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_85->mEnum=self->mEnum;
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                result_85->mProtocol=self->mProtocol;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                result_85->mNumber=self->mNumber;
            }
            if(_if_conditional121=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional121) {
                __dec_obj16=result_85->mName;
                result_85->mName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(self->mName))));
                __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                result_85->mGenericsNum=self->mGenericsNum;
            }
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                result_85->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(_if_conditional124=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional124) {
                __dec_obj46=result_85->mFields;
                result_85->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value99=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional198=self!=((void*)0),            _if_conditional198) {
                result_85->mOutputed=self->mOutputed;
            }
            if(_if_conditional199=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional199) {
                __dec_obj47=result_85->mDeclareSName;
                result_85->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value100=string_clone(self->mDeclareSName))));
                __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result81__ = __result_obj__ = result_85;
            come_call_finalizer2(sClass_finalize,result_85, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result81__;
            come_call_finalizer2(sClass_finalize,result_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional125;
struct list$1tuple2$2charphsTypephph* __result55__;
void* right_value53;
void* right_value54;
struct list$1tuple2$2charphsTypephph* result_86;
struct list_item$1tuple2$2charphsTypephph* it_87;
_Bool _while_condtional16;
void* right_value98;
struct list$1tuple2$2charphsTypephph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_87, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value98 = (void*)0;
                    if(_if_conditional125=self==((void*)0),                    _if_conditional125) {
                        __result55__ = __result_obj__ = ((void*)0);
                        return __result55__;
                    }
                    result_86=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value54=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value53=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_87=self->head;
                    while(_while_condtional16=it_87!=((void*)0),                    _while_condtional16) {
                        list$1tuple2$2charphsTypephph_add(result_86,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=tuple2$2charphsTypephp_clone(it_87->item)))));
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_87=it_87->next;
                    }
                    __result80__ = __result_obj__ = result_86;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_86, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result56__ = __result_obj__ = self;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                        come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value55;
struct list_item$1tuple2$2charphsTypephph* litem_88;
struct tuple2$2charphsTypeph* __dec_obj17;
_Bool _if_conditional129;
void* right_value56;
struct list_item$1tuple2$2charphsTypephph* litem_89;
struct tuple2$2charphsTypeph* __dec_obj18;
void* right_value57;
struct list_item$1tuple2$2charphsTypephph* litem_90;
struct tuple2$2charphsTypeph* __dec_obj19;
struct list$1tuple2$2charphsTypephph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value56 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value57 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional126=self->len==0,                            _if_conditional126) {
                                litem_88=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value55=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_88->prev=((void*)0);
                                litem_88->next=((void*)0);
                                __dec_obj17=litem_88->item;
                                litem_88->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_88;
                                self->head=litem_88;
                            }
                            else {
                                if(_if_conditional129=self->len==1,                                _if_conditional129) {
                                    litem_89=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value56=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_89->prev=self->head;
                                    litem_89->next=((void*)0);
                                    __dec_obj18=litem_89->item;
                                    litem_89->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_89;
                                    self->head->next=litem_89;
                                }
                                else {
                                    litem_90=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value57=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_90->prev=self->tail;
                                    litem_90->next=((void*)0);
                                    __dec_obj19=litem_90->item;
                                    litem_90->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_90;
                                    self->tail=litem_90;
                                }
                            }
                            self->len++;
                            __result57__ = __result_obj__ = self;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result57__;
                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional127=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional127) {
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional128=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional128) {
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* __result58__;
void* right_value58;
struct tuple2$2charphsTypeph* result_91;
_Bool _if_conditional131;
void* right_value59;
char* __dec_obj20;
_Bool _if_conditional132;
void* right_value97;
struct sType* __dec_obj45;
struct tuple2$2charphsTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
memset(&result_91, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value59 = (void*)0;
right_value97 = (void*)0;
                            if(_if_conditional130=self==(void*)0,                            _if_conditional130) {
                                __result58__ = __result_obj__ = (void*)0;
                                return __result58__;
                            }
                            result_91=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value58=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional131=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional131) {
                                __dec_obj20=result_91->v1;
                                result_91->v1=(char*)come_increment_ref_count(((char*)(right_value59=string_clone(self->v1))));
                                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional132=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional132) {
                                __dec_obj45=result_91->v2;
                                result_91->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(self->v2))));
                                come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer2(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            }
                            __result79__ = __result_obj__ = result_91;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional133;
struct sType* __result59__;
void* right_value60;
struct sType* result_92;
_Bool _if_conditional134;
_Bool _if_conditional135;
void* right_value63;
struct tuple1$1sTypeph* __dec_obj22;
_Bool _if_conditional139;
void* right_value66;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional142;
void* right_value67;
char* __dec_obj25;
_Bool _if_conditional143;
void* right_value74;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional147;
void* right_value81;
struct list$1sNodeph* __dec_obj33;
_Bool _if_conditional151;
_Bool _if_conditional152;
void* right_value82;
struct list$1sTypeph* __dec_obj34;
_Bool _if_conditional153;
void* right_value89;
struct list$1charph* __dec_obj38;
_Bool _if_conditional157;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj40;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value93;
struct sNode* __dec_obj41;
_Bool _if_conditional162;
_Bool _if_conditional163;
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
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value94;
struct sNode* __dec_obj42;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value95;
char* __dec_obj43;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value96;
char* __dec_obj44;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value60 = (void*)0;
memset(&result_92, 0, sizeof(struct sType*));
right_value63 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value74 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value89 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
                                    if(_if_conditional133=self==(void*)0,                                    _if_conditional133) {
                                        __result59__ = __result_obj__ = (void*)0;
                                        return __result59__;
                                    }
                                    result_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value60=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                    come_call_finalizer2(sType_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional134=self!=((void*)0),                                    _if_conditional134) {
                                        result_92->mClass=self->mClass;
                                    }
                                    if(_if_conditional135=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional135) {
                                        __dec_obj22=result_92->mNoSolvedGenericsType;
                                        result_92->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value63=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional139=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                    _if_conditional139) {
                                        __dec_obj24=result_92->mOriginalLoadVarType;
                                        result_92->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value66=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional142=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                    _if_conditional142) {
                                        __dec_obj25=result_92->mGenericsName;
                                        result_92->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value67=string_clone(self->mGenericsName))));
                                        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional143=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                    _if_conditional143) {
                                        __dec_obj29=result_92->mGenericsTypes;
                                        result_92->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional147=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                    _if_conditional147) {
                                        __dec_obj33=result_92->mArrayNum;
                                        result_92->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value81=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer2(list$1sNodeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional151=self!=((void*)0),                                    _if_conditional151) {
                                        result_92->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(_if_conditional152=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                    _if_conditional152) {
                                        __dec_obj34=result_92->mParamTypes;
                                        result_92->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional153=self!=((void*)0)&&self->mParamNames!=((void*)0),                                    _if_conditional153) {
                                        __dec_obj38=result_92->mParamNames;
                                        result_92->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value89=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer2(list$1charph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(list$1charphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional157=self!=((void*)0)&&self->mResultType!=((void*)0),                                    _if_conditional157) {
                                        __dec_obj40=result_92->mResultType;
                                        result_92->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional160=self!=((void*)0),                                    _if_conditional160) {
                                        result_92->mVarArgs=self->mVarArgs;
                                    }
                                    if(_if_conditional161=self!=((void*)0)&&self->mAlignas!=((void*)0),                                    _if_conditional161) {
                                        __dec_obj41=result_92->mAlignas;
                                        result_92->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value93=sNode_clone(self->mAlignas))));
                                        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value93) { right_value93 = come_decrement_ref_count2(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional162=self!=((void*)0),                                    _if_conditional162) {
                                        result_92->mUnsigned=self->mUnsigned;
                                    }
                                    if(_if_conditional163=self!=((void*)0),                                    _if_conditional163) {
                                        result_92->mShort=self->mShort;
                                    }
                                    if(_if_conditional164=self!=((void*)0),                                    _if_conditional164) {
                                        result_92->mLong=self->mLong;
                                    }
                                    if(_if_conditional165=self!=((void*)0),                                    _if_conditional165) {
                                        result_92->mLongLong=self->mLongLong;
                                    }
                                    if(_if_conditional166=self!=((void*)0),                                    _if_conditional166) {
                                        result_92->mConstant=self->mConstant;
                                    }
                                    if(_if_conditional167=self!=((void*)0),                                    _if_conditional167) {
                                        result_92->mRegister=self->mRegister;
                                    }
                                    if(_if_conditional168=self!=((void*)0),                                    _if_conditional168) {
                                        result_92->mVolatile=self->mVolatile;
                                    }
                                    if(_if_conditional169=self!=((void*)0),                                    _if_conditional169) {
                                        result_92->mStatic=self->mStatic;
                                    }
                                    if(_if_conditional170=self!=((void*)0),                                    _if_conditional170) {
                                        result_92->mExtern=self->mExtern;
                                    }
                                    if(_if_conditional171=self!=((void*)0),                                    _if_conditional171) {
                                        result_92->mRestrict=self->mRestrict;
                                    }
                                    if(_if_conditional172=self!=((void*)0),                                    _if_conditional172) {
                                        result_92->mImmutable=self->mImmutable;
                                    }
                                    if(_if_conditional173=self!=((void*)0),                                    _if_conditional173) {
                                        result_92->mHeap=self->mHeap;
                                    }
                                    if(_if_conditional174=self!=((void*)0),                                    _if_conditional174) {
                                        result_92->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(_if_conditional175=self!=((void*)0),                                    _if_conditional175) {
                                        result_92->mDelegate=self->mDelegate;
                                    }
                                    if(_if_conditional176=self!=((void*)0),                                    _if_conditional176) {
                                        result_92->mShare=self->mShare;
                                    }
                                    if(_if_conditional177=self!=((void*)0),                                    _if_conditional177) {
                                        result_92->mClone=self->mClone;
                                    }
                                    if(_if_conditional178=self!=((void*)0),                                    _if_conditional178) {
                                        result_92->mNoHeap=self->mNoHeap;
                                    }
                                    if(_if_conditional179=self!=((void*)0),                                    _if_conditional179) {
                                        result_92->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(_if_conditional180=self!=((void*)0),                                    _if_conditional180) {
                                        result_92->mRefference=self->mRefference;
                                    }
                                    if(_if_conditional181=self!=((void*)0),                                    _if_conditional181) {
                                        result_92->mException=self->mException;
                                    }
                                    if(_if_conditional182=self!=((void*)0),                                    _if_conditional182) {
                                        result_92->mPointerNum=self->mPointerNum;
                                    }
                                    if(_if_conditional183=self!=((void*)0),                                    _if_conditional183) {
                                        result_92->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional184=self!=((void*)0),                                    _if_conditional184) {
                                        result_92->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional185=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                    _if_conditional185) {
                                        __dec_obj42=result_92->mSizeNum;
                                        result_92->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional186=self!=((void*)0),                                    _if_conditional186) {
                                        result_92->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(_if_conditional187=self!=((void*)0),                                    _if_conditional187) {
                                        result_92->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(_if_conditional188=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                    _if_conditional188) {
                                        __dec_obj43=result_92->mOriginalTypeName;
                                        result_92->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mOriginalTypeName))));
                                        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional189=self!=((void*)0),                                    _if_conditional189) {
                                        result_92->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(_if_conditional190=self!=((void*)0),                                    _if_conditional190) {
                                        result_92->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(_if_conditional191=self!=((void*)0),                                    _if_conditional191) {
                                        result_92->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(_if_conditional192=self!=((void*)0),                                    _if_conditional192) {
                                        result_92->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(_if_conditional193=self!=((void*)0),                                    _if_conditional193) {
                                        result_92->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(_if_conditional194=self!=((void*)0),                                    _if_conditional194) {
                                        result_92->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(_if_conditional195=self!=((void*)0),                                    _if_conditional195) {
                                        result_92->mInline=self->mInline;
                                    }
                                    if(_if_conditional196=self!=((void*)0),                                    _if_conditional196) {
                                        result_92->mNullValue=self->mNullValue;
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&self->mAsmName!=((void*)0),                                    _if_conditional197) {
                                        __dec_obj44=result_92->mAsmName;
                                        result_92->mAsmName=(char*)come_increment_ref_count(((char*)(right_value96=string_clone(self->mAsmName))));
                                        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result78__ = __result_obj__ = result_92;
                                    come_call_finalizer2(sType_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result78__;
                                    come_call_finalizer2(sType_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional137=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional137) {
                                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional144;
struct list$1sTypeph* __result64__;
void* right_value68;
void* right_value69;
struct list$1sTypeph* result_95;
struct list_item$1sTypeph* it_96;
_Bool _while_condtional17;
void* right_value73;
struct list$1sTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&result_95, 0, sizeof(struct list$1sTypeph*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
right_value73 = (void*)0;
                                            if(_if_conditional144=self==((void*)0),                                            _if_conditional144) {
                                                __result64__ = __result_obj__ = ((void*)0);
                                                return __result64__;
                                            }
                                            result_95=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value69=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value68=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sTypephp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_96=self->head;
                                            while(_while_condtional17=it_96!=((void*)0),                                            _while_condtional17) {
                                                list$1sTypeph_add(result_95,(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(it_96->item)))));
                                                come_call_finalizer2(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                it_96=it_96->next;
                                            }
                                            __result67__ = __result_obj__ = result_95;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result67__;
                                            come_call_finalizer2(list$1sTypephp_finalize,result_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result65__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result65__;
                                                come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional145;
void* right_value70;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj26;
_Bool _if_conditional146;
void* right_value71;
struct list_item$1sTypeph* litem_98;
struct sType* __dec_obj27;
void* right_value72;
struct list_item$1sTypeph* litem_99;
struct sType* __dec_obj28;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value70 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*));
right_value71 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1sTypeph*));
right_value72 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional145=self->len==0,                                                    _if_conditional145) {
                                                        litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value70=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_97->prev=((void*)0);
                                                        litem_97->next=((void*)0);
                                                        __dec_obj26=litem_97->item;
                                                        litem_97->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_97;
                                                        self->head=litem_97;
                                                    }
                                                    else {
                                                        if(_if_conditional146=self->len==1,                                                        _if_conditional146) {
                                                            litem_98=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value71=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_98->prev=self->head;
                                                            litem_98->next=((void*)0);
                                                            __dec_obj27=litem_98->item;
                                                            litem_98->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_98;
                                                            self->head->next=litem_98;
                                                        }
                                                        else {
                                                            litem_99=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value72=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_99->prev=self->tail;
                                                            litem_99->next=((void*)0);
                                                            __dec_obj28=litem_99->item;
                                                            litem_99->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_99;
                                                            self->tail=litem_99;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result66__ = __result_obj__ = self;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result66__;
                                                    come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional148;
struct list$1sNodeph* __result68__;
void* right_value75;
void* right_value76;
struct list$1sNodeph* result_100;
struct list_item$1sNodeph* it_101;
_Bool _while_condtional18;
void* right_value80;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&result_100, 0, sizeof(struct list$1sNodeph*));
memset(&it_101, 0, sizeof(struct list_item$1sNodeph*));
right_value80 = (void*)0;
                                            if(_if_conditional148=self==((void*)0),                                            _if_conditional148) {
                                                __result68__ = __result_obj__ = ((void*)0);
                                                return __result68__;
                                            }
                                            result_100=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value76=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value75=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1sNodephp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_101=self->head;
                                            while(_while_condtional18=it_101!=((void*)0),                                            _while_condtional18) {
                                                list$1sNodeph_add(result_100,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(it_101->item)))));
                                                if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_101=it_101->next;
                                            }
                                            __result71__ = __result_obj__ = result_100;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_100, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result71__;
                                            come_call_finalizer2(list$1sNodephp_finalize,result_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result69__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result69__;
                                                come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional149;
void* right_value77;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj30;
_Bool _if_conditional150;
void* right_value78;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj31;
void* right_value79;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj32;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
right_value78 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
right_value79 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional149=self->len==0,                                                    _if_conditional149) {
                                                        litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value77=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_102->prev=((void*)0);
                                                        litem_102->next=((void*)0);
                                                        __dec_obj30=litem_102->item;
                                                        litem_102->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_102;
                                                        self->head=litem_102;
                                                    }
                                                    else {
                                                        if(_if_conditional150=self->len==1,                                                        _if_conditional150) {
                                                            litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value78=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_103->prev=self->head;
                                                            litem_103->next=((void*)0);
                                                            __dec_obj31=litem_103->item;
                                                            litem_103->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_103;
                                                            self->head->next=litem_103;
                                                        }
                                                        else {
                                                            litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value79=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_104->prev=self->tail;
                                                            litem_104->next=((void*)0);
                                                            __dec_obj32=litem_104->item;
                                                            litem_104->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_104;
                                                            self->tail=litem_104;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result70__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result70__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct list$1charph* __result72__;
void* right_value83;
void* right_value84;
struct list$1charph* result_105;
struct list_item$1charph* it_106;
_Bool _while_condtional19;
void* right_value88;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_105, 0, sizeof(struct list$1charph*));
memset(&it_106, 0, sizeof(struct list_item$1charph*));
right_value88 = (void*)0;
                                            if(_if_conditional154=self==((void*)0),                                            _if_conditional154) {
                                                __result72__ = __result_obj__ = ((void*)0);
                                                return __result72__;
                                            }
                                            result_105=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value83=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                                            come_call_finalizer2(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_106=self->head;
                                            while(_while_condtional19=it_106!=((void*)0),                                            _while_condtional19) {
                                                list$1charph_add(result_105,(char*)come_increment_ref_count(((char*)(right_value88=string_clone(it_106->item)))));
                                                right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_106=it_106->next;
                                            }
                                            __result75__ = __result_obj__ = result_105;
                                            come_call_finalizer2(list$1charphp_finalize,result_105, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result75__;
                                            come_call_finalizer2(list$1charphp_finalize,result_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result73__ = __result_obj__ = self;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result73__;
                                                come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional155;
void* right_value85;
struct list_item$1charph* litem_107;
char* __dec_obj35;
_Bool _if_conditional156;
void* right_value86;
struct list_item$1charph* litem_108;
char* __dec_obj36;
void* right_value87;
struct list_item$1charph* litem_109;
char* __dec_obj37;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1charph*));
right_value86 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1charph*));
right_value87 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional155=self->len==0,                                                    _if_conditional155) {
                                                        litem_107=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_107->prev=((void*)0);
                                                        litem_107->next=((void*)0);
                                                        __dec_obj35=litem_107->item;
                                                        litem_107->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_107;
                                                        self->head=litem_107;
                                                    }
                                                    else {
                                                        if(_if_conditional156=self->len==1,                                                        _if_conditional156) {
                                                            litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_108->prev=self->head;
                                                            litem_108->next=((void*)0);
                                                            __dec_obj36=litem_108->item;
                                                            litem_108->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_108;
                                                            self->head->next=litem_108;
                                                        }
                                                        else {
                                                            litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value87=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                                            come_call_finalizer2(list_item$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            litem_109->prev=self->tail;
                                                            litem_109->next=((void*)0);
                                                            __dec_obj37=litem_109->item;
                                                            litem_109->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_109;
                                                            self->tail=litem_109;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result74__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result74__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple1$1sTypeph* __result76__;
void* right_value90;
struct tuple1$1sTypeph* result_110;
_Bool _if_conditional159;
void* right_value91;
struct sType* __dec_obj39;
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_110, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                                            if(_if_conditional158=self==(void*)0,                                            _if_conditional158) {
                                                __result76__ = __result_obj__ = (void*)0;
                                                return __result76__;
                                            }
                                            result_110=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional159=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional159) {
                                                __dec_obj39=result_110->v1;
                                                result_110->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                                                come_call_finalizer2(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result77__ = __result_obj__ = result_110;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_110, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result77__;
                                            come_call_finalizer2(tuple1$1sTypeph_finalize,result_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional202;
void* right_value106;
struct list_item$1tuple2$2charphsNodephph* litem_115;
struct tuple2$2charphsNodeph* __dec_obj49;
_Bool _if_conditional203;
void* right_value107;
struct list_item$1tuple2$2charphsNodephph* litem_116;
struct tuple2$2charphsNodeph* __dec_obj50;
void* right_value108;
struct list_item$1tuple2$2charphsNodephph* litem_117;
struct tuple2$2charphsNodeph* __dec_obj51;
struct list$1tuple2$2charphsNodephph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value107 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value108 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional202=self->len==0,                    _if_conditional202) {
                        litem_115=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value106=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_115->prev=((void*)0);
                        litem_115->next=((void*)0);
                        __dec_obj49=litem_115->item;
                        litem_115->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_115;
                        self->head=litem_115;
                    }
                    else {
                        if(_if_conditional203=self->len==1,                        _if_conditional203) {
                            litem_116=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value107=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_116->prev=self->head;
                            litem_116->next=((void*)0);
                            __dec_obj50=litem_116->item;
                            litem_116->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_116;
                            self->head->next=litem_116;
                        }
                        else {
                            litem_117=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value108=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsNodephphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_117->prev=self->tail;
                            litem_117->next=((void*)0);
                            __dec_obj51=litem_117->item;
                            litem_117->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsNodeph_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_117;
                            self->tail=litem_117;
                        }
                    }
                    self->len++;
                    __result82__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result82__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj52;
struct sNode* __dec_obj53;
struct tuple2$2charphsNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj52=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj53=self->v2;
                    self->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
                    __result83__ = __result_obj__ = self;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result83__;
                    come_call_finalizer2(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional218;
char* type_name_119;
_Bool _if_conditional219;
void* right_value121;
char* __dec_obj58;
void* right_value122;
char* __dec_obj59;
void* right_value123;
void* right_value124;
void* right_value125;
void* right_value126;
struct list$1tuple2$2charphsNodephph* elements_120;
_Bool _while_condtional21;
void* right_value127;
char* element_name_121;
_Bool _if_conditional220;
_Bool no_comma_122;
void* right_value128;
struct sNode* element_value_123;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value133;
void* right_value134;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value140;
struct sNode* __result89__;
void* right_value141;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_119, 0, sizeof(char*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&elements_120, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value127 = (void*)0;
memset(&element_name_121, 0, sizeof(char*));
memset(&no_comma_122, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&element_value_123, 0, sizeof(struct sNode*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    if(_if_conditional218=charp_operator_equals(buf,"enum"),    _if_conditional218) {
        type_name_119=((void*)0);
        if(_if_conditional219=*info->p==123,        _if_conditional219) {
            __dec_obj58=type_name_119;
            type_name_119=(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(""))));
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj59=type_name_119;
            type_name_119=(char*)come_increment_ref_count(((char*)(right_value122=parse_word(info))));
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_119),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value124=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value123=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 193, "struct sClass")))),type_name_119,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info)))));
            come_call_finalizer2(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        expected_next_character(123,info);
        elements_120=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value126=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value125=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 198, "struct list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional21=(_Bool)1,        _while_condtional21) {
            parse_sharp_v5(info);
            element_name_121=(char*)come_increment_ref_count(((char*)(right_value127=parse_word(info))));
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional220=*info->p==61,            _if_conditional220) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_122=info->no_comma;
                info->no_comma=(_Bool)1;
                element_value_123=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=expression_v13(info))));
                if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_122;
                list$1tuple2$2charphsNodephph_push_back(elements_120,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value130=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value129=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 215, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_121),(struct sNode*)come_increment_ref_count(element_value_123))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(element_value_123) { element_value_123 = come_decrement_ref_count2(element_value_123, ((struct sNode*)element_value_123)->finalize, ((struct sNode*)element_value_123)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple2$2charphsNodephph_push_back(elements_120,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value132=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value131=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 218, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_121),((void*)0))))));
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(tuple2$2charphsNodephp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            parse_sharp_v5(info);
            if(_if_conditional221=*info->p==44,            _if_conditional221) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional222=*info->p==125,            _if_conditional222) {
                info->p++;
                skip_spaces_and_lf(info);
                element_name_121 = come_decrement_ref_count2(element_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_121 = come_decrement_ref_count2(element_name_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 235, "struct sNode");
        _inf_obj_value2=come_increment_ref_count(((struct sEnumNode*)(right_value134=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value133=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 235, "struct sEnumNode")))),(char*)come_increment_ref_count(type_name_119),elements_120,(_Bool)1,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sEnumNode_sline;
        _inf_value2->sname=(void*)sEnumNode_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result89__ = __result_obj__ = ((struct sNode*)(right_value140=_inf_value2));
        type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sEnumNode_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sEnumNode_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, ((struct sNode*)right_value140)->finalize, ((struct sNode*)right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result89__;
        type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,elements_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result90__ = __result_obj__ = ((struct sNode*)(right_value141=top_level_v95(buf,head,head_sline,info)));
    if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result90__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional223=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional223) {
                self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional224=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional224) {
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,self->mElements, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional225=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional225) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional226=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional226) {
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional227;
struct sEnumNode* __result87__;
void* right_value135;
struct sEnumNode* result_124;
_Bool _if_conditional228;
void* right_value136;
char* __dec_obj60;
_Bool _if_conditional229;
void* right_value137;
struct list$1tuple2$2charphsNodephph* __dec_obj61;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value138;
char* __dec_obj62;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value139;
char* __dec_obj63;
struct sEnumNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_124, 0, sizeof(struct sEnumNode*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
            if(_if_conditional227=self==(void*)0,            _if_conditional227) {
                __result87__ = __result_obj__ = (void*)0;
                return __result87__;
            }
            result_124=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value135=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "struct sEnumNode"))));
            come_call_finalizer2(sEnumNode_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional228=self!=((void*)0)&&self->mTypeName!=((void*)0),            _if_conditional228) {
                __dec_obj60=result_124->mTypeName;
                result_124->mTypeName=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->mTypeName))));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional229=self!=((void*)0)&&self->mElements!=((void*)0),            _if_conditional229) {
                __dec_obj61=result_124->mElements;
                result_124->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value137=list$1tuple2$2charphsNodephphp_clone(self->mElements))));
                come_call_finalizer2(list$1tuple2$2charphsNodephph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1tuple2$2charphsNodephphp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional230=self!=((void*)0),            _if_conditional230) {
                result_124->sline=self->sline;
            }
            if(_if_conditional231=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional231) {
                __dec_obj62=result_124->sname;
                result_124->sname=(char*)come_increment_ref_count(((char*)(right_value138=string_clone(self->sname))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                result_124->mOutput=self->mOutput;
            }
            if(_if_conditional233=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional233) {
                __dec_obj63=result_124->mDeclareSName;
                result_124->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value139=string_clone(self->mDeclareSName))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result88__ = __result_obj__ = result_124;
            come_call_finalizer2(sEnumNode_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result88__;
            come_call_finalizer2(sEnumNode_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

