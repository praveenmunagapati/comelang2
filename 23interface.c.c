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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info);

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info);

_Bool sInterfaceNode_terminated();

char* sInterfaceNode_kind();

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
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
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value62;
struct sClass* __dec_obj39;
void* right_value63;
char* __dec_obj40;
struct sInterfaceNode* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
    __dec_obj6=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(name))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj39=self->klass;
    self->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=sClass_clone(klass))));
    come_call_finalizer2(sClass_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj40=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(info->sname))));
    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result37__ = __result_obj__ = self;
    come_call_finalizer2(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result37__;
    come_call_finalizer2(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sClass* __result7__;
void* right_value11;
struct sClass* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value12;
char* __dec_obj7;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value60;
struct list$1tuple2$2charphsTypephph* __dec_obj37;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value61;
char* __dec_obj38;
struct sClass* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct sClass*));
right_value12 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value11=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass"))));
        come_call_finalizer2(sClass_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            result_5->mStruct=self->mStruct;
        }
        if(_if_conditional29=self!=((void*)0),        _if_conditional29) {
            result_5->mFloat=self->mFloat;
        }
        if(_if_conditional30=self!=((void*)0),        _if_conditional30) {
            result_5->mUnion=self->mUnion;
        }
        if(_if_conditional31=self!=((void*)0),        _if_conditional31) {
            result_5->mGenerics=self->mGenerics;
        }
        if(_if_conditional32=self!=((void*)0),        _if_conditional32) {
            result_5->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional33=self!=((void*)0),        _if_conditional33) {
            result_5->mEnum=self->mEnum;
        }
        if(_if_conditional34=self!=((void*)0),        _if_conditional34) {
            result_5->mProtocol=self->mProtocol;
        }
        if(_if_conditional35=self!=((void*)0),        _if_conditional35) {
            result_5->mNumber=self->mNumber;
        }
        if(_if_conditional36=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional36) {
            __dec_obj7=result_5->mName;
            result_5->mName=(char*)come_increment_ref_count(((char*)(right_value12=string_clone(self->mName))));
            __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            result_5->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            result_5->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional39=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional39) {
            __dec_obj37=result_5->mFields;
            result_5->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value60=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer2(list$1tuple2$2charphsTypephph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            result_5->mOutputed=self->mOutputed;
        }
        if(_if_conditional123=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional123) {
            __dec_obj38=result_5->mDeclareSName;
            result_5->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mDeclareSName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result36__ = __result_obj__ = result_5;
        come_call_finalizer2(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result36__;
        come_call_finalizer2(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),            _if_conditional6) {
                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),            _if_conditional7) {
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            _if_conditional27) {
                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_6;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional8) {
                                come_call_finalizer2(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional9) {
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional10) {
                                        come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                            _if_conditional11) {
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                            _if_conditional13) {
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                            _if_conditional14) {
                                                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                            _if_conditional15) {
                                                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                            _if_conditional17) {
                                                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                            _if_conditional19) {
                                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                                            _if_conditional20) {
                                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                                            _if_conditional22) {
                                                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                                            _if_conditional23) {
                                                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                            _if_conditional24) {
                                                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                            _if_conditional25) {
                                                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                                            _if_conditional26) {
                                                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional12) {
                                                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional16) {
                                                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_10;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sTypeph*));
                                                    it_10=self->head;
                                                    while(_while_condtional3=it_10!=((void*)0),                                                    _while_condtional3) {
                                                        prev_it_11=it_10;
                                                        it_10=it_10->next;
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_12;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sNodeph*));
                                                    it_12=self->head;
                                                    while(_while_condtional4=it_12!=((void*)0),                                                    _while_condtional4) {
                                                        prev_it_13=it_12;
                                                        it_12=it_12->next;
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional18) {
                                                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_14;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1charph*));
                                                    it_14=self->head;
                                                    while(_while_condtional5=it_14!=((void*)0),                                                    _while_condtional5) {
                                                        prev_it_15=it_14;
                                                        it_14=it_14->next;
                                                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                            _if_conditional21) {
                                                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1tuple2$2charphsTypephph* __result8__;
void* right_value13;
void* right_value14;
struct list$1tuple2$2charphsTypephph* result_16;
struct list_item$1tuple2$2charphsTypephph* it_17;
_Bool _while_condtional6;
void* right_value59;
struct list$1tuple2$2charphsTypephph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
right_value14 = (void*)0;
memset(&result_16, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value59 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result8__ = __result_obj__ = ((void*)0);
                    return __result8__;
                }
                result_16=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value14=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value13=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_17=self->head;
                while(_while_condtional6=it_17!=((void*)0),                _while_condtional6) {
                    list$1tuple2$2charphsTypephph_add(result_16,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypephp_clone(it_17->item)))));
                    come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_17=it_17->next;
                }
                __result35__ = __result_obj__ = result_16;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_16, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result35__;
                come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,result_16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result9__ = __result_obj__ = self;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result9__;
                    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value15;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj8;
