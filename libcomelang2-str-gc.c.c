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
    unsigned long long ri_secure_time_in_system;
    unsigned long long ri_secure_ptime_in_system;
    unsigned long long ri_reserved[12];
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
struct integer
{
    long value;
};
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre;
struct real_pcre8_or_16;
typedef struct real_pcre8_or_16 pcre16;
struct real_pcre32;
typedef struct real_pcre32 pcre32;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct real_pcre16_jit_stack;
typedef struct real_pcre16_jit_stack pcre16_jit_stack;
struct real_pcre32_jit_stack;
typedef struct real_pcre32_jit_stack pcre32_jit_stack;
struct pcre_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct pcre16_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};
typedef struct pcre16_extra pcre16_extra;
struct pcre32_extra
{
    unsigned long int flags;
    void* study_data;
    unsigned long int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};
typedef struct pcre32_extra pcre32_extra;
struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};
typedef struct pcre_callout_block pcre_callout_block;
struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};
typedef struct pcre16_callout_block pcre16_callout_block;
struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};
typedef struct pcre32_callout_block pcre32_callout_block;
extern void* (*pcre_malloc)(long int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(long int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(long int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(long int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(long int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(long int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);
typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);
typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);
typedef union anonymous_typeZ1 mbstate_t;
typedef unsigned long int clock_t;
typedef long time_t;
struct timespec
{
    long tv_sec;
    long tv_nsec;
};
struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char* tm_zone;
};
extern char** tzname;
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY8 { _CLOCK_REALTIME=0,
_CLOCK_MONOTONIC=6,
_CLOCK_MONOTONIC_RAW=4,
_CLOCK_MONOTONIC_RAW_APPROX=5,
_CLOCK_UPTIME_RAW=8,
_CLOCK_UPTIME_RAW_APPROX=9,
_CLOCK_PROCESS_CPUTIME_ID=12,
_CLOCK_THREAD_CPUTIME_ID=16
};
typedef enum anonymous_typeY8 clockid_t;
typedef int wint_t;
typedef unsigned int wctype_t;
struct anonymous_typeX9
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};
typedef struct anonymous_typeX9 _RuneEntry;
struct anonymous_typeX10
{
    int __nranges;
    struct anonymous_typeX9* __ranges;
};
typedef struct anonymous_typeX10 _RuneRange;
struct anonymous_typeX11
{
    char __name[14];
    unsigned int __mask;
};
typedef struct anonymous_typeX11 _RuneCharClass;
struct anonymous_typeX12
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,long int,char**);
    int (*__sputrune)(int,char*,long int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX10 __runetype_ext;
    struct anonymous_typeX10 __maplower_ext;
    struct anonymous_typeX10 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX11* __charclasses;
};
typedef struct anonymous_typeX12 _RuneLocale;
extern struct anonymous_typeX12 _DefaultRuneLocale;
extern struct anonymous_typeX12* _CurrentRuneLocale;
typedef int* wstring;
struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};
typedef long int ptrdiff_t;
typedef long double max_align_t;
typedef void* GC_PTR;
typedef unsigned long int GC_word;
typedef long GC_signed_word;
extern unsigned long int GC_gc_no;
typedef void* (*GC_oom_func)(long int);
extern void* (*GC_oom_fn)(long int);
typedef void (*GC_on_heap_resize_proc)(unsigned long int);
extern void (*GC_on_heap_resize)(unsigned long int);
enum anonymous_typeY13 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY13 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY13);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long int GC_free_space_divisor;
extern unsigned long int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long int GC_time_limit;
struct GC_timeval_s
{
    unsigned long int tv_ms;
    unsigned long int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long int heapsize_full;
    unsigned long int free_bytes_full;
    unsigned long int unmapped_bytes;
    unsigned long int bytes_allocd_since_gc;
    unsigned long int allocd_bytes_before_gc;
    unsigned long int non_gc_bytes;
    unsigned long int gc_no;
    unsigned long int markers_m1;
    unsigned long int bytes_reclaimed_since_gc;
    unsigned long int reclaimed_bytes_before_gc;
    unsigned long int expl_freed_bytes_since_gc;
    unsigned long int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY14 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY14 GC_ToggleRefStatus;
typedef enum anonymous_typeY14 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,long int);

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

void* reallocf(void* __ptr, long int __size);

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

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline, int id);

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

void* come_dynamic_typeof(void* mem);

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

struct integer* integer_initialize(struct integer* self, long value);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_to_int(struct integer* self);

_Bool integer_equals(struct integer* self, struct integer* right);

int integer_compare(struct integer* self, struct integer* right);

_Bool integer_operator_equals(struct integer* self, struct integer* right);

_Bool integer_operator_not_equals(struct integer* self, struct integer* right);

struct integer* integer_operator_add(struct integer* left, struct integer* right);

struct integer* integer_operator_sub(struct integer* left, struct integer* right);

struct integer* integer_operator_mult(struct integer* left, struct integer* right);

struct integer* integer_operator_div(struct integer* left, struct integer* right);

struct integer* integer_operator_mod(struct integer* left, struct integer* right);

struct integer* integer_operator_lshift(struct integer* left, struct integer* right);

struct integer* integer_operator_rshift(struct integer* left, struct integer* right);

struct integer* integer_operator_gteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lteq(struct integer* left, struct integer* right);

struct integer* integer_operator_lt(struct integer* left, struct integer* right);

struct integer* integer_operator_gt(struct integer* left, struct integer* right);

struct integer* integer_operator_and(struct integer* left, struct integer* right);

struct integer* integer_operator_xor(struct integer* left, struct integer* right);

struct integer* integer_operator_or(struct integer* left, struct integer* right);

struct integer* integer_operator_andand(struct integer* left, struct integer* right);

struct integer* integer_operator_oror(struct integer* left, struct integer* right);

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX479, int anonymous_var_nameX480, const char** anonymous_var_nameX481, int* anonymous_var_nameX482, const unsigned char* anonymous_var_nameX483);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX484, int anonymous_var_nameX485, const char** anonymous_var_nameX486, int* anonymous_var_nameX487, const unsigned char* anonymous_var_nameX488);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX489, int anonymous_var_nameX490, const char** anonymous_var_nameX491, int* anonymous_var_nameX492, const unsigned char* anonymous_var_nameX493);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX494, int anonymous_var_nameX495, int* anonymous_var_nameX496, const char** anonymous_var_nameX497, int* anonymous_var_nameX498, const unsigned char* anonymous_var_nameX499);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX500, int anonymous_var_nameX501, int* anonymous_var_nameX502, const char** anonymous_var_nameX503, int* anonymous_var_nameX504, const unsigned char* anonymous_var_nameX505);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX506, int anonymous_var_nameX507, int* anonymous_var_nameX508, const char** anonymous_var_nameX509, int* anonymous_var_nameX510, const unsigned char* anonymous_var_nameX511);

int pcre_config(int anonymous_var_nameX512, void* anonymous_var_nameX513);

int pcre16_config(int anonymous_var_nameX514, void* anonymous_var_nameX515);

int pcre32_config(int anonymous_var_nameX516, void* anonymous_var_nameX517);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX518, const char* anonymous_var_nameX519, int* anonymous_var_nameX520, int anonymous_var_nameX521, const char* anonymous_var_nameX522, char* anonymous_var_nameX523, int anonymous_var_nameX524);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX525, const unsigned short int* anonymous_var_nameX526, int* anonymous_var_nameX527, int anonymous_var_nameX528, const unsigned short int* anonymous_var_nameX529, unsigned short int* anonymous_var_nameX530, int anonymous_var_nameX531);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX532, const unsigned int* anonymous_var_nameX533, int* anonymous_var_nameX534, int anonymous_var_nameX535, const unsigned int* anonymous_var_nameX536, unsigned int* anonymous_var_nameX537, int anonymous_var_nameX538);

int pcre_copy_substring(const char* anonymous_var_nameX539, int* anonymous_var_nameX540, int anonymous_var_nameX541, int anonymous_var_nameX542, char* anonymous_var_nameX543, int anonymous_var_nameX544);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX545, int* anonymous_var_nameX546, int anonymous_var_nameX547, int anonymous_var_nameX548, unsigned short int* anonymous_var_nameX549, int anonymous_var_nameX550);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX551, int* anonymous_var_nameX552, int anonymous_var_nameX553, int anonymous_var_nameX554, unsigned int* anonymous_var_nameX555, int anonymous_var_nameX556);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX557, const struct pcre_extra* anonymous_var_nameX558, const char* anonymous_var_nameX559, int anonymous_var_nameX560, int anonymous_var_nameX561, int anonymous_var_nameX562, int* anonymous_var_nameX563, int anonymous_var_nameX564, int* anonymous_var_nameX565, int anonymous_var_nameX566);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX567, const struct pcre16_extra* anonymous_var_nameX568, const unsigned short int* anonymous_var_nameX569, int anonymous_var_nameX570, int anonymous_var_nameX571, int anonymous_var_nameX572, int* anonymous_var_nameX573, int anonymous_var_nameX574, int* anonymous_var_nameX575, int anonymous_var_nameX576);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX577, const struct pcre32_extra* anonymous_var_nameX578, const unsigned int* anonymous_var_nameX579, int anonymous_var_nameX580, int anonymous_var_nameX581, int anonymous_var_nameX582, int* anonymous_var_nameX583, int anonymous_var_nameX584, int* anonymous_var_nameX585, int anonymous_var_nameX586);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX587, const struct pcre_extra* anonymous_var_nameX588, const char* anonymous_var_nameX589, int anonymous_var_nameX590, int anonymous_var_nameX591, int anonymous_var_nameX592, int* anonymous_var_nameX593, int anonymous_var_nameX594);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX595, const struct pcre16_extra* anonymous_var_nameX596, const unsigned short int* anonymous_var_nameX597, int anonymous_var_nameX598, int anonymous_var_nameX599, int anonymous_var_nameX600, int* anonymous_var_nameX601, int anonymous_var_nameX602);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX603, const struct pcre32_extra* anonymous_var_nameX604, const unsigned int* anonymous_var_nameX605, int anonymous_var_nameX606, int anonymous_var_nameX607, int anonymous_var_nameX608, int* anonymous_var_nameX609, int anonymous_var_nameX610);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX611, const struct pcre_extra* anonymous_var_nameX612, const char* anonymous_var_nameX613, int anonymous_var_nameX614, int anonymous_var_nameX615, int anonymous_var_nameX616, int* anonymous_var_nameX617, int anonymous_var_nameX618, struct real_pcre_jit_stack* anonymous_var_nameX619);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX620, const struct pcre16_extra* anonymous_var_nameX621, const unsigned short int* anonymous_var_nameX622, int anonymous_var_nameX623, int anonymous_var_nameX624, int anonymous_var_nameX625, int* anonymous_var_nameX626, int anonymous_var_nameX627, struct real_pcre16_jit_stack* anonymous_var_nameX628);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX629, const struct pcre32_extra* anonymous_var_nameX630, const unsigned int* anonymous_var_nameX631, int anonymous_var_nameX632, int anonymous_var_nameX633, int anonymous_var_nameX634, int* anonymous_var_nameX635, int anonymous_var_nameX636, struct real_pcre32_jit_stack* anonymous_var_nameX637);

void pcre_free_substring(const char* anonymous_var_nameX638);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX639);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX640);

void pcre_free_substring_list(const char** anonymous_var_nameX641);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX642);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX643);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX644, const struct pcre_extra* anonymous_var_nameX645, int anonymous_var_nameX646, void* anonymous_var_nameX647);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX648, const struct pcre16_extra* anonymous_var_nameX649, int anonymous_var_nameX650, void* anonymous_var_nameX651);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX652, const struct pcre32_extra* anonymous_var_nameX653, int anonymous_var_nameX654, void* anonymous_var_nameX655);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX656, const char* anonymous_var_nameX657, int* anonymous_var_nameX658, int anonymous_var_nameX659, const char* anonymous_var_nameX660, const char** anonymous_var_nameX661);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX662, const unsigned short int* anonymous_var_nameX663, int* anonymous_var_nameX664, int anonymous_var_nameX665, const unsigned short int* anonymous_var_nameX666, const unsigned short int** anonymous_var_nameX667);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX668, const unsigned int* anonymous_var_nameX669, int* anonymous_var_nameX670, int anonymous_var_nameX671, const unsigned int* anonymous_var_nameX672, const unsigned int** anonymous_var_nameX673);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX674, const char* anonymous_var_nameX675);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX676, const unsigned short int* anonymous_var_nameX677);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX678, const unsigned int* anonymous_var_nameX679);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX680, const char* anonymous_var_nameX681, char** anonymous_var_nameX682, char** anonymous_var_nameX683);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX684, const unsigned short int* anonymous_var_nameX685, unsigned short int** anonymous_var_nameX686, unsigned short int** anonymous_var_nameX687);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX688, const unsigned int* anonymous_var_nameX689, unsigned int** anonymous_var_nameX690, unsigned int** anonymous_var_nameX691);

int pcre_get_substring(const char* anonymous_var_nameX692, int* anonymous_var_nameX693, int anonymous_var_nameX694, int anonymous_var_nameX695, const char** anonymous_var_nameX696);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX697, int* anonymous_var_nameX698, int anonymous_var_nameX699, int anonymous_var_nameX700, const unsigned short int** anonymous_var_nameX701);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX702, int* anonymous_var_nameX703, int anonymous_var_nameX704, int anonymous_var_nameX705, const unsigned int** anonymous_var_nameX706);

int pcre_get_substring_list(const char* anonymous_var_nameX707, int* anonymous_var_nameX708, int anonymous_var_nameX709, const char*** anonymous_var_nameX710);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX711, int* anonymous_var_nameX712, int anonymous_var_nameX713, const unsigned short int*** anonymous_var_nameX714);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX715, int* anonymous_var_nameX716, int anonymous_var_nameX717, const unsigned int*** anonymous_var_nameX718);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX719, int anonymous_var_nameX720);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX721, int anonymous_var_nameX722);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX723, int anonymous_var_nameX724);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX725, int anonymous_var_nameX726, const char** anonymous_var_nameX727);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX728, int anonymous_var_nameX729, const char** anonymous_var_nameX730);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX731, int anonymous_var_nameX732, const char** anonymous_var_nameX733);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX734);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX735);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX736);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX737, struct pcre_extra* anonymous_var_nameX738, const unsigned char* anonymous_var_nameX739);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX740, struct pcre16_extra* anonymous_var_nameX741, const unsigned char* anonymous_var_nameX742);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX743, struct pcre32_extra* anonymous_var_nameX744, const unsigned char* anonymous_var_nameX745);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX746, const unsigned short int* anonymous_var_nameX747, int anonymous_var_nameX748, int* anonymous_var_nameX749, int anonymous_var_nameX750);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX751, const unsigned int* anonymous_var_nameX752, int anonymous_var_nameX753, int* anonymous_var_nameX754, int anonymous_var_nameX755);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX756, int anonymous_var_nameX757);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX758, int anonymous_var_nameX759);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX760, int anonymous_var_nameX761);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX762);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX763);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX764);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX765, struct real_pcre_jit_stack* (*anonymous_var_nameX766)(void*), void* anonymous_var_nameX767);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX768, struct real_pcre16_jit_stack* (*anonymous_var_nameX769)(void*), void* anonymous_var_nameX770);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX771, struct real_pcre32_jit_stack* (*anonymous_var_nameX772)(void*), void* anonymous_var_nameX773);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

char* asctime(const struct tm* anonymous_var_nameX774);

unsigned long int clock();

char* ctime(const long* anonymous_var_nameX775);

double difftime(long anonymous_var_nameX776, long anonymous_var_nameX777);

struct tm* getdate(const char* anonymous_var_nameX778);

struct tm* gmtime(const long* anonymous_var_nameX779);

struct tm* localtime(const long* anonymous_var_nameX780);

long mktime(struct tm* anonymous_var_nameX781);

long int strftime(char* anonymous_var_nameX782, long int anonymous_var_nameX783, const char* anonymous_var_nameX784, const struct tm* anonymous_var_nameX785);

char* strptime(const char* anonymous_var_nameX786, const char* anonymous_var_nameX787, struct tm* anonymous_var_nameX788);

long time(long* anonymous_var_nameX789);

void tzset();

char* asctime_r(const struct tm* anonymous_var_nameX790, char* anonymous_var_nameX791);

char* ctime_r(const long* anonymous_var_nameX792, char* anonymous_var_nameX793);

struct tm* gmtime_r(const long* anonymous_var_nameX794, struct tm* anonymous_var_nameX795);

struct tm* localtime_r(const long* anonymous_var_nameX796, struct tm* anonymous_var_nameX797);

long posix2time(long anonymous_var_nameX798);

void tzsetwall();

