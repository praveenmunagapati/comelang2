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
struct sPlusPlusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    struct sNode* mLeft;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sPlusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMinusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShifEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXorEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sExpEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
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

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
_Bool sPlusPlusNode_terminated();

char* sPlusPlusNode_kind();

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info);

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info);

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

_Bool sMinusMinusNode_terminated();

char* sMinusMinusNode_kind();

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info);

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sPlusEqualNode_terminated();

char* sPlusEqualNode_kind();

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info);

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMinusEqualNode_terminated();

char* sMinusEqualNode_kind();

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info);

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultEqualNode_terminated();

char* sMultEqualNode_kind();

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info);

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivEqualNode_terminated();

char* sDivEqualNode_kind();

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info);

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModEqualNode_terminated();

char* sModEqualNode_kind();

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info);

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShifEqualNode_terminated();

char* sLShifEqualNode_kind();

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info);

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftEqualNode_terminated();

char* sRShiftEqualNode_kind();

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info);

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXorEqualNode_terminated();

char* sXorEqualNode_kind();

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info);

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrEqualNode_terminated();

char* sOrEqualNode_kind();

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info);

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndEqualNode_terminated();

char* sAndEqualNode_kind();

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info);

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sExpEqualNode_terminated();

char* sExpEqualNode_kind();

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info);

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
struct sPlusPlusNode* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value12 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj7=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(left))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count2(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value12) { right_value12 = come_decrement_ref_count2(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result9__ = __result_obj__ = self;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result9__;
    come_call_finalizer2(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sNode* __result7__;
void* right_value11;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
        if(right_value11) { right_value11 = come_decrement_ref_count2(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        _if_conditional6) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(_if_conditional7=self!=((void*)0),        _if_conditional7) {
            result_5->finalize=self->finalize;
        }
        if(_if_conditional8=self!=((void*)0),        _if_conditional8) {
            result_5->clone=self->clone;
        }
        if(_if_conditional9=self!=((void*)0),        _if_conditional9) {
            result_5->compile=self->compile;
        }
        if(_if_conditional10=self!=((void*)0),        _if_conditional10) {
            result_5->sline=self->sline;
        }
        if(_if_conditional11=self!=((void*)0),        _if_conditional11) {
            result_5->sname=self->sname;
        }
        if(_if_conditional12=self!=((void*)0),        _if_conditional12) {
            result_5->terminated=self->terminated;
        }
        if(_if_conditional13=self!=((void*)0),        _if_conditional13) {
            result_5->kind=self->kind;
        }
        __result8__ = __result_obj__ = result_5;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result8__;
        if(result_5) { result_5 = come_decrement_ref_count2(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

_Bool sPlusPlusNode_terminated(){
void* __result_obj__;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = (_Bool)0;
    return __result10__;
}

char* sPlusPlusNode_kind(){
void* __result_obj__;
void* right_value13;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    __result11__ = __result_obj__ = ((char*)(right_value13=__builtin_string("sPlusPlusNode")));
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result11__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_6;
_Bool _if_conditional16;
_Bool __result12__;
void* right_value14;
struct CVALUE* left_value_7;
struct sType* type_16;
char* fun_name_17;
_Bool calling_fun_18;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value15;
struct CVALUE* come_value_19;
void* right_value16;
char* __dec_obj8;
void* right_value50;
struct sType* __dec_obj31;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_6, 0, sizeof(struct sNode*));
right_value14 = (void*)0;
memset(&left_value_7, 0, sizeof(struct CVALUE*));
memset(&type_16, 0, sizeof(struct sType*));
memset(&fun_name_17, 0, sizeof(char*));
memset(&calling_fun_18, 0, sizeof(_Bool));
right_value15 = (void*)0;
memset(&come_value_19, 0, sizeof(struct CVALUE*));
right_value16 = (void*)0;
right_value50 = (void*)0;
    left_6=self->mLeft;
    if(_if_conditional16=!node_compile(left_6,info),    _if_conditional16) {
        __result12__ = (_Bool)0;
        return __result12__;
    }
    left_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value14=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_16=(struct sType*)come_increment_ref_count(left_value_7->type);
    fun_name_17="operator_plus_plus";
    if(self->mQuote) {
        calling_fun_18=(_Bool)0;
    }
    else {
        calling_fun_18=operator_overload_fun_self(type_16,fun_name_17,left_value_7,info);
    }
    if(_if_conditional36=!calling_fun_18,    _if_conditional36) {
        come_value_19=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 57, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj8=come_value_19->c_value;
        come_value_19->c_value=(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("%s++",left_value_7->c_value))));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value16 = come_decrement_ref_count2(right_value16, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj31=come_value_19->type;
        come_value_19->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(left_value_7->type))));
        come_call_finalizer2(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_19->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_19));
        add_come_last_code(info,"%s;\n",come_value_19->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result30__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result30__;
    come_call_finalizer2(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional17;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional17=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional17) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional18=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional18) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional19=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional19) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional21) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional22=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional22) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional23=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional23) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional25=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional25) {
                    come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional27) {
                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional28) {
                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional30) {
                    come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional31) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional32=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional32) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional33=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional33) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional34) {
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional20=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional20) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional24) {
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
                        while(_while_condtional2=it_10!=((void*)0),                        _while_condtional2) {
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
                        while(_while_condtional3=it_12!=((void*)0),                        _while_condtional3) {
                            prev_it_13=it_12;
                            it_12=it_12->next;
                            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional26) {
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
                        while(_while_condtional4=it_14!=((void*)0),                        _while_condtional4) {
                            prev_it_15=it_14;
                            it_14=it_14->next;
                            come_call_finalizer2(list_item$1charphp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional29) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sType* __result13__;
void* right_value17;
struct sType* result_20;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value20;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional43;
void* right_value21;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional44;
void* right_value22;
char* __dec_obj12;
_Bool _if_conditional45;
void* right_value29;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional49;
void* right_value36;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value37;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional55;
void* right_value44;
struct list$1charph* __dec_obj25;
_Bool _if_conditional59;
void* right_value45;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value46;
struct sNode* __dec_obj27;
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
_Bool _if_conditional85;
void* right_value47;
struct sNode* __dec_obj28;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value48;
char* __dec_obj29;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value49;
char* __dec_obj30;
struct sType* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
memset(&result_20, 0, sizeof(struct sType*));
right_value20 = (void*)0;
right_value21 = (void*)0;
right_value22 = (void*)0;
right_value29 = (void*)0;
right_value36 = (void*)0;
right_value37 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
            if(_if_conditional37=self==(void*)0,            _if_conditional37) {
                __result13__ = __result_obj__ = (void*)0;
                return __result13__;
            }
            result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
            come_call_finalizer2(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional38=self!=((void*)0),            _if_conditional38) {
                result_20->mClass=self->mClass;
            }
            if(_if_conditional39=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional39) {
                __dec_obj10=result_20->mNoSolvedGenericsType;
                result_20->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value20=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional43=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional43) {
                __dec_obj11=result_20->mOriginalLoadVarType;
                result_20->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional44=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional44) {
                __dec_obj12=result_20->mGenericsName;
                result_20->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value22=string_clone(self->mGenericsName))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional45=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional45) {
                __dec_obj16=result_20->mGenericsTypes;
                result_20->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional49) {
                __dec_obj20=result_20->mArrayNum;
                result_20->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer2(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0),            _if_conditional53) {
                result_20->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional54=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional54) {
                __dec_obj21=result_20->mParamTypes;
                result_20->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer2(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional55=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional55) {
                __dec_obj25=result_20->mParamNames;
                result_20->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer2(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional59=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional59) {
                __dec_obj26=result_20->mResultType;
                result_20->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(tuple1$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional60=self!=((void*)0),            _if_conditional60) {
                result_20->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional61=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional61) {
                __dec_obj27=result_20->mAlignas;
                result_20->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(self->mAlignas))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value46) { right_value46 = come_decrement_ref_count2(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional62=self!=((void*)0),            _if_conditional62) {
                result_20->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional63=self!=((void*)0),            _if_conditional63) {
                result_20->mShort=self->mShort;
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_20->mLong=self->mLong;
            }
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_20->mLongLong=self->mLongLong;
            }
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                result_20->mConstant=self->mConstant;
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_20->mRegister=self->mRegister;
            }
            if(_if_conditional68=self!=((void*)0),            _if_conditional68) {
                result_20->mVolatile=self->mVolatile;
            }
            if(_if_conditional69=self!=((void*)0),            _if_conditional69) {
                result_20->mStatic=self->mStatic;
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                result_20->mExtern=self->mExtern;
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_20->mRestrict=self->mRestrict;
            }
            if(_if_conditional72=self!=((void*)0),            _if_conditional72) {
                result_20->mImmutable=self->mImmutable;
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_20->mHeap=self->mHeap;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_20->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_20->mDelegate=self->mDelegate;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_20->mShare=self->mShare;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_20->mClone=self->mClone;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_20->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_20->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_20->mRefference=self->mRefference;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_20->mException=self->mException;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_20->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_20->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_20->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional85=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional85) {
                __dec_obj28=result_20->mSizeNum;
                result_20->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=sNode_clone(self->mSizeNum))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_20->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_20->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional88=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional88) {
                __dec_obj29=result_20->mOriginalTypeName;
                result_20->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mOriginalTypeName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_20->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_20->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_20->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_20->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_20->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_20->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_20->mInline=self->mInline;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_20->mNullValue=self->mNullValue;
            }
            if(_if_conditional97=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional97) {
                __dec_obj30=result_20->mAsmName;
                result_20->mAsmName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(self->mAsmName))));
                __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result28__ = __result_obj__ = result_20;
            come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result28__;
            come_call_finalizer2(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct tuple1$1sTypeph* __result14__;
void* right_value18;
struct tuple1$1sTypeph* result_21;
_Bool _if_conditional42;
void* right_value19;
struct sType* __dec_obj9;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_21, 0, sizeof(struct tuple1$1sTypeph*));
right_value19 = (void*)0;
                    if(_if_conditional40=self==(void*)0,                    _if_conditional40) {
                        __result14__ = __result_obj__ = (void*)0;
                        return __result14__;
                    }
                    result_21=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                    come_call_finalizer2(tuple1$1sTypeph_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional42=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional42) {
                        __dec_obj9=result_21->v1;
                        result_21->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_clone(self->v1))));
                        come_call_finalizer2(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer2(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    }
                    __result15__ = __result_obj__ = result_21;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(tuple1$1sTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional41=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional41) {
                            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional46;
struct list$1sTypeph* __result16__;
void* right_value23;
void* right_value24;
struct list$1sTypeph* result_22;
struct list_item$1sTypeph* it_23;
_Bool _while_condtional5;
void* right_value28;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_22, 0, sizeof(struct list$1sTypeph*));
memset(&it_23, 0, sizeof(struct list_item$1sTypeph*));
right_value28 = (void*)0;
                    if(_if_conditional46=self==((void*)0),                    _if_conditional46) {
                        __result16__ = __result_obj__ = ((void*)0);
                        return __result16__;
                    }
                    result_22=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                    come_call_finalizer2(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_23=self->head;
                    while(_while_condtional5=it_23!=((void*)0),                    _while_condtional5) {
                        list$1sTypeph_add(result_22,(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=sType_clone(it_23->item)))));
                        come_call_finalizer2(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        it_23=it_23->next;
                    }
                    __result19__ = __result_obj__ = result_22;
                    come_call_finalizer2(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result19__;
                    come_call_finalizer2(list$1sTypephp_finalize,result_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result17__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result17__;
                        come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional47;
void* right_value25;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj13;
_Bool _if_conditional48;
void* right_value26;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj14;
void* right_value27;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj15;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
right_value26 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
right_value27 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional47=self->len==0,                            _if_conditional47) {
                                litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_24->prev=((void*)0);
                                litem_24->next=((void*)0);
                                __dec_obj13=litem_24->item;
                                litem_24->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_24;
                                self->head=litem_24;
                            }
                            else {
                                if(_if_conditional48=self->len==1,                                _if_conditional48) {
                                    litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_25->prev=self->head;
                                    litem_25->next=((void*)0);
                                    __dec_obj14=litem_25->item;
                                    litem_25->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_25;
                                    self->head->next=litem_25;
                                }
                                else {
                                    litem_26=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_26->prev=self->tail;
                                    litem_26->next=((void*)0);
                                    __dec_obj15=litem_26->item;
                                    litem_26->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer2(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_26;
                                    self->tail=litem_26;
                                }
                            }
                            self->len++;
                            __result18__ = __result_obj__ = self;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result18__;
                            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result20__;
void* right_value30;
void* right_value31;
struct list$1sNodeph* result_27;
struct list_item$1sNodeph* it_28;
_Bool _while_condtional6;
void* right_value35;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value31 = (void*)0;
memset(&result_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct list_item$1sNodeph*));
right_value35 = (void*)0;
                    if(_if_conditional50=self==((void*)0),                    _if_conditional50) {
                        __result20__ = __result_obj__ = ((void*)0);
                        return __result20__;
                    }
                    result_27=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                    come_call_finalizer2(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_28=self->head;
                    while(_while_condtional6=it_28!=((void*)0),                    _while_condtional6) {
                        list$1sNodeph_add(result_27,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value35=sNode_clone(it_28->item)))));
                        if(right_value35) { right_value35 = come_decrement_ref_count2(right_value35, ((struct sNode*)right_value35)->finalize, ((struct sNode*)right_value35)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_28=it_28->next;
                    }
                    __result23__ = __result_obj__ = result_27;
                    come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result23__;
                    come_call_finalizer2(list$1sNodephp_finalize,result_27, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result21__ = __result_obj__ = self;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result21__;
                        come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value32;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj17;
_Bool _if_conditional52;
void* right_value33;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj18;
void* right_value34;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
right_value34 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional51=self->len==0,                            _if_conditional51) {
                                litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_29->prev=((void*)0);
                                litem_29->next=((void*)0);
                                __dec_obj17=litem_29->item;
                                litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_29;
                                self->head=litem_29;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                _if_conditional52) {
                                    litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_30->prev=self->head;
                                    litem_30->next=((void*)0);
                                    __dec_obj18=litem_30->item;
                                    litem_30->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_30;
                                    self->head->next=litem_30;
                                }
                                else {
                                    litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value34=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_31->prev=self->tail;
                                    litem_31->next=((void*)0);
                                    __dec_obj19=litem_31->item;
                                    litem_31->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_31;
                                    self->tail=litem_31;
                                }
                            }
                            self->len++;
                            __result22__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result22__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1charph* __result24__;
void* right_value38;
void* right_value39;
struct list$1charph* result_32;
struct list_item$1charph* it_33;
_Bool _while_condtional7;
void* right_value43;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value39 = (void*)0;
memset(&result_32, 0, sizeof(struct list$1charph*));
memset(&it_33, 0, sizeof(struct list_item$1charph*));
right_value43 = (void*)0;
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result24__ = __result_obj__ = ((void*)0);
                        return __result24__;
                    }
                    result_32=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                    come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_33=self->head;
                    while(_while_condtional7=it_33!=((void*)0),                    _while_condtional7) {
                        list$1charph_add(result_32,(char*)come_increment_ref_count(((char*)(right_value43=string_clone(it_33->item)))));
                        right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_33=it_33->next;
                    }
                    __result27__ = __result_obj__ = result_32;
                    come_call_finalizer2(list$1charphp_finalize,result_32, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result27__;
                    come_call_finalizer2(list$1charphp_finalize,result_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result25__ = __result_obj__ = self;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result25__;
                        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value40;
struct list_item$1charph* litem_34;
char* __dec_obj22;
_Bool _if_conditional58;
void* right_value41;
struct list_item$1charph* litem_35;
char* __dec_obj23;
void* right_value42;
struct list_item$1charph* litem_36;
char* __dec_obj24;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
memset(&litem_35, 0, sizeof(struct list_item$1charph*));
right_value42 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional57=self->len==0,                            _if_conditional57) {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=((void*)0);
                                litem_34->next=((void*)0);
                                __dec_obj22=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_34;
                                self->head=litem_34;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                _if_conditional58) {
                                    litem_35=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_35->prev=self->head;
                                    litem_35->next=((void*)0);
                                    __dec_obj23=litem_35->item;
                                    litem_35->item=(char*)come_increment_ref_count(item);
                                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_35;
                                    self->head->next=litem_35;
                                }
                                else {
                                    litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                    come_call_finalizer2(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    litem_36->prev=self->tail;
                                    litem_36->next=((void*)0);
                                    __dec_obj24=litem_36->item;
                                    litem_36->item=(char*)come_increment_ref_count(item);
                                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_36;
                                    self->tail=litem_36;
                                }
                            }
                            self->len++;
                            __result26__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result26__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional98;
void* right_value51;
struct list_item$1CVALUEph* litem_37;
struct CVALUE* __dec_obj32;
_Bool _if_conditional100;
void* right_value52;
struct list_item$1CVALUEph* litem_38;
struct CVALUE* __dec_obj33;
void* right_value53;
struct list_item$1CVALUEph* litem_39;
struct CVALUE* __dec_obj34;
struct list$1CVALUEph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1CVALUEph*));
right_value52 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1CVALUEph*));
right_value53 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional98=self->len==0,            _if_conditional98) {
                litem_37=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value51=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_37->prev=((void*)0);
                litem_37->next=((void*)0);
                __dec_obj32=litem_37->item;
                litem_37->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_37;
                self->head=litem_37;
            }
            else {
                if(_if_conditional100=self->len==1,                _if_conditional100) {
                    litem_38=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value52=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_38->prev=self->head;
                    litem_38->next=((void*)0);
                    __dec_obj33=litem_38->item;
                    litem_38->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_38;
                    self->head->next=litem_38;
                }
                else {
                    litem_39=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_39->prev=self->tail;
                    litem_39->next=((void*)0);
                    __dec_obj34=litem_39->item;
                    litem_39->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_39;
                    self->tail=litem_39;
                }
            }
            self->len++;
            __result29__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result29__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional99=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional99) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = self->sline;
    return __result31__;
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value54;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value54 = (void*)0;
    __result32__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self->sname)));
    right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result32__;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value55;