_Bool _if_conditional44;
void* right_value16;
struct list_item$1tuple2$2charphsTypephph* litem_19;
struct tuple2$2charphsTypeph* __dec_obj9;
void* right_value17;
struct list_item$1tuple2$2charphsTypephph* litem_20;
struct tuple2$2charphsTypeph* __dec_obj10;
struct list$1tuple2$2charphsTypephph* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value16 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value17 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional41=self->len==0,                        _if_conditional41) {
                            litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value15=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_18->prev=((void*)0);
                            litem_18->next=((void*)0);
                            __dec_obj8=litem_18->item;
                            litem_18->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_18;
                            self->head=litem_18;
                        }
                        else {
                            if(_if_conditional44=self->len==1,                            _if_conditional44) {
                                litem_19=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value16=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_19->prev=self->head;
                                litem_19->next=((void*)0);
                                __dec_obj9=litem_19->item;
                                litem_19->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_19;
                                self->head->next=litem_19;
                            }
                            else {
                                litem_20=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value17=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_20->prev=self->tail;
                                litem_20->next=((void*)0);
                                __dec_obj10=litem_20->item;
                                litem_20->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_20;
                                self->tail=litem_20;
                            }
                        }
                        self->len++;
                        __result10__ = __result_obj__ = self;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result10__;
                        come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional42=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional42) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional43=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional43) {
                                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* __result11__;
void* right_value18;
struct tuple2$2charphsTypeph* result_21;
_Bool _if_conditional46;
void* right_value19;
char* __dec_obj11;
_Bool _if_conditional47;
void* right_value58;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_21, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value19 = (void*)0;
right_value58 = (void*)0;
                        if(_if_conditional45=self==(void*)0,                        _if_conditional45) {
                            __result11__ = __result_obj__ = (void*)0;
                            return __result11__;
                        }
                        result_21=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value18=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "struct tuple2$2charphsTypeph"))));
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional46) {
                            __dec_obj11=result_21->v1;
                            result_21->v1=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(self->v1))));
                            __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional47=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional47) {
                            __dec_obj36=result_21->v2;
                            result_21->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v2))));
                            come_call_finalizer2(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        }
                        __result34__ = __result_obj__ = result_21;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result34__;
                        come_call_finalizer2(tuple2$2charphsTypeph_finalize,result_21, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional48;
struct sType* __result12__;
void* right_value20;
struct sType* result_22;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional54;
void* right_value26;
struct tuple1$1sTypeph* __dec_obj15;
_Bool _if_conditional57;
void* right_value27;
char* __dec_obj16;
_Bool _if_conditional58;
void* right_value34;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional62;
void* right_value42;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value43;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional77;
void* right_value50;
struct list$1charph* __dec_obj29;
_Bool _if_conditional81;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value54;
struct sNode* __dec_obj32;
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
_Bool _if_conditional109;
void* right_value55;
struct sNode* __dec_obj33;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value56;
char* __dec_obj34;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value57;
char* __dec_obj35;
struct sType* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_22, 0, sizeof(struct sType*));
right_value23 = (void*)0;
right_value26 = (void*)0;
right_value27 = (void*)0;
right_value34 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value50 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
right_value56 = (void*)0;
right_value57 = (void*)0;
                                if(_if_conditional48=self==(void*)0,                                _if_conditional48) {
                                    __result12__ = __result_obj__ = (void*)0;
                                    return __result12__;
                                }
                                result_22=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
                                come_call_finalizer2(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional49=self!=((void*)0),                                _if_conditional49) {
                                    result_22->mClass=self->mClass;
                                }
                                if(_if_conditional50=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional50) {
                                    __dec_obj13=result_22->mNoSolvedGenericsType;
                                    result_22->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional54=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional54) {
                                    __dec_obj15=result_22->mOriginalLoadVarType;
                                    result_22->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional57) {
                                    __dec_obj16=result_22->mGenericsName;
                                    result_22->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value27=string_clone(self->mGenericsName))));
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional58=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional58) {
                                    __dec_obj20=result_22->mGenericsTypes;
                                    result_22->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypeph_clone(self->mGenericsTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional62=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional62) {
                                    __dec_obj24=result_22->mArrayNum;
                                    result_22->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodeph_clone(self->mArrayNum))));
                                    come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_22->mOmitArrayNum=self->mOmitArrayNum;
                                }
                                if(_if_conditional76=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional76) {
                                    __dec_obj25=result_22->mParamTypes;
                                    result_22->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypeph_clone(self->mParamTypes))));
                                    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional77=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional77) {
                                    __dec_obj29=result_22->mParamNames;
                                    result_22->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charph_clone(self->mParamNames))));
                                    come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional81=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional81) {
                                    __dec_obj31=result_22->mResultType;
                                    result_22->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(self->mResultType))));
                                    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional84=self!=((void*)0),                                _if_conditional84) {
                                    result_22->mVarArgs=self->mVarArgs;
                                }
                                if(_if_conditional85=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional85) {
                                    __dec_obj32=result_22->mAlignas;
                                    result_22->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(self->mAlignas))));
                                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value54) { right_value54 = come_decrement_ref_count2(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional86=self!=((void*)0),                                _if_conditional86) {
                                    result_22->mUnsigned=self->mUnsigned;
                                }
                                if(_if_conditional87=self!=((void*)0),                                _if_conditional87) {
                                    result_22->mShort=self->mShort;
                                }
                                if(_if_conditional88=self!=((void*)0),                                _if_conditional88) {
                                    result_22->mLong=self->mLong;
                                }
                                if(_if_conditional89=self!=((void*)0),                                _if_conditional89) {
                                    result_22->mLongLong=self->mLongLong;
                                }
                                if(_if_conditional90=self!=((void*)0),                                _if_conditional90) {
                                    result_22->mConstant=self->mConstant;
                                }
                                if(_if_conditional91=self!=((void*)0),                                _if_conditional91) {
                                    result_22->mRegister=self->mRegister;
                                }
                                if(_if_conditional92=self!=((void*)0),                                _if_conditional92) {
                                    result_22->mVolatile=self->mVolatile;
                                }
                                if(_if_conditional93=self!=((void*)0),                                _if_conditional93) {
                                    result_22->mStatic=self->mStatic;
                                }
                                if(_if_conditional94=self!=((void*)0),                                _if_conditional94) {
                                    result_22->mExtern=self->mExtern;
                                }
                                if(_if_conditional95=self!=((void*)0),                                _if_conditional95) {
                                    result_22->mRestrict=self->mRestrict;
                                }
                                if(_if_conditional96=self!=((void*)0),                                _if_conditional96) {
                                    result_22->mImmutable=self->mImmutable;
                                }
                                if(_if_conditional97=self!=((void*)0),                                _if_conditional97) {
                                    result_22->mHeap=self->mHeap;
                                }
                                if(_if_conditional98=self!=((void*)0),                                _if_conditional98) {
                                    result_22->mDummyHeap=self->mDummyHeap;
                                }
                                if(_if_conditional99=self!=((void*)0),                                _if_conditional99) {
                                    result_22->mDelegate=self->mDelegate;
                                }
                                if(_if_conditional100=self!=((void*)0),                                _if_conditional100) {
                                    result_22->mShare=self->mShare;
                                }
                                if(_if_conditional101=self!=((void*)0),                                _if_conditional101) {
                                    result_22->mClone=self->mClone;
                                }
                                if(_if_conditional102=self!=((void*)0),                                _if_conditional102) {
                                    result_22->mNoHeap=self->mNoHeap;
                                }
                                if(_if_conditional103=self!=((void*)0),                                _if_conditional103) {
                                    result_22->mNoCallingDestructor=self->mNoCallingDestructor;
                                }
                                if(_if_conditional104=self!=((void*)0),                                _if_conditional104) {
                                    result_22->mRefference=self->mRefference;
                                }
                                if(_if_conditional105=self!=((void*)0),                                _if_conditional105) {
                                    result_22->mException=self->mException;
                                }
                                if(_if_conditional106=self!=((void*)0),                                _if_conditional106) {
                                    result_22->mPointerNum=self->mPointerNum;
                                }
                                if(_if_conditional107=self!=((void*)0),                                _if_conditional107) {
                                    result_22->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                }
                                if(_if_conditional108=self!=((void*)0),                                _if_conditional108) {
                                    result_22->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                }
                                if(_if_conditional109=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional109) {
                                    __dec_obj33=result_22->mSizeNum;
                                    result_22->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mSizeNum))));
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value55) { right_value55 = come_decrement_ref_count2(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional110=self!=((void*)0),                                _if_conditional110) {
                                    result_22->mDynamicArrayNum=self->mDynamicArrayNum;
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    result_22->mTypeOfExpression=self->mTypeOfExpression;
                                }
                                if(_if_conditional112=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional112) {
                                    __dec_obj34=result_22->mOriginalTypeName;
                                    result_22->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(self->mOriginalTypeName))));
                                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    result_22->mOriginalPointerNum=self->mOriginalPointerNum;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    result_22->mFunctionParam=self->mFunctionParam;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    result_22->mAllocaValue=self->mAllocaValue;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    result_22->mGenericsStruct=self->mGenericsStruct;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    result_22->mSolvedGenericsName=self->mSolvedGenericsName;
                                }
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    result_22->mComeMemCore=self->mComeMemCore;
                                }
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    result_22->mInline=self->mInline;
                                }
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    result_22->mNullValue=self->mNullValue;
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional121) {
                                    __dec_obj35=result_22->mAsmName;
                                    result_22->mAsmName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mAsmName))));
                                    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result33__ = __result_obj__ = result_22;
                                come_call_finalizer2(sType_finalize,result_22, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result33__;
                                come_call_finalizer2(sType_finalize,result_22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional52=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional52) {
                                                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
struct list$1sTypeph* __result17__;
void* right_value28;
void* right_value29;
struct list$1sTypeph* result_25;
struct list_item$1sTypeph* it_26;
_Bool _while_condtional7;
void* right_value33;
struct list$1sTypeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
right_value29 = (void*)0;
memset(&result_25, 0, sizeof(struct list$1sTypeph*));
memset(&it_26, 0, sizeof(struct list_item$1sTypeph*));
right_value33 = (void*)0;
                                        if(_if_conditional59=self==((void*)0),                                        _if_conditional59) {
                                            __result17__ = __result_obj__ = ((void*)0);
                                            return __result17__;
                                        }
                                        result_25=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value28=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        it_26=self->head;
                                        while(_while_condtional7=it_26!=((void*)0),                                        _while_condtional7) {
                                            list$1sTypeph_add(result_25,(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(it_26->item)))));
                                            come_call_finalizer2(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            it_26=it_26->next;
                                        }
                                        __result20__ = __result_obj__ = result_25;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result20__;
                                        come_call_finalizer2(list$1sTypephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result18__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result18__;
                                            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional60;
void* right_value30;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj17;
_Bool _if_conditional61;
void* right_value31;
struct list_item$1sTypeph* litem_28;
struct sType* __dec_obj18;
void* right_value32;
struct list_item$1sTypeph* litem_29;
struct sType* __dec_obj19;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
right_value31 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sTypeph*));
right_value32 = (void*)0;
memset(&litem_29, 0, sizeof(struct list_item$1sTypeph*));
                                                if(_if_conditional60=self->len==0,                                                _if_conditional60) {
                                                    litem_27=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sTypeph"))));
                                                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    litem_27->prev=((void*)0);
                                                    litem_27->next=((void*)0);
                                                    __dec_obj17=litem_27->item;
                                                    litem_27->item=(struct sType*)come_increment_ref_count(item);
                                                    come_call_finalizer2(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                    self->tail=litem_27;
                                                    self->head=litem_27;
                                                }
                                                else {
                                                    if(_if_conditional61=self->len==1,                                                    _if_conditional61) {
                                                        litem_28=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_28->prev=self->head;
                                                        litem_28->next=((void*)0);
                                                        __dec_obj18=litem_28->item;
                                                        litem_28->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_28;
                                                        self->head->next=litem_28;
                                                    }
                                                    else {
                                                        litem_29=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sTypeph"))));
                                                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_29->prev=self->tail;
                                                        litem_29->next=((void*)0);
                                                        __dec_obj19=litem_29->item;
                                                        litem_29->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer2(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->tail->next=litem_29;
                                                        self->tail=litem_29;
                                                    }
                                                }
                                                self->len++;
                                                __result19__ = __result_obj__ = self;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result19__;
                                                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional63;
struct list$1sNodeph* __result21__;
void* right_value35;
void* right_value36;
struct list$1sNodeph* result_30;
struct list_item$1sNodeph* it_31;
_Bool _while_condtional8;
void* right_value41;
struct list$1sNodeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1sNodeph*));
memset(&it_31, 0, sizeof(struct list_item$1sNodeph*));
right_value41 = (void*)0;
                                        if(_if_conditional63=self==((void*)0),                                        _if_conditional63) {
                                            __result21__ = __result_obj__ = ((void*)0);
                                            return __result21__;
                                        }
                                        result_30=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value35=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sNodeph"))))))));
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        it_31=self->head;
                                        while(_while_condtional8=it_31!=((void*)0),                                        _while_condtional8) {
                                            list$1sNodeph_add(result_30,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(it_31->item)))));
                                            if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            it_31=it_31->next;
                                        }
                                        __result26__ = __result_obj__ = result_30;
                                        come_call_finalizer2(list$1sNodephp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result26__;
                                        come_call_finalizer2(list$1sNodephp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result22__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result22__;
                                            come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional64;
void* right_value37;
struct list_item$1sNodeph* litem_32;
struct sNode* __dec_obj21;
_Bool _if_conditional65;
void* right_value38;
struct list_item$1sNodeph* litem_33;
struct sNode* __dec_obj22;
void* right_value39;
struct list_item$1sNodeph* litem_34;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1sNodeph*));
right_value38 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1sNodeph*));
right_value39 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1sNodeph*));
                                                if(_if_conditional64=self->len==0,                                                _if_conditional64) {
                                                    litem_32=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1sNodeph"))));
                                                    come_call_finalizer2(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    litem_32->prev=((void*)0);
                                                    litem_32->next=((void*)0);
                                                    __dec_obj21=litem_32->item;
                                                    litem_32->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                                    self->tail=litem_32;
                                                    self->head=litem_32;
                                                }
                                                else {
                                                    if(_if_conditional65=self->len==1,                                                    _if_conditional65) {
                                                        litem_33=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_33->prev=self->head;
                                                        litem_33->next=((void*)0);
                                                        __dec_obj22=litem_33->item;
                                                        litem_33->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_33;
                                                        self->head->next=litem_33;
                                                    }
                                                    else {
                                                        litem_34=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1sNodeph"))));
                                                        come_call_finalizer2(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_34->prev=self->tail;
                                                        litem_34->next=((void*)0);
                                                        __dec_obj23=litem_34->item;
                                                        litem_34->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail->next=litem_34;
                                                        self->tail=litem_34;
                                                    }
                                                }
                                                self->len++;
                                                __result23__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result23__;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional66;
struct sNode* __result24__;
void* right_value40;
struct sNode* result_35;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sNode* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&result_35, 0, sizeof(struct sNode*));
                                                if(_if_conditional66=self==(void*)0,                                                _if_conditional66) {
                                                    __result24__ = __result_obj__ = (void*)0;
                                                    return __result24__;
                                                }
                                                result_35=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                                                if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(_if_conditional67=self!=((void*)0)&&self->clone!=((void*)0),                                                _if_conditional67) {
                                                    result_35->_protocol_obj=self->clone(self->_protocol_obj);
                                                }
                                                if(_if_conditional68=self!=((void*)0),                                                _if_conditional68) {
                                                    result_35->finalize=self->finalize;
                                                }
                                                if(_if_conditional69=self!=((void*)0),                                                _if_conditional69) {
                                                    result_35->clone=self->clone;
                                                }
                                                if(_if_conditional70=self!=((void*)0),                                                _if_conditional70) {
                                                    result_35->compile=self->compile;
                                                }
                                                if(_if_conditional71=self!=((void*)0),                                                _if_conditional71) {
                                                    result_35->sline=self->sline;
                                                }
                                                if(_if_conditional72=self!=((void*)0),                                                _if_conditional72) {
                                                    result_35->sname=self->sname;
                                                }
                                                if(_if_conditional73=self!=((void*)0),                                                _if_conditional73) {
                                                    result_35->terminated=self->terminated;
                                                }
                                                if(_if_conditional74=self!=((void*)0),                                                _if_conditional74) {
                                                    result_35->kind=self->kind;
                                                }
                                                __result25__ = __result_obj__ = result_35;
                                                if(result_35) { result_35 = come_decrement_ref_count2(result_35, ((struct sNode*)result_35)->finalize, ((struct sNode*)result_35)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result25__;
                                                if(result_35) { result_35 = come_decrement_ref_count2(result_35, ((struct sNode*)result_35)->finalize, ((struct sNode*)result_35)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional78;
struct list$1charph* __result27__;
void* right_value44;
void* right_value45;
struct list$1charph* result_36;
struct list_item$1charph* it_37;
_Bool _while_condtional9;
void* right_value49;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
memset(&result_36, 0, sizeof(struct list$1charph*));
memset(&it_37, 0, sizeof(struct list_item$1charph*));
right_value49 = (void*)0;
                                        if(_if_conditional78=self==((void*)0),                                        _if_conditional78) {
                                            __result27__ = __result_obj__ = ((void*)0);
                                            return __result27__;
                                        }
                                        result_36=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
                                        come_call_finalizer2(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        it_37=self->head;
                                        while(_while_condtional9=it_37!=((void*)0),                                        _while_condtional9) {
                                            list$1charph_add(result_36,(char*)come_increment_ref_count(((char*)(right_value49=string_clone(it_37->item)))));
                                            right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            it_37=it_37->next;
                                        }
                                        __result30__ = __result_obj__ = result_36;
                                        come_call_finalizer2(list$1charphp_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result30__;
                                        come_call_finalizer2(list$1charphp_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
                                            self->head=((void*)0);
                                            self->tail=((void*)0);
                                            self->len=0;
                                            __result28__ = __result_obj__ = self;
                                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result28__;
                                            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional79;
void* right_value46;
struct list_item$1charph* litem_38;
char* __dec_obj26;
_Bool _if_conditional80;
void* right_value47;
struct list_item$1charph* litem_39;
char* __dec_obj27;
void* right_value48;
struct list_item$1charph* litem_40;
char* __dec_obj28;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1charph*));
right_value47 = (void*)0;
memset(&litem_39, 0, sizeof(struct list_item$1charph*));
right_value48 = (void*)0;
memset(&litem_40, 0, sizeof(struct list_item$1charph*));
                                                if(_if_conditional79=self->len==0,                                                _if_conditional79) {
                                                    litem_38=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 155, "struct list_item$1charph"))));
                                                    come_call_finalizer2(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    litem_38->prev=((void*)0);
                                                    litem_38->next=((void*)0);
                                                    __dec_obj26=litem_38->item;
                                                    litem_38->item=(char*)come_increment_ref_count(item);
                                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    self->tail=litem_38;
                                                    self->head=litem_38;
                                                }
                                                else {
                                                    if(_if_conditional80=self->len==1,                                                    _if_conditional80) {
                                                        litem_39=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 165, "struct list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_39->prev=self->head;
                                                        litem_39->next=((void*)0);
                                                        __dec_obj27=litem_39->item;
                                                        litem_39->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_39;
                                                        self->head->next=litem_39;
                                                    }
                                                    else {
                                                        litem_40=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 175, "struct list_item$1charph"))));
                                                        come_call_finalizer2(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        litem_40->prev=self->tail;
                                                        litem_40->next=((void*)0);
                                                        __dec_obj28=litem_40->item;
                                                        litem_40->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail->next=litem_40;
                                                        self->tail=litem_40;
                                                    }
                                                }
                                                self->len++;
                                                __result29__ = __result_obj__ = self;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                return __result29__;
                                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional82;