long time2posix(long anonymous_var_nameX799);

long timelocal(struct tm* anonymous_var_nameX800);

long timegm(struct tm* anonymous_var_nameX801);

int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);

int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);

int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);

unsigned long long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);

int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);

int timespec_get(struct timespec* ts, int base);

int isalnum(int anonymous_var_nameX816);

int isalpha(int anonymous_var_nameX817);

int isblank(int anonymous_var_nameX818);

int iscntrl(int anonymous_var_nameX819);

int isdigit(int anonymous_var_nameX820);

int isgraph(int anonymous_var_nameX821);

int islower(int anonymous_var_nameX822);

int isprint(int anonymous_var_nameX823);

int ispunct(int anonymous_var_nameX824);

int isspace(int anonymous_var_nameX825);

int isupper(int anonymous_var_nameX826);

int isxdigit(int anonymous_var_nameX827);

int tolower(int anonymous_var_nameX828);

int toupper(int anonymous_var_nameX829);

int isascii(int anonymous_var_nameX830);

int toascii(int anonymous_var_nameX831);

int _tolower(int anonymous_var_nameX832);

int _toupper(int anonymous_var_nameX833);

int digittoint(int anonymous_var_nameX834);

int ishexnumber(int anonymous_var_nameX835);

int isideogram(int anonymous_var_nameX836);

int isnumber(int anonymous_var_nameX837);

int isphonogram(int anonymous_var_nameX838);

int isrune(int anonymous_var_nameX839);

int isspecial(int anonymous_var_nameX840);

int iswalnum(int anonymous_var_nameX841);

int iswalpha(int anonymous_var_nameX842);

int iswcntrl(int anonymous_var_nameX843);

int iswctype(int anonymous_var_nameX844, unsigned int anonymous_var_nameX845);

int iswdigit(int anonymous_var_nameX846);

int iswgraph(int anonymous_var_nameX847);

int iswlower(int anonymous_var_nameX848);

int iswprint(int anonymous_var_nameX849);

int iswpunct(int anonymous_var_nameX850);

int iswspace(int anonymous_var_nameX851);

int iswupper(int anonymous_var_nameX852);

int iswxdigit(int anonymous_var_nameX853);

int towlower(int anonymous_var_nameX854);

int towupper(int anonymous_var_nameX855);

unsigned int wctype(const char* anonymous_var_nameX856);

int btowc(int anonymous_var_nameX857);

int fgetwc(struct __sFILE* anonymous_var_nameX858);

int* fgetws(int* anonymous_var_nameX859, int anonymous_var_nameX860, struct __sFILE* anonymous_var_nameX861);

int fputwc(int anonymous_var_nameX862, struct __sFILE* anonymous_var_nameX863);

int fputws(const int* anonymous_var_nameX864, struct __sFILE* anonymous_var_nameX865);

int fwide(struct __sFILE* anonymous_var_nameX866, int anonymous_var_nameX867);

int fwprintf(struct __sFILE* anonymous_var_nameX868, const int* anonymous_var_nameX869, ...);

int fwscanf(struct __sFILE* anonymous_var_nameX870, const int* anonymous_var_nameX871, ...);

int getwc(struct __sFILE* anonymous_var_nameX872);

int getwchar();

long int mbrlen(const char* anonymous_var_nameX873, long int anonymous_var_nameX874, union anonymous_typeZ1* anonymous_var_nameX875);

long int mbrtowc(int* anonymous_var_nameX876, const char* anonymous_var_nameX877, long int anonymous_var_nameX878, union anonymous_typeZ1* anonymous_var_nameX879);

int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX880);

long int mbsrtowcs(int* anonymous_var_nameX881, const char** anonymous_var_nameX882, long int anonymous_var_nameX883, union anonymous_typeZ1* anonymous_var_nameX884);

int putwc(int anonymous_var_nameX885, struct __sFILE* anonymous_var_nameX886);

int putwchar(int anonymous_var_nameX887);

int swprintf(int* anonymous_var_nameX888, long int anonymous_var_nameX889, const int* anonymous_var_nameX890, ...);

int swscanf(const int* anonymous_var_nameX891, const int* anonymous_var_nameX892, ...);

int ungetwc(int anonymous_var_nameX893, struct __sFILE* anonymous_var_nameX894);

int vfwprintf(struct __sFILE* anonymous_var_nameX895, const int* anonymous_var_nameX896, __darwin_va_list anonymous_var_nameX897);

int vswprintf(int* anonymous_var_nameX898, long int anonymous_var_nameX899, const int* anonymous_var_nameX900, __darwin_va_list anonymous_var_nameX901);

int vwprintf(const int* anonymous_var_nameX902, __darwin_va_list anonymous_var_nameX903);

long int wcrtomb(char* anonymous_var_nameX904, int anonymous_var_nameX905, union anonymous_typeZ1* anonymous_var_nameX906);

int* wcscat(int* anonymous_var_nameX907, const int* anonymous_var_nameX908);

int* wcschr(const int* anonymous_var_nameX909, int anonymous_var_nameX910);

int wcscmp(const int* anonymous_var_nameX911, const int* anonymous_var_nameX912);

int wcscoll(const int* anonymous_var_nameX913, const int* anonymous_var_nameX914);

int* wcscpy(int* anonymous_var_nameX915, const int* anonymous_var_nameX916);

long int wcscspn(const int* anonymous_var_nameX917, const int* anonymous_var_nameX918);

long int wcsftime(int* anonymous_var_nameX919, long int anonymous_var_nameX920, const int* anonymous_var_nameX921, const struct tm* anonymous_var_nameX922);

long int wcslen(const int* anonymous_var_nameX923);

int* wcsncat(int* anonymous_var_nameX924, const int* anonymous_var_nameX925, long int anonymous_var_nameX926);

int wcsncmp(const int* anonymous_var_nameX927, const int* anonymous_var_nameX928, long int anonymous_var_nameX929);

int* wcsncpy(int* anonymous_var_nameX930, const int* anonymous_var_nameX931, long int anonymous_var_nameX932);

int* wcspbrk(const int* anonymous_var_nameX933, const int* anonymous_var_nameX934);

int* wcsrchr(const int* anonymous_var_nameX935, int anonymous_var_nameX936);

long int wcsrtombs(char* anonymous_var_nameX937, const int** anonymous_var_nameX938, long int anonymous_var_nameX939, union anonymous_typeZ1* anonymous_var_nameX940);

long int wcsspn(const int* anonymous_var_nameX941, const int* anonymous_var_nameX942);

int* wcsstr(const int* anonymous_var_nameX943, const int* anonymous_var_nameX944);

long int wcsxfrm(int* anonymous_var_nameX945, const int* anonymous_var_nameX946, long int anonymous_var_nameX947);

int wctob(int anonymous_var_nameX948);

double wcstod(const int* anonymous_var_nameX949, int** anonymous_var_nameX950);

int* wcstok(int* anonymous_var_nameX951, const int* anonymous_var_nameX952, int** anonymous_var_nameX953);

long wcstol(const int* anonymous_var_nameX954, int** anonymous_var_nameX955, int anonymous_var_nameX956);

unsigned long int wcstoul(const int* anonymous_var_nameX957, int** anonymous_var_nameX958, int anonymous_var_nameX959);

int* wmemchr(const int* anonymous_var_nameX960, int anonymous_var_nameX961, long int anonymous_var_nameX962);

int wmemcmp(const int* anonymous_var_nameX963, const int* anonymous_var_nameX964, long int anonymous_var_nameX965);

int* wmemcpy(int* anonymous_var_nameX966, const int* anonymous_var_nameX967, long int anonymous_var_nameX968);

int* wmemmove(int* anonymous_var_nameX969, const int* anonymous_var_nameX970, long int anonymous_var_nameX971);

int* wmemset(int* anonymous_var_nameX972, int anonymous_var_nameX973, long int anonymous_var_nameX974);

int wprintf(const int* anonymous_var_nameX975, ...);

int wscanf(const int* anonymous_var_nameX976, ...);

int wcswidth(const int* anonymous_var_nameX977, long int anonymous_var_nameX978);

int wcwidth(int anonymous_var_nameX979);

int vfwscanf(struct __sFILE* anonymous_var_nameX980, const int* anonymous_var_nameX981, __darwin_va_list anonymous_var_nameX982);

int vswscanf(const int* anonymous_var_nameX983, const int* anonymous_var_nameX984, __darwin_va_list anonymous_var_nameX985);

int vwscanf(const int* anonymous_var_nameX986, __darwin_va_list anonymous_var_nameX987);

float wcstof(const int* anonymous_var_nameX988, int** anonymous_var_nameX989);

long double wcstold(const int* anonymous_var_nameX990, int** anonymous_var_nameX991);

long long wcstoll(const int* anonymous_var_nameX992, int** anonymous_var_nameX993, int anonymous_var_nameX994);

unsigned long long wcstoull(const int* anonymous_var_nameX995, int** anonymous_var_nameX996, int anonymous_var_nameX997);

long int mbsnrtowcs(int* anonymous_var_nameX998, const char** anonymous_var_nameX999, long int anonymous_var_nameX1000, long int anonymous_var_nameX1001, union anonymous_typeZ1* anonymous_var_nameX1002);

int* wcpcpy(int* anonymous_var_nameX1003, const int* anonymous_var_nameX1004);

int* wcpncpy(int* anonymous_var_nameX1005, const int* anonymous_var_nameX1006, long int anonymous_var_nameX1007);

int* wcsdup(const int* anonymous_var_nameX1008);

int wcscasecmp(const int* anonymous_var_nameX1009, const int* anonymous_var_nameX1010);

int wcsncasecmp(const int* anonymous_var_nameX1011, const int* anonymous_var_nameX1012, long int n);

long int wcsnlen(const int* anonymous_var_nameX1013, long int anonymous_var_nameX1014);

long int wcsnrtombs(char* anonymous_var_nameX1015, const int** anonymous_var_nameX1016, long int anonymous_var_nameX1017, long int anonymous_var_nameX1018, union anonymous_typeZ1* anonymous_var_nameX1019);

struct __sFILE* open_wmemstream(int** __bufp, long int* __sizep);

int* fgetwln(struct __sFILE* anonymous_var_nameX1020, long int* anonymous_var_nameX1021);

long int wcslcat(int* anonymous_var_nameX1022, const int* anonymous_var_nameX1023, long int anonymous_var_nameX1024);

long int wcslcpy(int* anonymous_var_nameX1025, const int* anonymous_var_nameX1026, long int anonymous_var_nameX1027);

unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1029)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1031)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1033)(enum anonymous_typeY13));

void (*GC_get_on_collection_event())(enum anonymous_typeY13);

void GC_set_find_leak(int anonymous_var_nameX1034);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1035);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1036);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1037);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1038)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1039);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1040);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1041);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1042);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1043);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1044);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1045);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1046);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1047);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1048);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1049);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX1050);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1051);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1052);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1053);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1054);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX1055);

void* GC_malloc_atomic(long int anonymous_var_nameX1056);

char* GC_strdup(const char* anonymous_var_nameX1057);

char* GC_strndup(const char* anonymous_var_nameX1058, long int anonymous_var_nameX1059);

void* GC_malloc_uncollectable(long int anonymous_var_nameX1060);

void* GC_malloc_stubborn(long int anonymous_var_nameX1061);

void* GC_memalign(long int anonymous_var_nameX1062, long int anonymous_var_nameX1063);

int GC_posix_memalign(void** anonymous_var_nameX1064, long int anonymous_var_nameX1065, long int anonymous_var_nameX1066);

void GC_free(void* anonymous_var_nameX1067);

void GC_change_stubborn(const void* anonymous_var_nameX1068);

void GC_end_stubborn_change(const void* anonymous_var_nameX1069);

void* GC_base(void* anonymous_var_nameX1070);

int GC_is_heap_ptr(const void* anonymous_var_nameX1071);

long int GC_size(const void* anonymous_var_nameX1072);

void* GC_realloc(void* anonymous_var_nameX1073, long int anonymous_var_nameX1074);

int GC_expand_hp(long int anonymous_var_nameX1075);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1076);

void GC_exclude_static_roots(void* anonymous_var_nameX1077, void* anonymous_var_nameX1078);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1079, void* anonymous_var_nameX1080);

void GC_remove_roots(void* anonymous_var_nameX1081, void* anonymous_var_nameX1082);

void GC_register_displacement(long int anonymous_var_nameX1083);

void GC_debug_register_displacement(long int anonymous_var_nameX1084);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1085)());

void GC_set_stop_func(int (*anonymous_var_nameX1086)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1087, unsigned long int* anonymous_var_nameX1088, unsigned long int* anonymous_var_nameX1089, unsigned long int* anonymous_var_nameX1090, unsigned long int* anonymous_var_nameX1091);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1092, long int anonymous_var_nameX1093);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1094);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX1095);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1096);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX1097);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX1098, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX1099, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX1100, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1101, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1102, long int anonymous_var_nameX1103, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX1104, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX1105, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX1106, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1107, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1108);

void* GC_debug_realloc(void* anonymous_var_nameX1109, long int anonymous_var_nameX1110, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1111);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1112);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX1113);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1114, long int anonymous_var_nameX1115);

void GC_register_finalizer(void* anonymous_var_nameX1118, void (*anonymous_var_nameX1119)(void*,void*), void* anonymous_var_nameX1120, void (*anonymous_var_nameX1121)(void*,void*), void** anonymous_var_nameX1122);

void GC_debug_register_finalizer(void* anonymous_var_nameX1123, void (*anonymous_var_nameX1124)(void*,void*), void* anonymous_var_nameX1125, void (*anonymous_var_nameX1126)(void*,void*), void** anonymous_var_nameX1127);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1128, void (*anonymous_var_nameX1129)(void*,void*), void* anonymous_var_nameX1130, void (*anonymous_var_nameX1131)(void*,void*), void** anonymous_var_nameX1132);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1133, void (*anonymous_var_nameX1134)(void*,void*), void* anonymous_var_nameX1135, void (*anonymous_var_nameX1136)(void*,void*), void** anonymous_var_nameX1137);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1138, void (*anonymous_var_nameX1139)(void*,void*), void* anonymous_var_nameX1140, void (*anonymous_var_nameX1141)(void*,void*), void** anonymous_var_nameX1142);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1143, void (*anonymous_var_nameX1144)(void*,void*), void* anonymous_var_nameX1145, void (*anonymous_var_nameX1146)(void*,void*), void** anonymous_var_nameX1147);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1148, void (*anonymous_var_nameX1149)(void*,void*), void* anonymous_var_nameX1150, void (*anonymous_var_nameX1151)(void*,void*), void** anonymous_var_nameX1152);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1153, void (*anonymous_var_nameX1154)(void*,void*), void* anonymous_var_nameX1155, void (*anonymous_var_nameX1156)(void*,void*), void** anonymous_var_nameX1157);

int GC_register_disappearing_link(void** anonymous_var_nameX1158);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1159, const void* anonymous_var_nameX1160);

int GC_move_disappearing_link(void** anonymous_var_nameX1161, void** anonymous_var_nameX1162);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1163);

int GC_register_long_link(void** anonymous_var_nameX1164, const void* anonymous_var_nameX1165);

int GC_move_long_link(void** anonymous_var_nameX1166, void** anonymous_var_nameX1167);

int GC_unregister_long_link(void** anonymous_var_nameX1168);

void GC_set_toggleref_func(enum anonymous_typeY14 (*anonymous_var_nameX1170)(void*));

enum anonymous_typeY14 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1171, int anonymous_var_nameX1172);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1174)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1175);

void GC_set_warn_proc(void (*anonymous_var_nameX1178)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1179, unsigned long int anonymous_var_nameX1180);

void GC_set_log_fd(int anonymous_var_nameX1181);

void GC_set_abort_func(void (*anonymous_var_nameX1183)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1185)(void*), void* anonymous_var_nameX1186);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1189)(struct GC_stack_base*,void*), void* anonymous_var_nameX1190);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1191)(void*), void* anonymous_var_nameX1192);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1193)(void*), void* anonymous_var_nameX1194);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1195);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1196);

void GC_set_stackbottom(void* anonymous_var_nameX1197, const struct GC_stack_base* anonymous_var_nameX1198);

void* GC_same_obj(void* anonymous_var_nameX1199, void* anonymous_var_nameX1200);

void* GC_pre_incr(void** anonymous_var_nameX1201, long int anonymous_var_nameX1202);

void* GC_post_incr(void** anonymous_var_nameX1203, long int anonymous_var_nameX1204);

void* GC_is_visible(void* anonymous_var_nameX1205);

void* GC_is_valid_displacement(void* anonymous_var_nameX1206);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1207);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1208, const void* anonymous_var_nameX1209);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1210, const void* anonymous_var_nameX1211);