char* __dec_obj35;
void* right_value56;
struct sNode* __dec_obj36;
struct sMinusMinusNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value55 = (void*)0;
right_value56 = (void*)0;
    self->sline=info->sline;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->sname))));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(left))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value56) { right_value56 = come_decrement_ref_count2(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result33__ = __result_obj__ = self;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result33__;
    come_call_finalizer2(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode_terminated(){
void* __result_obj__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    __result34__ = (_Bool)0;
    return __result34__;
}

char* sMinusMinusNode_kind(){
void* __result_obj__;
void* right_value57;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value57=__builtin_string("sMinusMinusNode")));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_40;
_Bool _if_conditional103;
_Bool __result36__;
void* right_value58;
struct CVALUE* left_value_41;
struct sType* type_42;
char* fun_name_43;
_Bool calling_fun_44;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value59;
struct CVALUE* come_value_45;
void* right_value60;
char* __dec_obj37;
void* right_value61;
struct sType* __dec_obj38;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_40, 0, sizeof(struct sNode*));
right_value58 = (void*)0;
memset(&left_value_41, 0, sizeof(struct CVALUE*));
memset(&type_42, 0, sizeof(struct sType*));
memset(&fun_name_43, 0, sizeof(char*));
memset(&calling_fun_44, 0, sizeof(_Bool));
right_value59 = (void*)0;
memset(&come_value_45, 0, sizeof(struct CVALUE*));
right_value60 = (void*)0;
right_value61 = (void*)0;
    left_40=self->mLeft;
    if(_if_conditional103=!node_compile(left_40,info),    _if_conditional103) {
        __result36__ = (_Bool)0;
        return __result36__;
    }
    left_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_42=(struct sType*)come_increment_ref_count(left_value_41->type);
    fun_name_43="operator_minus_minus";
    if(self->mQuote) {
        calling_fun_44=(_Bool)0;
    }
    else {
        calling_fun_44=operator_overload_fun_self(type_42,fun_name_43,left_value_41,info);
    }
    if(_if_conditional105=!calling_fun_44,    _if_conditional105) {
        come_value_45=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 135, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj37=come_value_45->c_value;
        come_value_45->c_value=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s--",left_value_41->c_value))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj38=come_value_45->type;
        come_value_45->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(left_value_41->type))));
        come_call_finalizer2(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_45->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_45));
        add_come_last_code(info,"%s;\n",come_value_45->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result37__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result37__;
    come_call_finalizer2(CVALUE_finalize,left_value_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = self->sline;
    return __result38__;
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value62;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
    __result39__ = __result_obj__ = ((char*)(right_value62=__builtin_string(self->sname)));
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value63;
char* __dec_obj39;
void* right_value64;
struct sNode* __dec_obj40;
void* right_value65;
struct sNode* __dec_obj41;
struct sPlusEqualNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
    self->sline=info->sline;
    __dec_obj39=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(info->sname))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value64=sNode_clone(left))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj41=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(right))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value65) { right_value65 = come_decrement_ref_count2(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result40__ = __result_obj__ = self;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result40__;
    come_call_finalizer2(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusEqualNode_terminated(){
void* __result_obj__;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = (_Bool)0;
    return __result41__;
}

char* sPlusEqualNode_kind(){
void* __result_obj__;
void* right_value66;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value66=__builtin_string("sPlusEqualNode")));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_46;
_Bool _if_conditional109;
_Bool __result43__;
void* right_value67;
struct CVALUE* left_value_47;
struct sNode* right_48;
_Bool _if_conditional110;
_Bool __result44__;
void* right_value68;
struct CVALUE* right_value_49;
struct sType* type_50;
char* fun_name_51;
_Bool calling_fun_52;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value69;
struct CVALUE* come_value_53;
void* right_value70;
char* __dec_obj42;
void* right_value71;
struct sType* __dec_obj43;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_46, 0, sizeof(struct sNode*));
right_value67 = (void*)0;
memset(&left_value_47, 0, sizeof(struct CVALUE*));
memset(&right_48, 0, sizeof(struct sNode*));
right_value68 = (void*)0;
memset(&right_value_49, 0, sizeof(struct CVALUE*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&fun_name_51, 0, sizeof(char*));
memset(&calling_fun_52, 0, sizeof(_Bool));
right_value69 = (void*)0;
memset(&come_value_53, 0, sizeof(struct CVALUE*));
right_value70 = (void*)0;
right_value71 = (void*)0;
    left_46=self->mLeft;
    if(_if_conditional109=!node_compile(left_46,info),    _if_conditional109) {
        __result43__ = (_Bool)0;
        return __result43__;
    }
    left_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value67=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_48=self->mRight;
    if(_if_conditional110=!node_compile(right_48,info),    _if_conditional110) {
        __result44__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result44__;
    }
    right_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_50=(struct sType*)come_increment_ref_count(left_value_47->type);
    fun_name_51="operator_plus_equal";
    if(self->mQuote) {
        calling_fun_52=(_Bool)0;
    }
    else {
        calling_fun_52=operator_overload_fun(type_50,fun_name_51,left_value_47,right_value_49,info);
    }
    if(_if_conditional112=!calling_fun_52,    _if_conditional112) {
        come_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj42=come_value_53->c_value;
        come_value_53->c_value=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s+=%s",left_value_47->c_value,right_value_49->c_value))));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj43=come_value_53->type;
        come_value_53->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(left_value_47->type))));
        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_53->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
        add_come_last_code(info,"%s;\n",come_value_53->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result45__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result45__;
    come_call_finalizer2(CVALUE_finalize,left_value_47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = self->sline;
    return __result46__;
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value72;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
    __result47__ = __result_obj__ = ((char*)(right_value72=__builtin_string(self->sname)));
    right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value73;
char* __dec_obj44;
void* right_value74;
struct sNode* __dec_obj45;
void* right_value75;
struct sNode* __dec_obj46;
struct sMinusEqualNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj45=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(left))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value74) { right_value74 = come_decrement_ref_count2(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj46=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(right))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value75) { right_value75 = come_decrement_ref_count2(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result48__ = __result_obj__ = self;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result48__;
    come_call_finalizer2(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusEqualNode_terminated(){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = (_Bool)0;
    return __result49__;
}

char* sMinusEqualNode_kind(){
void* __result_obj__;
void* right_value76;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value76=__builtin_string("sPlusEqualNode")));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_54;
_Bool _if_conditional116;
_Bool __result51__;
void* right_value77;
struct CVALUE* left_value_55;
struct sNode* right_56;
_Bool _if_conditional117;
_Bool __result52__;
void* right_value78;
struct CVALUE* right_value_57;
struct sType* type_58;
char* fun_name_59;
_Bool calling_fun_60;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value79;
struct CVALUE* come_value_61;
void* right_value80;
char* __dec_obj47;
void* right_value81;
struct sType* __dec_obj48;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_54, 0, sizeof(struct sNode*));
right_value77 = (void*)0;
memset(&left_value_55, 0, sizeof(struct CVALUE*));
memset(&right_56, 0, sizeof(struct sNode*));
right_value78 = (void*)0;
memset(&right_value_57, 0, sizeof(struct CVALUE*));
memset(&type_58, 0, sizeof(struct sType*));
memset(&fun_name_59, 0, sizeof(char*));
memset(&calling_fun_60, 0, sizeof(_Bool));
right_value79 = (void*)0;
memset(&come_value_61, 0, sizeof(struct CVALUE*));
right_value80 = (void*)0;
right_value81 = (void*)0;
    left_54=self->mLeft;
    if(_if_conditional116=!node_compile(left_54,info),    _if_conditional116) {
        __result51__ = (_Bool)0;
        return __result51__;
    }
    left_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_56=self->mRight;
    if(_if_conditional117=!node_compile(right_56,info),    _if_conditional117) {
        __result52__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result52__;
    }
    right_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_58=(struct sType*)come_increment_ref_count(left_value_55->type);
    fun_name_59="operator_minus_equal";
    if(self->mQuote) {
        calling_fun_60=(_Bool)0;
    }
    else {
        calling_fun_60=operator_overload_fun(type_58,fun_name_59,left_value_55,right_value_57,info);
    }
    if(_if_conditional119=!calling_fun_60,    _if_conditional119) {
        come_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 311, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj47=come_value_61->c_value;
        come_value_61->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s-=%s",left_value_55->c_value,right_value_57->c_value))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj48=come_value_61->type;
        come_value_61->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_value_55->type))));
        come_call_finalizer2(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_61->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
        add_come_last_code(info,"%s;\n",come_value_61->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result53__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result53__;
    come_call_finalizer2(CVALUE_finalize,left_value_55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = self->sline;
    return __result54__;
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result55__ = __result_obj__ = ((char*)(right_value82=__builtin_string(self->sname)));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value83;
char* __dec_obj49;
void* right_value84;
struct sNode* __dec_obj50;
void* right_value85;
struct sNode* __dec_obj51;
struct sMultEqualNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj50=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(left))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj51=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(right))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result56__ = __result_obj__ = self;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result56__;
    come_call_finalizer2(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultEqualNode_terminated(){
void* __result_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = (_Bool)0;
    return __result57__;
}

char* sMultEqualNode_kind(){
void* __result_obj__;
void* right_value86;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    __result58__ = __result_obj__ = ((char*)(right_value86=__builtin_string("sMultEqualNode")));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_62;
_Bool _if_conditional123;
_Bool __result59__;
void* right_value87;
struct CVALUE* left_value_63;
struct sNode* right_64;
_Bool _if_conditional124;
_Bool __result60__;
void* right_value88;
struct CVALUE* right_value_65;
struct sType* type_66;
char* fun_name_67;
_Bool calling_fun_68;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value89;
struct CVALUE* come_value_69;
void* right_value90;
char* __dec_obj52;
void* right_value91;
struct sType* __dec_obj53;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_62, 0, sizeof(struct sNode*));
right_value87 = (void*)0;
memset(&left_value_63, 0, sizeof(struct CVALUE*));
memset(&right_64, 0, sizeof(struct sNode*));
right_value88 = (void*)0;
memset(&right_value_65, 0, sizeof(struct CVALUE*));
memset(&type_66, 0, sizeof(struct sType*));
memset(&fun_name_67, 0, sizeof(char*));
memset(&calling_fun_68, 0, sizeof(_Bool));
right_value89 = (void*)0;
memset(&come_value_69, 0, sizeof(struct CVALUE*));
right_value90 = (void*)0;
right_value91 = (void*)0;
    left_62=self->mLeft;
    if(_if_conditional123=!node_compile(left_62,info),    _if_conditional123) {
        __result59__ = (_Bool)0;
        return __result59__;
    }
    left_value_63=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_64=self->mRight;
    if(_if_conditional124=!node_compile(right_64,info),    _if_conditional124) {
        __result60__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result60__;
    }
    right_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_66=(struct sType*)come_increment_ref_count(left_value_63->type);
    fun_name_67="operator_mult_equal";
    if(self->mQuote) {
        calling_fun_68=(_Bool)0;
    }
    else {
        calling_fun_68=operator_overload_fun(type_66,fun_name_67,left_value_63,right_value_65,info);
    }
    if(_if_conditional126=!calling_fun_68,    _if_conditional126) {
        come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 399, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj52=come_value_69->c_value;
        come_value_69->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s*=%s",left_value_63->c_value,right_value_65->c_value))));
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj53=come_value_69->type;
        come_value_69->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_value_63->type))));
        come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_69->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
        add_come_last_code(info,"%s;\n",come_value_69->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result61__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result61__;
    come_call_finalizer2(CVALUE_finalize,left_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = self->sline;
    return __result62__;
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value92;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
    __result63__ = __result_obj__ = ((char*)(right_value92=__builtin_string(self->sname)));
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value93;
char* __dec_obj54;
void* right_value94;
struct sNode* __dec_obj55;
void* right_value95;
struct sNode* __dec_obj56;
struct sDivEqualNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj55=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(left))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value94) { right_value94 = come_decrement_ref_count2(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj56=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(right))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result64__ = __result_obj__ = self;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result64__;
    come_call_finalizer2(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivEqualNode_terminated(){
void* __result_obj__;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    __result65__ = (_Bool)0;
    return __result65__;
}

char* sDivEqualNode_kind(){
void* __result_obj__;
void* right_value96;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result66__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sDivEqualNode")));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_70;
_Bool _if_conditional130;
_Bool __result67__;
void* right_value97;
struct CVALUE* left_value_71;
struct sNode* right_72;
_Bool _if_conditional131;
_Bool __result68__;
void* right_value98;
struct CVALUE* right_value_73;
struct sType* type_74;
char* fun_name_75;
_Bool calling_fun_76;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value99;
struct CVALUE* come_value_77;
void* right_value100;
char* __dec_obj57;
void* right_value101;
struct sType* __dec_obj58;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_70, 0, sizeof(struct sNode*));
right_value97 = (void*)0;
memset(&left_value_71, 0, sizeof(struct CVALUE*));
memset(&right_72, 0, sizeof(struct sNode*));
right_value98 = (void*)0;
memset(&right_value_73, 0, sizeof(struct CVALUE*));
memset(&type_74, 0, sizeof(struct sType*));
memset(&fun_name_75, 0, sizeof(char*));
memset(&calling_fun_76, 0, sizeof(_Bool));
right_value99 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value100 = (void*)0;
right_value101 = (void*)0;
    left_70=self->mLeft;
    if(_if_conditional130=!node_compile(left_70,info),    _if_conditional130) {
        __result67__ = (_Bool)0;
        return __result67__;
    }
    left_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_72=self->mRight;
    if(_if_conditional131=!node_compile(right_72,info),    _if_conditional131) {
        __result68__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result68__;
    }
    right_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_74=(struct sType*)come_increment_ref_count(left_value_71->type);
    fun_name_75="operator_div_equal";
    if(self->mQuote) {
        calling_fun_76=(_Bool)0;
    }
    else {
        calling_fun_76=operator_overload_fun(type_74,fun_name_75,left_value_71,right_value_73,info);
    }
    if(_if_conditional133=!calling_fun_76,    _if_conditional133) {
        come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 487, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj57=come_value_77->c_value;
        come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s/=%s",left_value_71->c_value,right_value_73->c_value))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj58=come_value_77->type;
        come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(left_value_71->type))));
        come_call_finalizer2(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_77->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
        add_come_last_code(info,"%s;\n",come_value_77->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = self->sline;
    return __result70__;
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value102;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value103;
char* __dec_obj59;
void* right_value104;
struct sNode* __dec_obj60;
void* right_value105;
struct sNode* __dec_obj61;
struct sModEqualNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
    self->sline=info->sline;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result72__;
    come_call_finalizer2(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModEqualNode_terminated(){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = (_Bool)0;
    return __result73__;
}

char* sModEqualNode_kind(){
void* __result_obj__;
void* right_value106;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sModEqualNode")));
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_78;
_Bool _if_conditional137;
_Bool __result75__;
void* right_value107;
struct CVALUE* left_value_79;
struct sNode* right_80;
_Bool _if_conditional138;
_Bool __result76__;
void* right_value108;
struct CVALUE* right_value_81;
struct sType* type_82;
char* fun_name_83;
_Bool calling_fun_84;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value109;
struct CVALUE* come_value_85;
void* right_value110;
char* __dec_obj62;
void* right_value111;
struct sType* __dec_obj63;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_78, 0, sizeof(struct sNode*));
right_value107 = (void*)0;
memset(&left_value_79, 0, sizeof(struct CVALUE*));
memset(&right_80, 0, sizeof(struct sNode*));
right_value108 = (void*)0;
memset(&right_value_81, 0, sizeof(struct CVALUE*));
memset(&type_82, 0, sizeof(struct sType*));
memset(&fun_name_83, 0, sizeof(char*));
memset(&calling_fun_84, 0, sizeof(_Bool));
right_value109 = (void*)0;
memset(&come_value_85, 0, sizeof(struct CVALUE*));
right_value110 = (void*)0;
right_value111 = (void*)0;
    left_78=self->mLeft;
    if(_if_conditional137=!node_compile(left_78,info),    _if_conditional137) {
        __result75__ = (_Bool)0;
        return __result75__;
    }
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_80=self->mRight;
    if(_if_conditional138=!node_compile(right_80,info),    _if_conditional138) {
        __result76__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    right_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_82=(struct sType*)come_increment_ref_count(left_value_79->type);
    fun_name_83="operator_mod_equal";
    if(self->mQuote) {
        calling_fun_84=(_Bool)0;
    }
    else {
        calling_fun_84=operator_overload_fun(type_82,fun_name_83,left_value_79,right_value_81,info);
    }
    if(_if_conditional140=!calling_fun_84,    _if_conditional140) {
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 575, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj62=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s%%=%s",left_value_79->c_value,right_value_81->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj63=come_value_85->type;
        come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(left_value_79->type))));
        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_85->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
        add_come_last_code(info,"%s;\n",come_value_85->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result77__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = self->sline;
    return __result78__;
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value112;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value112=__builtin_string(self->sname)));
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __dec_obj64;
void* right_value114;
struct sNode* __dec_obj65;
void* right_value115;
struct sNode* __dec_obj66;
struct sLShifEqualNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    self->sline=info->sline;
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result80__ = __result_obj__ = self;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result80__;
    come_call_finalizer2(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShifEqualNode_terminated(){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = (_Bool)0;
    return __result81__;
}

char* sLShifEqualNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sLShifEqualNode")));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_86;
_Bool _if_conditional144;
_Bool __result83__;
void* right_value117;
struct CVALUE* left_value_87;
struct sNode* right_88;
_Bool _if_conditional145;
_Bool __result84__;
void* right_value118;
struct CVALUE* right_value_89;
struct sType* type_90;
char* fun_name_91;
_Bool calling_fun_92;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value119;
struct CVALUE* come_value_93;
void* right_value120;
char* __dec_obj67;
void* right_value121;
struct sType* __dec_obj68;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_86, 0, sizeof(struct sNode*));
right_value117 = (void*)0;
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&right_88, 0, sizeof(struct sNode*));
right_value118 = (void*)0;
memset(&right_value_89, 0, sizeof(struct CVALUE*));
memset(&type_90, 0, sizeof(struct sType*));
memset(&fun_name_91, 0, sizeof(char*));
memset(&calling_fun_92, 0, sizeof(_Bool));
right_value119 = (void*)0;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
right_value121 = (void*)0;
    left_86=self->mLeft;
    if(_if_conditional144=!node_compile(left_86,info),    _if_conditional144) {
        __result83__ = (_Bool)0;
        return __result83__;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_88=self->mRight;
    if(_if_conditional145=!node_compile(right_88,info),    _if_conditional145) {
        __result84__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    right_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_90=(struct sType*)come_increment_ref_count(left_value_87->type);
    fun_name_91="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun_92=(_Bool)0;
    }
    else {
        calling_fun_92=operator_overload_fun(type_90,fun_name_91,left_value_87,right_value_89,info);
    }
    if(_if_conditional147=!calling_fun_92,    _if_conditional147) {
        come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 664, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj67=come_value_93->c_value;
        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s<<=%s",left_value_87->c_value,right_value_89->c_value))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj68=come_value_93->type;
        come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_value_87->type))));
        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_93->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
        add_come_last_code(info,"%s;\n",come_value_93->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result85__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer2(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = self->sline;
    return __result86__;
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __dec_obj69;
void* right_value124;
struct sNode* __dec_obj70;
void* right_value125;
struct sNode* __dec_obj71;
struct sRShiftEqualNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj71=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result88__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result88__;
    come_call_finalizer2(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftEqualNode_terminated(){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sRShiftEqualNode_kind(){
void* __result_obj__;
void* right_value126;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sRShiftEqualNode")));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_94;
_Bool _if_conditional151;
_Bool __result91__;
void* right_value127;
struct CVALUE* left_value_95;
struct sNode* right_96;
_Bool _if_conditional152;
_Bool __result92__;
void* right_value128;
struct CVALUE* right_value_97;
struct sType* type_98;
char* fun_name_99;
_Bool calling_fun_100;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value129;
struct CVALUE* come_value_101;
void* right_value130;
char* __dec_obj72;
void* right_value131;
struct sType* __dec_obj73;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_94, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&left_value_95, 0, sizeof(struct CVALUE*));
memset(&right_96, 0, sizeof(struct sNode*));
right_value128 = (void*)0;
memset(&right_value_97, 0, sizeof(struct CVALUE*));
memset(&type_98, 0, sizeof(struct sType*));
memset(&fun_name_99, 0, sizeof(char*));
memset(&calling_fun_100, 0, sizeof(_Bool));
right_value129 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
    left_94=self->mLeft;
    if(_if_conditional151=!node_compile(left_94,info),    _if_conditional151) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    left_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_96=self->mRight;
    if(_if_conditional152=!node_compile(right_96,info),    _if_conditional152) {
        __result92__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result92__;
    }
    right_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_98=(struct sType*)come_increment_ref_count(left_value_95->type);
    fun_name_99="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun_100=(_Bool)0;
    }
    else {
        calling_fun_100=operator_overload_fun(type_98,fun_name_99,left_value_95,right_value_97,info);
    }
    if(_if_conditional154=!calling_fun_100,    _if_conditional154) {
        come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 752, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_101->c_value;
        come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s>>=%s",left_value_95->c_value,right_value_97->c_value))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj73=come_value_101->type;
        come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(left_value_95->type))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_101->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
        add_come_last_code(info,"%s;\n",come_value_101->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result93__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer2(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = self->sline;
    return __result94__;
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value132=__builtin_string(self->sname)));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __dec_obj74;
void* right_value134;
struct sNode* __dec_obj75;
void* right_value135;
struct sNode* __dec_obj76;
struct sXorEqualNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj76=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result96__ = __result_obj__ = self;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result96__;
    come_call_finalizer2(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXorEqualNode_terminated(){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = (_Bool)0;
    return __result97__;
}

char* sXorEqualNode_kind(){
void* __result_obj__;
void* right_value136;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sXorEqualNode")));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_102;
_Bool _if_conditional158;
_Bool __result99__;
void* right_value137;
struct CVALUE* left_value_103;
struct sNode* right_104;
_Bool _if_conditional159;
_Bool __result100__;
void* right_value138;
struct CVALUE* right_value_105;
struct sType* type_106;
char* fun_name_107;
_Bool calling_fun_108;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value139;
struct CVALUE* come_value_109;
void* right_value140;
char* __dec_obj77;
void* right_value141;
struct sType* __dec_obj78;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_102, 0, sizeof(struct sNode*));
right_value137 = (void*)0;
memset(&left_value_103, 0, sizeof(struct CVALUE*));
memset(&right_104, 0, sizeof(struct sNode*));
right_value138 = (void*)0;
memset(&right_value_105, 0, sizeof(struct CVALUE*));
memset(&type_106, 0, sizeof(struct sType*));
memset(&fun_name_107, 0, sizeof(char*));
memset(&calling_fun_108, 0, sizeof(_Bool));
right_value139 = (void*)0;
memset(&come_value_109, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
right_value141 = (void*)0;
    left_102=self->mLeft;
    if(_if_conditional158=!node_compile(left_102,info),    _if_conditional158) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_104=self->mRight;
    if(_if_conditional159=!node_compile(right_104,info),    _if_conditional159) {
        __result100__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result100__;
    }
    right_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_106=(struct sType*)come_increment_ref_count(left_value_103->type);
    fun_name_107="operator_xor_equal";
    if(self->mQuote) {
        calling_fun_108=(_Bool)0;
    }
    else {
        calling_fun_108=operator_overload_fun(type_106,fun_name_107,left_value_103,right_value_105,info);
    }
    if(_if_conditional161=!calling_fun_108,    _if_conditional161) {
        come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 840, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj77=come_value_109->c_value;
        come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s^=%s",left_value_103->c_value,right_value_105->c_value))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj78=come_value_109->type;
        come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(left_value_103->type))));
        come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_109->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
        add_come_last_code(info,"%s;\n",come_value_109->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result101__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = self->sline;
    return __result102__;
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value143;
char* __dec_obj79;
void* right_value144;
struct sNode* __dec_obj80;
void* right_value145;
struct sNode* __dec_obj81;
struct sOrEqualNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    self->sline=info->sline;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result104__ = __result_obj__ = self;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result104__;
    come_call_finalizer2(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrEqualNode_terminated(){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = (_Bool)0;
    return __result105__;
}

char* sOrEqualNode_kind(){
void* __result_obj__;
void* right_value146;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sOrEqualNode")));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_110;
_Bool _if_conditional165;
_Bool __result107__;
void* right_value147;
struct CVALUE* left_value_111;
struct sNode* right_112;
_Bool _if_conditional166;
_Bool __result108__;
void* right_value148;
struct CVALUE* right_value_113;
struct sType* type_114;
char* fun_name_115;
_Bool calling_fun_116;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value149;
struct CVALUE* come_value_117;
void* right_value150;
char* __dec_obj82;
void* right_value151;
struct sType* __dec_obj83;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_110, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&left_value_111, 0, sizeof(struct CVALUE*));
memset(&right_112, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&right_value_113, 0, sizeof(struct CVALUE*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&fun_name_115, 0, sizeof(char*));
memset(&calling_fun_116, 0, sizeof(_Bool));
right_value149 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    left_110=self->mLeft;
    if(_if_conditional165=!node_compile(left_110,info),    _if_conditional165) {
        __result107__ = (_Bool)0;
        return __result107__;
    }
    left_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_112=self->mRight;
    if(_if_conditional166=!node_compile(right_112,info),    _if_conditional166) {
        __result108__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result108__;
    }
    right_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_114=(struct sType*)come_increment_ref_count(left_value_111->type);
    fun_name_115="operator_or_equal";
    if(self->mQuote) {
        calling_fun_116=(_Bool)0;
    }
    else {
        calling_fun_116=operator_overload_fun(type_114,fun_name_115,left_value_111,right_value_113,info);
    }
    if(_if_conditional168=!calling_fun_116,    _if_conditional168) {
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 928, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=come_value_117->c_value;
        come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s|=%s",left_value_111->c_value,right_value_113->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj83=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(left_value_111->type))));
        come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_117->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        add_come_last_code(info,"%s;\n",come_value_117->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result109__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer2(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = self->sline;
    return __result110__;
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value152=__builtin_string(self->sname)));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __dec_obj84;
void* right_value154;
struct sNode* __dec_obj85;
void* right_value155;
struct sNode* __dec_obj86;
struct sAndEqualNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    self->sline=info->sline;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result112__ = __result_obj__ = self;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result112__;
    come_call_finalizer2(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndEqualNode_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sAndEqualNode_kind(){
void* __result_obj__;
void* right_value156;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sAndEqualNode")));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_118;
_Bool _if_conditional172;
_Bool __result115__;
void* right_value157;
struct CVALUE* left_value_119;
struct sNode* right_120;
_Bool _if_conditional173;
_Bool __result116__;
void* right_value158;
struct CVALUE* right_value_121;
struct sType* type_122;
char* fun_name_123;
_Bool calling_fun_124;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value159;
struct CVALUE* come_value_125;
void* right_value160;
char* __dec_obj87;
void* right_value161;
struct sType* __dec_obj88;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_118, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&left_value_119, 0, sizeof(struct CVALUE*));
memset(&right_120, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&right_value_121, 0, sizeof(struct CVALUE*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&fun_name_123, 0, sizeof(char*));
memset(&calling_fun_124, 0, sizeof(_Bool));
right_value159 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
    left_118=self->mLeft;
    if(_if_conditional172=!node_compile(left_118,info),    _if_conditional172) {
        __result115__ = (_Bool)0;
        return __result115__;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_120=self->mRight;
    if(_if_conditional173=!node_compile(right_120,info),    _if_conditional173) {
        __result116__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result116__;
    }
    right_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_122=(struct sType*)come_increment_ref_count(left_value_119->type);
    fun_name_123="operator_and_equal";
    if(self->mQuote) {
        calling_fun_124=(_Bool)0;
    }
    else {
        calling_fun_124=operator_overload_fun(type_122,fun_name_123,left_value_119,right_value_121,info);
    }
    if(_if_conditional175=!calling_fun_124,    _if_conditional175) {
        come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1016, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj87=come_value_125->c_value;
        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s&=%s",left_value_119->c_value,right_value_121->c_value))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj88=come_value_125->type;
        come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(left_value_119->type))));
        come_call_finalizer2(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_125->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
        add_come_last_code(info,"%s;\n",come_value_125->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result117__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result117__;
    come_call_finalizer2(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self->sline;
    return __result118__;
}

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj89;
void* right_value164;
struct sNode* __dec_obj90;
void* right_value165;
struct sNode* __dec_obj91;
struct sExpEqualNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(right))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result120__ = __result_obj__ = self;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result120__;
    come_call_finalizer2(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sExpEqualNode_terminated(){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    __result121__ = (_Bool)0;
    return __result121__;
}

char* sExpEqualNode_kind(){
void* __result_obj__;
void* right_value166;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sExpEqualNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_126;
_Bool _if_conditional179;
_Bool __result123__;
void* right_value167;
struct CVALUE* left_value_127;
struct sNode* right_128;
_Bool _if_conditional180;
_Bool __result124__;
void* right_value168;
struct CVALUE* right_value_129;
struct sType* type_130;
char* fun_name_131;
_Bool calling_fun_132;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value169;
struct CVALUE* come_value_133;
void* right_value170;
char* __dec_obj92;
void* right_value171;
struct sType* __dec_obj93;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_126, 0, sizeof(struct sNode*));
right_value167 = (void*)0;
memset(&left_value_127, 0, sizeof(struct CVALUE*));
memset(&right_128, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
memset(&right_value_129, 0, sizeof(struct CVALUE*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&fun_name_131, 0, sizeof(char*));
memset(&calling_fun_132, 0, sizeof(_Bool));
right_value169 = (void*)0;
memset(&come_value_133, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
    left_126=self->mLeft;
    if(_if_conditional179=!node_compile(left_126,info),    _if_conditional179) {
        __result123__ = (_Bool)0;
        return __result123__;
    }
    left_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_128=self->mRight;
    if(_if_conditional180=!node_compile(right_128,info),    _if_conditional180) {
        __result124__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result124__;
    }
    right_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_130=(struct sType*)come_increment_ref_count(left_value_127->type);
    fun_name_131="operator_exp_equal";
    if(self->mQuote) {
        calling_fun_132=(_Bool)0;
    }
    else {
        calling_fun_132=operator_overload_fun(type_130,fun_name_131,left_value_127,right_value_129,info);
    }
    if(_if_conditional182=!calling_fun_132,    _if_conditional182) {
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1104, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj92=come_value_133->c_value;
        come_value_133->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s=%s",left_value_127->c_value,right_value_129->c_value))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj93=come_value_133->type;
        come_value_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_value_127->type))));
        come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_133->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_133));
        add_come_last_code(info,"%s;\n",come_value_133->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result125__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result125__;
    come_call_finalizer2(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = self->sline;
    return __result126__;
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result127__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional183;
_Bool quote_134;
_Bool _if_conditional184;
void* right_value173;
void* right_value174;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value178;
struct sNode* __result130__;
_Bool _if_conditional192;
_Bool quote_136;
_Bool _if_conditional193;
void* right_value179;
void* right_value180;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value184;
struct sNode* __result133__;
_Bool _if_conditional201;
_Bool quote_138;
_Bool _if_conditional202;
void* right_value185;
struct sNode* right_node_139;
void* right_value186;
void* right_value187;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value192;
struct sNode* __result136__;
_Bool _if_conditional212;
_Bool quote_141;
_Bool _if_conditional213;
void* right_value193;
struct sNode* right_node_142;
void* right_value194;
void* right_value195;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value200;
struct sNode* __result139__;
_Bool _if_conditional223;
_Bool quote_144;
_Bool _if_conditional224;
void* right_value201;
struct sNode* right_node_145;
void* right_value202;
void* right_value203;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value208;
struct sNode* __result142__;
_Bool _if_conditional234;
_Bool quote_147;
_Bool _if_conditional235;
void* right_value209;
struct sNode* right_node_148;
void* right_value210;
void* right_value211;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value216;
struct sNode* __result145__;
_Bool _if_conditional245;
_Bool quote_150;
_Bool _if_conditional246;
void* right_value217;
struct sNode* right_node_151;
void* right_value218;
void* right_value219;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value224;
struct sNode* __result148__;
_Bool _if_conditional256;
_Bool quote_153;
_Bool _if_conditional257;
void* right_value225;
struct sNode* right_node_154;
void* right_value226;
void* right_value227;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value232;
struct sNode* __result151__;
_Bool _if_conditional267;
_Bool quote_156;
_Bool _if_conditional268;
void* right_value233;
struct sNode* right_node_157;
void* right_value234;
void* right_value235;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value240;
struct sNode* __result154__;
_Bool _if_conditional278;
_Bool quote_159;
_Bool _if_conditional279;
void* right_value241;
struct sNode* right_node_160;
void* right_value242;
void* right_value243;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value248;
struct sNode* __result157__;
_Bool _if_conditional289;
_Bool quote_162;
_Bool _if_conditional290;
void* right_value249;
struct sNode* right_node_163;
void* right_value250;
void* right_value251;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value256;
struct sNode* __result160__;
_Bool _if_conditional300;
_Bool quote_165;
_Bool _if_conditional301;
void* right_value257;
struct sNode* right_node_166;
void* right_value258;
void* right_value259;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value264;
struct sNode* __result163__;
_Bool _if_conditional311;
_Bool quote_168;
_Bool _if_conditional312;
void* right_value265;
struct sNode* right_node_169;
void* right_value266;
void* right_value267;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value272;
struct sNode* __result166__;
struct sNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_134, 0, sizeof(_Bool));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value178 = (void*)0;
memset(&quote_136, 0, sizeof(_Bool));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value184 = (void*)0;
memset(&quote_138, 0, sizeof(_Bool));
right_value185 = (void*)0;
memset(&right_node_139, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value192 = (void*)0;
memset(&quote_141, 0, sizeof(_Bool));
right_value193 = (void*)0;
memset(&right_node_142, 0, sizeof(struct sNode*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value200 = (void*)0;
memset(&quote_144, 0, sizeof(_Bool));
right_value201 = (void*)0;
memset(&right_node_145, 0, sizeof(struct sNode*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value208 = (void*)0;
memset(&quote_147, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&right_node_148, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value216 = (void*)0;
memset(&quote_150, 0, sizeof(_Bool));
right_value217 = (void*)0;
memset(&right_node_151, 0, sizeof(struct sNode*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value224 = (void*)0;
memset(&quote_153, 0, sizeof(_Bool));
right_value225 = (void*)0;
memset(&right_node_154, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value232 = (void*)0;
memset(&quote_156, 0, sizeof(_Bool));
right_value233 = (void*)0;
memset(&right_node_157, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value240 = (void*)0;
memset(&quote_159, 0, sizeof(_Bool));
right_value241 = (void*)0;
memset(&right_node_160, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value248 = (void*)0;
memset(&quote_162, 0, sizeof(_Bool));
right_value249 = (void*)0;
memset(&right_node_163, 0, sizeof(struct sNode*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value256 = (void*)0;
memset(&quote_165, 0, sizeof(_Bool));
right_value257 = (void*)0;
memset(&right_node_166, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value264 = (void*)0;
memset(&quote_168, 0, sizeof(_Bool));
right_value265 = (void*)0;
memset(&right_node_169, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value272 = (void*)0;
    if(_if_conditional183=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43),    _if_conditional183) {
        if(_if_conditional184=*info->p==92,        _if_conditional184) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_134=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_134=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1143, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value174=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value173=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 1143, "struct sPlusPlusNode")))),(struct sNode*)come_increment_ref_count(node),quote_134,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sPlusPlusNode_sline;
        _inf_value1->sname=(void*)sPlusPlusNode_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result130__ = __result_obj__ = ((struct sNode*)(right_value178=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sPlusPlusNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sPlusPlusNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result130__;
    }
    else {
        if(_if_conditional192=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45),        _if_conditional192) {
            if(_if_conditional193=*info->p==92,            _if_conditional193) {
                info->p+=3;
                skip_spaces_and_lf(info);
                quote_136=(_Bool)1;
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
                quote_136=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1158, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value180=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value179=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 1158, "struct sMinusMinusNode")))),(struct sNode*)come_increment_ref_count(node),quote_136,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sMinusMinusNode_sline;
            _inf_value2->sname=(void*)sMinusMinusNode_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result133__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer2(sMinusMinusNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMinusMinusNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result133__;
        }
        else {
            if(_if_conditional201=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61),            _if_conditional201) {
                if(_if_conditional202=*info->p==92,                _if_conditional202) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    quote_138=(_Bool)1;
                }
                else {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    quote_138=(_Bool)0;
                }
                right_node_139=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=expression_v13(info))));
                if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1175, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value187=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value186=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 1175, "struct sPlusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_139),quote_138,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sPlusEqualNode_sline;
                _inf_value3->sname=(void*)sPlusEqualNode_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result136__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value3));
                if(right_node_139) { right_node_139 = come_decrement_ref_count2(right_node_139, ((struct sNode*)right_node_139)->finalize, ((struct sNode*)right_node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer2(sPlusEqualNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sPlusEqualNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result136__;
                if(right_node_139) { right_node_139 = come_decrement_ref_count2(right_node_139, ((struct sNode*)right_node_139)->finalize, ((struct sNode*)right_node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional212=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61),                _if_conditional212) {
                    if(_if_conditional213=*info->p==92,                    _if_conditional213) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        quote_141=(_Bool)1;
                    }
                    else {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        quote_141=(_Bool)0;
                    }
                    right_node_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=expression_v13(info))));
                    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1192, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value195=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value194=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 1192, "struct sMinusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_142),quote_141,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sMinusEqualNode_sline;
                    _inf_value4->sname=(void*)sMinusEqualNode_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result139__ = __result_obj__ = ((struct sNode*)(right_value200=_inf_value4));
                    if(right_node_142) { right_node_142 = come_decrement_ref_count2(right_node_142, ((struct sNode*)right_node_142)->finalize, ((struct sNode*)right_node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sMinusEqualNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result139__;
                    if(right_node_142) { right_node_142 = come_decrement_ref_count2(right_node_142, ((struct sNode*)right_node_142)->finalize, ((struct sNode*)right_node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional223=(*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61),                    _if_conditional223) {
                        if(_if_conditional224=*info->p==92,                        _if_conditional224) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            quote_144=(_Bool)1;
                        }
                        else {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            quote_144=(_Bool)0;
                        }
                        right_node_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=expression_v13(info))));
                        if(right_value201) { right_value201 = come_decrement_ref_count2(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1209, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value203=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value202=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 1209, "struct sMultEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_145),quote_144,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sMultEqualNode_sline;
                        _inf_value5->sname=(void*)sMultEqualNode_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result142__ = __result_obj__ = ((struct sNode*)(right_value208=_inf_value5));
                        if(right_node_145) { right_node_145 = come_decrement_ref_count2(right_node_145, ((struct sNode*)right_node_145)->finalize, ((struct sNode*)right_node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer2(sMultEqualNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultEqualNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result142__;
                        if(right_node_145) { right_node_145 = come_decrement_ref_count2(right_node_145, ((struct sNode*)right_node_145)->finalize, ((struct sNode*)right_node_145)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional234=(*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61),                        _if_conditional234) {
                            if(_if_conditional235=*info->p==92,                            _if_conditional235) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                quote_147=(_Bool)1;
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                quote_147=(_Bool)0;
                            }
                            right_node_148=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=expression_v13(info))));
                            if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1226, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value211=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value210=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 1226, "struct sDivEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_148),quote_147,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sDivEqualNode_sline;
                            _inf_value6->sname=(void*)sDivEqualNode_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result145__ = __result_obj__ = ((struct sNode*)(right_value216=_inf_value6));
                            if(right_node_148) { right_node_148 = come_decrement_ref_count2(right_node_148, ((struct sNode*)right_node_148)->finalize, ((struct sNode*)right_node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer2(sDivEqualNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivEqualNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result145__;
                            if(right_node_148) { right_node_148 = come_decrement_ref_count2(right_node_148, ((struct sNode*)right_node_148)->finalize, ((struct sNode*)right_node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional245=(*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61),                            _if_conditional245) {
                                if(_if_conditional246=*info->p==92,                                _if_conditional246) {
                                    info->p+=3;
                                    skip_spaces_and_lf(info);
                                    quote_150=(_Bool)1;
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_150=(_Bool)0;
                                }
                                right_node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=expression_v13(info))));
                                if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1244, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value219=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value218=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 1244, "struct sModEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_151),quote_150,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sModEqualNode_sline;
                                _inf_value7->sname=(void*)sModEqualNode_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result148__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value7));
                                if(right_node_151) { right_node_151 = come_decrement_ref_count2(right_node_151, ((struct sNode*)right_node_151)->finalize, ((struct sNode*)right_node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer2(sModEqualNode_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModEqualNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result148__;
                                if(right_node_151) { right_node_151 = come_decrement_ref_count2(right_node_151, ((struct sNode*)right_node_151)->finalize, ((struct sNode*)right_node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional256=(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61),                                _if_conditional256) {
                                    if(_if_conditional257=*info->p==92,                                    _if_conditional257) {
                                        info->p+=4;
                                        skip_spaces_and_lf(info);
                                        quote_153=(_Bool)1;
                                    }
                                    else {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        quote_153=(_Bool)0;
                                    }
                                    right_node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=expression_v13(info))));
                                    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1261, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value227=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value226=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 1261, "struct sLShifEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_154),quote_153,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sLShifEqualNode_sline;
                                    _inf_value8->sname=(void*)sLShifEqualNode_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result151__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value8));
                                    if(right_node_154) { right_node_154 = come_decrement_ref_count2(right_node_154, ((struct sNode*)right_node_154)->finalize, ((struct sNode*)right_node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sLShifEqualNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result151__;
                                    if(right_node_154) { right_node_154 = come_decrement_ref_count2(right_node_154, ((struct sNode*)right_node_154)->finalize, ((struct sNode*)right_node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional267=(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61),                                    _if_conditional267) {
                                        if(_if_conditional268=*info->p==92,                                        _if_conditional268) {
                                            info->p+=4;
                                            skip_spaces_and_lf(info);
                                            quote_156=(_Bool)1;
                                        }
                                        else {
                                            info->p+=3;
                                            skip_spaces_and_lf(info);
                                            quote_156=(_Bool)0;
                                        }
                                        right_node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=expression_v13(info))));
                                        if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1278, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value235=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value234=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 1278, "struct sRShiftEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_157),quote_156,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sRShiftEqualNode_sline;
                                        _inf_value9->sname=(void*)sRShiftEqualNode_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result154__ = __result_obj__ = ((struct sNode*)(right_value240=_inf_value9));
                                        if(right_node_157) { right_node_157 = come_decrement_ref_count2(right_node_157, ((struct sNode*)right_node_157)->finalize, ((struct sNode*)right_node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sRShiftEqualNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result154__;
                                        if(right_node_157) { right_node_157 = come_decrement_ref_count2(right_node_157, ((struct sNode*)right_node_157)->finalize, ((struct sNode*)right_node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional278=(*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61),                                        _if_conditional278) {
                                            if(_if_conditional279=*info->p==92,                                            _if_conditional279) {
                                                info->p+=3;
                                                skip_spaces_and_lf(info);
                                                quote_159=(_Bool)1;
                                            }
                                            else {
                                                info->p+=2;
                                                skip_spaces_and_lf(info);
                                                quote_159=(_Bool)0;
                                            }
                                            right_node_160=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=expression_v13(info))));
                                            if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1295, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value243=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value242=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1295, "struct sXorEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_160),quote_159,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sXorEqualNode_sline;
                                            _inf_value10->sname=(void*)sXorEqualNode_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result157__ = __result_obj__ = ((struct sNode*)(right_value248=_inf_value10));
                                            if(right_node_160) { right_node_160 = come_decrement_ref_count2(right_node_160, ((struct sNode*)right_node_160)->finalize, ((struct sNode*)right_node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sXorEqualNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result157__;
                                            if(right_node_160) { right_node_160 = come_decrement_ref_count2(right_node_160, ((struct sNode*)right_node_160)->finalize, ((struct sNode*)right_node_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional289=(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61),                                            _if_conditional289) {
                                                if(_if_conditional290=*info->p==92,                                                _if_conditional290) {
                                                    info->p+=3;
                                                    skip_spaces_and_lf(info);
                                                    quote_162=(_Bool)1;
                                                }
                                                else {
                                                    info->p+=2;
                                                    skip_spaces_and_lf(info);
                                                    quote_162=(_Bool)0;
                                                }
                                                right_node_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=expression_v13(info))));
                                                if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1312, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value251=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value250=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1312, "struct sAndEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_163),quote_162,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sAndEqualNode_sline;
                                                _inf_value11->sname=(void*)sAndEqualNode_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result160__ = __result_obj__ = ((struct sNode*)(right_value256=_inf_value11));
                                                if(right_node_163) { right_node_163 = come_decrement_ref_count2(right_node_163, ((struct sNode*)right_node_163)->finalize, ((struct sNode*)right_node_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sAndEqualNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result160__;
                                                if(right_node_163) { right_node_163 = come_decrement_ref_count2(right_node_163, ((struct sNode*)right_node_163)->finalize, ((struct sNode*)right_node_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional300=(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61),                                                _if_conditional300) {
                                                    if(_if_conditional301=*info->p==92,                                                    _if_conditional301) {
                                                        info->p+=3;
                                                        skip_spaces_and_lf(info);
                                                        quote_165=(_Bool)1;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        quote_165=(_Bool)0;
                                                    }
                                                    right_node_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=expression_v13(info))));
                                                    if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1329, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value259=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value258=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1329, "struct sOrEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_166),quote_165,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sOrEqualNode_sline;
                                                    _inf_value12->sname=(void*)sOrEqualNode_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result163__ = __result_obj__ = ((struct sNode*)(right_value264=_inf_value12));
                                                    if(right_node_166) { right_node_166 = come_decrement_ref_count2(right_node_166, ((struct sNode*)right_node_166)->finalize, ((struct sNode*)right_node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sOrEqualNode_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result163__;
                                                    if(right_node_166) { right_node_166 = come_decrement_ref_count2(right_node_166, ((struct sNode*)right_node_166)->finalize, ((struct sNode*)right_node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional311=(*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61),                                                    _if_conditional311) {
                                                        if(_if_conditional312=*info->p==92,                                                        _if_conditional312) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            quote_168=(_Bool)1;
                                                        }
                                                        else {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            quote_168=(_Bool)0;
                                                        }
                                                        right_node_169=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=expression_v13(info))));
                                                        if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1346, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value267=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value266=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1346, "struct sExpEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_169),quote_168,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sExpEqualNode_sline;
                                                        _inf_value13->sname=(void*)sExpEqualNode_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result166__ = __result_obj__ = ((struct sNode*)(right_value272=_inf_value13));
                                                        if(right_node_169) { right_node_169 = come_decrement_ref_count2(right_node_169, ((struct sNode*)right_node_169)->finalize, ((struct sNode*)right_node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sExpEqualNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result166__;
                                                        if(right_node_169) { right_node_169 = come_decrement_ref_count2(right_node_169, ((struct sNode*)right_node_169)->finalize, ((struct sNode*)right_node_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result167__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result167__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional185=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional185) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional186=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional186) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional187;
struct sPlusPlusNode* __result128__;
void* right_value175;
struct sPlusPlusNode* result_135;
_Bool _if_conditional188;
void* right_value176;
struct sNode* __dec_obj94;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value177;
char* __dec_obj95;
_Bool _if_conditional191;
struct sPlusPlusNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
memset(&result_135, 0, sizeof(struct sPlusPlusNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
            if(_if_conditional187=self==(void*)0,            _if_conditional187) {
                __result128__ = __result_obj__ = (void*)0;
                return __result128__;
            }
            result_135=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value175=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "struct sPlusPlusNode"))));
            come_call_finalizer2(sPlusPlusNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=self!=((void*)0)&&self->mLeft!=((void*)0),            _if_conditional188) {
                __dec_obj94=result_135->mLeft;
                result_135->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value176=sNode_clone(self->mLeft))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional189=self!=((void*)0),            _if_conditional189) {
                result_135->sline=self->sline;
            }
            if(_if_conditional190=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional190) {
                __dec_obj95=result_135->sname;
                result_135->sname=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->sname))));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional191=self!=((void*)0),            _if_conditional191) {
                result_135->mQuote=self->mQuote;
            }
            __result129__ = __result_obj__ = result_135;
            come_call_finalizer2(sPlusPlusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result129__;
            come_call_finalizer2(sPlusPlusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional194=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional194) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional195=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional195) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional196;
struct sMinusMinusNode* __result131__;
void* right_value181;
struct sMinusMinusNode* result_137;
_Bool _if_conditional197;
void* right_value182;
struct sNode* __dec_obj96;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value183;
char* __dec_obj97;
struct sMinusMinusNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
memset(&result_137, 0, sizeof(struct sMinusMinusNode*));
right_value182 = (void*)0;
right_value183 = (void*)0;
                if(_if_conditional196=self==(void*)0,                _if_conditional196) {
                    __result131__ = __result_obj__ = (void*)0;
                    return __result131__;
                }
                result_137=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value181=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "struct sMinusMinusNode"))));
                come_call_finalizer2(sMinusMinusNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional197=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional197) {
                    __dec_obj96=result_137->mLeft;
                    result_137->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(self->mLeft))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional198=self!=((void*)0),                _if_conditional198) {
                    result_137->mQuote=self->mQuote;
                }
                if(_if_conditional199=self!=((void*)0),                _if_conditional199) {
                    result_137->sline=self->sline;
                }
                if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional200) {
                    __dec_obj97=result_137->sname;
                    result_137->sname=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->sname))));
                    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result132__ = __result_obj__ = result_137;
                come_call_finalizer2(sMinusMinusNode_finalize,result_137, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result132__;
                come_call_finalizer2(sMinusMinusNode_finalize,result_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional203=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional203) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional204=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional204) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional205=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional205) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional206;
struct sPlusEqualNode* __result134__;
void* right_value188;
struct sPlusEqualNode* result_140;
_Bool _if_conditional207;
void* right_value189;
struct sNode* __dec_obj98;
_Bool _if_conditional208;
void* right_value190;
struct sNode* __dec_obj99;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value191;
char* __dec_obj100;
struct sPlusEqualNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
memset(&result_140, 0, sizeof(struct sPlusEqualNode*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
                    if(_if_conditional206=self==(void*)0,                    _if_conditional206) {
                        __result134__ = __result_obj__ = (void*)0;
                        return __result134__;
                    }
                    result_140=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value188=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "struct sPlusEqualNode"))));
                    come_call_finalizer2(sPlusEqualNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional207=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional207) {
                        __dec_obj98=result_140->mLeft;
                        result_140->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(self->mLeft))));
                        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value189) { right_value189 = come_decrement_ref_count2(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional208=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional208) {
                        __dec_obj99=result_140->mRight;
                        result_140->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(self->mRight))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional209=self!=((void*)0),                    _if_conditional209) {
                        result_140->mQuote=self->mQuote;
                    }
                    if(_if_conditional210=self!=((void*)0),                    _if_conditional210) {
                        result_140->sline=self->sline;
                    }
                    if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional211) {
                        __dec_obj100=result_140->sname;
                        result_140->sname=(char*)come_increment_ref_count(((char*)(right_value191=string_clone(self->sname))));
                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result135__ = __result_obj__ = result_140;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result135__;
                    come_call_finalizer2(sPlusEqualNode_finalize,result_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional214=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional214) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional215=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional215) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional216) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional217;
struct sMinusEqualNode* __result137__;
void* right_value196;
struct sMinusEqualNode* result_143;
_Bool _if_conditional218;
void* right_value197;
struct sNode* __dec_obj101;
_Bool _if_conditional219;
void* right_value198;
struct sNode* __dec_obj102;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value199;
char* __dec_obj103;
struct sMinusEqualNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&result_143, 0, sizeof(struct sMinusEqualNode*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
                        if(_if_conditional217=self==(void*)0,                        _if_conditional217) {
                            __result137__ = __result_obj__ = (void*)0;
                            return __result137__;
                        }
                        result_143=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value196=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "struct sMinusEqualNode"))));
                        come_call_finalizer2(sMinusEqualNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional218=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional218) {
                            __dec_obj101=result_143->mLeft;
                            result_143->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(self->mLeft))));
                            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional219=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional219) {
                            __dec_obj102=result_143->mRight;
                            result_143->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(self->mRight))));
                            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value198) { right_value198 = come_decrement_ref_count2(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional220=self!=((void*)0),                        _if_conditional220) {
                            result_143->mQuote=self->mQuote;
                        }
                        if(_if_conditional221=self!=((void*)0),                        _if_conditional221) {
                            result_143->sline=self->sline;
                        }
                        if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional222) {
                            __dec_obj103=result_143->sname;
                            result_143->sname=(char*)come_increment_ref_count(((char*)(right_value199=string_clone(self->sname))));
                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result138__ = __result_obj__ = result_143;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result138__;
                        come_call_finalizer2(sMinusEqualNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional225=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional225) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional226=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional226) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional227) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sMultEqualNode* __result140__;
void* right_value204;
struct sMultEqualNode* result_146;
_Bool _if_conditional229;
void* right_value205;
struct sNode* __dec_obj104;
_Bool _if_conditional230;
void* right_value206;
struct sNode* __dec_obj105;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value207;
char* __dec_obj106;
struct sMultEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
memset(&result_146, 0, sizeof(struct sMultEqualNode*));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
                            if(_if_conditional228=self==(void*)0,                            _if_conditional228) {
                                __result140__ = __result_obj__ = (void*)0;
                                return __result140__;
                            }
                            result_146=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value204=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "struct sMultEqualNode"))));
                            come_call_finalizer2(sMultEqualNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional229=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional229) {
                                __dec_obj104=result_146->mLeft;
                                result_146->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(self->mLeft))));
                                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional230=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional230) {
                                __dec_obj105=result_146->mRight;
                                result_146->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=sNode_clone(self->mRight))));
                                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional231=self!=((void*)0),                            _if_conditional231) {
                                result_146->mQuote=self->mQuote;
                            }
                            if(_if_conditional232=self!=((void*)0),                            _if_conditional232) {
                                result_146->sline=self->sline;
                            }
                            if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional233) {
                                __dec_obj106=result_146->sname;
                                result_146->sname=(char*)come_increment_ref_count(((char*)(right_value207=string_clone(self->sname))));
                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result141__ = __result_obj__ = result_146;
                            come_call_finalizer2(sMultEqualNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result141__;
                            come_call_finalizer2(sMultEqualNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional236=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional236) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional237=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional237) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional238) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional239;