struct tuple1$1sTypeph* __result31__;
void* right_value51;
struct tuple1$1sTypeph* result_41;
_Bool _if_conditional83;
void* right_value52;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&result_41, 0, sizeof(struct tuple1$1sTypeph*));
right_value52 = (void*)0;
                                        if(_if_conditional82=self==(void*)0,                                        _if_conditional82) {
                                            __result31__ = __result_obj__ = (void*)0;
                                            return __result31__;
                                        }
                                        result_41=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional83=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional83) {
                                            __dec_obj30=result_41->v1;
                                            result_41->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(self->v1))));
                                            come_call_finalizer2(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer2(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        }
                                        __result32__ = __result_obj__ = result_41;
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result32__;
                                        come_call_finalizer2(tuple1$1sTypeph_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = self->sline;
    return __result38__;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value64;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
    __result39__ = __result_obj__ = ((char*)(right_value64=__builtin_string(self->sname)));
    right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
}

_Bool sInterfaceNode_terminated(){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sInterfaceNode_kind(){
void* __result_obj__;
void* right_value65;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value65=__builtin_string("sInterfaceNode")));
    right_value65 = come_decrement_ref_count2(right_value65, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result41__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value66;
char* name_42;
struct sClass* klass_43;
void* right_value67;
void* right_value68;
struct buffer* buf_44;
void* right_value69;
struct list$1tuple2$2charphsTypephph* o2_saved_45;
struct tuple2$2charphsTypeph* it_48;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_51;
struct sType* type_52;
void* right_value70;
void* right_value71;
void* right_value80;
void* right_value81;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
memset(&name_42, 0, sizeof(char*));
memset(&klass_43, 0, sizeof(struct sClass*));
right_value67 = (void*)0;
right_value68 = (void*)0;
memset(&buf_44, 0, sizeof(struct buffer*));
right_value69 = (void*)0;
memset(&o2_saved_45, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_48, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_51, 0, sizeof(char*));
memset(&type_52, 0, sizeof(struct sType*));
memset(&name_51, 0, sizeof(char*));
memset(&type_52, 0, sizeof(struct sType*));
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    name_42=(char*)come_increment_ref_count(((char*)(right_value66=__builtin_string(self->name))));
    right_value66 = come_decrement_ref_count2(right_value66, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_43=self->klass;
    klass_43->mProtocol=(_Bool)1;
    buf_44=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value68=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 48, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_44,((char*)(right_value69=xsprintf("struct %s\n{\n",klass_43->mName))));
    right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_45=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_43->mFields)),it_48=list$1tuple2$2charphsTypephph_begin((o2_saved_45));    !list$1tuple2$2charphsTypephph_end((o2_saved_45));    it_48=list$1tuple2$2charphsTypephph_next((o2_saved_45))    ){
        multiple_assign_var1=it_48;
        name_51=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_52=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        buffer_append_str(buf_44,"    ");
        buffer_append_str(buf_44,((char*)(right_value70=make_define_var(type_52,name_51,(_Bool)0,info))));
        right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_44,";\n");
        name_51 = come_decrement_ref_count2(name_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1tuple2$2charphsTypephphp_finalize,o2_saved_45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_44,"};\n");
    add_come_code_at_source_head(info,"%s",((char*)(right_value71=buffer_to_string(buf_44))));
    right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(name_42)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value81=sClass_clone(klass_43)))));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sClass_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result73__ = (_Bool)1;
    name_42 = come_decrement_ref_count2(name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result73__;
    name_42 = come_decrement_ref_count2(name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional127;
struct tuple2$2charphsTypeph* result_46;
struct tuple2$2charphsTypeph* __result42__;
_Bool _if_conditional128;
struct tuple2$2charphsTypeph* __result43__;
struct tuple2$2charphsTypeph* result_47;
struct tuple2$2charphsTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_46, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_47, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional127=self==((void*)0),        _if_conditional127) {
            memset(&result_46,0,sizeof(struct tuple2$2charphsTypeph*));
            __result42__ = __result_obj__ = result_46;
            return __result42__;
        }
        self->it=self->head;
        if(self->it) {
            __result43__ = __result_obj__ = self->it->item;
            return __result43__;
        }
        memset(&result_47,0,sizeof(struct tuple2$2charphsTypeph*));
        __result44__ = __result_obj__ = result_47;
        return __result44__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
        __result45__ = self==((void*)0)||self->it==((void*)0);
        return __result45__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional129;
struct tuple2$2charphsTypeph* result_49;
struct tuple2$2charphsTypeph* __result46__;
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* __result47__;
struct tuple2$2charphsTypeph* result_50;
struct tuple2$2charphsTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_50, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional129=self==((void*)0)||self->it==((void*)0),        _if_conditional129) {
            memset(&result_49,0,sizeof(struct tuple2$2charphsTypeph*));
            __result46__ = __result_obj__ = result_49;
            return __result46__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result47__ = __result_obj__ = self->it->item;
            return __result47__;
        }
        memset(&result_50,0,sizeof(struct tuple2$2charphsTypeph*));
        __result48__ = __result_obj__ = result_50;
        return __result48__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional131;
