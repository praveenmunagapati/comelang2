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
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};
struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};
struct sTypedefNode
{
    char* mTypeName;
    struct sType* mType;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
    char* mDeclareSName;
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

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info);

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
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
_Bool sTypedefNode_terminated();

char* sTypedefNode_kind();

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info);

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info);

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void sTypedefNode_finalize(struct sTypedefNode* self);
static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1934, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1944, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1954, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1964, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1974, "struct smart_pointer$1long"))));
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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value11;
char* __dec_obj7;
void* right_value46;
struct sType* __dec_obj30;
void* right_value47;
char* __dec_obj31;
void* right_value57;
struct list$1tuple2$2sTypephcharphph* __dec_obj37;
struct sTypedefNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value57 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(type_name))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj30=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj31=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value47=__builtin_string(info->sname))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj37=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value57=list$1tuple2$2sTypephcharphphp_clone(multiple_declare))));
    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result31__ = __result_obj__ = self;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result31__;
    come_call_finalizer2(sTypedefNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result7__;
void* right_value12;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value15;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional27;
void* right_value16;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional28;
void* right_value17;
char* __dec_obj11;
_Bool _if_conditional29;
void* right_value24;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional33;
void* right_value32;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value33;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional48;
void* right_value40;
struct list$1charph* __dec_obj24;
_Bool _if_conditional52;
void* right_value41;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value42;
struct sNode* __dec_obj26;
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
void* right_value43;
struct sNode* __dec_obj27;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value44;
char* __dec_obj28;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value45;
char* __dec_obj29;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value15 = (void*)0;
right_value16 = (void*)0;
right_value17 = (void*)0;
right_value24 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj9=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value15=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj10=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value16=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj11=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value17=string_clone(self->mGenericsName))));
            __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value17 = come_decrement_ref_count2(right_value17, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj15=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj19=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj20=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value33=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj24=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value40=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj25=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value41=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj26=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(self->mAlignas))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            __dec_obj27=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=sNode_clone(self->mSizeNum))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj28=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(self->mOriginalTypeName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value44 = come_decrement_ref_count2(right_value44, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            __dec_obj29=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(self->mAsmName))));
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value13;
struct tuple1$1sTypeph* result_14;
_Bool _if_conditional26;
void* right_value14;
struct sType* __dec_obj8;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&result_14, 0, sizeof(struct tuple1$1sTypeph*));
right_value14 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_14=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj8=result_14->v1;
                    result_14->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_14;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result10__;