struct sDivEqualNode* __result143__;
void* right_value212;
struct sDivEqualNode* result_149;
_Bool _if_conditional240;
void* right_value213;
struct sNode* __dec_obj107;
_Bool _if_conditional241;
void* right_value214;
struct sNode* __dec_obj108;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value215;
char* __dec_obj109;
struct sDivEqualNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
memset(&result_149, 0, sizeof(struct sDivEqualNode*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
                                if(_if_conditional239=self==(void*)0,                                _if_conditional239) {
                                    __result143__ = __result_obj__ = (void*)0;
                                    return __result143__;
                                }
                                result_149=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value212=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "struct sDivEqualNode"))));
                                come_call_finalizer2(sDivEqualNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional240=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional240) {
                                    __dec_obj107=result_149->mLeft;
                                    result_149->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNode_clone(self->mLeft))));
                                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional241=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional241) {
                                    __dec_obj108=result_149->mRight;
                                    result_149->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(self->mRight))));
                                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional242=self!=((void*)0),                                _if_conditional242) {
                                    result_149->mQuote=self->mQuote;
                                }
                                if(_if_conditional243=self!=((void*)0),                                _if_conditional243) {
                                    result_149->sline=self->sline;
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional244) {
                                    __dec_obj109=result_149->sname;
                                    result_149->sname=(char*)come_increment_ref_count(((char*)(right_value215=string_clone(self->sname))));
                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result144__ = __result_obj__ = result_149;
                                come_call_finalizer2(sDivEqualNode_finalize,result_149, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result144__;
                                come_call_finalizer2(sDivEqualNode_finalize,result_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional247=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional247) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional248=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional248) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional249) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sModEqualNode* __result146__;