void* GC_malloc_many(long int anonymous_var_nameX1232);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1236)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1237);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

void regex_finalizer(void* obj, void* client_data);

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

void come_regex_finalize(struct come_regex* reg);

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);

struct come_regex* come_regex_clone(struct come_regex* reg);

char* come_regex_to_string(struct come_regex* regex);

char* string_lower_case(char* str);

char* string_upper_case(char* str);

int* wchar_tp_substring(int* str, int head, int tail);

int* __builtin_wstring(char* str);

int charp_index_count(char* str, char* search_str, int count, int default_value);

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);

int charp_rindex(char* str, char* search_str, int default_value);

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);

int charp_rindex_count(char* str, char* search_str, int count, int default_value);

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);

char* charp_strip(char* self);

char* charp_printable(char* str);

char* wchar_tp_to_string(int* wstr);

int* charp_to_wstring(char* str);

int wchar_tp_length(int* str);

int* wchar_tp_delete(int* str, int head, int tail);

int wchar_tp_index(int* str, int* search_str, int default_value);

int wchar_tp_rindex(int* str, int* search_str, int default_value);

int* wchar_tp_reverse(int* str);

int* wchar_tp_multiply(int* str, int n);

int* wchar_tp_printable(int* str);

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);

static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(int* left, int* right);

int wstring_compare(int* left, int* right);

unsigned int come_regex_get_hash_key(struct come_regex* reg);

_Bool wchar_tp_equals(int left, int right);

int* wchar_tp_operator_mult(int* str, int n);

int* wstring_operator_mult(int* str, int n);

_Bool wchar_tp_operator_equals(int* left, int* right);

_Bool wstring_operator_equals(int* left, int* right);

_Bool wchar_tp_operator_not_equals(int* left, int* right);

_Bool wstring_operator_not_equals(int* left, int* right);

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);

int* wchar_tp_operator_add(int* left, int* right);

int* wstring_operator_add(int* left, int* right);

int charp_index(char* str, char* search_str, int default_value);

int charp_index_regex(char* self, struct come_regex* reg, int default_value);

char* charp_replace(char* self, int index, char c);

char* charp_multiply(char* str, int n);

char* charp_sub(char* self, struct come_regex* reg, char* replace);

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);

struct list$1charph* charp_split_str(char* self, char* str);

struct list$1charph* charp_scan(char* self, struct come_regex* reg);

struct list$1charph* charp_split(char* self, struct come_regex* reg);

_Bool charp_match(char* self, struct come_regex* reg);

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);

_Bool charp_match_count(char* self, struct come_regex* reg, int count);

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));

unsigned int wchar_tp_get_hash_key(int* value);

_Bool wstring_equals(int* left, int* right);

_Bool wchar_t_operator_equals(int left, int right);

_Bool wchar_t_operator_not_equals(int left, int right);

unsigned int wchar_t_get_hash_key(int value);

_Bool wchar_t_equals(int left, int right);

char* wchar_t_to_string(int wc);

char* string_chomp(char* str);

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
struct smart_pointer$1char* result_0;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
    result_0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1948, "smart_pointer$1char");
    result_0->memory=buffer_clone(self);
    result_0->p=result_0->memory->buf;
    __result2__ = __result_obj__ = result_0;
    return __result2__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1char* result_1;
struct smart_pointer$1char* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
    result_1=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1958, "smart_pointer$1char");
    result_1->memory=buffer_clone(self);
    result_1->p=(char*)result_1->memory->buf;
    __result3__ = __result_obj__ = result_1;
    return __result3__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1short* result_2;
struct smart_pointer$1short* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
    result_2=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 1968, "smart_pointer$1short");
    result_2->memory=buffer_clone(self);
    result_2->p=(short short*)result_2->memory->buf;
    __result4__ = __result_obj__ = result_2;
    return __result4__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1int* result_3;
struct smart_pointer$1int* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
    result_3=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 1978, "smart_pointer$1int");
    result_3->memory=buffer_clone(self);
    result_3->p=(int*)result_3->memory->buf;
    __result5__ = __result_obj__ = result_3;
    return __result5__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
struct smart_pointer$1long* result_4;
struct smart_pointer$1long* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
    result_4=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 1988, "smart_pointer$1long");
    result_4->memory=buffer_clone(self);
    result_4->p=(long*)result_4->memory->buf;
    __result6__ = __result_obj__ = result_4;
    return __result6__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    __result7__ = __result_obj__ = xsprintf(msg,self);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = __result_obj__ = xsprintf(msg,self);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    __result9__ = __result_obj__ = xsprintf(msg,self);
    return __result9__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__;
int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = __result_obj__ = wchar_tp_substring(str,head,tail);
    return __result10__;
}
static inline int string_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = charp_index_count(str,search_str,count,default_value);
    return __result11__;
}
static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    __result12__ = charp_index_regex_count(self,reg,count,default_value);
    return __result12__;
}
static inline int string_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = charp_rindex(str,search_str,default_value);
    return __result13__;
}
static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = charp_rindex_regex(self,reg,default_value);
    return __result14__;
}
static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    __result15__ = charp_rindex_count(str,search_str,default_value,-1);
    return __result15__;
}
static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __result16__ = __result_obj__ = charp_scan_block(self,reg,parent,block);
    return __result16__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    __result17__ = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    return __result17__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __result18__ = __result_obj__ = charp_split_block(self,reg,parent,block);
    return __result18__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    __result19__ = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    return __result19__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __result20__ = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    return __result20__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
    __result21__ = __result_obj__ = charp_strip(self);
    return __result21__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __result22__ = __result_obj__ = string_printable(str);
    return __result22__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__;
int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = __result_obj__ = charp_to_wstring(str);
    return __result23__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    __result24__ = __result_obj__ = wchar_tp_to_string(wstr);
    return __result24__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__;
int* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    __result25__ = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    return __result25__;
}
static inline int wstring_length(int* str){
void* __result_obj__;
int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = wchar_tp_length(str);
    return __result26__;
}
static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__;
int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    __result27__ = __result_obj__ = wchar_tp_delete(str,head,tail);
    return __result27__;
}
static inline int wstring_index(int* str, int* search_str, int default_value){
void* __result_obj__;
int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    __result28__ = wchar_tp_index(str,search_str,default_value);
    return __result28__;
}
static inline int wstring_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = wchar_tp_rindex(str,search_str,default_value);
    return __result29__;
}
static inline int* wstring_reverse(int* str){
void* __result_obj__;
int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    __result30__ = __result_obj__ = wchar_tp_reverse(str);
    return __result30__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__;
int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
    __result31__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result31__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__;
int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = __result_obj__ = wchar_tp_printable(str);
    return __result32__;
}
static inline unsigned int wstring_get_hash_key(int* value){
void* __result_obj__;
unsigned int __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    __result33__ = wchar_tp_get_hash_key(value);
    return __result33__;
}
static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    __result34__ = charp_match_group_strings(self,reg,count,group_strings);
    return __result34__;
}
static inline int string_index(char* str, char* search_str, int default_value){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = charp_index(str,search_str,default_value);
    return __result35__;
}
static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    __result36__ = charp_index_regex(self,reg,default_value);
    return __result36__;
}
static inline char* string_replace(char* self, int index, char c){
void* __result_obj__;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = __result_obj__ = charp_replace(self,index,c);
    return __result37__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = __result_obj__ = charp_multiply(str,n);
    return __result38__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    __result39__ = __result_obj__ = charp_sub(self,reg,replace);
    return __result39__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = __result_obj__ = charp_sub_count(self,reg,replace,count);
    return __result40__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = __result_obj__ = charp_split_str(self,str);
    return __result41__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = __result_obj__ = charp_scan(self,reg);
    return __result42__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = __result_obj__ = charp_split(self,reg);
    return __result43__;
}
static inline _Bool string_match(char* self, struct come_regex* reg){
void* __result_obj__;
_Bool __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = charp_match(self,reg);
    return __result44__;
}
static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    __result45__ = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    return __result45__;
}
static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = charp_rindex_regex_count(self,reg,count,default_value);
    return __result46__;
}
static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
    __result47__ = charp_match_count(self,reg,count);
    return __result47__;
}
static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    __result48__ = __result_obj__ = charp_sub_block(self,reg,parent,block);
    return __result48__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    return __result49__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = __result_obj__ = string_chomp(str);
    return __result51__;
}

// body function


















































void regex_finalizer(void* obj, void* client_data){
void* __result_obj__;
struct come_regex* self_5;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&self_5, 0, sizeof(struct come_regex*));
    self_5=obj;
    if(_if_conditional1=self_5&&self_5->re,    _if_conditional1) {
        free(self_5->re);
    }
}

struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_6;
int erro_ofs_7;
int options_8;
_Bool _if_conditional2;
_Bool _if_conditional3;
struct come_regex* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_7, 0, sizeof(int));
memset(&options_8, 0, sizeof(int));
    options_8=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_8;
    self->re=pcre_compile(str,options_8,&err_6,&erro_ofs_7,((void*)0));
    if(_if_conditional2=self->re==((void*)0),    _if_conditional2) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    if(gComeGCLib) {
        GC_register_finalizer(self,regex_finalizer,((void*)0),((void*)0),((void*)0));
    }
    __result52__ = __result_obj__ = self;
    return __result52__;
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional4;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional4=reg&&reg->str,    _if_conditional4) {
    }
    if(_if_conditional5=reg&&reg->re,    _if_conditional5) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 61, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result53__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
struct come_regex* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = __result_obj__ = come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 66, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    return __result54__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional6;
struct come_regex* __result55__;
struct come_regex* result_9;
const char* err_10;
int erro_ofs_11;
_Bool _if_conditional7;
struct come_regex* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct come_regex*));
memset(&erro_ofs_11, 0, sizeof(int));
    if(_if_conditional6=reg==((void*)0),    _if_conditional6) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    result_9=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str-gc.c", 76, "come_regex");
    result_9->str=string_clone(reg->str);
    result_9->ignore_case=reg->ignore_case;
    result_9->multiline=reg->multiline;
    result_9->global=reg->global;
    result_9->extended=reg->extended;
    result_9->dotall=reg->dotall;
    result_9->anchored=reg->anchored;
    result_9->dollar_endonly=reg->dollar_endonly;
    result_9->ungreedy=reg->ungreedy;
    result_9->options=reg->options;
    result_9->re=pcre_compile(result_9->str,result_9->options,&err_10,&erro_ofs_11,((void*)0));
    if(_if_conditional7=result_9->re==((void*)0),    _if_conditional7) {
        printf("regex compile error(%s)\n",result_9->str);
        stackframe();
        exit(1);
    }
    __result56__ = __result_obj__ = result_9;
    return __result56__;
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    __result57__ = __result_obj__ = __builtin_string(regex->str);
    return __result57__;
}

char* string_lower_case(char* str){
void* __result_obj__;
char* result_12;
int i_13;
_Bool _if_conditional8;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_12, 0, sizeof(char*));
memset(&i_13, 0, sizeof(int));
    result_12=__builtin_string(str);
    for(    i_13=0;    i_13<strlen(str);    i_13++    ){
        if(_if_conditional8=str[i_13]>=65&&str[i_13]<=90,        _if_conditional8) {
            result_12[i_13]=str[i_13]-65+97;
        }
    }
    __result58__ = __result_obj__ = result_12;
    return __result58__;
}

char* string_upper_case(char* str){
void* __result_obj__;
char* result_14;
int i_15;
_Bool _if_conditional9;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_14, 0, sizeof(char*));
memset(&i_15, 0, sizeof(int));
    result_14=__builtin_string(str);
    for(    i_15=0;    i_15<strlen(str);    i_15++    ){
        if(_if_conditional9=str[i_15]>=97&&str[i_15]<=122,        _if_conditional9) {
            result_14[i_15]=str[i_15]-97+65;
        }
    }
    __result59__ = __result_obj__ = result_14;
    return __result59__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional10;
int* __result60__;
int len_16;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
int* __result61__;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
int* __result62__;
_Bool _if_conditional17;
int* __result63__;
int* result_17;
int* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_16, 0, sizeof(int));
memset(&result_17, 0, sizeof(int*));
    if(_if_conditional10=str==((void*)0),    _if_conditional10) {
        __result60__ = __result_obj__ = __builtin_wstring("");
        return __result60__;
    }
    len_16=wcslen(str);
    if(_if_conditional11=head<0,    _if_conditional11) {
        head+=len_16;
    }
    if(_if_conditional12=tail<0,    _if_conditional12) {
        tail+=len_16+1;
    }
    if(_if_conditional13=head>tail,    _if_conditional13) {
        __result61__ = __result_obj__ = __builtin_wstring("");
        return __result61__;
    }
    if(_if_conditional14=head<0,    _if_conditional14) {
        head=0;
    }
    if(_if_conditional15=tail>=len_16,    _if_conditional15) {
        tail=len_16;
    }
    if(_if_conditional16=head==tail,    _if_conditional16) {
        __result62__ = __result_obj__ = __builtin_wstring("");
        return __result62__;
    }
    if(_if_conditional17=tail-head+1<1,    _if_conditional17) {
        __result63__ = __result_obj__ = __builtin_wstring("");
        return __result63__;
    }
    result_17=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang2-str-gc.c", 171, "int");
    memcpy(result_17,str+head,sizeof(int)*(tail-head));
    result_17[tail-head]=0;
    __result64__ = __result_obj__ = result_17;
    return __result64__;
}

int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional18;
int* __result65__;
int len_18;
int* wstr_19;
int ret_20;
_Bool _if_conditional19;
int* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_18, 0, sizeof(int));
memset(&wstr_19, 0, sizeof(int*));
memset(&ret_20, 0, sizeof(int));
    if(_if_conditional18=str==((void*)0),    _if_conditional18) {
        __result65__ = __result_obj__ = ((void*)0);
        return __result65__;
    }
    len_18=strlen(str);
    wstr_19=(int*)come_calloc(1, sizeof(int)*(1*(len_18+1)), "libcomelang2-str-gc.c", 186, "int");
    ret_20=mbstowcs(wstr_19,str,len_18+1);
    wstr_19[ret_20]=0;
    if(_if_conditional19=ret_20<0,    _if_conditional19) {
        wstr_19[0]=0;
    }
    __result66__ = __result_obj__ = wstr_19;
    return __result66__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_21;