void* right_value18;
void* right_value19;
struct list$1sTypeph* result_15;
struct list_item$1sTypeph* it_16;
_Bool _while_condtional5;
void* right_value23;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
right_value19 = (void*)0;
memset(&result_15, 0, sizeof(struct list$1sTypeph*));
memset(&it_16, 0, sizeof(struct list_item$1sTypeph*));
right_value23 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_15=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value18=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_16=self->head;
                while(_while_condtional5=it_16!=((void*)0),                _while_condtional5) {
                    list$1sTypeph_add(result_15,(struct sType*)come_increment_ref_count(((struct sType*)(right_value23=sType_clone(it_16->item)))));
                    come_call_finalizer2(sType_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional31;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
_Bool _if_conditional32;
void* right_value21;
struct list_item$1sTypeph* litem_18;
struct sType* __dec_obj13;
void* right_value22;
struct list_item$1sTypeph* litem_19;
struct sType* __dec_obj14;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1sTypeph*));
right_value22 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_17->prev=((void*)0);
                            litem_17->next=((void*)0);
                            __dec_obj12=litem_17->item;
                            litem_17->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_17;
                            self->head=litem_17;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_18=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_18->prev=self->head;
                                litem_18->next=((void*)0);
                                __dec_obj13=litem_18->item;
                                litem_18->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_18;
                                self->head->next=litem_18;
                            }
                            else {
                                litem_19=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->tail;
                                litem_19->next=((void*)0);
                                __dec_obj14=litem_19->item;
                                litem_19->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional34;
struct list$1sNodeph* __result14__;
void* right_value25;
void* right_value26;
struct list$1sNodeph* result_20;
struct list_item$1sNodeph* it_21;
_Bool _while_condtional6;
void* right_value31;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&result_20, 0, sizeof(struct list$1sNodeph*));
memset(&it_21, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_20=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_21=self->head;
                while(_while_condtional6=it_21!=((void*)0),                _while_condtional6) {
                    list$1sNodeph_add(result_20,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(it_21->item)))));
                    if(right_value31) { right_value31 = come_decrement_ref_count2(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
_Bool _if_conditional35;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
_Bool _if_conditional36;
void* right_value28;
struct list_item$1sNodeph* litem_23;
struct sNode* __dec_obj17;
void* right_value29;
struct list_item$1sNodeph* litem_24;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
right_value28 = (void*)0;
memset(&litem_23, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_22->prev=((void*)0);
                            litem_22->next=((void*)0);
                            __dec_obj16=litem_22->item;
                            litem_22->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_22;
                            self->head=litem_22;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_23=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_23->prev=self->head;
                                litem_23->next=((void*)0);
                                __dec_obj17=litem_23->item;
                                litem_23->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_23;
                                self->head->next=litem_23;
                            }
                            else {
                                litem_24=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=self->tail;
                                litem_24->next=((void*)0);
                                __dec_obj18=litem_24->item;
                                litem_24->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
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
_Bool _if_conditional37;
struct sNode* __result17__;
void* right_value30;
struct sNode* result_25;
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
right_value30 = (void*)0;
memset(&result_25, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_25=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value30) { right_value30 = come_decrement_ref_count2(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_25->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_25->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_25->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_25->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_25->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_25->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_25->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
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
_Bool _if_conditional49;
struct list$1charph* __result20__;
void* right_value34;
void* right_value35;
struct list$1charph* result_26;
struct list_item$1charph* it_27;
_Bool _while_condtional7;
void* right_value39;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value35 = (void*)0;
memset(&result_26, 0, sizeof(struct list$1charph*));
memset(&it_27, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_26=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value35=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_27=self->head;
                while(_while_condtional7=it_27!=((void*)0),                _while_condtional7) {
                    list$1charph_add(result_26,(char*)come_increment_ref_count(((char*)(right_value39=string_clone(it_27->item)))));
                    right_value39 = come_decrement_ref_count2(right_value39, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional50;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
_Bool _if_conditional51;
void* right_value37;
struct list_item$1charph* litem_29;
char* __dec_obj22;
void* right_value38;
struct list_item$1charph* litem_30;
char* __dec_obj23;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1charph*));
right_value38 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_28->prev=((void*)0);
                            litem_28->next=((void*)0);
                            __dec_obj21=litem_28->item;
                            litem_28->item=(char*)come_increment_ref_count(item);
                            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_28;
                            self->head=litem_28;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_29=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_29->prev=self->head;
                                litem_29->next=((void*)0);
                                __dec_obj22=litem_29->item;
                                litem_29->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_29;
                                self->head->next=litem_29;
                            }
                            else {
                                litem_30=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_30->prev=self->tail;
                                litem_30->next=((void*)0);
                                __dec_obj23=litem_30->item;
                                litem_30->item=(char*)come_increment_ref_count(item);
                                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional91;
struct list$1tuple2$2sTypephcharphph* __result25__;
void* right_value48;
void* right_value49;
struct list$1tuple2$2sTypephcharphph* result_33;
struct list_item$1tuple2$2sTypephcharphph* it_34;
_Bool _while_condtional9;
void* right_value56;
struct list$1tuple2$2sTypephcharphph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
right_value49 = (void*)0;
memset(&result_33, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_34, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value56 = (void*)0;
        if(_if_conditional91=self==((void*)0),        _if_conditional91) {
            __result25__ = __result_obj__ = ((void*)0);
            return __result25__;
        }
        result_33=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value49=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value48=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 141, "struct list$1tuple2$2sTypephcharphph"))))))));
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_34=self->head;
        while(_while_condtional9=it_34!=((void*)0),        _while_condtional9) {
            list$1tuple2$2sTypephcharphph_add(result_33,(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value56=tuple2$2sTypephcharphp_clone(it_34->item)))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_34=it_34->next;
        }
        __result30__ = __result_obj__ = result_33;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result30__;
        come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,result_33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list$1tuple2$2sTypephcharphph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result26__ = __result_obj__ = self;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result26__;
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
struct list_item$1tuple2$2sTypephcharphph* it_31;
_Bool _while_condtional8;
struct list_item$1tuple2$2sTypephcharphph* prev_it_32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_31, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
memset(&prev_it_32, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                it_31=self->head;
                while(_while_condtional8=it_31!=((void*)0),                _while_condtional8) {
                    prev_it_32=it_31;
                    it_31=it_31->next;
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,prev_it_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional92;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional92=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional92) {
                            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional93;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional93=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional93) {
                                    come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional94=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional94) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional95;
void* right_value50;
struct list_item$1tuple2$2sTypephcharphph* litem_35;
struct tuple2$2sTypephcharph* __dec_obj32;
_Bool _if_conditional98;
void* right_value51;
struct list_item$1tuple2$2sTypephcharphph* litem_36;
struct tuple2$2sTypephcharph* __dec_obj33;
void* right_value52;
struct list_item$1tuple2$2sTypephcharphph* litem_37;
struct tuple2$2sTypephcharph* __dec_obj34;
struct list$1tuple2$2sTypephcharphph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value51 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value52 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional95=self->len==0,                _if_conditional95) {
                    litem_35=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value50=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 155, "struct list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_35->prev=((void*)0);
                    litem_35->next=((void*)0);
                    __dec_obj32=litem_35->item;
                    litem_35->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_35;
                    self->head=litem_35;
                }
                else {
                    if(_if_conditional98=self->len==1,                    _if_conditional98) {
                        litem_36=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value51=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 165, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_36->prev=self->head;
                        litem_36->next=((void*)0);
                        __dec_obj33=litem_36->item;
                        litem_36->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_36;
                        self->head->next=litem_36;
                    }
                    else {
                        litem_37=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value52=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 175, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->tail;
                        litem_37->next=((void*)0);
                        __dec_obj34=litem_37->item;
                        litem_37->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_37;
                        self->tail=litem_37;
                    }
                }
                self->len++;
                __result27__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result27__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional96) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional97=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional97) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional99;