unsigned int hash_70;
unsigned int it_71;
_Bool _while_condtional12;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool same_key_exist_88;
char* it2_91;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct map$2charphsClassph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_70, 0, sizeof(unsigned int));
memset(&it_71, 0, sizeof(unsigned int));
memset(&same_key_exist_88, 0, sizeof(_Bool));
memset(&it2_91, 0, sizeof(char*));
        if(_if_conditional131=self->len*10>=self->size,        _if_conditional131) {
            map$2charphsClassph_rehash(self);
        }
        hash_70=string_get_hash_key(key)%self->size;
        it_71=hash_70;
        while(_while_condtional12=(_Bool)1,        _while_condtional12) {
            if(_if_conditional143=self->item_existance[it_71],            _if_conditional143) {
                if(_if_conditional144=string_equals(self->keys[it_71],key),                _if_conditional144) {
                    if(_if_conditional145=1,                    _if_conditional145) {
                        list$1charp_remove(self->key_list,self->keys[it_71]);
                        self->keys[it_71] = come_decrement_ref_count2(self->keys[it_71], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_71]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_71]);
                        self->keys[it_71]=key;
                    }
                    if(_if_conditional165=1,                    _if_conditional165) {
                        come_call_finalizer2(sClass_finalize,self->items[it_71], (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->items[it_71]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_71]=item;
                    }
                    break;
                }
                it_71++;
                if(_if_conditional166=it_71>=self->size,                _if_conditional166) {
                    it_71=0;
                }
                else {
                    if(_if_conditional167=it_71==hash_70,                    _if_conditional167) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_71]=(_Bool)1;
                if(_if_conditional168=1,                _if_conditional168) {
                    self->keys[it_71]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_71]=key;
                }
                if(_if_conditional169=1,                _if_conditional169) {
                    self->items[it_71]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_71]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_88=(_Bool)0;
        for(        it2_91=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_91=list$1charp_next(self->key_list)        ){
            if(_if_conditional174=string_equals(it2_91,key),            _if_conditional174) {
                same_key_exist_88=(_Bool)1;
            }
        }
        if(_if_conditional175=!same_key_exist_88,        _if_conditional175) {
            list$1charp_push_back(self->key_list,key);
        }
        __result72__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result72__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_53;