int len_22;
int i_23;
int len2_24;
int j_25;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
int __result67__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_21, 0, sizeof(int));
memset(&len_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
memset(&len2_24, 0, sizeof(int));
memset(&j_25, 0, sizeof(int));
    n_21=0;
    len_22=strlen(str);
    for(    i_23=0;    i_23<len_22;    i_23++    ){
        len2_24=strlen(search_str);
        for(        j_25=0;        j_25<len2_24;        j_25++        ){
            if(_if_conditional20=str[i_23+j_25]!=search_str[j_25],            _if_conditional20) {
                break;
            }
        }
        if(_if_conditional21=j_25==len2_24,        _if_conditional21) {
            n_21++;
            if(_if_conditional22=n_21==count,            _if_conditional22) {
                __result67__ = i_23;
                return __result67__;
            }
        }
    }
    __result68__ = default_value;
    return __result68__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_26;
int result_30;
int offset_31;
const char* err_32;
int erro_ofs_33;
int options_34;
char* str_35;
struct real_pcre8_or_16* re_36;
int n_37;
_Bool _while_condtional1;
int options_38;
int len_39;
int regex_result_40;
int i_41;
int i_42;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_26, 0, sizeof(int));
memset(&result_30, 0, sizeof(int));
memset(&offset_31, 0, sizeof(int));
memset(&erro_ofs_33, 0, sizeof(int));
memset(&options_34, 0, sizeof(int));
memset(&str_35, 0, sizeof(char*));
memset(&re_36, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_37, 0, sizeof(int));
memset(&options_38, 0, sizeof(int));
memset(&len_39, 0, sizeof(int));
memset(&regex_result_40, 0, sizeof(int));
memset(&i_41, 0, sizeof(int));
memset(&i_42, 0, sizeof(int));
    ovec_max_26=16;
    int start_27[ovec_max_26];
    memset(&start_27, 0, sizeof(int)    *(ovec_max_26)    );
    int end_28[ovec_max_26];
    memset(&end_28, 0, sizeof(int)    *(ovec_max_26)    );
    int ovec_value_29[ovec_max_26*3];
    memset(&ovec_value_29, 0, sizeof(int)    *(ovec_max_26*3)    );
    result_30=default_value;
    offset_31=0;
    options_34=reg->options;
    str_35=reg->str;
    re_36=reg->re;
    n_37=0;
    while(_while_condtional1=(_Bool)1,    _while_condtional1) {
        options_38=2097152;
        len_39=strlen(self);
        regex_result_40=pcre_exec(re_36,(struct pcre_extra*)0,self,len_39,offset_31,options_38,ovec_value_29,ovec_max_26*3);
        for(        i_41=0;        i_41<ovec_max_26;        i_41++        ){
            start_27[i_41]=ovec_value_29[i_41*2];
        }
        for(        i_42=0;        i_42<ovec_max_26;        i_42++        ){
            end_28[i_42]=ovec_value_29[i_42*2+1];
        }
        if(_if_conditional23=regex_result_40>0,        _if_conditional23) {
            n_37++;
            if(_if_conditional24=offset_31==end_28[0],            _if_conditional24) {
                offset_31++;
            }
            else {
                offset_31=end_28[0];
            }
            if(_if_conditional25=n_37==count,            _if_conditional25) {
                result_30=start_27[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result69__ = result_30;
    return __result69__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_43;
char* p_44;
_Bool _while_condtional2;
_Bool _if_conditional26;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_43, 0, sizeof(int));
memset(&p_44, 0, sizeof(char*));
    len_43=strlen(search_str);
    p_44=str+strlen(str)-len_43;
    while(_while_condtional2=p_44>=str,    _while_condtional2) {
        if(_if_conditional26=strncmp(p_44,search_str,len_43)==0,        _if_conditional26) {
            __result70__ = p_44-str;
            return __result70__;
        }
        p_44--;
    }
    __result71__ = default_value;
    return __result71__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_45;
int erro_ofs_46;
int options_47;
char* str_48;
struct real_pcre8_or_16* re_49;
char* self2_50;
int ovec_max_51;
int result_55;
int offset_56;
_Bool _while_condtional3;
int options_57;
int len_58;
int regex_result_59;
int i_60;
int i_61;
_Bool _if_conditional27;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_46, 0, sizeof(int));
memset(&options_47, 0, sizeof(int));
memset(&str_48, 0, sizeof(char*));
memset(&re_49, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_50, 0, sizeof(char*));
memset(&ovec_max_51, 0, sizeof(int));
memset(&result_55, 0, sizeof(int));
memset(&offset_56, 0, sizeof(int));
memset(&options_57, 0, sizeof(int));
memset(&len_58, 0, sizeof(int));
memset(&regex_result_59, 0, sizeof(int));
memset(&i_60, 0, sizeof(int));
memset(&i_61, 0, sizeof(int));
    options_47=reg->options;
    str_48=reg->str;
    re_49=reg->re;
    self2_50=charp_reverse(self);
    ovec_max_51=16;
    int start_52[ovec_max_51];
    memset(&start_52, 0, sizeof(int)    *(ovec_max_51)    );
    int end_53[ovec_max_51];
    memset(&end_53, 0, sizeof(int)    *(ovec_max_51)    );
    int ovec_value_54[ovec_max_51*3];
    memset(&ovec_value_54, 0, sizeof(int)    *(ovec_max_51*3)    );
    result_55=default_value;
    offset_56=0;
    while(_while_condtional3=(_Bool)1,    _while_condtional3) {
        options_57=2097152;
        len_58=strlen(self2_50);
        regex_result_59=pcre_exec(re_49,(struct pcre_extra*)0,self2_50,len_58,offset_56,options_57,ovec_value_54,ovec_max_51*3);
        for(        i_60=0;        i_60<ovec_max_51;        i_60++        ){
            start_52[i_60]=ovec_value_54[i_60*2];
        }
        for(        i_61=0;        i_61<ovec_max_51;        i_61++        ){
            end_53[i_61]=ovec_value_54[i_61*2+1];
        }
        if(_if_conditional27=regex_result_59==1||regex_result_59>0,        _if_conditional27) {
            result_55=strlen(self)-1-start_52[0];
            break;
        }
        {
            break;
        }
    }
    __result72__ = result_55;
    return __result72__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_62;
char* p_63;
int n_64;
_Bool _while_condtional4;
_Bool _if_conditional28;
_Bool _if_conditional29;
int __result73__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_62, 0, sizeof(int));
memset(&p_63, 0, sizeof(char*));
memset(&n_64, 0, sizeof(int));
    len_62=strlen(search_str);
    p_63=str+strlen(str)-len_62;
    n_64=0;
    while(_while_condtional4=p_63>=str,    _while_condtional4) {
        if(_if_conditional28=strncmp(p_63,search_str,len_62)==0,        _if_conditional28) {
            n_64++;
            if(_if_conditional29=n_64==count,            _if_conditional29) {
                __result73__ = p_63-str;
                return __result73__;
            }
        }
        p_63--;
    }
    __result74__ = default_value;
    return __result74__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* result_65;
int offset_66;
int ovec_max_67;
const char* err_71;
int erro_ofs_72;
int options_73;
char* str_74;
struct real_pcre8_or_16* re_75;
_Bool _while_condtional5;
int options_76;
int len_77;
int regex_result_78;
int i_79;
int i_80;
_Bool _if_conditional30;
char* str_81;
struct list$1charph* group_strings_82;
char* str2_83;
_Bool _if_conditional31;
struct list$1charph* __result76__;
_Bool _if_conditional34;
_Bool _if_conditional35;
char* str_87;
struct list$1charph* group_strings_88;
int i_89;
char* match_string_90;
char* str2_91;
_Bool _if_conditional36;
struct list$1charph* __result78__;
_Bool _if_conditional37;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&offset_66, 0, sizeof(int));
memset(&ovec_max_67, 0, sizeof(int));
memset(&erro_ofs_72, 0, sizeof(int));
memset(&options_73, 0, sizeof(int));
memset(&str_74, 0, sizeof(char*));
memset(&re_75, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_76, 0, sizeof(int));
memset(&len_77, 0, sizeof(int));
memset(&regex_result_78, 0, sizeof(int));
memset(&i_79, 0, sizeof(int));
memset(&i_80, 0, sizeof(int));
memset(&str_81, 0, sizeof(char*));
memset(&group_strings_82, 0, sizeof(struct list$1charph*));
memset(&str2_83, 0, sizeof(char*));
memset(&str_87, 0, sizeof(char*));
memset(&group_strings_88, 0, sizeof(struct list$1charph*));
memset(&i_89, 0, sizeof(int));
memset(&match_string_90, 0, sizeof(char*));
memset(&str2_91, 0, sizeof(char*));
    result_65=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 372, "list$1charph"));
    offset_66=0;
    ovec_max_67=16;
    int start_68[ovec_max_67];
    memset(&start_68, 0, sizeof(int)    *(ovec_max_67)    );
    int end_69[ovec_max_67];
    memset(&end_69, 0, sizeof(int)    *(ovec_max_67)    );
    int ovec_value_70[ovec_max_67*3];
    memset(&ovec_value_70, 0, sizeof(int)    *(ovec_max_67*3)    );
    options_73=reg->options;
    str_74=reg->str;
    re_75=reg->re;
    while(_while_condtional5=(_Bool)1,    _while_condtional5) {
        options_76=2097152;
        len_77=strlen(self);
        regex_result_78=pcre_exec(re_75,(struct pcre_extra*)0,self,len_77,offset_66,options_76,ovec_value_70,ovec_max_67*3);
        for(        i_79=0;        i_79<ovec_max_67;        i_79++        ){
            start_68[i_79]=ovec_value_70[i_79*2];
        }
        for(        i_80=0;        i_80<ovec_max_67;        i_80++        ){
            end_69[i_80]=ovec_value_70[i_80*2+1];
        }
        if(_if_conditional30=regex_result_78==1,        _if_conditional30) {
            str_81=charp_substring(self,start_68[0],end_69[0]);
            group_strings_82=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 406, "list$1charph"));
            str2_83=block(parent,str_81,group_strings_82);
            if(_if_conditional31=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional31) {
                __result76__ = __result_obj__ = result_65;
                return __result76__;
            }
            list$1charph_push_back(result_65,str2_83);
            if(_if_conditional34=offset_66==end_69[0],            _if_conditional34) {
                offset_66++;
            }
            else {
                offset_66=end_69[0];
            }
        }
        else {
            if(_if_conditional35=regex_result_78>1,            _if_conditional35) {
                str_87=charp_substring(self,start_68[0],end_69[0]);
                group_strings_88=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 427, "list$1charph"));
                for(                i_89=1;                i_89<regex_result_78;                i_89++                ){
                    match_string_90=charp_substring(self,start_68[i_89],end_69[i_89]);
                    list$1charph_push_back(group_strings_88,match_string_90);
                }
                str2_91=block(parent,str_87,group_strings_88);
                if(_if_conditional36=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional36) {
                    __result78__ = __result_obj__ = result_65;
                    return __result78__;
                }
                list$1charph_push_back(result_65,str2_91);
                if(_if_conditional37=offset_66==end_69[0],                _if_conditional37) {
                    offset_66++;
                }
                else {
                    offset_66=end_69[0];
                }
            }
            else {
                break;
            }
        }
    }
    __result79__ = __result_obj__ = result_65;
    return __result79__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result75__ = __result_obj__ = self;
        return __result75__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional32;
struct list_item$1charph* litem_84;
_Bool _if_conditional33;
struct list_item$1charph* litem_85;
struct list_item$1charph* litem_86;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional32=self->len==0,                _if_conditional32) {
                    litem_84=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charph");
                    litem_84->prev=((void*)0);
                    litem_84->next=((void*)0);
                    litem_84->item=item;
                    self->tail=litem_84;
                    self->head=litem_84;
                }
                else {
                    if(_if_conditional33=self->len==1,                    _if_conditional33) {
                        litem_85=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charph");
                        litem_85->prev=self->head;
                        litem_85->next=((void*)0);
                        litem_85->item=item;
                        self->tail=litem_85;
                        self->head->next=litem_85;
                    }
                    else {
                        litem_86=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charph");
                        litem_86->prev=self->tail;
                        litem_86->next=((void*)0);
                        litem_86->item=item;
                        self->tail->next=litem_86;
                        self->tail=litem_86;
                    }
                }
                self->len++;
                __result77__ = __result_obj__ = self;
                return __result77__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
struct list$1charph* result_92;
int offset_93;
int ovec_max_94;
const char* err_98;
int erro_ofs_99;
int options_100;
char* str_101;
struct real_pcre8_or_16* re_102;
int n_103;
_Bool _while_condtional6;
int options_104;
int len_105;
int regex_result_106;
int i_107;
int i_108;
_Bool _if_conditional38;
char* str_109;
struct list$1charph* group_strings_110;
char* str2_111;
_Bool _if_conditional39;
struct list$1charph* __result80__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
char* str_112;
struct list$1charph* group_strings_113;
int i_114;
char* match_string_115;
char* str2_116;
_Bool _if_conditional43;
struct list$1charph* __result81__;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&offset_93, 0, sizeof(int));
memset(&ovec_max_94, 0, sizeof(int));
memset(&erro_ofs_99, 0, sizeof(int));
memset(&options_100, 0, sizeof(int));
memset(&str_101, 0, sizeof(char*));
memset(&re_102, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_103, 0, sizeof(int));
memset(&options_104, 0, sizeof(int));
memset(&len_105, 0, sizeof(int));
memset(&regex_result_106, 0, sizeof(int));
memset(&i_107, 0, sizeof(int));
memset(&i_108, 0, sizeof(int));
memset(&str_109, 0, sizeof(char*));
memset(&group_strings_110, 0, sizeof(struct list$1charph*));
memset(&str2_111, 0, sizeof(char*));
memset(&str_112, 0, sizeof(char*));
memset(&group_strings_113, 0, sizeof(struct list$1charph*));
memset(&i_114, 0, sizeof(int));
memset(&match_string_115, 0, sizeof(char*));
memset(&str2_116, 0, sizeof(char*));
    result_92=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 461, "list$1charph"));
    offset_93=0;
    ovec_max_94=16;
    int start_95[ovec_max_94];
    memset(&start_95, 0, sizeof(int)    *(ovec_max_94)    );
    int end_96[ovec_max_94];
    memset(&end_96, 0, sizeof(int)    *(ovec_max_94)    );
    int ovec_value_97[ovec_max_94*3];
    memset(&ovec_value_97, 0, sizeof(int)    *(ovec_max_94*3)    );
    options_100=reg->options;
    str_101=reg->str;
    re_102=reg->re;
    n_103=0;
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        options_104=2097152;
        len_105=strlen(self);
        regex_result_106=pcre_exec(re_102,(struct pcre_extra*)0,self,len_105,offset_93,options_104,ovec_value_97,ovec_max_94*3);
        for(        i_107=0;        i_107<ovec_max_94;        i_107++        ){
            start_95[i_107]=ovec_value_97[i_107*2];
        }
        for(        i_108=0;        i_108<ovec_max_94;        i_108++        ){
            end_96[i_108]=ovec_value_97[i_108*2+1];
        }
        if(_if_conditional38=regex_result_106==1,        _if_conditional38) {
            str_109=charp_substring(self,start_95[0],end_96[0]);
            group_strings_110=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 497, "list$1charph"));
            str2_111=block(parent,str_109,group_strings_110);
            if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional39) {
                __result80__ = __result_obj__ = result_92;
                return __result80__;
            }
            list$1charph_push_back(result_92,str2_111);
            if(_if_conditional40=offset_93==end_96[0],            _if_conditional40) {
                offset_93++;
            }
            else {
                offset_93=end_96[0];
            }
            n_103++;
            if(_if_conditional41=n_103==count,            _if_conditional41) {
                break;
            }
        }
        else {
            if(_if_conditional42=regex_result_106>1,            _if_conditional42) {
                str_112=charp_substring(self,start_95[0],end_96[0]);
                group_strings_113=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 523, "list$1charph"));
                for(                i_114=1;                i_114<regex_result_106;                i_114++                ){
                    match_string_115=charp_substring(self,start_95[i_114],end_96[i_114]);
                    list$1charph_push_back(group_strings_113,match_string_115);
                }
                str2_116=block(parent,str_112,group_strings_113);
                if(_if_conditional43=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional43) {
                    __result81__ = __result_obj__ = result_92;
                    return __result81__;
                }
                list$1charph_push_back(result_92,str2_116);
                if(_if_conditional44=offset_93==end_96[0],                _if_conditional44) {
                    offset_93++;
                }
                else {
                    offset_93=end_96[0];
                }
                n_103++;
                if(_if_conditional45=n_103==count,                _if_conditional45) {
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    __result82__ = __result_obj__ = result_92;
    return __result82__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_117;
int erro_ofs_118;
int options_119;
char* str_120;
struct real_pcre8_or_16* re_121;
struct list$1charph* result_122;
int offset_123;
int ovec_max_124;
_Bool _while_condtional7;
int options_128;
int len_129;
int regex_result_130;
int i_131;
int i_132;
_Bool _if_conditional46;
char* str_133;
struct list$1charph* match_strings_134;
char* str2_135;
_Bool _if_conditional47;
struct list$1charph* __result83__;
_Bool _if_conditional48;
_Bool _if_conditional49;
char* str_136;
_Bool _if_conditional50;
struct list$1charph* match_strings_137;
int i_138;
char* match_str_139;
char* str2_140;
_Bool _if_conditional51;
struct list$1charph* __result84__;
_Bool _if_conditional52;
char* str_141;
struct list$1charph* match_strings_142;
char* str2_143;
_Bool _if_conditional53;
struct list$1charph* __result85__;
struct list$1charph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_118, 0, sizeof(int));
memset(&options_119, 0, sizeof(int));
memset(&str_120, 0, sizeof(char*));
memset(&re_121, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_122, 0, sizeof(struct list$1charph*));
memset(&offset_123, 0, sizeof(int));
memset(&ovec_max_124, 0, sizeof(int));
memset(&options_128, 0, sizeof(int));
memset(&len_129, 0, sizeof(int));
memset(&regex_result_130, 0, sizeof(int));
memset(&i_131, 0, sizeof(int));
memset(&i_132, 0, sizeof(int));
memset(&str_133, 0, sizeof(char*));
memset(&match_strings_134, 0, sizeof(struct list$1charph*));
memset(&str2_135, 0, sizeof(char*));
memset(&str_136, 0, sizeof(char*));
memset(&match_strings_137, 0, sizeof(struct list$1charph*));
memset(&i_138, 0, sizeof(int));
memset(&match_str_139, 0, sizeof(char*));
memset(&str2_140, 0, sizeof(char*));
memset(&str_141, 0, sizeof(char*));
memset(&match_strings_142, 0, sizeof(struct list$1charph*));
memset(&str2_143, 0, sizeof(char*));
    options_119=reg->options;
    str_120=reg->str;
    re_121=reg->re;
    result_122=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 569, "list$1charph"));
    offset_123=0;
    ovec_max_124=16;
    int start_125[ovec_max_124];
    memset(&start_125, 0, sizeof(int)    *(ovec_max_124)    );
    int end_126[ovec_max_124];
    memset(&end_126, 0, sizeof(int)    *(ovec_max_124)    );
    int ovec_value_127[ovec_max_124*3];
    memset(&ovec_value_127, 0, sizeof(int)    *(ovec_max_124*3)    );
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        options_128=2097152;
        len_129=strlen(self);
        regex_result_130=pcre_exec(re_121,(struct pcre_extra*)0,self,len_129,offset_123,options_128,ovec_value_127,ovec_max_124*3);
        for(        i_131=0;        i_131<ovec_max_124;        i_131++        ){
            start_125[i_131]=ovec_value_127[i_131*2];
        }
        for(        i_132=0;        i_132<ovec_max_124;        i_132++        ){
            end_126[i_132]=ovec_value_127[i_132*2+1];
        }
        if(_if_conditional46=regex_result_130==1,        _if_conditional46) {
            str_133=charp_substring(self,offset_123,start_125[0]);
            match_strings_134=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 596, "list$1charph"));
            str2_135=block(parent,str_133,match_strings_134);
            if(_if_conditional47=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional47) {
                __result83__ = __result_obj__ = result_122;
                return __result83__;
            }
            list$1charph_push_back(result_122,str2_135);
            if(_if_conditional48=offset_123==end_126[0],            _if_conditional48) {
                offset_123++;
            }
            else {
                offset_123=end_126[0];
            }
        }
        else {
            if(_if_conditional49=regex_result_130>1,            _if_conditional49) {
                str_136=charp_substring(self,offset_123,start_125[0]);
                if(_if_conditional50=offset_123==end_126[0],                _if_conditional50) {
                    offset_123++;
                }
                else {
                    offset_123=end_126[0];
                }
                match_strings_137=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 623, "list$1charph"));
                for(                i_138=1;                i_138<regex_result_130;                i_138++                ){
                    match_str_139=charp_substring(self,start_125[i_138],end_126[i_138]);
                    list$1charph_push_back(match_strings_137,match_str_139);
                }
                str2_140=block(parent,str_136,match_strings_137);
                if(_if_conditional51=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional51) {
                    __result84__ = __result_obj__ = result_122;
                    return __result84__;
                }
                list$1charph_push_back(result_122,str2_140);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional52=offset_123<charp_length(self),    _if_conditional52) {
        str_141=charp_substring(self,offset_123,-1);
        match_strings_142=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 645, "list$1charph"));
        str2_143=block(parent,str_141,match_strings_142);
        if(_if_conditional53=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional53) {
            __result85__ = __result_obj__ = result_122;
            return __result85__;
        }
        list$1charph_push_back(result_122,str2_143);
    }
    __result86__ = __result_obj__ = result_122;
    return __result86__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_144;