struct tuple2$2sTypephcharph* __result28__;
void* right_value53;
struct tuple2$2sTypephcharph* result_38;
_Bool _if_conditional100;
void* right_value54;
struct sType* __dec_obj35;
_Bool _if_conditional101;
void* right_value55;
char* __dec_obj36;
struct tuple2$2sTypephcharph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
memset(&result_38, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value54 = (void*)0;
right_value55 = (void*)0;
                if(_if_conditional99=self==(void*)0,                _if_conditional99) {
                    __result28__ = __result_obj__ = (void*)0;
                    return __result28__;
                }
                result_38=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value53=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "struct tuple2$2sTypephcharph"))));
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional100=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional100) {
                    __dec_obj35=result_38->v1;
                    result_38->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional101=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional101) {
                    __dec_obj36=result_38->v2;
                    result_38->v2=(char*)come_increment_ref_count(((char*)(right_value55=string_clone(self->v2))));
                    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result29__ = __result_obj__ = result_38;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result29__;
                come_call_finalizer2(tuple2$2sTypephcharph_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

_Bool sTypedefNode_terminated(){
void* __result_obj__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = (_Bool)1;
    return __result32__;
}

char* sTypedefNode_kind(){
void* __result_obj__;
void* right_value58;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
    __result33__ = __result_obj__ = ((char*)(right_value58=__builtin_string("sTypedefNode")));
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value59;
char* type_name_39;
_Bool _if_conditional107;
void* right_value68;
void* right_value69;
void* right_value70;
void* right_value71;
void* right_value72;
struct sType* type_86;
void* right_value73;
char* __dec_obj38;
void* right_value79;
void* right_value80;
_Bool _if_conditional183;
_Bool _if_conditional184;
struct list$1tuple2$2sTypephcharphph* o2_saved_108;
struct tuple2$2sTypephcharph* it_111;
struct tuple2$2sTypephcharph* multiple_assign_var1;
struct sType* type_114;
char* type_name_115;
_Bool _if_conditional189;
void* right_value81;
char* __dec_obj39;
void* right_value82;
void* right_value83;
_Bool _if_conditional190;
void* right_value84;
void* right_value85;
struct sType* type_116;
_Bool _if_conditional191;
void* right_value86;
char* __dec_obj40;
void* right_value87;
void* right_value88;
_Bool _if_conditional192;
void* right_value89;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value59 = (void*)0;
memset(&type_name_39, 0, sizeof(char*));
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
memset(&type_86, 0, sizeof(struct sType*));
right_value73 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&o2_saved_108, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
memset(&it_111, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&type_name_115, 0, sizeof(char*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&type_name_115, 0, sizeof(char*));
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&type_116, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value87 = (void*)0;
right_value88 = (void*)0;
right_value89 = (void*)0;
    type_name_39=(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string(self->mTypeName))));
    right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional107=string_operator_equals(type_name_39,"__darwin_va_list"),    _if_conditional107) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string("__darwin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value70=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value69=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "17typedef.c", 46, "struct sClass")))),"__darwin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sClass_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value71=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "17typedef.c", 48, "struct sType")))),"__darwin_va_list",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj38=type_86->mOriginalTypeName;
        type_86->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string("__darwin_va_list"))));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(type_name_39)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type_86)))));
        right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional183=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),        _if_conditional183) {
        }
        else {
            add_come_code_at_source_head(info,"typedef __builtin_va_list __darwin_va_list;\n");
        }
        come_call_finalizer2(sType_finalize,type_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(self->multiple_declare) {
            for(            o2_saved_108=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_111=list$1tuple2$2sTypephcharphph_begin((o2_saved_108));            !list$1tuple2$2sTypephcharphph_end((o2_saved_108));            it_111=list$1tuple2$2sTypephcharphph_next((o2_saved_108))            ){
                multiple_assign_var1=it_111;
                type_114=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
                type_name_115=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                if(_if_conditional189=string_operator_not_equals(type_name_115,"va_list"),                _if_conditional189) {
                    __dec_obj39=type_114->mOriginalTypeName;
                    type_114->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value81=__builtin_string(type_name_115))));
                    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(type_name_115)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(type_114)))));
                right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional190=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),                _if_conditional190) {
                }
                else {
                    add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value84=make_define_var(type_114,type_name_115,(_Bool)1,info))));
                    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer2(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                type_name_115 = come_decrement_ref_count2(type_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,o2_saved_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(self->mType))));
            come_call_finalizer2(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional191=string_operator_not_equals(type_name_39,"va_list"),            _if_conditional191) {
                __dec_obj40=type_116->mOriginalTypeName;
                type_116->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value86=__builtin_string(type_name_39))));
                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(right_value87=__builtin_string(type_name_39)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(type_116)))));
            right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional192=info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname),            _if_conditional192) {
            }
            else {
                add_come_code_at_source_head(info,"typedef %s;\n",((char*)(right_value89=make_define_var(type_116,type_name_39,(_Bool)1,info))));
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer2(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
    __result77__ = (_Bool)1;
    type_name_39 = come_decrement_ref_count2(type_name_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result77__;
    type_name_39 = come_decrement_ref_count2(type_name_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional108;
unsigned int hash_59;
unsigned int it_60;
_Bool _while_condtional13;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool same_key_exist_77;
char* it2_80;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct map$2charphsClassph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_59, 0, sizeof(unsigned int));
memset(&it_60, 0, sizeof(unsigned int));
memset(&same_key_exist_77, 0, sizeof(_Bool));
memset(&it2_80, 0, sizeof(char*));
            if(_if_conditional108=self->len*10>=self->size,            _if_conditional108) {
                map$2charphsClassph_rehash(self);
            }
            hash_59=string_get_hash_key(key)%self->size;
            it_60=hash_59;
            while(_while_condtional13=(_Bool)1,            _while_condtional13) {
                if(_if_conditional126=self->item_existance[it_60],                _if_conditional126) {
                    if(_if_conditional127=string_equals(self->keys[it_60],key),                    _if_conditional127) {
                        if(_if_conditional128=1,                        _if_conditional128) {
                            list$1charp_remove(self->key_list,self->keys[it_60]);
                            self->keys[it_60] = come_decrement_ref_count2(self->keys[it_60], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_60]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_60]);
                            self->keys[it_60]=key;
                        }
                        if(_if_conditional148=1,                        _if_conditional148) {
                            come_call_finalizer2(sClass_finalize,self->items[it_60], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_60]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_60]=item;
                        }
                        break;
                    }
                    it_60++;
                    if(_if_conditional149=it_60>=self->size,                    _if_conditional149) {
                        it_60=0;
                    }
                    else {
                        if(_if_conditional150=it_60==hash_59,                        _if_conditional150) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_60]=(_Bool)1;
                    if(_if_conditional151=1,                    _if_conditional151) {
                        self->keys[it_60]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_60]=key;
                    }
                    if(_if_conditional152=1,                    _if_conditional152) {
                        self->items[it_60]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_60]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_77=(_Bool)0;
            for(            it2_80=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_80=list$1charp_next(self->key_list)            ){
                if(_if_conditional157=string_equals(it2_80,key),                _if_conditional157) {
                    same_key_exist_77=(_Bool)1;
                }
            }
            if(_if_conditional158=!same_key_exist_77,            _if_conditional158) {
                list$1charp_push_back(self->key_list,key);
            }
            __result57__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result57__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_40;
void* right_value60;
char** keys_41;
void* right_value61;
struct sClass** items_42;
void* right_value62;
_Bool* item_existance_45;
int len_46;
char* it_49;
struct sClass* default_value_52;
void* right_value63;
struct sClass* it2_55;
unsigned int hash_56;
int n_57;
_Bool _while_condtional12;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
struct sClass* default_value_58;
void* right_value64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_40, 0, sizeof(int));
right_value60 = (void*)0;
memset(&keys_41, 0, sizeof(char**));
right_value61 = (void*)0;
memset(&items_42, 0, sizeof(struct sClass**));
right_value62 = (void*)0;
memset(&item_existance_45, 0, sizeof(_Bool*));
memset(&len_46, 0, sizeof(int));
memset(&it_49, 0, sizeof(char*));
memset(&default_value_52, 0, sizeof(struct sClass*));
right_value63 = (void*)0;
memset(&it2_55, 0, sizeof(struct sClass*));
memset(&hash_56, 0, sizeof(unsigned int));
memset(&n_57, 0, sizeof(int));
memset(&default_value_58, 0, sizeof(struct sClass*));
right_value64 = (void*)0;
                    size_40=self->size*10;
                    keys_41=(char**)come_increment_ref_count(((char**)(right_value60=(char**)come_calloc(1, sizeof(char*)*(1*(size_40)), "./comelang2.h", 1314, "char*"))));
                    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_42=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value61=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_40)), "./comelang2.h", 1315, "struct sClass*"))));
                    come_call_finalizer2(sClass_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_45=(_Bool*)come_increment_ref_count(((_Bool*)(right_value62=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_40)), "./comelang2.h", 1316, "_Bool"))));
                    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_46=0;
                    for(                    it_49=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_49=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_52,0,sizeof(struct sClass*));
                        it2_55=((struct sClass*)(right_value63=map$2charphsClassph_at(self,it_49,default_value_52)));
                        come_call_finalizer2(sClass_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_56=string_get_hash_key(it_49)%size_40;
                        n_57=hash_56;
                        while(_while_condtional12=(_Bool)1,                        _while_condtional12) {
                            if(_if_conditional123=item_existance_45[n_57],                            _if_conditional123) {
                                n_57++;
                                if(_if_conditional124=n_57>=size_40,                                _if_conditional124) {
                                    n_57=0;
                                }
                                else {
                                    if(_if_conditional125=n_57==hash_56,                                    _if_conditional125) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_45[n_57]=(_Bool)1;
                                keys_41[n_57]=it_49;
                                items_42[n_57]=((struct sClass*)(right_value64=map$2charphsClassph_at(self,it_49,default_value_58)));
                                come_call_finalizer2(sClass_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_46++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_41;
                    self->items=items_42;
                    self->item_existance=item_existance_45;
                    self->size=size_40;
                    self->len=len_46;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional114;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional109=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional109) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional110=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional110) {
                            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional114=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional114) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_43;
_Bool _while_condtional10;
struct list_item$1tuple2$2charphsTypephph* prev_it_44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_43, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_44, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_43=self->head;
                                while(_while_condtional10=it_43!=((void*)0),                                _while_condtional10) {
                                    prev_it_44=it_43;
                                    it_43=it_43->next;
                                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional111;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional111=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional111) {
                                            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional112=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional112) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional113=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional113) {
                                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional115;
char* result_47;
char* __result34__;
_Bool _if_conditional116;
char* __result35__;
char* result_48;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_47, 0, sizeof(char*));
memset(&result_48, 0, sizeof(char*));
                        if(_if_conditional115=self==((void*)0),                        _if_conditional115) {
                            memset(&result_47,0,sizeof(char*));
                            __result34__ = __result_obj__ = result_47;
                            return __result34__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result35__ = __result_obj__ = self->key_list->it->item;
                            return __result35__;
                        }
                        memset(&result_48,0,sizeof(char*));
                        __result36__ = __result_obj__ = result_48;
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
_Bool _if_conditional117;
char* result_50;
char* __result38__;
_Bool _if_conditional118;
char* __result39__;
char* result_51;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_50, 0, sizeof(char*));
memset(&result_51, 0, sizeof(char*));
                        if(_if_conditional117=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional117) {
                            memset(&result_50,0,sizeof(char*));
                            __result38__ = __result_obj__ = result_50;
                            return __result38__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result39__ = __result_obj__ = self->key_list->it->item;
                            return __result39__;
                        }
                        memset(&result_51,0,sizeof(char*));
                        __result40__ = __result_obj__ = result_51;
                        return __result40__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_53;
unsigned int it_54;
_Bool _while_condtional11;
_Bool _if_conditional119;
_Bool _if_conditional120;
struct sClass* __result41__;
_Bool _if_conditional121;
_Bool _if_conditional122;
struct sClass* __result42__;
struct sClass* __result43__;
struct sClass* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_53, 0, sizeof(unsigned int));
memset(&it_54, 0, sizeof(unsigned int));
                            hash_53=string_get_hash_key(((char*)key))%self->size;
                            it_54=hash_53;
                            while(_while_condtional11=(_Bool)1,                            _while_condtional11) {
                                if(_if_conditional119=self->item_existance[it_54],                                _if_conditional119) {
                                    if(_if_conditional120=string_equals(self->keys[it_54],key),                                    _if_conditional120) {
                                        __result41__ = __result_obj__ = self->items[it_54];
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result41__;
                                    }
                                    it_54++;
                                    if(_if_conditional121=it_54>=self->size,                                    _if_conditional121) {
                                        it_54=0;
                                    }
                                    else {
                                        if(_if_conditional122=it_54==hash_53,                                        _if_conditional122) {
                                            __result42__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result42__;
                                        }
                                    }
                                }
                                else {
                                    __result43__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result43__;
                                }
                            }
                            __result44__ = __result_obj__ = default_value;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result44__;
                            come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_61;