void* right_value72;
char** keys_54;
void* right_value73;
struct sClass** items_55;
void* right_value74;
_Bool* item_existance_56;
int len_57;
char* it_60;
struct sClass* default_value_63;
void* right_value75;
struct sClass* it2_66;
unsigned int hash_67;
int n_68;
_Bool _while_condtional11;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sClass* default_value_69;
void* right_value76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_53, 0, sizeof(int));
right_value72 = (void*)0;
memset(&keys_54, 0, sizeof(char**));
right_value73 = (void*)0;
memset(&items_55, 0, sizeof(struct sClass**));
right_value74 = (void*)0;
memset(&item_existance_56, 0, sizeof(_Bool*));
memset(&len_57, 0, sizeof(int));
memset(&it_60, 0, sizeof(char*));
memset(&default_value_63, 0, sizeof(struct sClass*));
right_value75 = (void*)0;
memset(&it2_66, 0, sizeof(struct sClass*));
memset(&hash_67, 0, sizeof(unsigned int));
memset(&n_68, 0, sizeof(int));
memset(&default_value_69, 0, sizeof(struct sClass*));
right_value76 = (void*)0;
                size_53=self->size*10;
                keys_54=(char**)come_increment_ref_count(((char**)(right_value72=(char**)come_calloc(1, sizeof(char*)*(1*(size_53)), "/usr/local/include/comelang2.h", 1314, "char*"))));
                right_value72 = come_decrement_ref_count2(right_value72, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_55=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value73=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_53)), "/usr/local/include/comelang2.h", 1315, "struct sClass*"))));
                come_call_finalizer2(sClass_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                item_existance_56=(_Bool*)come_increment_ref_count(((_Bool*)(right_value74=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_53)), "/usr/local/include/comelang2.h", 1316, "_Bool"))));
                right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_57=0;
                for(                it_60=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_60=map$2charphsClassph_next(self)                ){
                    memset(&default_value_63,0,sizeof(struct sClass*));
                    it2_66=((struct sClass*)(right_value75=map$2charphsClassph_at(self,it_60,default_value_63)));
                    come_call_finalizer2(sClass_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    hash_67=string_get_hash_key(it_60)%size_53;
                    n_68=hash_67;
                    while(_while_condtional11=(_Bool)1,                    _while_condtional11) {
                        if(_if_conditional140=item_existance_56[n_68],                        _if_conditional140) {
                            n_68++;
                            if(_if_conditional141=n_68>=size_53,                            _if_conditional141) {
                                n_68=0;
                            }
                            else {
                                if(_if_conditional142=n_68==hash_67,                                _if_conditional142) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_56[n_68]=(_Bool)1;
                            keys_54[n_68]=it_60;
                            items_55[n_68]=((struct sClass*)(right_value76=map$2charphsClassph_at(self,it_60,default_value_69)));
                            come_call_finalizer2(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            len_57++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_54;
                self->items=items_55;
                self->item_existance=item_existance_56;
                self->size=size_53;
                self->len=len_57;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional132;
char* result_58;
char* __result49__;
_Bool _if_conditional133;
char* __result50__;
char* result_59;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_58, 0, sizeof(char*));
memset(&result_59, 0, sizeof(char*));
                    if(_if_conditional132=self==((void*)0),                    _if_conditional132) {
                        memset(&result_58,0,sizeof(char*));
                        __result49__ = __result_obj__ = result_58;
                        return __result49__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result50__ = __result_obj__ = self->key_list->it->item;
                        return __result50__;
                    }
                    memset(&result_59,0,sizeof(char*));
                    __result51__ = __result_obj__ = result_59;
                    return __result51__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result52__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result52__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional134;
char* result_61;
char* __result53__;
_Bool _if_conditional135;
char* __result54__;
char* result_62;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_61, 0, sizeof(char*));
memset(&result_62, 0, sizeof(char*));
                    if(_if_conditional134=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional134) {
                        memset(&result_61,0,sizeof(char*));
                        __result53__ = __result_obj__ = result_61;
                        return __result53__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result54__ = __result_obj__ = self->key_list->it->item;
                        return __result54__;
                    }
                    memset(&result_62,0,sizeof(char*));
                    __result55__ = __result_obj__ = result_62;
                    return __result55__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_64;
unsigned int it_65;
_Bool _while_condtional10;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct sClass* __result56__;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct sClass* __result57__;
struct sClass* __result58__;
struct sClass* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_64, 0, sizeof(unsigned int));
memset(&it_65, 0, sizeof(unsigned int));
                        hash_64=string_get_hash_key(((char*)key))%self->size;
                        it_65=hash_64;
                        while(_while_condtional10=(_Bool)1,                        _while_condtional10) {
                            if(_if_conditional136=self->item_existance[it_65],                            _if_conditional136) {
                                if(_if_conditional137=string_equals(self->keys[it_65],key),                                _if_conditional137) {
                                    __result56__ = __result_obj__ = self->items[it_65];
                                    come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result56__;
                                }
                                it_65++;
                                if(_if_conditional138=it_65>=self->size,                                _if_conditional138) {
                                    it_65=0;
                                }
                                else {
                                    if(_if_conditional139=it_65==hash_64,                                    _if_conditional139) {
                                        __result57__ = __result_obj__ = default_value;
                                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result57__;
                                    }
                                }
                            }
                            else {
                                __result58__ = __result_obj__ = default_value;
                                come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result58__;
                            }
                        }
                        __result59__ = __result_obj__ = default_value;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result59__;
                        come_call_finalizer2(sClass_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_72;
struct list_item$1charp* it_73;
_Bool _while_condtional13;
_Bool _if_conditional146;
struct list$1charp* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_72, 0, sizeof(int));
memset(&it_73, 0, sizeof(struct list_item$1charp*));
                            it2_72=0;
                            it_73=self->head;
                            while(_while_condtional13=it_73!=((void*)0),                            _while_condtional13) {
                                if(_if_conditional146=string_equals(it_73->item,item),                                _if_conditional146) {
                                    list$1charp_delete(self,it2_72,it2_72+1);
                                    break;
                                }
                                it2_72++;
                                it_73=it_73->next;
                            }
                            __result63__ = __result_obj__ = self;
                            return __result63__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
int tmp_74;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list$1charp* __result60__;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list_item$1charp* it_77;
int i_78;
_Bool _while_condtional15;
_Bool _if_conditional155;
struct list_item$1charp* prev_it_79;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* it_80;
int i_81;
_Bool _while_condtional16;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* prev_it_82;
struct list_item$1charp* it_83;
struct list_item$1charp* head_prev_it_84;
struct list_item$1charp* tail_it_85;
int i_86;
_Bool _while_condtional17;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list$1charp* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_74, 0, sizeof(int));
memset(&it_77, 0, sizeof(struct list_item$1charp*));
memset(&i_78, 0, sizeof(int));
memset(&prev_it_79, 0, sizeof(struct list_item$1charp*));
memset(&it_80, 0, sizeof(struct list_item$1charp*));
memset(&i_81, 0, sizeof(int));
memset(&prev_it_82, 0, sizeof(struct list_item$1charp*));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_84, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_85, 0, sizeof(struct list_item$1charp*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional147=head<0,                                        _if_conditional147) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional148=tail<0,                                        _if_conditional148) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional149=head>tail,                                        _if_conditional149) {
                                            tmp_74=tail;
                                            tail=head;
                                            head=tmp_74;
                                        }
                                        if(_if_conditional150=head<0,                                        _if_conditional150) {
                                            head=0;
                                        }
                                        if(_if_conditional151=tail>self->len,                                        _if_conditional151) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional152=head==tail,                                        _if_conditional152) {
                                            __result60__ = __result_obj__ = self;
                                            return __result60__;
                                        }
                                        if(_if_conditional153=head==0&&tail==self->len,                                        _if_conditional153) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional154=head==0,                                            _if_conditional154) {
                                                it_77=self->head;
                                                i_78=0;
                                                while(_while_condtional15=it_77!=((void*)0),                                                _while_condtional15) {
                                                    if(_if_conditional155=i_78<tail,                                                    _if_conditional155) {
                                                        prev_it_79=it_77;
                                                        it_77=it_77->next;
                                                        i_78++;
                                                        come_call_finalizer2(list_item$1charpp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional156=i_78==tail,                                                        _if_conditional156) {
                                                            self->head=it_77;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_77=it_77->next;
                                                            i_78++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional157=tail==self->len,                                                _if_conditional157) {
                                                    it_80=self->head;
                                                    i_81=0;
                                                    while(_while_condtional16=it_80!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional158=i_81==head,                                                        _if_conditional158) {
                                                            self->tail=it_80->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional159=i_81>=head,                                                        _if_conditional159) {
                                                            prev_it_82=it_80;
                                                            it_80=it_80->next;
                                                            i_81++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_80=it_80->next;
                                                            i_81++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_83=self->head;
                                                    head_prev_it_84=((void*)0);
                                                    tail_it_85=((void*)0);
                                                    i_86=0;
                                                    while(_while_condtional17=it_83!=((void*)0),                                                    _while_condtional17) {
                                                        if(_if_conditional160=i_86==head,                                                        _if_conditional160) {
                                                            head_prev_it_84=it_83->prev;
                                                        }
                                                        if(_if_conditional161=i_86==tail,                                                        _if_conditional161) {
                                                            tail_it_85=it_83;
                                                        }
                                                        if(_if_conditional162=i_86>=head&&i_86<tail,                                                        _if_conditional162) {
                                                            prev_it_87=it_83;
                                                            it_83=it_83->next;
                                                            i_86++;
                                                            come_call_finalizer2(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_83=it_83->next;
                                                            i_86++;
                                                        }
                                                    }
                                                    if(_if_conditional163=head_prev_it_84!=((void*)0),                                                    _if_conditional163) {
                                                        head_prev_it_84->next=tail_it_85;
                                                    }
                                                    if(_if_conditional164=tail_it_85!=((void*)0),                                                    _if_conditional164) {
                                                        tail_it_85->prev=head_prev_it_84;
                                                    }
                                                }
                                            }
                                        }
                                        __result62__ = __result_obj__ = self;
                                        return __result62__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_75;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_76;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charp*));
                                                it_75=self->head;
                                                while(_while_condtional14=it_75!=((void*)0),                                                _while_condtional14) {
                                                    prev_it_76=it_75;
                                                    it_75=it_75->next;
                                                    come_call_finalizer2(list_item$1charpp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result61__ = __result_obj__ = self;
                                                return __result61__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional170;
char* result_89;
char* __result64__;
_Bool _if_conditional171;
char* __result65__;
char* result_90;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_89, 0, sizeof(char*));
memset(&result_90, 0, sizeof(char*));
            if(_if_conditional170=self==((void*)0),            _if_conditional170) {
                memset(&result_89,0,sizeof(char*));
                __result64__ = __result_obj__ = result_89;
                return __result64__;
            }
            self->it=self->head;
            if(self->it) {
                __result65__ = __result_obj__ = self->it->item;
                return __result65__;
            }
            memset(&result_90,0,sizeof(char*));
            __result66__ = __result_obj__ = result_90;
            return __result66__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
            __result67__ = self==((void*)0)||self->it==((void*)0);
            return __result67__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional172;
char* result_92;
char* __result68__;
_Bool _if_conditional173;
char* __result69__;
char* result_93;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
            if(_if_conditional172=self==((void*)0)||self->it==((void*)0),            _if_conditional172) {
                memset(&result_92,0,sizeof(char*));
                __result68__ = __result_obj__ = result_92;
                return __result68__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result69__ = __result_obj__ = self->it->item;
                return __result69__;
            }
            memset(&result_93,0,sizeof(char*));
            __result70__ = __result_obj__ = result_93;
            return __result70__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value77;
struct list_item$1charp* litem_94;
_Bool _if_conditional177;
void* right_value78;
struct list_item$1charp* litem_95;
void* right_value79;
struct list_item$1charp* litem_96;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charp*));
right_value78 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1charp*));
right_value79 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional176=self->len==0,                _if_conditional176) {
                    litem_94=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value77=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charp"))));
                    come_call_finalizer2(list_item$1charpp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_94->prev=((void*)0);
                    litem_94->next=((void*)0);
                    litem_94->item=item;
                    self->tail=litem_94;
                    self->head=litem_94;
                }
                else {
                    if(_if_conditional177=self->len==1,                    _if_conditional177) {
                        litem_95=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value78=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_95->prev=self->head;
                        litem_95->next=((void*)0);
                        litem_95->item=item;
                        self->tail=litem_95;
                        self->head->next=litem_95;
                    }
                    else {
                        litem_96=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value79=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charp"))));
                        come_call_finalizer2(list_item$1charpp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_96->prev=self->tail;
                        litem_96->next=((void*)0);
                        litem_96->item=item;
                        self->tail->next=litem_96;
                        self->tail=litem_96;
                    }
                }
                self->len++;
                __result71__ = __result_obj__ = self;
                return __result71__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
void* right_value82;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_97;
char* var_name_98;
_Bool err_99;
_Bool _if_conditional180;
void* right_value83;
char* fun_name_100;
void* right_value84;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_101;
struct list$1charph* param_names_102;
struct list$1charph* param_default_parametors_103;
_Bool var_args_104;
void* right_value91;
void* right_value92;
void* right_value99;
void* right_value100;
void* right_value101;
struct sType* type_121;
void* right_value105;
struct list$1sTypeph* __dec_obj53;
void* right_value109;
struct list$1charph* __dec_obj54;
void* right_value110;
void* right_value111;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj56;
void* right_value113;
void* right_value114;
struct tuple2$2sTypephcharph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_type_97, 0, sizeof(struct sType*));
memset(&var_name_98, 0, sizeof(char*));
memset(&err_99, 0, sizeof(_Bool));
memset(&result_type_97, 0, sizeof(struct sType*));
memset(&var_name_98, 0, sizeof(char*));
memset(&err_99, 0, sizeof(_Bool));
right_value83 = (void*)0;
memset(&fun_name_100, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&param_types_101, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_102, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_103, 0, sizeof(struct list$1charph*));
memset(&var_args_104, 0, sizeof(_Bool));
memset(&param_types_101, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_102, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_103, 0, sizeof(struct list$1charph*));
memset(&var_args_104, 0, sizeof(_Bool));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&type_121, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value82=parse_type(info,(_Bool)0,(_Bool)1)));
    result_type_97=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_98=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_99=multiple_assign_var2->v3;
    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional180=!err_99,    _if_conditional180) {
        printf("%s %d: parse_type failed\n",info->sname,info->sline);
        exit(2);
    }
    fun_name_100=(char*)come_increment_ref_count(((char*)(right_value83=parse_word(info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value84=parse_params(info)));
    param_types_101=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_102=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_103=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_104=multiple_assign_var3->v4;
    come_call_finalizer2(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sTypeph_insert(param_types_101,0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 82, "struct sType")))),"void*",(_Bool)0,info)))));
    come_call_finalizer2(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1charph_insert(param_names_102,0,(char*)come_increment_ref_count(((char*)(right_value99=__builtin_string("self")))));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 85, "struct sType")))),"lambda",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=type_121->mParamTypes;
    type_121->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(param_types_101))));
    come_call_finalizer2(list$1sTypeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj54=type_121->mParamNames;
    type_121->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charphp_clone(param_names_102))));
    come_call_finalizer2(list$1charph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_121->mVarArgs=var_args_104;
    __dec_obj56=type_121->mResultType;
    type_121->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 90, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(result_type_97))))))));
    come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple1$1sTypephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __result86__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value114=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value113=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 92, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type_121),(char*)come_increment_ref_count(fun_name_100))));
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_98 = come_decrement_ref_count2(var_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_100 = come_decrement_ref_count2(fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result86__;
    come_call_finalizer2(sType_finalize,result_type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    var_name_98 = come_decrement_ref_count2(var_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_100 = come_decrement_ref_count2(fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1sTypephp_finalize,param_types_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_names_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(list$1charphp_finalize,param_default_parametors_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional178=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional178) {
            come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional179=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional179) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional181=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional181) {
            come_call_finalizer2(list$1sTypephp_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional182=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional182) {
            come_call_finalizer2(list$1charphp_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional183=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional183) {
            come_call_finalizer2(list$1charphp_finalize,self->v3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct list$1sTypeph* __result75__;
_Bool _if_conditional189;
void* right_value88;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj44;
_Bool _if_conditional190;
void* right_value89;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj45;
struct list_item$1sTypeph* it_110;
int i_111;
_Bool _while_condtional18;
_Bool _if_conditional191;
void* right_value90;
struct list_item$1sTypeph* litem_112;
struct sType* __dec_obj46;
struct list$1sTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_110, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_111, 0, sizeof(int));
right_value90 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional184=position<0,        _if_conditional184) {
            position+=self->len+1;
        }
        if(_if_conditional185=position<0,        _if_conditional185) {
            position=0;
        }
        if(_if_conditional186=self->len==0||position>=self->len,        _if_conditional186) {
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
            __result75__ = __result_obj__ = self;
            come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result75__;
        }
        if(_if_conditional189=position==0,        _if_conditional189) {
            litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 381, "struct list_item$1sTypeph"))));
            come_call_finalizer2(list_item$1sTypephp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_108->prev=((void*)0);
            litem_108->next=self->head;
            __dec_obj44=litem_108->item;
            litem_108->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->head->prev=litem_108;
            self->head=litem_108;
            self->len++;
        }
        else {
            if(_if_conditional190=self->len==1,            _if_conditional190) {
                litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 393, "struct list_item$1sTypeph"))));
                come_call_finalizer2(list_item$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_109->prev=self->head;
                litem_109->next=self->tail;
                __dec_obj45=litem_109->item;
                litem_109->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->prev=litem_109;
                self->head->next=litem_109;
                self->len++;
            }
            else {
                it_110=self->head;
                i_111=0;
                while(_while_condtional18=it_110!=((void*)0),                _while_condtional18) {
                    if(_if_conditional191=position==i_111,                    _if_conditional191) {
                        litem_112=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 409, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_112->prev=it_110->prev;
                        litem_112->next=it_110;
                        __dec_obj46=litem_112->item;
                        litem_112->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        it_110->prev->next=litem_112;
                        it_110->prev=litem_112;
                        self->len++;
                    }
                    it_110=it_110->next;
                    i_111++;
                }
            }
        }
        __result76__ = __result_obj__ = self;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result76__;
        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional187;