int erro_ofs_145;
int options_146;
char* str_147;
struct real_pcre8_or_16* re_148;
struct list$1charph* result_149;
int offset_150;
int ovec_max_151;
int n_155;
_Bool _while_condtional8;
int options_156;
int len_157;
int regex_result_158;
int i_159;
int i_160;
_Bool _if_conditional54;
char* str_161;
struct list$1charph* match_strings_162;
char* str2_163;
_Bool _if_conditional55;
struct list$1charph* __result87__;
_Bool _if_conditional56;
_Bool _if_conditional57;
char* str_164;
_Bool _if_conditional58;
struct list$1charph* match_strings_165;
int i_166;
char* match_str_167;
char* str2_168;
_Bool _if_conditional59;
struct list$1charph* __result88__;
_Bool _if_conditional60;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_145, 0, sizeof(int));
memset(&options_146, 0, sizeof(int));
memset(&str_147, 0, sizeof(char*));
memset(&re_148, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_149, 0, sizeof(struct list$1charph*));
memset(&offset_150, 0, sizeof(int));
memset(&ovec_max_151, 0, sizeof(int));
memset(&n_155, 0, sizeof(int));
memset(&options_156, 0, sizeof(int));
memset(&len_157, 0, sizeof(int));
memset(&regex_result_158, 0, sizeof(int));
memset(&i_159, 0, sizeof(int));
memset(&i_160, 0, sizeof(int));
memset(&str_161, 0, sizeof(char*));
memset(&match_strings_162, 0, sizeof(struct list$1charph*));
memset(&str2_163, 0, sizeof(char*));
memset(&str_164, 0, sizeof(char*));
memset(&match_strings_165, 0, sizeof(struct list$1charph*));
memset(&i_166, 0, sizeof(int));
memset(&match_str_167, 0, sizeof(char*));
memset(&str2_168, 0, sizeof(char*));
    options_146=reg->options;
    str_147=reg->str;
    re_148=reg->re;
    result_149=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 667, "list$1charph"));
    offset_150=0;
    ovec_max_151=16;
    int start_152[ovec_max_151];
    memset(&start_152, 0, sizeof(int)    *(ovec_max_151)    );
    int end_153[ovec_max_151];
    memset(&end_153, 0, sizeof(int)    *(ovec_max_151)    );
    int ovec_value_154[ovec_max_151*3];
    memset(&ovec_value_154, 0, sizeof(int)    *(ovec_max_151*3)    );
    n_155=0;
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_156=2097152;
        len_157=strlen(self);
        regex_result_158=pcre_exec(re_148,(struct pcre_extra*)0,self,len_157,offset_150,options_156,ovec_value_154,ovec_max_151*3);
        for(        i_159=0;        i_159<ovec_max_151;        i_159++        ){
            start_152[i_159]=ovec_value_154[i_159*2];
        }
        for(        i_160=0;        i_160<ovec_max_151;        i_160++        ){
            end_153[i_160]=ovec_value_154[i_160*2+1];
        }
        if(_if_conditional54=regex_result_158==1,        _if_conditional54) {
            str_161=charp_substring(self,offset_150,start_152[0]);
            match_strings_162=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 696, "list$1charph"));
            str2_163=block(parent,str_161,match_strings_162);
            if(_if_conditional55=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional55) {
                __result87__ = __result_obj__ = result_149;
                return __result87__;
            }
            list$1charph_push_back(result_149,str2_163);
            if(_if_conditional56=offset_150==end_153[0],            _if_conditional56) {
                offset_150++;
            }
            else {
                offset_150=end_153[0];
            }
        }
        else {
            if(_if_conditional57=regex_result_158>1,            _if_conditional57) {
                str_164=charp_substring(self,offset_150,start_152[0]);
                if(_if_conditional58=offset_150==end_153[0],                _if_conditional58) {
                    offset_150++;
                }
                else {
                    offset_150=end_153[0];
                }
                match_strings_165=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 722, "list$1charph"));
                for(                i_166=1;                i_166<regex_result_158;                i_166++                ){
                    match_str_167=charp_substring(self,start_152[i_166],end_153[i_166]);
                    list$1charph_push_back(match_strings_165,match_str_167);
                }
                str2_168=block(parent,str_164,match_strings_165);
                if(_if_conditional59=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional59) {
                    __result88__ = __result_obj__ = result_149;
                    return __result88__;
                }
                list$1charph_push_back(result_149,str2_168);
            }
            else {
                break;
            }
        }
        n_155++;
        if(_if_conditional60=n_155==count,        _if_conditional60) {
            break;
        }
    }
    __result89__ = __result_obj__ = result_149;
    return __result89__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool _if_conditional61;
_Bool __result90__;
_Bool _if_conditional62;
_Bool __result91__;
_Bool _if_conditional63;
_Bool __result92__;
_Bool _if_conditional64;
_Bool __result93__;
_Bool _if_conditional65;
_Bool __result94__;
_Bool _if_conditional66;
_Bool __result95__;
_Bool _if_conditional67;
_Bool __result96__;
_Bool _if_conditional68;
_Bool __result97__;
_Bool _if_conditional69;
_Bool __result98__;
_Bool _if_conditional70;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional61=strcmp(left->str,right->str)!=0,    _if_conditional61) {
        __result90__ = (_Bool)0;
        return __result90__;
    }
    if(_if_conditional62=left->ignore_case!=right->ignore_case,    _if_conditional62) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    if(_if_conditional63=left->multiline!=right->multiline,    _if_conditional63) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    if(_if_conditional64=left->global!=right->global,    _if_conditional64) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    if(_if_conditional65=left->extended!=right->extended,    _if_conditional65) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    if(_if_conditional66=left->dotall!=right->dotall,    _if_conditional66) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    if(_if_conditional67=left->anchored!=right->anchored,    _if_conditional67) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    if(_if_conditional68=left->dollar_endonly!=right->dollar_endonly,    _if_conditional68) {
        __result97__ = (_Bool)0;
        return __result97__;
    }
    if(_if_conditional69=left->ungreedy!=right->ungreedy,    _if_conditional69) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    if(_if_conditional70=left->options!=right->options,    _if_conditional70) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    __result100__ = (_Bool)1;
    return __result100__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
struct list$1charph* result_169;
int offset_170;
int ovec_max_171;
const char* err_175;
int erro_ofs_176;
int options_177;
char* str_178;
struct real_pcre8_or_16* re_179;
_Bool _while_condtional9;
int options_180;
int len_181;
int regex_result_182;
int i_183;
int i_184;
_Bool _if_conditional71;
char* str_185;
_Bool _if_conditional72;
_Bool _if_conditional73;
char* str_186;
_Bool _if_conditional74;
int i_187;
char* match_string_188;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct list$1charph*));
memset(&offset_170, 0, sizeof(int));
memset(&ovec_max_171, 0, sizeof(int));
memset(&erro_ofs_176, 0, sizeof(int));
memset(&options_177, 0, sizeof(int));
memset(&str_178, 0, sizeof(char*));
memset(&re_179, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_180, 0, sizeof(int));
memset(&len_181, 0, sizeof(int));
memset(&regex_result_182, 0, sizeof(int));
memset(&i_183, 0, sizeof(int));
memset(&i_184, 0, sizeof(int));
memset(&str_185, 0, sizeof(char*));
memset(&str_186, 0, sizeof(char*));
memset(&i_187, 0, sizeof(int));
memset(&match_string_188, 0, sizeof(char*));
    result_169=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 790, "list$1charph"));
    offset_170=0;
    ovec_max_171=16;
    int start_172[ovec_max_171];
    memset(&start_172, 0, sizeof(int)    *(ovec_max_171)    );
    int end_173[ovec_max_171];
    memset(&end_173, 0, sizeof(int)    *(ovec_max_171)    );
    int ovec_value_174[ovec_max_171*3];
    memset(&ovec_value_174, 0, sizeof(int)    *(ovec_max_171*3)    );
    options_177=reg->options;
    str_178=reg->str;
    re_179=reg->re;
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        options_180=2097152;
        len_181=strlen(self);
        regex_result_182=pcre_exec(re_179,(struct pcre_extra*)0,self,len_181,offset_170,options_180,ovec_value_174,ovec_max_171*3);
        for(        i_183=0;        i_183<ovec_max_171;        i_183++        ){
            start_172[i_183]=ovec_value_174[i_183*2];
        }
        for(        i_184=0;        i_184<ovec_max_171;        i_184++        ){
            end_173[i_184]=ovec_value_174[i_184*2+1];
        }
        if(_if_conditional71=regex_result_182==1,        _if_conditional71) {
            str_185=charp_substring(self,start_172[0],end_173[0]);
            list$1charph_push_back(result_169,str_185);
            if(_if_conditional72=offset_170==end_173[0],            _if_conditional72) {
                offset_170++;
            }
            else {
                offset_170=end_173[0];
            }
        }
        else {
            if(_if_conditional73=regex_result_182>1,            _if_conditional73) {
                str_186=charp_substring(self,start_172[0],end_173[0]);
                list$1charph_push_back(result_169,str_186);
                if(_if_conditional74=offset_170==end_173[0],                _if_conditional74) {
                    offset_170++;
                }
                else {
                    offset_170=end_173[0];
                }
                *num_group_string_in_regex=regex_result_182-1;
                for(                i_187=1;                i_187<regex_result_182;                i_187++                ){
                    match_string_188=charp_substring(self,start_172[i_187],end_173[i_187]);
                    list$1charph_push_back(group_strings,match_string_188);
                }
            }
            else {
                break;
            }
        }
    }
    __result101__ = __result_obj__ = result_169;
    return __result101__;
}

char* charp_strip(char* self){
void* __result_obj__;
char* result_189;
int len_190;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_189, 0, sizeof(char*));
memset(&len_190, 0, sizeof(int));
    result_189=__builtin_string(self);
    len_190=strlen(self);
    if(_if_conditional75=self[len_190-1]==10,    _if_conditional75) {
        result_189[len_190-1]=0;
    }
    else {
        if(_if_conditional76=self[len_190-1]==13,        _if_conditional76) {
            result_189[len_190-1]=0;
        }
        else {
            if(_if_conditional77=len_190>2&&self[len_190-2]==13&&self[len_190-1]==10,            _if_conditional77) {
                result_189[len_190-2]=0;
            }
        }
    }
    __result102__ = __result_obj__ = result_189;
    return __result102__;
}

char* charp_printable(char* str){
void* __result_obj__;
int len_191;
char* result_192;
int n_193;
int i_194;
char c_195;
_Bool _if_conditional78;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_191, 0, sizeof(int));
memset(&result_192, 0, sizeof(char*));
memset(&n_193, 0, sizeof(int));
memset(&i_194, 0, sizeof(int));
memset(&c_195, 0, sizeof(char));
    len_191=charp_length(str);
    result_192=(char*)come_calloc(1, sizeof(char)*(1*(len_191*2+1)), "libcomelang2-str-gc.c", 884, "char");
    n_193=0;
    for(    i_194=0;    i_194<len_191;    i_194++    ){
        c_195=str[i_194];
        if(_if_conditional78=(c_195>=0&&c_195<32)||c_195==127,        _if_conditional78) {
            result_192[n_193++]=94;
            result_192[n_193++]=c_195+65-1;
        }
        else {
            result_192[n_193++]=c_195;
        }
    }
    result_192[n_193]=0;
    __result103__ = __result_obj__ = result_192;
    return __result103__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__;
int len_196;
char* result_197;
_Bool _if_conditional79;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_196, 0, sizeof(int));
memset(&result_197, 0, sizeof(char*));
    len_196=6*(wcslen(wstr)+1);
    result_197=(char*)come_calloc(1, sizeof(char)*(1*(len_196)), "libcomelang2-str-gc.c", 910, "char");
    if(_if_conditional79=wcstombs(result_197,wstr,len_196)<0,    _if_conditional79) {
        strncpy(result_197,"",len_196);
    }
    __result104__ = __result_obj__ = result_197;
    return __result104__;
}

int* charp_to_wstring(char* str){
void* __result_obj__;
int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = __result_obj__ = __builtin_wstring(str);
    return __result105__;
}

int wchar_tp_length(int* str){
void* __result_obj__;
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = wcslen(str);
    return __result106__;
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__;
int len_198;
_Bool _if_conditional80;
int* __result107__;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
int* __result108__;
_Bool _if_conditional85;
int* sub_str_199;
int* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_198, 0, sizeof(int));
memset(&sub_str_199, 0, sizeof(int*));
    len_198=wcslen(str);
    if(_if_conditional80=len_198==0,    _if_conditional80) {
        __result107__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result107__;
    }
    if(_if_conditional81=head<0,    _if_conditional81) {
        head+=len_198;
    }
    if(_if_conditional82=tail<0,    _if_conditional82) {
        tail+=len_198+1;
    }
    if(_if_conditional83=head<0,    _if_conditional83) {
        head=0;
    }
    if(_if_conditional84=tail<0,    _if_conditional84) {
        __result108__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        return __result108__;
    }
    if(_if_conditional85=tail>=len_198,    _if_conditional85) {
        tail=len_198;
    }
    sub_str_199=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_199,sizeof(int)*(wstring_length(sub_str_199)+1));
    __result109__ = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    return __result109__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
void* __result_obj__;
int* head_200;
_Bool _if_conditional86;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_200, 0, sizeof(int*));
    head_200=wcsstr(str,search_str);
    if(_if_conditional86=head_200==((void*)0),    _if_conditional86) {
        __result110__ = default_value;
        return __result110__;
    }
    __result111__ = head_200-str;
    return __result111__;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
int len_201;
int* p_202;
_Bool _while_condtional10;
int len2_203;
_Bool result_204;
int i_205;
_Bool _if_conditional87;
_Bool _if_conditional88;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_201, 0, sizeof(int));
memset(&p_202, 0, sizeof(int*));
memset(&len2_203, 0, sizeof(int));
memset(&result_204, 0, sizeof(_Bool));
memset(&i_205, 0, sizeof(int));
    len_201=wcslen(search_str);
    p_202=str+wcslen(str)-len_201;
    while(_while_condtional10=p_202>=str,    _while_condtional10) {
        len2_203=wcslen(p_202);
        result_204=(_Bool)1;
        for(        i_205=0;        i_205<len_201&&i_205<len2_203;        i_205++        ){
            if(_if_conditional87=p_202[i_205]!=search_str[i_205],            _if_conditional87) {
                result_204=(_Bool)0;
            }
        }
        if(result_204) {
            __result112__ = (p_202-str);
            return __result112__;
        }
        p_202--;
    }
    __result113__ = default_value;
    return __result113__;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__;