struct list_item$1charp* it_62;
_Bool _while_condtional14;
_Bool _if_conditional129;
struct list$1charp* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_61, 0, sizeof(int));
memset(&it_62, 0, sizeof(struct list_item$1charp*));
                                it2_61=0;
                                it_62=self->head;
                                while(_while_condtional14=it_62!=((void*)0),                                _while_condtional14) {
                                    if(_if_conditional129=string_equals(it_62->item,item),                                    _if_conditional129) {
                                        list$1charp_delete(self,it2_61,it2_61+1);
                                        break;
                                    }
                                    it2_61++;
                                    it_62=it_62->next;
                                }
                                __result48__ = __result_obj__ = self;
                                return __result48__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int tmp_63;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct list$1charp* __result45__;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct list_item$1charp* it_66;
int i_67;
_Bool _while_condtional16;
_Bool _if_conditional138;
struct list_item$1charp* prev_it_68;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct list_item$1charp* it_69;
int i_70;
_Bool _while_condtional17;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list_item$1charp* prev_it_71;
struct list_item$1charp* it_72;
struct list_item$1charp* head_prev_it_73;
struct list_item$1charp* tail_it_74;
int i_75;
_Bool _while_condtional18;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list_item$1charp* prev_it_76;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct list$1charp* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_63, 0, sizeof(int));
memset(&it_66, 0, sizeof(struct list_item$1charp*));
memset(&i_67, 0, sizeof(int));
memset(&prev_it_68, 0, sizeof(struct list_item$1charp*));
memset(&it_69, 0, sizeof(struct list_item$1charp*));
memset(&i_70, 0, sizeof(int));
memset(&prev_it_71, 0, sizeof(struct list_item$1charp*));
memset(&it_72, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_73, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_74, 0, sizeof(struct list_item$1charp*));
memset(&i_75, 0, sizeof(int));
memset(&prev_it_76, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional130=head<0,                                            _if_conditional130) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional131=tail<0,                                            _if_conditional131) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional132=head>tail,                                            _if_conditional132) {
                                                tmp_63=tail;
                                                tail=head;
                                                head=tmp_63;
                                            }
                                            if(_if_conditional133=head<0,                                            _if_conditional133) {
                                                head=0;
                                            }
                                            if(_if_conditional134=tail>self->len,                                            _if_conditional134) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional135=head==tail,                                            _if_conditional135) {
                                                __result45__ = __result_obj__ = self;
                                                return __result45__;
                                            }
                                            if(_if_conditional136=head==0&&tail==self->len,                                            _if_conditional136) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional137=head==0,                                                _if_conditional137) {
                                                    it_66=self->head;
                                                    i_67=0;
                                                    while(_while_condtional16=it_66!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional138=i_67<tail,                                                        _if_conditional138) {
                                                            prev_it_68=it_66;
                                                            it_66=it_66->next;
                                                            i_67++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional139=i_67==tail,                                                            _if_conditional139) {
                                                                self->head=it_66;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_66=it_66->next;
                                                                i_67++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional140=tail==self->len,                                                    _if_conditional140) {
                                                        it_69=self->head;
                                                        i_70=0;
                                                        while(_while_condtional17=it_69!=((void*)0),                                                        _while_condtional17) {
                                                            if(_if_conditional141=i_70==head,                                                            _if_conditional141) {
                                                                self->tail=it_69->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional142=i_70>=head,                                                            _if_conditional142) {
                                                                prev_it_71=it_69;
                                                                it_69=it_69->next;
                                                                i_70++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_69=it_69->next;
                                                                i_70++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_72=self->head;
                                                        head_prev_it_73=((void*)0);
                                                        tail_it_74=((void*)0);
                                                        i_75=0;
                                                        while(_while_condtional18=it_72!=((void*)0),                                                        _while_condtional18) {
                                                            if(_if_conditional143=i_75==head,                                                            _if_conditional143) {
                                                                head_prev_it_73=it_72->prev;
                                                            }
                                                            if(_if_conditional144=i_75==tail,                                                            _if_conditional144) {
                                                                tail_it_74=it_72;
                                                            }
                                                            if(_if_conditional145=i_75>=head&&i_75<tail,                                                            _if_conditional145) {
                                                                prev_it_76=it_72;
                                                                it_72=it_72->next;
                                                                i_75++;
                                                                come_call_finalizer2(list_item$1charpp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_72=it_72->next;
                                                                i_75++;
                                                            }
                                                        }
                                                        if(_if_conditional146=head_prev_it_73!=((void*)0),                                                        _if_conditional146) {
                                                            head_prev_it_73->next=tail_it_74;
                                                        }
                                                        if(_if_conditional147=tail_it_74!=((void*)0),                                                        _if_conditional147) {
                                                            tail_it_74->prev=head_prev_it_73;
                                                        }
                                                    }
                                                }
                                            }
                                            __result47__ = __result_obj__ = self;
                                            return __result47__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_64;
_Bool _while_condtional15;
struct list_item$1charp* prev_it_65;
struct list$1charp* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_64, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_65, 0, sizeof(struct list_item$1charp*));
                                                    it_64=self->head;
                                                    while(_while_condtional15=it_64!=((void*)0),                                                    _while_condtional15) {
                                                        prev_it_65=it_64;
                                                        it_64=it_64->next;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result46__ = __result_obj__ = self;
                                                    return __result46__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional153;
char* result_78;
char* __result49__;
_Bool _if_conditional154;
char* __result50__;
char* result_79;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_78, 0, sizeof(char*));
memset(&result_79, 0, sizeof(char*));
                if(_if_conditional153=self==((void*)0),                _if_conditional153) {
                    memset(&result_78,0,sizeof(char*));
                    __result49__ = __result_obj__ = result_78;
                    return __result49__;
                }
                self->it=self->head;
                if(self->it) {
                    __result50__ = __result_obj__ = self->it->item;
                    return __result50__;
                }
                memset(&result_79,0,sizeof(char*));
                __result51__ = __result_obj__ = result_79;
                return __result51__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
                __result52__ = self==((void*)0)||self->it==((void*)0);
                return __result52__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional155;
char* result_81;
char* __result53__;
_Bool _if_conditional156;
char* __result54__;
char* result_82;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(char*));
memset(&result_82, 0, sizeof(char*));
                if(_if_conditional155=self==((void*)0)||self->it==((void*)0),                _if_conditional155) {
                    memset(&result_81,0,sizeof(char*));
                    __result53__ = __result_obj__ = result_81;
                    return __result53__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result54__ = __result_obj__ = self->it->item;
                    return __result54__;
                }
                memset(&result_82,0,sizeof(char*));
                __result55__ = __result_obj__ = result_82;
                return __result55__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value65;