void* right_value220;
struct sModEqualNode* result_152;
_Bool _if_conditional251;
void* right_value221;
struct sNode* __dec_obj110;
_Bool _if_conditional252;
void* right_value222;
struct sNode* __dec_obj111;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value223;
char* __dec_obj112;
struct sModEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&result_152, 0, sizeof(struct sModEqualNode*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
                                    if(_if_conditional250=self==(void*)0,                                    _if_conditional250) {
                                        __result146__ = __result_obj__ = (void*)0;
                                        return __result146__;
                                    }
                                    result_152=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value220=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "struct sModEqualNode"))));
                                    come_call_finalizer2(sModEqualNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional251=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional251) {
                                        __dec_obj110=result_152->mLeft;
                                        result_152->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=sNode_clone(self->mLeft))));
                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value221) { right_value221 = come_decrement_ref_count2(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional252=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional252) {
                                        __dec_obj111=result_152->mRight;
                                        result_152->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(self->mRight))));
                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional253=self!=((void*)0),                                    _if_conditional253) {
                                        result_152->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional254=self!=((void*)0),                                    _if_conditional254) {
                                        result_152->sline=self->sline;
                                    }
                                    if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional255) {
                                        __dec_obj112=result_152->sname;
                                        result_152->sname=(char*)come_increment_ref_count(((char*)(right_value223=string_clone(self->sname))));
                                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result147__ = __result_obj__ = result_152;
                                    come_call_finalizer2(sModEqualNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result147__;
                                    come_call_finalizer2(sModEqualNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional258=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional258) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional259=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional259) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional260) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional261;