int len_206;
int* result_207;
int i_208;
int* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_206, 0, sizeof(int));
memset(&result_207, 0, sizeof(int*));
memset(&i_208, 0, sizeof(int));
    len_206=wcslen(str);
    result_207=(int*)come_calloc(1, sizeof(int)*(1*(len_206+1)), "libcomelang2-str-gc.c", 1010, "int");
    for(    i_208=0;    i_208<len_206;    i_208++    ){
        result_207[i_208]=str[len_206-i_208-1];
    }
    result_207[len_206]=0;
    __result114__ = __result_obj__ = result_207;
    return __result114__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__;
int len_209;
int* result_210;
int i_211;
int* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_209, 0, sizeof(int));
memset(&result_210, 0, sizeof(int*));
memset(&i_211, 0, sizeof(int));
    len_209=wcslen(str)*n+1;
    result_210=(int*)come_calloc(1, sizeof(int)*(1*(len_209)), "libcomelang2-str-gc.c", 1025, "int");
    result_210[0]=0;
    for(    i_211=0;    i_211<n;    i_211++    ){
        wcscat(result_210,str);
    }
    __result115__ = __result_obj__ = result_210;
    return __result115__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__;
int len_212;
int* result_213;
int n_214;
int i_215;
int c_216;
_Bool _if_conditional89;
int* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_212, 0, sizeof(int));
memset(&result_213, 0, sizeof(int*));
memset(&n_214, 0, sizeof(int));
memset(&i_215, 0, sizeof(int));
memset(&c_216, 0, sizeof(int));
    len_212=wchar_tp_length(str);
    result_213=(int*)come_calloc(1, sizeof(int)*(1*(len_212*2+1)), "libcomelang2-str-gc.c", 1039, "int");
    n_214=0;
    for(    i_215=0;    i_215<len_212;    i_215++    ){
        c_216=str[i_215];
        if(_if_conditional89=(c_216>=0&&c_216<32)||c_216==127,        _if_conditional89) {
            result_213[n_214++]=94;
            result_213[n_214++]=c_216+65-1;
        }
        else {
            result_213[n_214++]=c_216;
        }
    }
    result_213[n_214]=0;
    __result116__ = __result_obj__ = result_213;
    return __result116__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_217;
int ovec_max_218;
const char* err_222;
int erro_ofs_223;
int options_224;
char* str_225;
struct real_pcre8_or_16* re_226;
int n_227;
_Bool _while_condtional11;
int options_228;
int len_229;
int regex_result_230;
int i_231;
int i_232;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool __result117__;
_Bool _if_conditional92;
_Bool _if_conditional93;
int i_235;
char* match_string_236;
_Bool _if_conditional94;
_Bool __result119__;
_Bool _if_conditional95;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_217, 0, sizeof(int));
memset(&ovec_max_218, 0, sizeof(int));
memset(&erro_ofs_223, 0, sizeof(int));
memset(&options_224, 0, sizeof(int));
memset(&str_225, 0, sizeof(char*));
memset(&re_226, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_227, 0, sizeof(int));
memset(&options_228, 0, sizeof(int));
memset(&len_229, 0, sizeof(int));
memset(&regex_result_230, 0, sizeof(int));
memset(&i_231, 0, sizeof(int));
memset(&i_232, 0, sizeof(int));
memset(&i_235, 0, sizeof(int));
memset(&match_string_236, 0, sizeof(char*));
    offset_217=0;
    ovec_max_218=16;
    int start_219[ovec_max_218];
    memset(&start_219, 0, sizeof(int)    *(ovec_max_218)    );
    int end_220[ovec_max_218];
    memset(&end_220, 0, sizeof(int)    *(ovec_max_218)    );
    int ovec_value_221[ovec_max_218*3];
    memset(&ovec_value_221, 0, sizeof(int)    *(ovec_max_218*3)    );
    options_224=reg->options;
    str_225=reg->str;
    re_226=reg->re;
    n_227=0;
    while(_while_condtional11=(_Bool)1,    _while_condtional11) {
        options_228=2097152;
        len_229=strlen(self);
        regex_result_230=pcre_exec(re_226,(struct pcre_extra*)0,self,len_229,offset_217,options_228,ovec_value_221,ovec_max_218*3);
        for(        i_231=0;        i_231<ovec_max_218;        i_231++        ){
            start_219[i_231]=ovec_value_221[i_231*2];
        }
        for(        i_232=0;        i_232<ovec_max_218;        i_232++        ){
            end_220[i_232]=ovec_value_221[i_232*2+1];
        }
        if(_if_conditional90=regex_result_230==1||(group_strings==((void*)0)&&regex_result_230>0),        _if_conditional90) {
            n_227++;
            if(_if_conditional91=n_227==count,            _if_conditional91) {
                __result117__ = (_Bool)1;
                return __result117__;
            }
            if(_if_conditional92=offset_217==end_220[0],            _if_conditional92) {
                offset_217++;
            }
            else {
                offset_217=end_220[0];
            }
        }
        else {
            if(_if_conditional93=regex_result_230>1,            _if_conditional93) {
                n_227++;
                list$1charph_reset(group_strings);
                for(                i_235=1;                i_235<regex_result_230;                i_235++                ){
                    match_string_236=charp_substring(self,start_219[i_235],end_220[i_235]);
                    list$1charph_push_back(group_strings,match_string_236);
                }
                if(_if_conditional94=n_227==count,                _if_conditional94) {
                    __result119__ = (_Bool)1;
                    return __result119__;
                }
                if(_if_conditional95=offset_217==end_220[0],                _if_conditional95) {
                    offset_217++;
                }
                else {
                    offset_217=end_220[0];
                }
            }
            else {
                __result120__ = (_Bool)0;
                return __result120__;
            }
        }
    }
    __result121__ = (_Bool)0;
    return __result121__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_233;
_Bool _while_condtional12;
struct list_item$1charph* prev_it_234;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_233, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_234, 0, sizeof(struct list_item$1charph*));
                    it_233=self->head;
                    while(_while_condtional12=it_233!=((void*)0),                    _while_condtional12) {
                        prev_it_234=it_233;
                        it_233=it_233->next;
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result118__ = __result_obj__ = self;
                    return __result118__;
}

int wchar_tp_compare(int* left, int* right){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = wcscmp(left,right);
    return __result122__;
}

int wstring_compare(int* left, int* right){
void* __result_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = wcscmp(left,right);
    return __result123__;
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
void* __result_obj__;
unsigned int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = string_get_hash_key(reg->str);
    return __result124__;
}

_Bool wchar_tp_equals(int left, int right){
void* __result_obj__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = left==right;
    return __result125__;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__;
int* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result126__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__;
int* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = __result_obj__ = wchar_tp_multiply(str,n);
    return __result127__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = wcscmp(left,right)==0;
    return __result128__;
}

_Bool wstring_operator_equals(int* left, int* right){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = wcscmp(left,right)==0;
    return __result129__;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = wcscmp(left,right)!=0;
    return __result130__;
}

_Bool wstring_operator_not_equals(int* left, int* right){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = wcscmp(left,right)!=0;
    return __result131__;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = come_regex_equals(left,right);
    return __result132__;
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = !come_regex_equals(left,right);
    return __result133__;
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__;
int* result_237;
int* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_237, 0, sizeof(int*));
    result_237=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1203, "int");
    wcscpy(result_237,left);
    wcscat(result_237,right);
    __result134__ = __result_obj__ = result_237;
    return __result134__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__;
int* result_238;
int* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_238, 0, sizeof(int*));
    result_238=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str-gc.c", 1213, "int");
    wcscpy(result_238,left);
    wcscat(result_238,right);
    __result135__ = __result_obj__ = result_238;
    return __result135__;
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_239;
_Bool _if_conditional96;
int __result136__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_239, 0, sizeof(char*));
    head_239=strstr(str,search_str);
    if(_if_conditional96=head_239==((void*)0),    _if_conditional96) {
        __result136__ = default_value;
        return __result136__;
    }
    __result137__ = head_239-str;
    return __result137__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_240;
int result_244;
int offset_245;
const char* err_246;
int erro_ofs_247;
int options_248;
char* str_249;
struct real_pcre8_or_16* re_250;
_Bool _while_condtional13;
int options_251;
int len_252;
int regex_result_253;
int i_254;
int i_255;
_Bool _if_conditional97;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_240, 0, sizeof(int));
memset(&result_244, 0, sizeof(int));
memset(&offset_245, 0, sizeof(int));
memset(&erro_ofs_247, 0, sizeof(int));
memset(&options_248, 0, sizeof(int));
memset(&str_249, 0, sizeof(char*));
memset(&re_250, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_251, 0, sizeof(int));
memset(&len_252, 0, sizeof(int));
memset(&regex_result_253, 0, sizeof(int));
memset(&i_254, 0, sizeof(int));
memset(&i_255, 0, sizeof(int));
    ovec_max_240=16;
    int start_241[ovec_max_240];
    memset(&start_241, 0, sizeof(int)    *(ovec_max_240)    );
    int end_242[ovec_max_240];
    memset(&end_242, 0, sizeof(int)    *(ovec_max_240)    );
    int ovec_value_243[ovec_max_240*3];
    memset(&ovec_value_243, 0, sizeof(int)    *(ovec_max_240*3)    );
    result_244=default_value;
    offset_245=0;
    options_248=reg->options;
    str_249=reg->str;
    re_250=reg->re;
    while(_while_condtional13=(_Bool)1,    _while_condtional13) {
        options_251=2097152;
        len_252=strlen(self);
        regex_result_253=pcre_exec(re_250,(struct pcre_extra*)0,self,len_252,offset_245,options_251,ovec_value_243,ovec_max_240*3);
        for(        i_254=0;        i_254<ovec_max_240;        i_254++        ){
            start_241[i_254]=ovec_value_243[i_254*2];
        }
        for(        i_255=0;        i_255<ovec_max_240;        i_255++        ){
            end_242[i_255]=ovec_value_243[i_255*2+1];
        }
        if(_if_conditional97=regex_result_253==1||regex_result_253>0,        _if_conditional97) {
            result_244=start_241[0];
            break;
        }
        {
            break;
        }
    }
    __result138__ = result_244;
    return __result138__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_256;
_Bool _if_conditional98;
char* __result139__;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_256, 0, sizeof(int));
    len_256=strlen(self);
    if(_if_conditional98=strcmp(self,"")==0,    _if_conditional98) {
        __result139__ = __result_obj__ = __builtin_string(self);
        return __result139__;
    }
    if(_if_conditional99=index<0,    _if_conditional99) {
        index+=len_256;
    }
    if(_if_conditional100=index>=len_256,    _if_conditional100) {
        index=len_256-1;
    }
    if(_if_conditional101=index<0,    _if_conditional101) {
        index=0;
    }
    self[index]=c;
    __result140__ = __result_obj__ = __builtin_string(self);
    return __result140__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_257;
char* result_258;
int i_259;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_257, 0, sizeof(int));
memset(&result_258, 0, sizeof(char*));
memset(&i_259, 0, sizeof(int));
    len_257=strlen(str)*n+1;
    result_258=(char*)come_calloc(1, sizeof(char)*(1*(len_257)), "libcomelang2-str-gc.c", 1311, "char");
    result_258[0]=0;
    for(    i_259=0;    i_259<n;    i_259++    ){
        strcat(result_258,str);
    }
    __result141__ = __result_obj__ = result_258;
    return __result141__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_260;
int ovec_max_261;
const char* err_265;
int erro_ofs_266;
int options_267;
char* str_268;
struct real_pcre8_or_16* re_269;
struct buffer* result_270;
_Bool _while_condtional14;
int options_271;
int len_272;
int regex_result_273;
int i_274;
int i_275;
_Bool _if_conditional102;
char* str_276;
_Bool _if_conditional103;
_Bool _if_conditional104;
char* str_277;
char* str_278;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_260, 0, sizeof(int));
memset(&ovec_max_261, 0, sizeof(int));
memset(&erro_ofs_266, 0, sizeof(int));
memset(&options_267, 0, sizeof(int));
memset(&str_268, 0, sizeof(char*));
memset(&re_269, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_270, 0, sizeof(struct buffer*));
memset(&options_271, 0, sizeof(int));
memset(&len_272, 0, sizeof(int));
memset(&regex_result_273, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
memset(&str_276, 0, sizeof(char*));
memset(&str_277, 0, sizeof(char*));
memset(&str_278, 0, sizeof(char*));
    offset_260=0;
    ovec_max_261=16;
    int start_262[ovec_max_261];
    memset(&start_262, 0, sizeof(int)    *(ovec_max_261)    );
    int end_263[ovec_max_261];
    memset(&end_263, 0, sizeof(int)    *(ovec_max_261)    );
    int ovec_value_264[ovec_max_261*3];
    memset(&ovec_value_264, 0, sizeof(int)    *(ovec_max_261*3)    );
    options_267=reg->options;
    str_268=reg->str;
    re_269=reg->re;
    result_270=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1339, "buffer"));
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_271=2097152;
        len_272=strlen(self);
        regex_result_273=pcre_exec(re_269,(struct pcre_extra*)0,self,len_272,offset_260,options_271,ovec_value_264,ovec_max_261*3);
        for(        i_274=0;        i_274<ovec_max_261;        i_274++        ){
            start_262[i_274]=ovec_value_264[i_274*2];
        }
        for(        i_275=0;        i_275<ovec_max_261;        i_275++        ){
            end_263[i_275]=ovec_value_264[i_275*2+1];
        }
        if(_if_conditional102=regex_result_273==1,        _if_conditional102) {
            str_276=charp_substring(self,offset_260,start_262[0]);
            buffer_append_str(result_270,str_276);
            buffer_append_str(result_270,replace);
            if(_if_conditional103=offset_260==end_263[0],            _if_conditional103) {
                offset_260++;
            }
            else {
                offset_260=end_263[0];
            }
            if(_if_conditional104=!reg->global,            _if_conditional104) {
                str_277=charp_substring(self,offset_260,-1);
                buffer_append_str(result_270,str_277);
                break;
            }
        }
        else {
            str_278=charp_substring(self,offset_260,-1);
            buffer_append_str(result_270,str_278);
            break;
        }
    }
    __result142__ = __result_obj__ = buffer_to_string(result_270);
    return __result142__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_279;
int ovec_max_280;
const char* err_284;
int erro_ofs_285;
int options_286;
char* str_287;
struct real_pcre8_or_16* re_288;
struct buffer* result_289;
int n_290;
_Bool _while_condtional15;
int options_291;
int len_292;
int regex_result_293;
int i_294;
int i_295;
_Bool _if_conditional105;
char* str_296;
_Bool _if_conditional106;
_Bool _if_conditional107;
char* str_297;
_Bool _if_conditional108;
char* str_298;
char* str_299;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_279, 0, sizeof(int));
memset(&ovec_max_280, 0, sizeof(int));
memset(&erro_ofs_285, 0, sizeof(int));
memset(&options_286, 0, sizeof(int));
memset(&str_287, 0, sizeof(char*));
memset(&re_288, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_289, 0, sizeof(struct buffer*));
memset(&n_290, 0, sizeof(int));
memset(&options_291, 0, sizeof(int));
memset(&len_292, 0, sizeof(int));
memset(&regex_result_293, 0, sizeof(int));
memset(&i_294, 0, sizeof(int));
memset(&i_295, 0, sizeof(int));
memset(&str_296, 0, sizeof(char*));
memset(&str_297, 0, sizeof(char*));
memset(&str_298, 0, sizeof(char*));
memset(&str_299, 0, sizeof(char*));
    offset_279=0;
    ovec_max_280=16;
    int start_281[ovec_max_280];
    memset(&start_281, 0, sizeof(int)    *(ovec_max_280)    );
    int end_282[ovec_max_280];
    memset(&end_282, 0, sizeof(int)    *(ovec_max_280)    );
    int ovec_value_283[ovec_max_280*3];
    memset(&ovec_value_283, 0, sizeof(int)    *(ovec_max_280*3)    );
    options_286=reg->options;
    str_287=reg->str;
    re_288=reg->re;
    result_289=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1402, "buffer"));
    n_290=0;
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_291=2097152;
        len_292=strlen(self);
        regex_result_293=pcre_exec(re_288,(struct pcre_extra*)0,self,len_292,offset_279,options_291,ovec_value_283,ovec_max_280*3);
        for(        i_294=0;        i_294<ovec_max_280;        i_294++        ){
            start_281[i_294]=ovec_value_283[i_294*2];
        }
        for(        i_295=0;        i_295<ovec_max_280;        i_295++        ){
            end_282[i_295]=ovec_value_283[i_295*2+1];
        }
        if(_if_conditional105=regex_result_293==1,        _if_conditional105) {
            n_290++;
            str_296=charp_substring(self,offset_279,start_281[0]);
            buffer_append_str(result_289,str_296);
            buffer_append_str(result_289,replace);
            if(_if_conditional106=offset_279==end_282[0],            _if_conditional106) {
                offset_279++;
            }
            else {
                offset_279=end_282[0];
            }
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                str_297=charp_substring(self,offset_279,-1);
                buffer_append_str(result_289,str_297);
                break;
            }
            if(_if_conditional108=n_290==count,            _if_conditional108) {
                str_298=charp_substring(self,offset_279,-1);
                buffer_append_str(result_289,str_298);
                break;
            }
        }
        else {
            str_299=charp_substring(self,offset_279,-1);
            buffer_append_str(result_289,str_299);
            break;
        }
    }
    __result143__ = __result_obj__ = buffer_to_string(result_289);
    return __result143__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