struct list_item$1charp* litem_83;
_Bool _if_conditional160;
void* right_value66;
struct list_item$1charp* litem_84;
void* right_value67;
struct list_item$1charp* litem_85;
struct list$1charp* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charp*));
right_value66 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1charp*));
right_value67 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional159=self->len==0,                    _if_conditional159) {
                        litem_83=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 225, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_83->prev=((void*)0);
                        litem_83->next=((void*)0);
                        litem_83->item=item;
                        self->tail=litem_83;
                        self->head=litem_83;
                    }
                    else {
                        if(_if_conditional160=self->len==1,                        _if_conditional160) {
                            litem_84=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value66=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 235, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_84->prev=self->head;
                            litem_84->next=((void*)0);
                            litem_84->item=item;
                            self->tail=litem_84;
                            self->head->next=litem_84;
                        }
                        else {
                            litem_85=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value67=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 245, "struct list_item$1charp"))));
                            come_call_finalizer2(list_item$1charpp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_85->prev=self->tail;
                            litem_85->next=((void*)0);
                            litem_85->item=item;
                            self->tail->next=litem_85;
                            self->tail=litem_85;
                        }
                    }
                    self->len++;
                    __result56__ = __result_obj__ = self;
                    return __result56__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional161;
unsigned int hash_104;
unsigned int it_105;
_Bool _while_condtional21;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool same_key_exist_106;
char* it2_107;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct map$2charphsTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_104, 0, sizeof(unsigned int));
memset(&it_105, 0, sizeof(unsigned int));
memset(&same_key_exist_106, 0, sizeof(_Bool));
memset(&it2_107, 0, sizeof(char*));
            if(_if_conditional161=self->len*10>=self->size,            _if_conditional161) {
                map$2charphsTypeph_rehash(self);
            }
            hash_104=string_get_hash_key(key)%self->size;
            it_105=hash_104;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional173=self->item_existance[it_105],                _if_conditional173) {
                    if(_if_conditional174=string_equals(self->keys[it_105],key),                    _if_conditional174) {
                        if(_if_conditional175=1,                        _if_conditional175) {
                            list$1charp_remove(self->key_list,self->keys[it_105]);
                            self->keys[it_105] = come_decrement_ref_count2(self->keys[it_105], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_105]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_105]);
                            self->keys[it_105]=key;
                        }
                        if(_if_conditional176=1,                        _if_conditional176) {
                            come_call_finalizer2(sType_finalize,self->items[it_105], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->items[it_105]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_105]=item;
                        }
                        break;
                    }
                    it_105++;
                    if(_if_conditional177=it_105>=self->size,                    _if_conditional177) {
                        it_105=0;
                    }
                    else {
                        if(_if_conditional178=it_105==hash_104,                        _if_conditional178) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_105]=(_Bool)1;
                    if(_if_conditional179=1,                    _if_conditional179) {
                        self->keys[it_105]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_105]=key;
                    }
                    if(_if_conditional180=1,                    _if_conditional180) {
                        self->items[it_105]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_105]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_106=(_Bool)0;
            for(            it2_107=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_107=list$1charp_next(self->key_list)            ){
                if(_if_conditional181=string_equals(it2_107,key),                _if_conditional181) {
                    same_key_exist_106=(_Bool)1;
                }
            }
            if(_if_conditional182=!same_key_exist_106,            _if_conditional182) {
                list$1charp_push_back(self->key_list,key);
            }
            __result69__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result69__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_87;