struct sLShifEqualNode* __result149__;
void* right_value228;
struct sLShifEqualNode* result_155;
_Bool _if_conditional262;
void* right_value229;
struct sNode* __dec_obj113;
_Bool _if_conditional263;
void* right_value230;
struct sNode* __dec_obj114;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value231;
char* __dec_obj115;
struct sLShifEqualNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
memset(&result_155, 0, sizeof(struct sLShifEqualNode*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
                                        if(_if_conditional261=self==(void*)0,                                        _if_conditional261) {
                                            __result149__ = __result_obj__ = (void*)0;
                                            return __result149__;
                                        }
                                        result_155=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value228=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "struct sLShifEqualNode"))));
                                        come_call_finalizer2(sLShifEqualNode_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional262=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional262) {
                                            __dec_obj113=result_155->mLeft;
                                            result_155->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(self->mLeft))));
                                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value229) { right_value229 = come_decrement_ref_count2(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional263=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional263) {
                                            __dec_obj114=result_155->mRight;
                                            result_155->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(self->mRight))));
                                            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional264=self!=((void*)0),                                        _if_conditional264) {
                                            result_155->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional265=self!=((void*)0),                                        _if_conditional265) {
                                            result_155->sline=self->sline;
                                        }
                                        if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional266) {
                                            __dec_obj115=result_155->sname;
                                            result_155->sname=(char*)come_increment_ref_count(((char*)(right_value231=string_clone(self->sname))));
                                            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result150__ = __result_obj__ = result_155;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_155, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result150__;
                                        come_call_finalizer2(sLShifEqualNode_finalize,result_155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional269=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional269) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional270=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional270) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional271) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional272;