struct list$1charph* result_300;
struct buffer* buf_301;
int i_302;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct list$1charph*));
memset(&buf_301, 0, sizeof(struct buffer*));
memset(&i_302, 0, sizeof(int));
    result_300=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1461, "list$1charph"));
    buf_301=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1463, "buffer"));
    for(    i_302=0;    i_302<charp_length(self);    i_302++    ){
        if(_if_conditional109=strstr(self+i_302,str)==self+i_302,        _if_conditional109) {
            list$1charph_push_back(result_300,__builtin_string(buf_301->buf));
            buffer_reset(buf_301);
            i_302+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_301,self[i_302]);
        }
    }
    if(_if_conditional110=buffer_length(buf_301)!=0,    _if_conditional110) {
        list$1charph_push_back(result_300,__builtin_string(buf_301->buf));
    }
    __result144__ = __result_obj__ = result_300;
    return __result144__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
struct list$1charph* result_303;
int offset_304;
int ovec_max_305;
const char* err_309;
int erro_ofs_310;
int options_311;
char* str_312;
struct real_pcre8_or_16* re_313;
_Bool _while_condtional16;
int options_314;
int len_315;
int regex_result_316;
int i_317;
int i_318;
_Bool _if_conditional111;
char* str_319;
_Bool _if_conditional112;
_Bool _if_conditional113;
char* str_320;
_Bool _if_conditional114;
int i_321;
char* match_string_322;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_303, 0, sizeof(struct list$1charph*));
memset(&offset_304, 0, sizeof(int));
memset(&ovec_max_305, 0, sizeof(int));
memset(&erro_ofs_310, 0, sizeof(int));
memset(&options_311, 0, sizeof(int));
memset(&str_312, 0, sizeof(char*));
memset(&re_313, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_314, 0, sizeof(int));
memset(&len_315, 0, sizeof(int));
memset(&regex_result_316, 0, sizeof(int));
memset(&i_317, 0, sizeof(int));
memset(&i_318, 0, sizeof(int));
memset(&str_319, 0, sizeof(char*));
memset(&str_320, 0, sizeof(char*));
memset(&i_321, 0, sizeof(int));
memset(&match_string_322, 0, sizeof(char*));
    result_303=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1484, "list$1charph"));
    offset_304=0;
    ovec_max_305=16;
    int start_306[ovec_max_305];
    memset(&start_306, 0, sizeof(int)    *(ovec_max_305)    );
    int end_307[ovec_max_305];
    memset(&end_307, 0, sizeof(int)    *(ovec_max_305)    );
    int ovec_value_308[ovec_max_305*3];
    memset(&ovec_value_308, 0, sizeof(int)    *(ovec_max_305*3)    );
    options_311=reg->options;
    str_312=reg->str;
    re_313=reg->re;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_314=2097152;
        len_315=strlen(self);
        regex_result_316=pcre_exec(re_313,(struct pcre_extra*)0,self,len_315,offset_304,options_314,ovec_value_308,ovec_max_305*3);
        for(        i_317=0;        i_317<ovec_max_305;        i_317++        ){
            start_306[i_317]=ovec_value_308[i_317*2];
        }
        for(        i_318=0;        i_318<ovec_max_305;        i_318++        ){
            end_307[i_318]=ovec_value_308[i_318*2+1];
        }
        if(_if_conditional111=regex_result_316==1,        _if_conditional111) {
            str_319=charp_substring(self,start_306[0],end_307[0]);
            list$1charph_push_back(result_303,str_319);
            if(_if_conditional112=offset_304==end_307[0],            _if_conditional112) {
                offset_304++;
            }
            else {
                offset_304=end_307[0];
            }
        }
        else {
            if(_if_conditional113=regex_result_316>1,            _if_conditional113) {
                str_320=charp_substring(self,start_306[0],end_307[0]);
                list$1charph_push_back(result_303,str_320);
                if(_if_conditional114=offset_304==end_307[0],                _if_conditional114) {
                    offset_304++;
                }
                else {
                    offset_304=end_307[0];
                }
                for(                i_321=1;                i_321<regex_result_316;                i_321++                ){
                    match_string_322=charp_substring(self,start_306[i_321],end_307[i_321]);
                    list$1charph_push_back(result_303,match_string_322);
                }
            }
            else {
                break;
            }
        }
    }
    __result145__ = __result_obj__ = result_303;
    return __result145__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_323;
int erro_ofs_324;
int options_325;
char* str_326;
struct real_pcre8_or_16* re_327;
struct list$1charph* result_328;
int offset_329;
int ovec_max_330;
_Bool _while_condtional17;
int options_334;
int len_335;
int regex_result_336;
int i_337;
int i_338;
_Bool _if_conditional115;
char* str_339;
_Bool _if_conditional116;
_Bool _if_conditional117;
char* str_340;
_Bool _if_conditional118;
int i_341;
char* match_str_342;
_Bool _if_conditional119;
char* str_343;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_324, 0, sizeof(int));
memset(&options_325, 0, sizeof(int));
memset(&str_326, 0, sizeof(char*));
memset(&re_327, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_328, 0, sizeof(struct list$1charph*));
memset(&offset_329, 0, sizeof(int));
memset(&ovec_max_330, 0, sizeof(int));
memset(&options_334, 0, sizeof(int));
memset(&len_335, 0, sizeof(int));
memset(&regex_result_336, 0, sizeof(int));
memset(&i_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
memset(&str_339, 0, sizeof(char*));
memset(&str_340, 0, sizeof(char*));
memset(&i_341, 0, sizeof(int));
memset(&match_str_342, 0, sizeof(char*));
memset(&str_343, 0, sizeof(char*));
    options_325=reg->options;
    str_326=reg->str;
    re_327=reg->re;
    result_328=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1565, "list$1charph"));
    offset_329=0;
    ovec_max_330=16;
    int start_331[ovec_max_330];
    memset(&start_331, 0, sizeof(int)    *(ovec_max_330)    );
    int end_332[ovec_max_330];
    memset(&end_332, 0, sizeof(int)    *(ovec_max_330)    );
    int ovec_value_333[ovec_max_330*3];
    memset(&ovec_value_333, 0, sizeof(int)    *(ovec_max_330*3)    );
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        options_334=2097152;
        len_335=strlen(self);
        regex_result_336=pcre_exec(re_327,(struct pcre_extra*)0,self,len_335,offset_329,options_334,ovec_value_333,ovec_max_330*3);
        for(        i_337=0;        i_337<ovec_max_330;        i_337++        ){
            start_331[i_337]=ovec_value_333[i_337*2];
        }
        for(        i_338=0;        i_338<ovec_max_330;        i_338++        ){
            end_332[i_338]=ovec_value_333[i_338*2+1];
        }
        if(_if_conditional115=regex_result_336==1,        _if_conditional115) {
            str_339=charp_substring(self,offset_329,start_331[0]);
            list$1charph_push_back(result_328,str_339);
            if(_if_conditional116=offset_329==end_332[0],            _if_conditional116) {
                offset_329++;
            }
            else {
                offset_329=end_332[0];
            }
        }
        else {
            if(_if_conditional117=regex_result_336>1,            _if_conditional117) {
                str_340=charp_substring(self,offset_329,start_331[0]);
                list$1charph_push_back(result_328,str_340);
                if(_if_conditional118=offset_329==end_332[0],                _if_conditional118) {
                    offset_329++;
                }
                else {
                    offset_329=end_332[0];
                }
                for(                i_341=1;                i_341<regex_result_336;                i_341++                ){
                    match_str_342=charp_substring(self,start_331[i_341],end_332[i_341]);
                    list$1charph_push_back(result_328,match_str_342);
                }
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional119=offset_329<charp_length(self),    _if_conditional119) {
        str_343=charp_substring(self,offset_329,-1);
        list$1charph_push_back(result_328,str_343);
    }
    __result146__ = __result_obj__ = result_328;
    return __result146__;
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_344;
int ovec_max_345;
const char* err_349;
int erro_ofs_350;
int options_351;
char* str_352;
struct real_pcre8_or_16* re_353;
_Bool _while_condtional18;
int options_354;
int len_355;
int regex_result_356;
int i_357;
int i_358;
_Bool _if_conditional120;
_Bool __result147__;
_Bool __result148__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_344, 0, sizeof(int));
memset(&ovec_max_345, 0, sizeof(int));
memset(&erro_ofs_350, 0, sizeof(int));
memset(&options_351, 0, sizeof(int));
memset(&str_352, 0, sizeof(char*));
memset(&re_353, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_354, 0, sizeof(int));
memset(&len_355, 0, sizeof(int));
memset(&regex_result_356, 0, sizeof(int));
memset(&i_357, 0, sizeof(int));
memset(&i_358, 0, sizeof(int));
    offset_344=0;
    ovec_max_345=16;
    int start_346[ovec_max_345];
    memset(&start_346, 0, sizeof(int)    *(ovec_max_345)    );
    int end_347[ovec_max_345];
    memset(&end_347, 0, sizeof(int)    *(ovec_max_345)    );
    int ovec_value_348[ovec_max_345*3];
    memset(&ovec_value_348, 0, sizeof(int)    *(ovec_max_345*3)    );
    options_351=reg->options;
    str_352=reg->str;
    re_353=reg->re;
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_354=2097152;
        len_355=strlen(self);
        regex_result_356=pcre_exec(re_353,(struct pcre_extra*)0,self,len_355,offset_344,options_354,ovec_value_348,ovec_max_345*3);
        for(        i_357=0;        i_357<ovec_max_345;        i_357++        ){
            start_346[i_357]=ovec_value_348[i_357*2];
        }
        for(        i_358=0;        i_358<ovec_max_345;        i_358++        ){
            end_347[i_358]=ovec_value_348[i_358*2+1];
        }
        if(_if_conditional120=regex_result_356>0,        _if_conditional120) {
            __result147__ = (_Bool)1;
            return __result147__;
        }
        else {
            __result148__ = (_Bool)0;
            return __result148__;
        }
    }
    __result149__ = (_Bool)0;
    return __result149__;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__;
const char* err_359;
int erro_ofs_360;
int options_361;
char* str_362;
struct real_pcre8_or_16* re_363;
struct list$1charph* result_364;
int offset_365;
int ovec_max_366;
int n_370;
_Bool _while_condtional19;
int options_371;
int len_372;
int regex_result_373;
int i_374;
int i_375;
_Bool _if_conditional121;
char* str_376;
_Bool _if_conditional122;
_Bool _if_conditional123;
char* str_377;
_Bool _if_conditional124;
int i_378;
char* match_str_379;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* str_380;
struct list$1charph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_360, 0, sizeof(int));
memset(&options_361, 0, sizeof(int));
memset(&str_362, 0, sizeof(char*));
memset(&re_363, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_364, 0, sizeof(struct list$1charph*));
memset(&offset_365, 0, sizeof(int));
memset(&ovec_max_366, 0, sizeof(int));
memset(&n_370, 0, sizeof(int));
memset(&options_371, 0, sizeof(int));
memset(&len_372, 0, sizeof(int));
memset(&regex_result_373, 0, sizeof(int));
memset(&i_374, 0, sizeof(int));
memset(&i_375, 0, sizeof(int));
memset(&str_376, 0, sizeof(char*));
memset(&str_377, 0, sizeof(char*));
memset(&i_378, 0, sizeof(int));
memset(&match_str_379, 0, sizeof(char*));
memset(&str_380, 0, sizeof(char*));
    options_361=reg->options;
    str_362=reg->str;
    re_363=reg->re;
    result_364=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1687, "list$1charph"));
    offset_365=0;
    ovec_max_366=16;
    int start_367[ovec_max_366];
    memset(&start_367, 0, sizeof(int)    *(ovec_max_366)    );
    int end_368[ovec_max_366];
    memset(&end_368, 0, sizeof(int)    *(ovec_max_366)    );
    int ovec_value_369[ovec_max_366*3];
    memset(&ovec_value_369, 0, sizeof(int)    *(ovec_max_366*3)    );
    n_370=0;
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        options_371=2097152;
        len_372=strlen(self);
        regex_result_373=pcre_exec(re_363,(struct pcre_extra*)0,self,len_372,offset_365,options_371,ovec_value_369,ovec_max_366*3);
        for(        i_374=0;        i_374<ovec_max_366;        i_374++        ){
            start_367[i_374]=ovec_value_369[i_374*2];
        }
        for(        i_375=0;        i_375<ovec_max_366;        i_375++        ){
            end_368[i_375]=ovec_value_369[i_375*2+1];
        }
        if(_if_conditional121=regex_result_373==1,        _if_conditional121) {
            str_376=charp_substring(self,offset_365,start_367[0]);
            list$1charph_push_back(result_364,str_376);
            if(_if_conditional122=offset_365==end_368[0],            _if_conditional122) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
        }
        else {
            if(_if_conditional123=regex_result_373>1,            _if_conditional123) {
                str_377=charp_substring(self,offset_365,start_367[0]);
                list$1charph_push_back(result_364,str_377);
                if(_if_conditional124=offset_365==end_368[0],                _if_conditional124) {
                    offset_365++;
                }
                else {
                    offset_365=end_368[0];
                }
                for(                i_378=1;                i_378<regex_result_373;                i_378++                ){
                    match_str_379=charp_substring(self,start_367[i_378],end_368[i_378]);
                    list$1charph_push_back(result_364,match_str_379);
                }
            }
            else {
                break;
            }
        }
        n_370++;
        if(_if_conditional125=maxsplit==n_370,        _if_conditional125) {
            break;
        }
    }
    if(_if_conditional126=offset_365<charp_length(self),    _if_conditional126) {
        str_380=charp_substring(self,offset_365,-1);
        list$1charph_push_back(result_364,str_380);
    }
    __result150__ = __result_obj__ = result_364;
    return __result150__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_381;