void* right_value85;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj41;
_Bool _if_conditional188;
void* right_value86;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj42;
void* right_value87;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj43;
struct list$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional187=self->len==0,                _if_conditional187) {
                    litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1sTypeph"))));
                    come_call_finalizer2(list_item$1sTypephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_105->prev=((void*)0);
                    litem_105->next=((void*)0);
                    __dec_obj41=litem_105->item;
                    litem_105->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer2(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_105;
                    self->head=litem_105;
                }
                else {
                    if(_if_conditional188=self->len==1,                    _if_conditional188) {
                        litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_106->prev=self->head;
                        litem_106->next=((void*)0);
                        __dec_obj42=litem_106->item;
                        litem_106->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_106;
                        self->head->next=litem_106;
                    }
                    else {
                        litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1sTypeph"))));
                        come_call_finalizer2(list_item$1sTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_107->prev=self->tail;
                        litem_107->next=((void*)0);
                        __dec_obj43=litem_107->item;
                        litem_107->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_107;
                        self->tail=litem_107;
                    }
                }
                self->len++;
                __result74__ = __result_obj__ = self;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct list$1charph* __result78__;
_Bool _if_conditional197;
void* right_value96;
struct list_item$1charph* litem_116;
char* __dec_obj50;
_Bool _if_conditional198;
void* right_value97;
struct list_item$1charph* litem_117;
char* __dec_obj51;
struct list_item$1charph* it_118;
int i_119;
_Bool _while_condtional19;
_Bool _if_conditional199;
void* right_value98;
struct list_item$1charph* litem_120;
char* __dec_obj52;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1charph*));
right_value97 = (void*)0;
memset(&litem_117, 0, sizeof(struct list_item$1charph*));
memset(&it_118, 0, sizeof(struct list_item$1charph*));
memset(&i_119, 0, sizeof(int));
right_value98 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1charph*));
        if(_if_conditional192=position<0,        _if_conditional192) {
            position+=self->len+1;
        }
        if(_if_conditional193=position<0,        _if_conditional193) {
            position=0;
        }
        if(_if_conditional194=self->len==0||position>=self->len,        _if_conditional194) {
            list$1charph_push_back(self,(char*)come_increment_ref_count(item));
            __result78__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result78__;
        }
        if(_if_conditional197=position==0,        _if_conditional197) {
            litem_116=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 381, "struct list_item$1charph"))));
            come_call_finalizer2(list_item$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_116->prev=((void*)0);
            litem_116->next=self->head;
            __dec_obj50=litem_116->item;
            litem_116->item=(char*)come_increment_ref_count(item);
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->head->prev=litem_116;
            self->head=litem_116;
            self->len++;
        }
        else {
            if(_if_conditional198=self->len==1,            _if_conditional198) {
                litem_117=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 393, "struct list_item$1charph"))));
                come_call_finalizer2(list_item$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_117->prev=self->head;
                litem_117->next=self->tail;
                __dec_obj51=litem_117->item;
                litem_117->item=(char*)come_increment_ref_count(item);
                __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->tail->prev=litem_117;
                self->head->next=litem_117;
                self->len++;
            }
            else {
                it_118=self->head;
                i_119=0;
                while(_while_condtional19=it_118!=((void*)0),                _while_condtional19) {
                    if(_if_conditional199=position==i_119,                    _if_conditional199) {
                        litem_120=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 409, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_120->prev=it_118->prev;
                        litem_120->next=it_118;
                        __dec_obj52=litem_120->item;
                        litem_120->item=(char*)come_increment_ref_count(item);
                        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                        it_118->prev->next=litem_120;
                        it_118->prev=litem_120;
                        self->len++;
                    }
                    it_118=it_118->next;
                    i_119++;
                }
            }
        }
        __result79__ = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result79__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value93;