void* right_value74;
char** keys_88;
void* right_value75;
struct sType** items_89;
void* right_value76;
_Bool* item_existance_90;
int len_91;
char* it_94;
struct sType* default_value_97;
void* right_value77;
struct sType* it2_100;
unsigned int hash_101;
int n_102;
_Bool _while_condtional20;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sType* default_value_103;
void* right_value78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_87, 0, sizeof(int));
right_value74 = (void*)0;
memset(&keys_88, 0, sizeof(char**));
right_value75 = (void*)0;
memset(&items_89, 0, sizeof(struct sType**));
right_value76 = (void*)0;
memset(&item_existance_90, 0, sizeof(_Bool*));
memset(&len_91, 0, sizeof(int));
memset(&it_94, 0, sizeof(char*));
memset(&default_value_97, 0, sizeof(struct sType*));
right_value77 = (void*)0;
memset(&it2_100, 0, sizeof(struct sType*));
memset(&hash_101, 0, sizeof(unsigned int));
memset(&n_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sType*));
right_value78 = (void*)0;
                    size_87=self->size*10;
                    keys_88=(char**)come_increment_ref_count(((char**)(right_value74=(char**)come_calloc(1, sizeof(char*)*(1*(size_87)), "./comelang2.h", 1314, "char*"))));
                    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_89=(struct sType**)come_increment_ref_count(((struct sType**)(right_value75=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_87)), "./comelang2.h", 1315, "struct sType*"))));
                    come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    item_existance_90=(_Bool*)come_increment_ref_count(((_Bool*)(right_value76=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_87)), "./comelang2.h", 1316, "_Bool"))));
                    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_91=0;
                    for(                    it_94=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_94=map$2charphsTypeph_next(self)                    ){
                        memset(&default_value_97,0,sizeof(struct sType*));
                        it2_100=((struct sType*)(right_value77=map$2charphsTypeph_at(self,it_94,default_value_97)));
                        come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        hash_101=string_get_hash_key(it_94)%size_87;
                        n_102=hash_101;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional170=item_existance_90[n_102],                            _if_conditional170) {
                                n_102++;
                                if(_if_conditional171=n_102>=size_87,                                _if_conditional171) {
                                    n_102=0;
                                }
                                else {
                                    if(_if_conditional172=n_102==hash_101,                                    _if_conditional172) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_90[n_102]=(_Bool)1;
                                keys_88[n_102]=it_94;
                                items_89[n_102]=((struct sType*)(right_value78=map$2charphsTypeph_at(self,it_94,default_value_103)));
                                come_call_finalizer2(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                len_91++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_88;
                    self->items=items_89;
                    self->item_existance=item_existance_90;
                    self->size=size_87;
                    self->len=len_91;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_92;
char* __result58__;
_Bool _if_conditional163;
char* __result59__;
char* result_93;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
                        if(_if_conditional162=self==((void*)0),                        _if_conditional162) {
                            memset(&result_92,0,sizeof(char*));
                            __result58__ = __result_obj__ = result_92;
                            return __result58__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result59__ = __result_obj__ = self->key_list->it->item;
                            return __result59__;
                        }
                        memset(&result_93,0,sizeof(char*));
                        __result60__ = __result_obj__ = result_93;
                        return __result60__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result61__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result61__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_95;
char* __result62__;
_Bool _if_conditional165;
char* __result63__;
char* result_96;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(char*));
memset(&result_96, 0, sizeof(char*));
                        if(_if_conditional164=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional164) {
                            memset(&result_95,0,sizeof(char*));
                            __result62__ = __result_obj__ = result_95;
                            return __result62__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result63__ = __result_obj__ = self->key_list->it->item;
                            return __result63__;
                        }
                        memset(&result_96,0,sizeof(char*));
                        __result64__ = __result_obj__ = result_96;
                        return __result64__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_98;
unsigned int it_99;
_Bool _while_condtional19;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sType* __result65__;
_Bool _if_conditional168;
_Bool _if_conditional169;
struct sType* __result66__;
struct sType* __result67__;
struct sType* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_98, 0, sizeof(unsigned int));
memset(&it_99, 0, sizeof(unsigned int));
                            hash_98=string_get_hash_key(((char*)key))%self->size;
                            it_99=hash_98;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional166=self->item_existance[it_99],                                _if_conditional166) {
                                    if(_if_conditional167=string_equals(self->keys[it_99],key),                                    _if_conditional167) {
                                        __result65__ = __result_obj__ = self->items[it_99];
                                        come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result65__;
                                    }
                                    it_99++;
                                    if(_if_conditional168=it_99>=self->size,                                    _if_conditional168) {
                                        it_99=0;
                                    }
                                    else {
                                        if(_if_conditional169=it_99==hash_98,                                        _if_conditional169) {
                                            __result66__ = __result_obj__ = default_value;
                                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result66__;
                                        }
                                    }
                                }
                                else {
                                    __result67__ = __result_obj__ = default_value;
                                    come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result67__;
                                }
                            }
                            __result68__ = __result_obj__ = default_value;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result68__;
                            come_call_finalizer2(sType_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple2$2sTypephcharph* result_109;
struct tuple2$2sTypephcharph* __result70__;
_Bool _if_conditional186;
struct tuple2$2sTypephcharph* __result71__;
struct tuple2$2sTypephcharph* result_110;
struct tuple2$2sTypephcharph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_110, 0, sizeof(struct tuple2$2sTypephcharph*));
                if(_if_conditional185=self==((void*)0),                _if_conditional185) {
                    memset(&result_109,0,sizeof(struct tuple2$2sTypephcharph*));
                    __result70__ = __result_obj__ = result_109;
                    return __result70__;
                }
                self->it=self->head;
                if(self->it) {
                    __result71__ = __result_obj__ = self->it->item;
                    return __result71__;
                }
                memset(&result_110,0,sizeof(struct tuple2$2sTypephcharph*));
                __result72__ = __result_obj__ = result_110;
                return __result72__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                __result73__ = self==((void*)0)||self->it==((void*)0);
                return __result73__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct tuple2$2sTypephcharph* result_112;