struct sRShiftEqualNode* __result152__;
void* right_value236;
struct sRShiftEqualNode* result_158;
_Bool _if_conditional273;
void* right_value237;
struct sNode* __dec_obj116;
_Bool _if_conditional274;
void* right_value238;
struct sNode* __dec_obj117;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value239;
char* __dec_obj118;
struct sRShiftEqualNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
memset(&result_158, 0, sizeof(struct sRShiftEqualNode*));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
                                            if(_if_conditional272=self==(void*)0,                                            _if_conditional272) {
                                                __result152__ = __result_obj__ = (void*)0;
                                                return __result152__;
                                            }
                                            result_158=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value236=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "struct sRShiftEqualNode"))));
                                            come_call_finalizer2(sRShiftEqualNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional273=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional273) {
                                                __dec_obj116=result_158->mLeft;
                                                result_158->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(self->mLeft))));
                                                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional274=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional274) {
                                                __dec_obj117=result_158->mRight;
                                                result_158->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(self->mRight))));
                                                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional275=self!=((void*)0),                                            _if_conditional275) {
                                                result_158->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional276=self!=((void*)0),                                            _if_conditional276) {
                                                result_158->sline=self->sline;
                                            }
                                            if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional277) {
                                                __dec_obj118=result_158->sname;
                                                result_158->sname=(char*)come_increment_ref_count(((char*)(right_value239=string_clone(self->sname))));
                                                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result153__ = __result_obj__ = result_158;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result153__;
                                            come_call_finalizer2(sRShiftEqualNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional280=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional280) {
                                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional281=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional281) {
                                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional282) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional283;
struct sXorEqualNode* __result155__;
void* right_value244;
struct sXorEqualNode* result_161;
_Bool _if_conditional284;
void* right_value245;
struct sNode* __dec_obj119;
_Bool _if_conditional285;
void* right_value246;
struct sNode* __dec_obj120;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value247;
char* __dec_obj121;
struct sXorEqualNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&result_161, 0, sizeof(struct sXorEqualNode*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
                                                if(_if_conditional283=self==(void*)0,                                                _if_conditional283) {
                                                    __result155__ = __result_obj__ = (void*)0;
                                                    return __result155__;
                                                }
                                                result_161=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value244=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "struct sXorEqualNode"))));
                                                come_call_finalizer2(sXorEqualNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional284=self!=((void*)0)&&self->mLeft!=((void*)0),                                                _if_conditional284) {
                                                    __dec_obj119=result_161->mLeft;
                                                    result_161->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(self->mLeft))));
                                                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional285=self!=((void*)0)&&self->mRight!=((void*)0),                                                _if_conditional285) {
                                                    __dec_obj120=result_161->mRight;
                                                    result_161->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(self->mRight))));
                                                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional286=self!=((void*)0),                                                _if_conditional286) {
                                                    result_161->mQuote=self->mQuote;
                                                }
                                                if(_if_conditional287=self!=((void*)0),                                                _if_conditional287) {
                                                    result_161->sline=self->sline;
                                                }
                                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional288) {
                                                    __dec_obj121=result_161->sname;
                                                    result_161->sname=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(self->sname))));
                                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result156__ = __result_obj__ = result_161;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result156__;
                                                come_call_finalizer2(sXorEqualNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional291=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional291) {
                                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional292=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional292) {
                                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional293) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional294;