struct list_item$1charph* litem_113;
char* __dec_obj47;
_Bool _if_conditional196;
void* right_value94;
struct list_item$1charph* litem_114;
char* __dec_obj48;
void* right_value95;
struct list_item$1charph* litem_115;
char* __dec_obj49;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
right_value94 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
right_value95 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional195=self->len==0,                _if_conditional195) {
                    litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value93=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_113->prev=((void*)0);
                    litem_113->next=((void*)0);
                    __dec_obj47=litem_113->item;
                    litem_113->item=(char*)come_increment_ref_count(item);
                    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_113;
                    self->head=litem_113;
                }
                else {
                    if(_if_conditional196=self->len==1,                    _if_conditional196) {
                        litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value94=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_114->prev=self->head;
                        litem_114->next=((void*)0);
                        __dec_obj48=litem_114->item;
                        litem_114->item=(char*)come_increment_ref_count(item);
                        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_114;
                        self->head->next=litem_114;
                    }
                    else {
                        litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value95=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_115->prev=self->tail;
                        litem_115->next=((void*)0);
                        __dec_obj49=litem_115->item;
                        litem_115->item=(char*)come_increment_ref_count(item);
                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_115;
                        self->tail=litem_115;
                    }
                }
                self->len++;
                __result77__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result77__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional200;