struct tuple2$2sTypephcharph* __result74__;
_Bool _if_conditional188;
struct tuple2$2sTypephcharph* __result75__;
struct tuple2$2sTypephcharph* result_113;
struct tuple2$2sTypephcharph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(struct tuple2$2sTypephcharph*));
memset(&result_113, 0, sizeof(struct tuple2$2sTypephcharph*));
                if(_if_conditional187=self==((void*)0)||self->it==((void*)0),                _if_conditional187) {
                    memset(&result_112,0,sizeof(struct tuple2$2sTypephcharph*));
                    __result74__ = __result_obj__ = result_112;
                    return __result74__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result75__ = __result_obj__ = self->it->item;
                    return __result75__;
                }
                memset(&result_113,0,sizeof(struct tuple2$2sTypephcharph*));
                __result76__ = __result_obj__ = result_113;
                return __result76__;
}

int sTypedefNode_sline(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self->sline;
    return __result78__;
}

char* sTypedefNode_sname(struct sTypedefNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value90;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value90=__builtin_string(self->sname)));
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional193;
_Bool in_typedef_117;
void* right_value91;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_118;
char* type_name_119;
_Bool err_120;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value92;
struct sType* base_type_121;
void* right_value93;
void* right_value94;
struct list$1tuple2$2sTypephcharphph* multiple_declare_122;
void* right_value95;
void* right_value96;
struct tuple2$2sTypephcharph* variable_name_123;
void* right_value100;
struct tuple2$2sTypephcharph* variable_name2_127;
_Bool _while_condtional22;
void* right_value101;
struct tuple2$2sTypephcharph* variable_name_128;
void* right_value102;
void* right_value103;
struct sNode* _inf_value1;
struct sTypedefNode* _inf_obj_value1;
void* right_value110;
struct sNode* __result84__;
void* right_value111;
void* right_value112;
struct sNode* _inf_value2;
struct sTypedefNode* _inf_obj_value2;
void* right_value119;
struct sNode* __result87__;
void* right_value120;
struct sNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&in_typedef_117, 0, sizeof(_Bool));
right_value91 = (void*)0;
memset(&type_118, 0, sizeof(struct sType*));
memset(&type_name_119, 0, sizeof(char*));
memset(&err_120, 0, sizeof(_Bool));
memset(&type_118, 0, sizeof(struct sType*));
memset(&type_name_119, 0, sizeof(char*));
memset(&err_120, 0, sizeof(_Bool));
right_value92 = (void*)0;
memset(&base_type_121, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&multiple_declare_122, 0, sizeof(struct list$1tuple2$2sTypephcharphph*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&variable_name_123, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value100 = (void*)0;
memset(&variable_name2_127, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value101 = (void*)0;
memset(&variable_name_128, 0, sizeof(struct tuple2$2sTypephcharph*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
    if(_if_conditional193=charp_operator_equals(buf,"typedef"),    _if_conditional193) {
        in_typedef_117=info->in_typedef;
        info->in_typedef=(_Bool)1;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value91=parse_type(info,(_Bool)1,(_Bool)1)));
        type_118=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        type_name_119=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_120=multiple_assign_var2->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional196=!err_120,        _if_conditional196) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->in_typedef=(_Bool)0;
        info->in_typedef=in_typedef_117;
        if(_if_conditional197=*info->p==44,        _if_conditional197) {
            info->p++;
            skip_spaces_and_lf(info);
            base_type_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(type_118))));
            come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            multiple_declare_122=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value94=list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value93=(struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 125, "struct list$1tuple2$2sTypephcharphph"))))))));
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            variable_name_123=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value96=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value95=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 127, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(base_type_121),(char*)come_increment_ref_count(type_name_119)))));
            come_call_finalizer2(tuple2$2sTypephcharph_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_122,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_123));
            variable_name2_127=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value100=parse_variable_name((struct sType*)come_increment_ref_count(base_type_121),(_Bool)1,info))));
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_122,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_127));
            while(_while_condtional22=*info->p==44,            _while_condtional22) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_128=(struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value101=parse_variable_name((struct sType*)come_increment_ref_count(base_type_121),(_Bool)0,info))));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2sTypephcharphph_push_back(multiple_declare_122,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_128));
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 142, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sTypedefNode*)(right_value103=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value102=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 142, "struct sTypedefNode")))),(char*)come_increment_ref_count(type_name_119),(struct sType*)come_increment_ref_count(type_118),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_122),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sTypedefNode_finalize;
            _inf_value1->clone=(void*)sTypedefNode_clone;
            _inf_value1->compile=(void*)sTypedefNode_compile;
            _inf_value1->sline=(void*)sTypedefNode_sline;
            _inf_value1->sname=(void*)sTypedefNode_sname;
            _inf_value1->terminated=(void*)sTypedefNode_terminated;
            _inf_value1->kind=(void*)sTypedefNode_kind;
            __result84__ = __result_obj__ = ((struct sNode*)(right_value110=_inf_value1));
            come_call_finalizer2(sType_finalize,base_type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result84__;
            come_call_finalizer2(sType_finalize,base_type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,multiple_declare_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,variable_name2_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 145, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sTypedefNode*)(right_value112=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value111=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 145, "struct sTypedefNode")))),(char*)come_increment_ref_count(type_name_119),(struct sType*)come_increment_ref_count(type_118),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sTypedefNode_finalize;
            _inf_value2->clone=(void*)sTypedefNode_clone;
            _inf_value2->compile=(void*)sTypedefNode_compile;
            _inf_value2->sline=(void*)sTypedefNode_sline;
            _inf_value2->sname=(void*)sTypedefNode_sname;
            _inf_value2->terminated=(void*)sTypedefNode_terminated;
            _inf_value2->kind=(void*)sTypedefNode_kind;
            __result87__ = __result_obj__ = ((struct sNode*)(right_value119=_inf_value2));
            come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sTypedefNode_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTypedefNode_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result87__;
        }
        come_call_finalizer2(sType_finalize,type_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_119 = come_decrement_ref_count2(type_name_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result88__ = __result_obj__ = ((struct sNode*)(right_value120=top_level_v94(buf,head,head_sline,info)));
    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result88__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional194=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional194) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional195=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional195) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj41;