struct sAndEqualNode* __result158__;
void* right_value252;
struct sAndEqualNode* result_164;
_Bool _if_conditional295;
void* right_value253;
struct sNode* __dec_obj122;
_Bool _if_conditional296;
void* right_value254;
struct sNode* __dec_obj123;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value255;
char* __dec_obj124;
struct sAndEqualNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
memset(&result_164, 0, sizeof(struct sAndEqualNode*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
                                                    if(_if_conditional294=self==(void*)0,                                                    _if_conditional294) {
                                                        __result158__ = __result_obj__ = (void*)0;
                                                        return __result158__;
                                                    }
                                                    result_164=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value252=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "struct sAndEqualNode"))));
                                                    come_call_finalizer2(sAndEqualNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional295=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    _if_conditional295) {
                                                        __dec_obj122=result_164->mLeft;
                                                        result_164->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(self->mLeft))));
                                                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional296=self!=((void*)0)&&self->mRight!=((void*)0),                                                    _if_conditional296) {
                                                        __dec_obj123=result_164->mRight;
                                                        result_164->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(self->mRight))));
                                                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional297=self!=((void*)0),                                                    _if_conditional297) {
                                                        result_164->mQuote=self->mQuote;
                                                    }
                                                    if(_if_conditional298=self!=((void*)0),                                                    _if_conditional298) {
                                                        result_164->sline=self->sline;
                                                    }
                                                    if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional299) {
                                                        __dec_obj124=result_164->sname;
                                                        result_164->sname=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(self->sname))));
                                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result159__ = __result_obj__ = result_164;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result159__;
                                                    come_call_finalizer2(sAndEqualNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional302=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional302) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional303=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional303) {
                                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional304) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional305;