struct list$1sTypeph* __result80__;
void* right_value102;
void* right_value103;
struct list$1sTypeph* result_122;
struct list_item$1sTypeph* it_123;
_Bool _while_condtional20;
void* right_value104;
struct list$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_122, 0, sizeof(struct list$1sTypeph*));
memset(&it_123, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
        if(_if_conditional200=self==((void*)0),        _if_conditional200) {
            __result80__ = __result_obj__ = ((void*)0);
            return __result80__;
        }
        result_122=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1sTypeph"))))))));
        come_call_finalizer2(list$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_123=self->head;
        while(_while_condtional20=it_123!=((void*)0),        _while_condtional20) {
            list$1sTypeph_add(result_122,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_123->item)))));
            come_call_finalizer2(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            it_123=it_123->next;
        }
        __result81__ = __result_obj__ = result_122;
        come_call_finalizer2(list$1sTypephp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result81__;
        come_call_finalizer2(list$1sTypephp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional201;
struct list$1charph* __result82__;
void* right_value106;
void* right_value107;
struct list$1charph* result_124;
struct list_item$1charph* it_125;
_Bool _while_condtional21;
void* right_value108;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_124, 0, sizeof(struct list$1charph*));
memset(&it_125, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
        if(_if_conditional201=self==((void*)0),        _if_conditional201) {
            __result82__ = __result_obj__ = ((void*)0);
            return __result82__;
        }
        result_124=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang2.h", 141, "struct list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        it_125=self->head;
        while(_while_condtional21=it_125!=((void*)0),        _while_condtional21) {
            list$1charph_add(result_124,(char*)come_increment_ref_count(((char*)(right_value108=string_clone(it_125->item)))));
            right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            it_125=it_125->next;
        }
        __result83__ = __result_obj__ = result_124;
        come_call_finalizer2(list$1charphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result83__;
        come_call_finalizer2(list$1charphp_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj55=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __result84__ = __result_obj__ = self;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result84__;
        come_call_finalizer2(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple2$2sTypephcharph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj57=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        __dec_obj58=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result85__ = __result_obj__ = self;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result85__;
        come_call_finalizer2(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        come_call_finalizer2(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional202;
_Bool _if_conditional203;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional202=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional202) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional203=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional203) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional204;
void* right_value115;
char* type_name_126;
struct sClass* klass_127;
void* right_value116;
_Bool _if_conditional205;
void* right_value117;
void* right_value118;
struct sClass* __dec_obj59;
void* right_value119;
void* right_value120;
struct sClass* __dec_obj60;
void* right_value121;
void* right_value122;
struct sType* voidp_128;
void* right_value126;
void* right_value127;
void* right_value128;
void* right_value129;
void* right_value130;
struct sType* finalizer_132;
void* right_value131;
struct sType* __list_values1___133[1];
void* right_value132;
void* right_value133;
struct list$1sTypeph* __dec_obj66;
void* right_value134;
char* __list_values2___135[1];
void* right_value135;
void* right_value136;
struct list$1charph* __dec_obj67;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj68;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
void* right_value145;
struct sType* cloner_137;
void* right_value146;
struct sType* __list_values3___138[1];
void* right_value147;
void* right_value148;
struct list$1sTypeph* __dec_obj69;
void* right_value149;
char* __list_values4___139[1];
void* right_value150;
void* right_value151;
struct list$1charph* __dec_obj70;
void* right_value152;
void* right_value153;
void* right_value154;
struct tuple1$1sTypeph* __dec_obj71;
void* right_value155;
void* right_value156;
void* right_value157;
_Bool _while_condtional22;
void* right_value158;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type2_140;
char* name_141;
void* right_value159;
void* right_value160;
_Bool _if_conditional208;
void* right_value161;
void* right_value162;
void* right_value163;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value168;
struct sNode* __result93__;
void* right_value169;
struct sNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&type_name_126, 0, sizeof(char*));
memset(&klass_127, 0, sizeof(struct sClass*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&voidp_128, 0, sizeof(struct sType*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&finalizer_132, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&cloner_137, 0, sizeof(struct sType*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&type2_140, 0, sizeof(struct sType*));
memset(&name_141, 0, sizeof(char*));
memset(&type2_140, 0, sizeof(struct sType*));
memset(&name_141, 0, sizeof(char*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    if(_if_conditional204=charp_operator_equals(buf,"interface")||charp_operator_equals(buf,"protocol"),    _if_conditional204) {
        type_name_126=(char*)come_increment_ref_count(((char*)(right_value115=parse_word(info))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional205=((struct sClass*)(right_value116=map$2charphsClassph_at(info->classes,type_name_126,((void*)0))))==((void*)0),        come_call_finalizer2(sClass_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional205) {
            __dec_obj59=klass_127;
            klass_127=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value118=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value117=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 102, "struct sClass")))),type_name_126,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer2(sClass_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj60=klass_127;
            klass_127=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value120=sClass_clone(((struct sClass*)(right_value119=map$2charphsClassph_at(info->classes,type_name_126,((void*)0))))))));
            come_call_finalizer2(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sClass_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        expected_next_character(123,info);
        voidp_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 110, "struct sType")))),"void",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        voidp_128->mPointerNum++;
        list$1tuple2$2charphsTypephph_push_back(klass_127->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value128=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 113, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string("_protocol_obj")))),(struct sType*)come_increment_ref_count(voidp_128))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        finalizer_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 115, "struct sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values1___133[0]=come_increment_ref_count(((struct sType*)(right_value131=sType_clone(voidp_128))));
}        __dec_obj66=finalizer_132->mParamTypes;
        finalizer_132->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value133=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 117, "struct list$1sTypeph")))),1,__list_values1___133))));
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values2___135[0]=come_increment_ref_count(((char*)(right_value134=__builtin_string("self"))));
}        __dec_obj67=finalizer_132->mParamNames;
        finalizer_132->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 118, "struct list$1charph")))),1,__list_values2___135))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        finalizer_132->mVarArgs=(_Bool)0;
        __dec_obj68=finalizer_132->mResultType;
        finalizer_132->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value137=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 120, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 120, "struct sType")))),"void",(_Bool)0,info))))))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_127->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value141=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 122, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string("finalize")))),(struct sType*)come_increment_ref_count(finalizer_132))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        cloner_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value144=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 124, "struct sType")))),"lambda",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values3___138[0]=come_increment_ref_count(((struct sType*)(right_value146=sType_clone(voidp_128))));
}        __dec_obj69=cloner_137->mParamTypes;
        cloner_137->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value147=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 126, "struct list$1sTypeph")))),1,__list_values3___138))));
        come_call_finalizer2(list$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypeph_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1sTypephp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        {__list_values4___139[0]=come_increment_ref_count(((char*)(right_value149=__builtin_string("self"))));
}        __dec_obj70=cloner_137->mParamNames;
        cloner_137->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value151=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 127, "struct list$1charph")))),1,__list_values4___139))));
        come_call_finalizer2(list$1charph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charph_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        cloner_137->mVarArgs=(_Bool)0;
        __dec_obj71=cloner_137->mResultType;
        cloner_137->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value154=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value152=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 129, "struct tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(voidp_128))))))));
        come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple1$1sTypephp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        list$1tuple2$2charphsTypephph_push_back(klass_127->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value157=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value155=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 131, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string("clone")))),(struct sType*)come_increment_ref_count(cloner_137))))));
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple2$2sTypephcharph*)(right_value158=parse_interface_function(info)));
            type2_140=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_141=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            expected_next_character(59,info);
            list$1tuple2$2charphsTypephph_push_back(klass_127->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value160=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 138, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_141),(struct sType*)come_increment_ref_count(type2_140))))));
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional208=*info->p==125,            _if_conditional208) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer2(sType_finalize,type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_141 = come_decrement_ref_count2(name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            parse_sharp_v5(info);
            come_call_finalizer2(sType_finalize,type2_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_141 = come_decrement_ref_count2(name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 150, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value163=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value161=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 150, "struct sInterfaceNode")))),(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(type_name_126)))),(struct sClass*)come_increment_ref_count(klass_127),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sInterfaceNode_sline;
        _inf_value1->sname=(void*)sInterfaceNode_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result93__ = __result_obj__ = ((struct sNode*)(right_value168=_inf_value1));
        type_name_126 = come_decrement_ref_count2(type_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,klass_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,voidp_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,finalizer_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,cloner_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sInterfaceNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sInterfaceNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result93__;
        type_name_126 = come_decrement_ref_count2(type_name_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sClass_finalize,klass_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,voidp_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,finalizer_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,cloner_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result94__ = __result_obj__ = ((struct sNode*)(right_value169=top_level_v1(buf,head,head_sline,info)));
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result94__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional206;
void* right_value123;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj61;
_Bool _if_conditional207;
void* right_value124;
struct list_item$1tuple2$2charphsTypephph* litem_130;
struct tuple2$2charphsTypeph* __dec_obj62;
void* right_value125;
struct list_item$1tuple2$2charphsTypephph* litem_131;
struct tuple2$2charphsTypeph* __dec_obj63;
struct list$1tuple2$2charphsTypephph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value124 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value125 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional206=self->len==0,            _if_conditional206) {
                litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value123=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 225, "struct list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_129->prev=((void*)0);
                litem_129->next=((void*)0);
                __dec_obj61=litem_129->item;
                litem_129->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_129;
                self->head=litem_129;
            }
            else {
                if(_if_conditional207=self->len==1,                _if_conditional207) {
                    litem_130=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value124=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 235, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_130->prev=self->head;
                    litem_130->next=((void*)0);
                    __dec_obj62=litem_130->item;
                    litem_130->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_130;
                    self->head->next=litem_130;
                }
                else {
                    litem_131=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value125=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang2.h", 245, "struct list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer2(list_item$1tuple2$2charphsTypephphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_131->prev=self->tail;
                    litem_131->next=((void*)0);
                    __dec_obj63=litem_131->item;
                    litem_131->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer2(tuple2$2charphsTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_131;
                    self->tail=litem_131;
                }
            }
            self->len++;
            __result87__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result87__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj64;
struct sType* __dec_obj65;
struct tuple2$2charphsTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj64=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj65=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            __result88__ = __result_obj__ = self;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result88__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer2(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_134;
struct list$1sTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_134, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_134=0;            i_134<num_value;            i_134++            ){
                list$1sTypeph_push_back(self,values[i_134]);
            }
            __result89__ = __result_obj__ = self;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result89__;
            come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_136;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_136, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_136=0;            i_136<num_value;            i_136++            ){
                list$1charph_push_back(self,values[i_136]);
            }
            __result90__ = __result_obj__ = self;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result90__;
            come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional209=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional209) {
                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional210=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional210) {
                come_call_finalizer2(sClass_finalize,self->klass, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional211) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional212;
struct sInterfaceNode* __result91__;
void* right_value164;
struct sInterfaceNode* result_142;
_Bool _if_conditional213;
void* right_value165;
char* __dec_obj72;
_Bool _if_conditional214;
void* right_value166;
struct sClass* __dec_obj73;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value167;
char* __dec_obj74;
struct sInterfaceNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&result_142, 0, sizeof(struct sInterfaceNode*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
            if(_if_conditional212=self==(void*)0,            _if_conditional212) {
                __result91__ = __result_obj__ = (void*)0;
                return __result91__;
            }
            result_142=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value164=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "struct sInterfaceNode"))));
            come_call_finalizer2(sInterfaceNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional213=self!=((void*)0)&&self->name!=((void*)0),            _if_conditional213) {
                __dec_obj72=result_142->name;
                result_142->name=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->name))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional214=self!=((void*)0)&&self->klass!=((void*)0),            _if_conditional214) {
                __dec_obj73=result_142->klass;
                result_142->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value166=sClass_clone(self->klass))));
                come_call_finalizer2(sClass_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sClass_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                result_142->sline=self->sline;
            }
            if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional216) {
                __dec_obj74=result_142->sname;
                result_142->sname=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(self->sname))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result92__ = __result_obj__ = result_142;
            come_call_finalizer2(sInterfaceNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result92__;
            come_call_finalizer2(sInterfaceNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