char* __dec_obj42;
struct tuple2$2sTypephcharph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj41=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                __dec_obj42=self->v2;
                self->v2=(char*)come_increment_ref_count(v2);
                __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                __result80__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__;
_Bool _if_conditional198;
void* right_value97;
struct list_item$1tuple2$2sTypephcharphph* litem_124;
struct tuple2$2sTypephcharph* __dec_obj43;
_Bool _if_conditional199;
void* right_value98;
struct list_item$1tuple2$2sTypephcharphph* litem_125;
struct tuple2$2sTypephcharph* __dec_obj44;
void* right_value99;
struct list_item$1tuple2$2sTypephcharphph* litem_126;
struct tuple2$2sTypephcharph* __dec_obj45;
struct list$1tuple2$2sTypephcharphph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value98 = (void*)0;
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
right_value99 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2sTypephcharphph*));
                if(_if_conditional198=self->len==0,                _if_conditional198) {
                    litem_124=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value97=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 225, "struct list_item$1tuple2$2sTypephcharphph"))));
                    come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_124->prev=((void*)0);
                    litem_124->next=((void*)0);
                    __dec_obj43=litem_124->item;
                    litem_124->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_124;
                    self->head=litem_124;
                }
                else {
                    if(_if_conditional199=self->len==1,                    _if_conditional199) {
                        litem_125=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value98=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 235, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_125->prev=self->head;
                        litem_125->next=((void*)0);
                        __dec_obj44=litem_125->item;
                        litem_125->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_125;
                        self->head->next=litem_125;
                    }
                    else {
                        litem_126=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(right_value99=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang2.h", 245, "struct list_item$1tuple2$2sTypephcharphph"))));
                        come_call_finalizer2(list_item$1tuple2$2sTypephcharphphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_126->prev=self->tail;
                        litem_126->next=((void*)0);
                        __dec_obj45=litem_126->item;
                        litem_126->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
                        come_call_finalizer2(tuple2$2sTypephcharph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_126;
                        self->tail=litem_126;
                    }
                }
                self->len++;
                __result81__ = __result_obj__ = self;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result81__;
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sTypedefNode_finalize(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional212=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional212) {
                    self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional213=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional213) {
                    come_call_finalizer2(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional214=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional214) {
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,self->multiple_declare, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional215=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional215) {
                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional216) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self){
void* __result_obj__;
_Bool _if_conditional217;
struct sTypedefNode* __result85__;
void* right_value113;
struct sTypedefNode* result_130;
_Bool _if_conditional218;
void* right_value114;
char* __dec_obj51;
_Bool _if_conditional219;
void* right_value115;
struct sType* __dec_obj52;
_Bool _if_conditional220;
void* right_value116;
struct list$1tuple2$2sTypephcharphph* __dec_obj53;
_Bool _if_conditional221;
void* right_value117;
char* __dec_obj54;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value118;
char* __dec_obj55;
struct sTypedefNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&result_130, 0, sizeof(struct sTypedefNode*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
                if(_if_conditional217=self==(void*)0,                _if_conditional217) {
                    __result85__ = __result_obj__ = (void*)0;
                    return __result85__;
                }
                result_130=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(right_value113=(struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "sTypedefNode_clone", 3, "struct sTypedefNode"))));
                come_call_finalizer2(sTypedefNode_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional218=self!=((void*)0)&&self->mTypeName!=((void*)0),                _if_conditional218) {
                    __dec_obj51=result_130->mTypeName;
                    result_130->mTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mTypeName))));
                    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional219=self!=((void*)0)&&self->mType!=((void*)0),                _if_conditional219) {
                    __dec_obj52=result_130->mType;
                    result_130->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(self->mType))));
                    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional220=self!=((void*)0)&&self->multiple_declare!=((void*)0),                _if_conditional220) {
                    __dec_obj53=result_130->multiple_declare;
                    result_130->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list$1tuple2$2sTypephcharphph*)(right_value116=list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare))));
                    come_call_finalizer2(list$1tuple2$2sTypephcharphph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1tuple2$2sTypephcharphphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional221=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                _if_conditional221) {
                    __dec_obj54=result_130->mDeclareSName;
                    result_130->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mDeclareSName))));
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional222=self!=((void*)0),                _if_conditional222) {
                    result_130->sline=self->sline;
                }
                if(_if_conditional223=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional223) {
                    __dec_obj55=result_130->sname;
                    result_130->sname=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->sname))));
                    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result86__ = __result_obj__ = result_130;
                come_call_finalizer2(sTypedefNode_finalize,result_130, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result86__;
                come_call_finalizer2(sTypedefNode_finalize,result_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