struct sOrEqualNode* __result161__;
void* right_value260;
struct sOrEqualNode* result_167;
_Bool _if_conditional306;
void* right_value261;
struct sNode* __dec_obj125;
_Bool _if_conditional307;
void* right_value262;
struct sNode* __dec_obj126;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value263;
char* __dec_obj127;
struct sOrEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
memset(&result_167, 0, sizeof(struct sOrEqualNode*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
                                                        if(_if_conditional305=self==(void*)0,                                                        _if_conditional305) {
                                                            __result161__ = __result_obj__ = (void*)0;
                                                            return __result161__;
                                                        }
                                                        result_167=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value260=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "struct sOrEqualNode"))));
                                                        come_call_finalizer2(sOrEqualNode_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional306=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional306) {
                                                            __dec_obj125=result_167->mLeft;
                                                            result_167->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(self->mLeft))));
                                                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional307=self!=((void*)0)&&self->mRight!=((void*)0),                                                        _if_conditional307) {
                                                            __dec_obj126=result_167->mRight;
                                                            result_167->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(self->mRight))));
                                                            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional308=self!=((void*)0),                                                        _if_conditional308) {
                                                            result_167->mQuote=self->mQuote;
                                                        }
                                                        if(_if_conditional309=self!=((void*)0),                                                        _if_conditional309) {
                                                            result_167->sline=self->sline;
                                                        }
                                                        if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional310) {
                                                            __dec_obj127=result_167->sname;
                                                            result_167->sname=(char*)come_increment_ref_count(((char*)(right_value263=string_clone(self->sname))));
                                                            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result162__ = __result_obj__ = result_167;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result162__;
                                                        come_call_finalizer2(sOrEqualNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional313=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional313) {
                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional314=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional314) {
                                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional315) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional316;
struct sExpEqualNode* __result164__;
void* right_value268;
struct sExpEqualNode* result_170;
_Bool _if_conditional317;
void* right_value269;
struct sNode* __dec_obj128;
_Bool _if_conditional318;
void* right_value270;
struct sNode* __dec_obj129;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value271;
char* __dec_obj130;
struct sExpEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
memset(&result_170, 0, sizeof(struct sExpEqualNode*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
                                                            if(_if_conditional316=self==(void*)0,                                                            _if_conditional316) {
                                                                __result164__ = __result_obj__ = (void*)0;
                                                                return __result164__;
                                                            }
                                                            result_170=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value268=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "struct sExpEqualNode"))));
                                                            come_call_finalizer2(sExpEqualNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional317=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            _if_conditional317) {
                                                                __dec_obj128=result_170->mLeft;
                                                                result_170->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(self->mLeft))));
                                                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional318=self!=((void*)0)&&self->mRight!=((void*)0),                                                            _if_conditional318) {
                                                                __dec_obj129=result_170->mRight;
                                                                result_170->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(self->mRight))));
                                                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional319=self!=((void*)0),                                                            _if_conditional319) {
                                                                result_170->mQuote=self->mQuote;
                                                            }
                                                            if(_if_conditional320=self!=((void*)0),                                                            _if_conditional320) {
                                                                result_170->sline=self->sline;
                                                            }
                                                            if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional321) {
                                                                __dec_obj130=result_170->sname;
                                                                result_170->sname=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(self->sname))));
                                                                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result165__ = __result_obj__ = result_170;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result165__;
                                                            come_call_finalizer2(sExpEqualNode_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