int erro_ofs_382;
int options_383;
char* str_384;
struct real_pcre8_or_16* re_385;
char* self2_386;
int ovec_max_387;
int result_391;
int offset_392;
int n_393;
_Bool _while_condtional20;
int options_394;
int len_395;
int regex_result_396;
int i_397;
int i_398;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_382, 0, sizeof(int));
memset(&options_383, 0, sizeof(int));
memset(&str_384, 0, sizeof(char*));
memset(&re_385, 0, sizeof(struct real_pcre8_or_16*));
memset(&self2_386, 0, sizeof(char*));
memset(&ovec_max_387, 0, sizeof(int));
memset(&result_391, 0, sizeof(int));
memset(&offset_392, 0, sizeof(int));
memset(&n_393, 0, sizeof(int));
memset(&options_394, 0, sizeof(int));
memset(&len_395, 0, sizeof(int));
memset(&regex_result_396, 0, sizeof(int));
memset(&i_397, 0, sizeof(int));
memset(&i_398, 0, sizeof(int));
    options_383=reg->options;
    str_384=reg->str;
    re_385=reg->re;
    self2_386=charp_reverse(self);
    ovec_max_387=16;
    int start_388[ovec_max_387];
    memset(&start_388, 0, sizeof(int)    *(ovec_max_387)    );
    int end_389[ovec_max_387];
    memset(&end_389, 0, sizeof(int)    *(ovec_max_387)    );
    int ovec_value_390[ovec_max_387*3];
    memset(&ovec_value_390, 0, sizeof(int)    *(ovec_max_387*3)    );
    result_391=default_value;
    offset_392=0;
    n_393=0;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_394=2097152;
        len_395=strlen(self2_386);
        regex_result_396=pcre_exec(re_385,(struct pcre_extra*)0,self2_386,len_395,offset_392,options_394,ovec_value_390,ovec_max_387*3);
        for(        i_397=0;        i_397<ovec_max_387;        i_397++        ){
            start_388[i_397]=ovec_value_390[i_397*2];
        }
        for(        i_398=0;        i_398<ovec_max_387;        i_398++        ){
            end_389[i_398]=ovec_value_390[i_398*2+1];
        }
        if(_if_conditional127=regex_result_396>0,        _if_conditional127) {
            n_393++;
            if(_if_conditional128=offset_392==end_389[0],            _if_conditional128) {
                offset_392++;
            }
            else {
                offset_392=end_389[0];
            }
            if(_if_conditional129=n_393==count,            _if_conditional129) {
                result_391=strlen(self)-end_389[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result151__ = result_391;
    return __result151__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_399;
int ovec_max_400;
const char* err_404;
int erro_ofs_405;
int options_406;
char* str_407;
struct real_pcre8_or_16* re_408;
int n_409;
_Bool _while_condtional21;
int options_410;
int len_411;
int regex_result_412;
int i_413;
int i_414;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool __result152__;
_Bool _if_conditional132;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_399, 0, sizeof(int));
memset(&ovec_max_400, 0, sizeof(int));
memset(&erro_ofs_405, 0, sizeof(int));
memset(&options_406, 0, sizeof(int));
memset(&str_407, 0, sizeof(char*));
memset(&re_408, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_409, 0, sizeof(int));
memset(&options_410, 0, sizeof(int));
memset(&len_411, 0, sizeof(int));
memset(&regex_result_412, 0, sizeof(int));
memset(&i_413, 0, sizeof(int));
memset(&i_414, 0, sizeof(int));
    offset_399=0;
    ovec_max_400=16;
    int start_401[ovec_max_400];
    memset(&start_401, 0, sizeof(int)    *(ovec_max_400)    );
    int end_402[ovec_max_400];
    memset(&end_402, 0, sizeof(int)    *(ovec_max_400)    );
    int ovec_value_403[ovec_max_400*3];
    memset(&ovec_value_403, 0, sizeof(int)    *(ovec_max_400*3)    );
    options_406=reg->options;
    str_407=reg->str;
    re_408=reg->re;
    n_409=0;
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_410=2097152;
        len_411=strlen(self);
        regex_result_412=pcre_exec(re_408,(struct pcre_extra*)0,self,len_411,offset_399,options_410,ovec_value_403,ovec_max_400*3);
        for(        i_413=0;        i_413<ovec_max_400;        i_413++        ){
            start_401[i_413]=ovec_value_403[i_413*2];
        }
        for(        i_414=0;        i_414<ovec_max_400;        i_414++        ){
            end_402[i_414]=ovec_value_403[i_414*2+1];
        }
        if(_if_conditional130=regex_result_412>0,        _if_conditional130) {
            n_409++;
            if(_if_conditional131=count==n_409,            _if_conditional131) {
                __result152__ = (_Bool)1;
                return __result152__;
            }
            if(_if_conditional132=offset_399==end_402[0],            _if_conditional132) {
                offset_399++;
            }
            else {
                offset_399=end_402[0];
            }
        }
        else {
            __result153__ = (_Bool)0;
            return __result153__;
        }
    }
    __result154__ = (_Bool)0;
    return __result154__;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_415;
int ovec_max_416;
const char* err_420;
int erro_ofs_421;
int options_422;
char* str_423;
struct real_pcre8_or_16* re_424;
struct buffer* result_425;
_Bool _while_condtional22;
int options_426;
int len_427;
int regex_result_428;
int i_429;
int i_430;
_Bool _if_conditional133;
char* str_431;
struct list$1charph* group_strings_432;
char* match_string_433;
char* block_result_434;
_Bool _if_conditional134;
char* __result155__;
_Bool _if_conditional135;
_Bool _if_conditional136;
char* str_435;
_Bool _if_conditional137;
char* str_436;
_Bool _if_conditional138;
struct list$1charph* group_strings_437;
int i_438;
char* match_string_439;
char* match_string_440;
char* block_result_441;
_Bool _if_conditional139;
char* __result156__;
_Bool _if_conditional140;
char* str_442;
char* str_443;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_415, 0, sizeof(int));
memset(&ovec_max_416, 0, sizeof(int));
memset(&erro_ofs_421, 0, sizeof(int));
memset(&options_422, 0, sizeof(int));
memset(&str_423, 0, sizeof(char*));
memset(&re_424, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_425, 0, sizeof(struct buffer*));
memset(&options_426, 0, sizeof(int));
memset(&len_427, 0, sizeof(int));
memset(&regex_result_428, 0, sizeof(int));
memset(&i_429, 0, sizeof(int));
memset(&i_430, 0, sizeof(int));
memset(&str_431, 0, sizeof(char*));
memset(&group_strings_432, 0, sizeof(struct list$1charph*));
memset(&match_string_433, 0, sizeof(char*));
memset(&block_result_434, 0, sizeof(char*));
memset(&str_435, 0, sizeof(char*));
memset(&str_436, 0, sizeof(char*));
memset(&group_strings_437, 0, sizeof(struct list$1charph*));
memset(&i_438, 0, sizeof(int));
memset(&match_string_439, 0, sizeof(char*));
memset(&match_string_440, 0, sizeof(char*));
memset(&block_result_441, 0, sizeof(char*));
memset(&str_442, 0, sizeof(char*));
memset(&str_443, 0, sizeof(char*));
    offset_415=0;
    ovec_max_416=16;
    int start_417[ovec_max_416];
    memset(&start_417, 0, sizeof(int)    *(ovec_max_416)    );
    int end_418[ovec_max_416];
    memset(&end_418, 0, sizeof(int)    *(ovec_max_416)    );
    int ovec_value_419[ovec_max_416*3];
    memset(&ovec_value_419, 0, sizeof(int)    *(ovec_max_416*3)    );
    options_422=reg->options;
    str_423=reg->str;
    re_424=reg->re;
    result_425=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 1899, "buffer"));
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_426=2097152;
        len_427=strlen(self);
        regex_result_428=pcre_exec(re_424,(struct pcre_extra*)0,self,len_427,offset_415,options_426,ovec_value_419,ovec_max_416*3);
        for(        i_429=0;        i_429<ovec_max_416;        i_429++        ){
            start_417[i_429]=ovec_value_419[i_429*2];
        }
        for(        i_430=0;        i_430<ovec_max_416;        i_430++        ){
            end_418[i_430]=ovec_value_419[i_430*2+1];
        }
        if(_if_conditional133=regex_result_428==1,        _if_conditional133) {
            str_431=charp_substring(self,offset_415,start_417[0]);
            buffer_append_str(result_425,str_431);
            group_strings_432=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1919, "list$1charph"));
            match_string_433=charp_substring(self,start_417[0],end_418[0]);
            list$1charph_push_back(group_strings_432,charp_substring(self,start_417[0],end_418[0]));
            block_result_434=block(parent,match_string_433,group_strings_432);
            if(_if_conditional134=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional134) {
                __result155__ = __result_obj__ = buffer_to_string(result_425);
                return __result155__;
            }
            buffer_append_str(result_425,block_result_434);
            if(_if_conditional135=offset_415==end_418[0],            _if_conditional135) {
                offset_415++;
            }
            else {
                offset_415=end_418[0];
            }
            if(_if_conditional136=!reg->global,            _if_conditional136) {
                str_435=charp_substring(self,offset_415,-1);
                buffer_append_str(result_425,str_435);
                break;
            }
        }
        else {
            if(_if_conditional137=regex_result_428>1,            _if_conditional137) {
                str_436=charp_substring(self,offset_415,start_417[0]);
                buffer_append_str(result_425,str_436);
                if(_if_conditional138=offset_415==end_418[0],                _if_conditional138) {
                    offset_415++;
                }
                else {
                    offset_415=end_418[0];
                }
                group_strings_437=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 1958, "list$1charph"));
                for(                i_438=1;                i_438<regex_result_428;                i_438++                ){
                    match_string_439=charp_substring(self,start_417[i_438],end_418[i_438]);
                    list$1charph_push_back(group_strings_437,match_string_439);
                }
                match_string_440=charp_substring(self,start_417[0],end_418[0]);
                block_result_441=block(parent,match_string_440,group_strings_437);
                if(_if_conditional139=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional139) {
                    __result156__ = __result_obj__ = buffer_to_string(result_425);
                    return __result156__;
                }
                buffer_append_str(result_425,block_result_441);
                if(_if_conditional140=!reg->global,                _if_conditional140) {
                    str_442=charp_substring(self,offset_415,-1);
                    buffer_append_str(result_425,str_442);
                    break;
                }
            }
            else {
                str_443=charp_substring(self,offset_415,-1);
                buffer_append_str(result_425,str_443);
                break;
            }
        }
    }
    __result157__ = __result_obj__ = buffer_to_string(result_425);
    return __result157__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_444;
int ovec_max_445;
const char* err_449;
int erro_ofs_450;
int options_451;
char* str_452;
struct real_pcre8_or_16* re_453;
struct buffer* result_454;
int n_455;
_Bool _while_condtional23;
int options_456;
int len_457;
int regex_result_458;
int i_459;
int i_460;
_Bool _if_conditional141;
char* str_461;
struct list$1charph* group_strings_462;
char* match_string_463;
char* block_result_464;
_Bool _if_conditional142;
char* __result158__;
_Bool _if_conditional143;
_Bool _if_conditional144;
char* str_465;
_Bool _if_conditional145;
char* str_466;
_Bool _if_conditional146;
char* str_467;
_Bool _if_conditional147;
struct list$1charph* group_strings_468;
int i_469;
char* match_string_470;
char* match_string_471;
char* block_result_472;
_Bool _if_conditional148;
char* __result159__;
_Bool _if_conditional149;
char* str_473;
_Bool _if_conditional150;
char* str_474;
char* str_475;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_444, 0, sizeof(int));
memset(&ovec_max_445, 0, sizeof(int));
memset(&erro_ofs_450, 0, sizeof(int));
memset(&options_451, 0, sizeof(int));
memset(&str_452, 0, sizeof(char*));
memset(&re_453, 0, sizeof(struct real_pcre8_or_16*));
memset(&result_454, 0, sizeof(struct buffer*));
memset(&n_455, 0, sizeof(int));
memset(&options_456, 0, sizeof(int));
memset(&len_457, 0, sizeof(int));
memset(&regex_result_458, 0, sizeof(int));
memset(&i_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
memset(&str_461, 0, sizeof(char*));
memset(&group_strings_462, 0, sizeof(struct list$1charph*));
memset(&match_string_463, 0, sizeof(char*));
memset(&block_result_464, 0, sizeof(char*));
memset(&str_465, 0, sizeof(char*));
memset(&str_466, 0, sizeof(char*));
memset(&str_467, 0, sizeof(char*));
memset(&group_strings_468, 0, sizeof(struct list$1charph*));
memset(&i_469, 0, sizeof(int));
memset(&match_string_470, 0, sizeof(char*));
memset(&match_string_471, 0, sizeof(char*));
memset(&block_result_472, 0, sizeof(char*));
memset(&str_473, 0, sizeof(char*));
memset(&str_474, 0, sizeof(char*));
memset(&str_475, 0, sizeof(char*));
    offset_444=0;
    ovec_max_445=16;
    int start_446[ovec_max_445];
    memset(&start_446, 0, sizeof(int)    *(ovec_max_445)    );
    int end_447[ovec_max_445];
    memset(&end_447, 0, sizeof(int)    *(ovec_max_445)    );
    int ovec_value_448[ovec_max_445*3];
    memset(&ovec_value_448, 0, sizeof(int)    *(ovec_max_445*3)    );
    options_451=reg->options;
    str_452=reg->str;
    re_453=reg->re;
    result_454=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str-gc.c", 2007, "buffer"));
    n_455=0;
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_456=2097152;
        len_457=strlen(self);
        regex_result_458=pcre_exec(re_453,(struct pcre_extra*)0,self,len_457,offset_444,options_456,ovec_value_448,ovec_max_445*3);
        for(        i_459=0;        i_459<ovec_max_445;        i_459++        ){
            start_446[i_459]=ovec_value_448[i_459*2];
        }
        for(        i_460=0;        i_460<ovec_max_445;        i_460++        ){
            end_447[i_460]=ovec_value_448[i_460*2+1];
        }
        if(_if_conditional141=regex_result_458==1,        _if_conditional141) {
            n_455++;
            str_461=charp_substring(self,offset_444,start_446[0]);
            buffer_append_str(result_454,str_461);
            group_strings_462=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2030, "list$1charph"));
            list$1charph_push_back(group_strings_462,charp_substring(self,start_446[0],end_447[0]));
            match_string_463=charp_substring(self,start_446[0],end_447[0]);
            block_result_464=block(parent,match_string_463,group_strings_462);
            if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional142) {
                __result158__ = __result_obj__ = buffer_to_string(result_454);
                return __result158__;
            }
            buffer_append_str(result_454,block_result_464);
            if(_if_conditional143=offset_444==end_447[0],            _if_conditional143) {
                offset_444++;
            }
            else {
                offset_444=end_447[0];
            }
            if(_if_conditional144=!reg->global,            _if_conditional144) {
                str_465=charp_substring(self,offset_444,-1);
                buffer_append_str(result_454,str_465);
                break;
            }
            if(_if_conditional145=n_455==count,            _if_conditional145) {
                str_466=charp_substring(self,offset_444,-1);
                buffer_append_str(result_454,str_466);
                break;
            }
        }
        else {
            if(_if_conditional146=regex_result_458>1,            _if_conditional146) {
                n_455++;
                str_467=charp_substring(self,offset_444,start_446[0]);
                buffer_append_str(result_454,str_467);
                if(_if_conditional147=offset_444==end_447[0],                _if_conditional147) {
                    offset_444++;
                }
                else {
                    offset_444=end_447[0];
                }
                group_strings_468=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str-gc.c", 2077, "list$1charph"));
                for(                i_469=1;                i_469<regex_result_458;                i_469++                ){
                    match_string_470=charp_substring(self,start_446[i_469],end_447[i_469]);
                    list$1charph_push_back(group_strings_468,match_string_470);
                }
                match_string_471=charp_substring(self,start_446[0],end_447[0]);
                block_result_472=block(parent,match_string_471,group_strings_468);
                if(_if_conditional148=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional148) {
                    __result159__ = __result_obj__ = buffer_to_string(result_454);
                    return __result159__;
                }
                buffer_append_str(result_454,block_result_472);
                if(_if_conditional149=!reg->global,                _if_conditional149) {
                    str_473=charp_substring(self,offset_444,-1);
                    buffer_append_str(result_454,str_473);
                    break;
                }
                if(_if_conditional150=n_455==count,                _if_conditional150) {
                    str_474=charp_substring(self,offset_444,-1);
                    buffer_append_str(result_454,str_474);
                    break;
                }
            }
            else {
                str_475=charp_substring(self,offset_444,-1);
                buffer_append_str(result_454,str_475);
                break;
            }
        }
    }
    __result160__ = __result_obj__ = buffer_to_string(result_454);
    return __result160__;
}

unsigned int wchar_tp_get_hash_key(int* value){
void* __result_obj__;
int result_476;
int* p_477;
_Bool _while_condtional24;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_476, 0, sizeof(int));
memset(&p_477, 0, sizeof(int*));
    result_476=0;
    p_477=value;
    while(_while_condtional24=*p_477,    _while_condtional24) {
        result_476+=(*p_477);
        p_477++;
    }
    __result161__ = result_476;
    return __result161__;
}

_Bool wstring_equals(int* left, int* right){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = wcscmp(left,right)==0;
    return __result163__;
}

_Bool wchar_t_operator_equals(int left, int right){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    __result165__ = left==right;
    return __result165__;
}

_Bool wchar_t_operator_not_equals(int left, int right){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = left!=right;
    return __result166__;
}

unsigned int wchar_t_get_hash_key(int value){
void* __result_obj__;
unsigned int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = value;
    return __result167__;
}

_Bool wchar_t_equals(int left, int right){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = left==right;
    return __result168__;
}

char* wchar_t_to_string(int wc){
void* __result_obj__;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = __result_obj__ = xsprintf("%ls",wc);
    return __result169__;
}

char* string_chomp(char* str){
void* __result_obj__;
char* result_478;
_Bool _if_conditional151;
char* __result170__;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_478, 0, sizeof(char*));
    result_478=__builtin_string(str);
    if(_if_conditional151=result_478[string_length(result_478)-1]==10,    _if_conditional151) {
        __result170__ = __result_obj__ = string_substring(result_478,0,-2);
        return __result170__;
    }
    __result171__ = __result_obj__ = result_478;
    return __result171__;
}

