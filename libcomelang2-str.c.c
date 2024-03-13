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

struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX527, int anonymous_var_nameX528, const char** anonymous_var_nameX529, int* anonymous_var_nameX530, const unsigned char* anonymous_var_nameX531);

struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX532, int anonymous_var_nameX533, const char** anonymous_var_nameX534, int* anonymous_var_nameX535, const unsigned char* anonymous_var_nameX536);

struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX537, int anonymous_var_nameX538, const char** anonymous_var_nameX539, int* anonymous_var_nameX540, const unsigned char* anonymous_var_nameX541);

struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX542, int anonymous_var_nameX543, int* anonymous_var_nameX544, const char** anonymous_var_nameX545, int* anonymous_var_nameX546, const unsigned char* anonymous_var_nameX547);

struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX548, int anonymous_var_nameX549, int* anonymous_var_nameX550, const char** anonymous_var_nameX551, int* anonymous_var_nameX552, const unsigned char* anonymous_var_nameX553);

struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX554, int anonymous_var_nameX555, int* anonymous_var_nameX556, const char** anonymous_var_nameX557, int* anonymous_var_nameX558, const unsigned char* anonymous_var_nameX559);

int pcre_config(int anonymous_var_nameX560, void* anonymous_var_nameX561);

int pcre16_config(int anonymous_var_nameX562, void* anonymous_var_nameX563);

int pcre32_config(int anonymous_var_nameX564, void* anonymous_var_nameX565);

int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX566, const char* anonymous_var_nameX567, int* anonymous_var_nameX568, int anonymous_var_nameX569, const char* anonymous_var_nameX570, char* anonymous_var_nameX571, int anonymous_var_nameX572);

int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX573, const unsigned short int* anonymous_var_nameX574, int* anonymous_var_nameX575, int anonymous_var_nameX576, const unsigned short int* anonymous_var_nameX577, unsigned short int* anonymous_var_nameX578, int anonymous_var_nameX579);

int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX580, const unsigned int* anonymous_var_nameX581, int* anonymous_var_nameX582, int anonymous_var_nameX583, const unsigned int* anonymous_var_nameX584, unsigned int* anonymous_var_nameX585, int anonymous_var_nameX586);

int pcre_copy_substring(const char* anonymous_var_nameX587, int* anonymous_var_nameX588, int anonymous_var_nameX589, int anonymous_var_nameX590, char* anonymous_var_nameX591, int anonymous_var_nameX592);

int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX593, int* anonymous_var_nameX594, int anonymous_var_nameX595, int anonymous_var_nameX596, unsigned short int* anonymous_var_nameX597, int anonymous_var_nameX598);

int pcre32_copy_substring(const unsigned int* anonymous_var_nameX599, int* anonymous_var_nameX600, int anonymous_var_nameX601, int anonymous_var_nameX602, unsigned int* anonymous_var_nameX603, int anonymous_var_nameX604);

int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX605, const struct pcre_extra* anonymous_var_nameX606, const char* anonymous_var_nameX607, int anonymous_var_nameX608, int anonymous_var_nameX609, int anonymous_var_nameX610, int* anonymous_var_nameX611, int anonymous_var_nameX612, int* anonymous_var_nameX613, int anonymous_var_nameX614);

int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX615, const struct pcre16_extra* anonymous_var_nameX616, const unsigned short int* anonymous_var_nameX617, int anonymous_var_nameX618, int anonymous_var_nameX619, int anonymous_var_nameX620, int* anonymous_var_nameX621, int anonymous_var_nameX622, int* anonymous_var_nameX623, int anonymous_var_nameX624);

int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX625, const struct pcre32_extra* anonymous_var_nameX626, const unsigned int* anonymous_var_nameX627, int anonymous_var_nameX628, int anonymous_var_nameX629, int anonymous_var_nameX630, int* anonymous_var_nameX631, int anonymous_var_nameX632, int* anonymous_var_nameX633, int anonymous_var_nameX634);

int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX635, const struct pcre_extra* anonymous_var_nameX636, const char* anonymous_var_nameX637, int anonymous_var_nameX638, int anonymous_var_nameX639, int anonymous_var_nameX640, int* anonymous_var_nameX641, int anonymous_var_nameX642);

int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX643, const struct pcre16_extra* anonymous_var_nameX644, const unsigned short int* anonymous_var_nameX645, int anonymous_var_nameX646, int anonymous_var_nameX647, int anonymous_var_nameX648, int* anonymous_var_nameX649, int anonymous_var_nameX650);

int pcre32_exec(const struct real_pcre32* anonymous_var_nameX651, const struct pcre32_extra* anonymous_var_nameX652, const unsigned int* anonymous_var_nameX653, int anonymous_var_nameX654, int anonymous_var_nameX655, int anonymous_var_nameX656, int* anonymous_var_nameX657, int anonymous_var_nameX658);

int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX659, const struct pcre_extra* anonymous_var_nameX660, const char* anonymous_var_nameX661, int anonymous_var_nameX662, int anonymous_var_nameX663, int anonymous_var_nameX664, int* anonymous_var_nameX665, int anonymous_var_nameX666, struct real_pcre_jit_stack* anonymous_var_nameX667);

int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX668, const struct pcre16_extra* anonymous_var_nameX669, const unsigned short int* anonymous_var_nameX670, int anonymous_var_nameX671, int anonymous_var_nameX672, int anonymous_var_nameX673, int* anonymous_var_nameX674, int anonymous_var_nameX675, struct real_pcre16_jit_stack* anonymous_var_nameX676);

int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX677, const struct pcre32_extra* anonymous_var_nameX678, const unsigned int* anonymous_var_nameX679, int anonymous_var_nameX680, int anonymous_var_nameX681, int anonymous_var_nameX682, int* anonymous_var_nameX683, int anonymous_var_nameX684, struct real_pcre32_jit_stack* anonymous_var_nameX685);

void pcre_free_substring(const char* anonymous_var_nameX686);

void pcre16_free_substring(const unsigned short int* anonymous_var_nameX687);

void pcre32_free_substring(const unsigned int* anonymous_var_nameX688);

void pcre_free_substring_list(const char** anonymous_var_nameX689);

void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX690);

void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX691);

int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX692, const struct pcre_extra* anonymous_var_nameX693, int anonymous_var_nameX694, void* anonymous_var_nameX695);

int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX696, const struct pcre16_extra* anonymous_var_nameX697, int anonymous_var_nameX698, void* anonymous_var_nameX699);

int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX700, const struct pcre32_extra* anonymous_var_nameX701, int anonymous_var_nameX702, void* anonymous_var_nameX703);

int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX704, const char* anonymous_var_nameX705, int* anonymous_var_nameX706, int anonymous_var_nameX707, const char* anonymous_var_nameX708, const char** anonymous_var_nameX709);

int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX710, const unsigned short int* anonymous_var_nameX711, int* anonymous_var_nameX712, int anonymous_var_nameX713, const unsigned short int* anonymous_var_nameX714, const unsigned short int** anonymous_var_nameX715);

int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX716, const unsigned int* anonymous_var_nameX717, int* anonymous_var_nameX718, int anonymous_var_nameX719, const unsigned int* anonymous_var_nameX720, const unsigned int** anonymous_var_nameX721);

int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX722, const char* anonymous_var_nameX723);

int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX724, const unsigned short int* anonymous_var_nameX725);

int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX726, const unsigned int* anonymous_var_nameX727);

int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX728, const char* anonymous_var_nameX729, char** anonymous_var_nameX730, char** anonymous_var_nameX731);

int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX732, const unsigned short int* anonymous_var_nameX733, unsigned short int** anonymous_var_nameX734, unsigned short int** anonymous_var_nameX735);

int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX736, const unsigned int* anonymous_var_nameX737, unsigned int** anonymous_var_nameX738, unsigned int** anonymous_var_nameX739);

int pcre_get_substring(const char* anonymous_var_nameX740, int* anonymous_var_nameX741, int anonymous_var_nameX742, int anonymous_var_nameX743, const char** anonymous_var_nameX744);

int pcre16_get_substring(const unsigned short int* anonymous_var_nameX745, int* anonymous_var_nameX746, int anonymous_var_nameX747, int anonymous_var_nameX748, const unsigned short int** anonymous_var_nameX749);

int pcre32_get_substring(const unsigned int* anonymous_var_nameX750, int* anonymous_var_nameX751, int anonymous_var_nameX752, int anonymous_var_nameX753, const unsigned int** anonymous_var_nameX754);

int pcre_get_substring_list(const char* anonymous_var_nameX755, int* anonymous_var_nameX756, int anonymous_var_nameX757, const char*** anonymous_var_nameX758);

int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX759, int* anonymous_var_nameX760, int anonymous_var_nameX761, const unsigned short int*** anonymous_var_nameX762);

int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX763, int* anonymous_var_nameX764, int anonymous_var_nameX765, const unsigned int*** anonymous_var_nameX766);

const unsigned char* pcre_maketables();

const unsigned char* pcre16_maketables();

const unsigned char* pcre32_maketables();

int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX767, int anonymous_var_nameX768);

int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX769, int anonymous_var_nameX770);

int pcre32_refcount(struct real_pcre32* anonymous_var_nameX771, int anonymous_var_nameX772);

struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX773, int anonymous_var_nameX774, const char** anonymous_var_nameX775);

struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX776, int anonymous_var_nameX777, const char** anonymous_var_nameX778);

struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX779, int anonymous_var_nameX780, const char** anonymous_var_nameX781);

void pcre_free_study(struct pcre_extra* anonymous_var_nameX782);

void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX783);

void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX784);

const char* pcre_version();

const char* pcre16_version();

const char* pcre32_version();

int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX785, struct pcre_extra* anonymous_var_nameX786, const unsigned char* anonymous_var_nameX787);

int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX788, struct pcre16_extra* anonymous_var_nameX789, const unsigned char* anonymous_var_nameX790);

int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX791, struct pcre32_extra* anonymous_var_nameX792, const unsigned char* anonymous_var_nameX793);

int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX794, const unsigned short int* anonymous_var_nameX795, int anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798);

int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX799, const unsigned int* anonymous_var_nameX800, int anonymous_var_nameX801, int* anonymous_var_nameX802, int anonymous_var_nameX803);

struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX804, int anonymous_var_nameX805);

struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX806, int anonymous_var_nameX807);

struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX808, int anonymous_var_nameX809);

void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX810);

void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX811);

void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX812);

void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX813, struct real_pcre_jit_stack* (*anonymous_var_nameX814)(void*), void* anonymous_var_nameX815);

void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX816, struct real_pcre16_jit_stack* (*anonymous_var_nameX817)(void*), void* anonymous_var_nameX818);

void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX819, struct real_pcre32_jit_stack* (*anonymous_var_nameX820)(void*), void* anonymous_var_nameX821);

void pcre_jit_free_unused_memory();

void pcre16_jit_free_unused_memory();

void pcre32_jit_free_unused_memory();

char* asctime(const struct tm* anonymous_var_nameX822);

unsigned long int clock();

char* ctime(const long* anonymous_var_nameX823);

double difftime(long anonymous_var_nameX824, long anonymous_var_nameX825);

struct tm* getdate(const char* anonymous_var_nameX826);

struct tm* gmtime(const long* anonymous_var_nameX827);

struct tm* localtime(const long* anonymous_var_nameX828);

long mktime(struct tm* anonymous_var_nameX829);

long int strftime(char* anonymous_var_nameX830, long int anonymous_var_nameX831, const char* anonymous_var_nameX832, const struct tm* anonymous_var_nameX833);

char* strptime(const char* anonymous_var_nameX834, const char* anonymous_var_nameX835, struct tm* anonymous_var_nameX836);

long time(long* anonymous_var_nameX837);

void tzset();

char* asctime_r(const struct tm* anonymous_var_nameX838, char* anonymous_var_nameX839);

char* ctime_r(const long* anonymous_var_nameX840, char* anonymous_var_nameX841);

struct tm* gmtime_r(const long* anonymous_var_nameX842, struct tm* anonymous_var_nameX843);

struct tm* localtime_r(const long* anonymous_var_nameX844, struct tm* anonymous_var_nameX845);

long posix2time(long anonymous_var_nameX846);

void tzsetwall();

long time2posix(long anonymous_var_nameX847);

long timelocal(struct tm* anonymous_var_nameX848);

long timegm(struct tm* anonymous_var_nameX849);

int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);

int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);

int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);

unsigned long long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);

int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);

int timespec_get(struct timespec* ts, int base);

int isalnum(int anonymous_var_nameX864);

int isalpha(int anonymous_var_nameX865);

int isblank(int anonymous_var_nameX866);

int iscntrl(int anonymous_var_nameX867);

int isdigit(int anonymous_var_nameX868);

int isgraph(int anonymous_var_nameX869);

int islower(int anonymous_var_nameX870);

int isprint(int anonymous_var_nameX871);

int ispunct(int anonymous_var_nameX872);

int isspace(int anonymous_var_nameX873);

int isupper(int anonymous_var_nameX874);

int isxdigit(int anonymous_var_nameX875);

int tolower(int anonymous_var_nameX876);

int toupper(int anonymous_var_nameX877);

int isascii(int anonymous_var_nameX878);

int toascii(int anonymous_var_nameX879);

int _tolower(int anonymous_var_nameX880);

int _toupper(int anonymous_var_nameX881);

int digittoint(int anonymous_var_nameX882);

int ishexnumber(int anonymous_var_nameX883);

int isideogram(int anonymous_var_nameX884);

int isnumber(int anonymous_var_nameX885);

int isphonogram(int anonymous_var_nameX886);

int isrune(int anonymous_var_nameX887);

int isspecial(int anonymous_var_nameX888);

int iswalnum(int anonymous_var_nameX889);

int iswalpha(int anonymous_var_nameX890);

int iswcntrl(int anonymous_var_nameX891);

int iswctype(int anonymous_var_nameX892, unsigned int anonymous_var_nameX893);

int iswdigit(int anonymous_var_nameX894);

int iswgraph(int anonymous_var_nameX895);

int iswlower(int anonymous_var_nameX896);

int iswprint(int anonymous_var_nameX897);

int iswpunct(int anonymous_var_nameX898);

int iswspace(int anonymous_var_nameX899);

int iswupper(int anonymous_var_nameX900);

int iswxdigit(int anonymous_var_nameX901);

int towlower(int anonymous_var_nameX902);

int towupper(int anonymous_var_nameX903);

unsigned int wctype(const char* anonymous_var_nameX904);

int btowc(int anonymous_var_nameX905);

int fgetwc(struct __sFILE* anonymous_var_nameX906);

int* fgetws(int* anonymous_var_nameX907, int anonymous_var_nameX908, struct __sFILE* anonymous_var_nameX909);

int fputwc(int anonymous_var_nameX910, struct __sFILE* anonymous_var_nameX911);

int fputws(const int* anonymous_var_nameX912, struct __sFILE* anonymous_var_nameX913);

int fwide(struct __sFILE* anonymous_var_nameX914, int anonymous_var_nameX915);

int fwprintf(struct __sFILE* anonymous_var_nameX916, const int* anonymous_var_nameX917, ...);

int fwscanf(struct __sFILE* anonymous_var_nameX918, const int* anonymous_var_nameX919, ...);

int getwc(struct __sFILE* anonymous_var_nameX920);

int getwchar();

long int mbrlen(const char* anonymous_var_nameX921, long int anonymous_var_nameX922, union anonymous_typeZ1* anonymous_var_nameX923);

long int mbrtowc(int* anonymous_var_nameX924, const char* anonymous_var_nameX925, long int anonymous_var_nameX926, union anonymous_typeZ1* anonymous_var_nameX927);

int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX928);

long int mbsrtowcs(int* anonymous_var_nameX929, const char** anonymous_var_nameX930, long int anonymous_var_nameX931, union anonymous_typeZ1* anonymous_var_nameX932);

int putwc(int anonymous_var_nameX933, struct __sFILE* anonymous_var_nameX934);

int putwchar(int anonymous_var_nameX935);

int swprintf(int* anonymous_var_nameX936, long int anonymous_var_nameX937, const int* anonymous_var_nameX938, ...);

int swscanf(const int* anonymous_var_nameX939, const int* anonymous_var_nameX940, ...);

int ungetwc(int anonymous_var_nameX941, struct __sFILE* anonymous_var_nameX942);

int vfwprintf(struct __sFILE* anonymous_var_nameX943, const int* anonymous_var_nameX944, __darwin_va_list anonymous_var_nameX945);

int vswprintf(int* anonymous_var_nameX946, long int anonymous_var_nameX947, const int* anonymous_var_nameX948, __darwin_va_list anonymous_var_nameX949);

int vwprintf(const int* anonymous_var_nameX950, __darwin_va_list anonymous_var_nameX951);

long int wcrtomb(char* anonymous_var_nameX952, int anonymous_var_nameX953, union anonymous_typeZ1* anonymous_var_nameX954);

int* wcscat(int* anonymous_var_nameX955, const int* anonymous_var_nameX956);

int* wcschr(const int* anonymous_var_nameX957, int anonymous_var_nameX958);

int wcscmp(const int* anonymous_var_nameX959, const int* anonymous_var_nameX960);

int wcscoll(const int* anonymous_var_nameX961, const int* anonymous_var_nameX962);

int* wcscpy(int* anonymous_var_nameX963, const int* anonymous_var_nameX964);

long int wcscspn(const int* anonymous_var_nameX965, const int* anonymous_var_nameX966);

long int wcsftime(int* anonymous_var_nameX967, long int anonymous_var_nameX968, const int* anonymous_var_nameX969, const struct tm* anonymous_var_nameX970);

long int wcslen(const int* anonymous_var_nameX971);

int* wcsncat(int* anonymous_var_nameX972, const int* anonymous_var_nameX973, long int anonymous_var_nameX974);

int wcsncmp(const int* anonymous_var_nameX975, const int* anonymous_var_nameX976, long int anonymous_var_nameX977);

int* wcsncpy(int* anonymous_var_nameX978, const int* anonymous_var_nameX979, long int anonymous_var_nameX980);

int* wcspbrk(const int* anonymous_var_nameX981, const int* anonymous_var_nameX982);

int* wcsrchr(const int* anonymous_var_nameX983, int anonymous_var_nameX984);

long int wcsrtombs(char* anonymous_var_nameX985, const int** anonymous_var_nameX986, long int anonymous_var_nameX987, union anonymous_typeZ1* anonymous_var_nameX988);

long int wcsspn(const int* anonymous_var_nameX989, const int* anonymous_var_nameX990);

int* wcsstr(const int* anonymous_var_nameX991, const int* anonymous_var_nameX992);

long int wcsxfrm(int* anonymous_var_nameX993, const int* anonymous_var_nameX994, long int anonymous_var_nameX995);

int wctob(int anonymous_var_nameX996);

double wcstod(const int* anonymous_var_nameX997, int** anonymous_var_nameX998);

int* wcstok(int* anonymous_var_nameX999, const int* anonymous_var_nameX1000, int** anonymous_var_nameX1001);

long wcstol(const int* anonymous_var_nameX1002, int** anonymous_var_nameX1003, int anonymous_var_nameX1004);

unsigned long int wcstoul(const int* anonymous_var_nameX1005, int** anonymous_var_nameX1006, int anonymous_var_nameX1007);

int* wmemchr(const int* anonymous_var_nameX1008, int anonymous_var_nameX1009, long int anonymous_var_nameX1010);

int wmemcmp(const int* anonymous_var_nameX1011, const int* anonymous_var_nameX1012, long int anonymous_var_nameX1013);

int* wmemcpy(int* anonymous_var_nameX1014, const int* anonymous_var_nameX1015, long int anonymous_var_nameX1016);

int* wmemmove(int* anonymous_var_nameX1017, const int* anonymous_var_nameX1018, long int anonymous_var_nameX1019);

int* wmemset(int* anonymous_var_nameX1020, int anonymous_var_nameX1021, long int anonymous_var_nameX1022);

int wprintf(const int* anonymous_var_nameX1023, ...);

int wscanf(const int* anonymous_var_nameX1024, ...);

int wcswidth(const int* anonymous_var_nameX1025, long int anonymous_var_nameX1026);

int wcwidth(int anonymous_var_nameX1027);

int vfwscanf(struct __sFILE* anonymous_var_nameX1028, const int* anonymous_var_nameX1029, __darwin_va_list anonymous_var_nameX1030);

int vswscanf(const int* anonymous_var_nameX1031, const int* anonymous_var_nameX1032, __darwin_va_list anonymous_var_nameX1033);

int vwscanf(const int* anonymous_var_nameX1034, __darwin_va_list anonymous_var_nameX1035);

float wcstof(const int* anonymous_var_nameX1036, int** anonymous_var_nameX1037);

long double wcstold(const int* anonymous_var_nameX1038, int** anonymous_var_nameX1039);

long long wcstoll(const int* anonymous_var_nameX1040, int** anonymous_var_nameX1041, int anonymous_var_nameX1042);

unsigned long long wcstoull(const int* anonymous_var_nameX1043, int** anonymous_var_nameX1044, int anonymous_var_nameX1045);

long int mbsnrtowcs(int* anonymous_var_nameX1046, const char** anonymous_var_nameX1047, long int anonymous_var_nameX1048, long int anonymous_var_nameX1049, union anonymous_typeZ1* anonymous_var_nameX1050);

int* wcpcpy(int* anonymous_var_nameX1051, const int* anonymous_var_nameX1052);

int* wcpncpy(int* anonymous_var_nameX1053, const int* anonymous_var_nameX1054, long int anonymous_var_nameX1055);

int* wcsdup(const int* anonymous_var_nameX1056);

int wcscasecmp(const int* anonymous_var_nameX1057, const int* anonymous_var_nameX1058);

int wcsncasecmp(const int* anonymous_var_nameX1059, const int* anonymous_var_nameX1060, long int n);

long int wcsnlen(const int* anonymous_var_nameX1061, long int anonymous_var_nameX1062);

long int wcsnrtombs(char* anonymous_var_nameX1063, const int** anonymous_var_nameX1064, long int anonymous_var_nameX1065, long int anonymous_var_nameX1066, union anonymous_typeZ1* anonymous_var_nameX1067);

struct __sFILE* open_wmemstream(int** __bufp, long int* __sizep);

int* fgetwln(struct __sFILE* anonymous_var_nameX1068, long int* anonymous_var_nameX1069);

long int wcslcat(int* anonymous_var_nameX1070, const int* anonymous_var_nameX1071, long int anonymous_var_nameX1072);

long int wcslcpy(int* anonymous_var_nameX1073, const int* anonymous_var_nameX1074, long int anonymous_var_nameX1075);

static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
unsigned int GC_get_version();

unsigned long int GC_get_gc_no();

void GC_set_oom_fn(void* (*anonymous_var_nameX1089)(long int));

void* (*GC_get_oom_fn())(long int);

void GC_set_on_heap_resize(void (*anonymous_var_nameX1091)(unsigned long int));

void (*GC_get_on_heap_resize())(unsigned long int);

void GC_set_on_collection_event(void (*anonymous_var_nameX1093)(enum anonymous_typeY13));

void (*GC_get_on_collection_event())(enum anonymous_typeY13);

void GC_set_find_leak(int anonymous_var_nameX1094);

int GC_get_find_leak();

void GC_set_all_interior_pointers(int anonymous_var_nameX1095);

int GC_get_all_interior_pointers();

void GC_set_finalize_on_demand(int anonymous_var_nameX1096);

int GC_get_finalize_on_demand();

void GC_set_java_finalization(int anonymous_var_nameX1097);

int GC_get_java_finalization();

void GC_set_finalizer_notifier(void (*anonymous_var_nameX1098)());

void (*GC_get_finalizer_notifier())();

void GC_set_dont_expand(int anonymous_var_nameX1099);

int GC_get_dont_expand();

void GC_set_full_freq(int anonymous_var_nameX1100);

int GC_get_full_freq();

void GC_set_non_gc_bytes(unsigned long int anonymous_var_nameX1101);

unsigned long int GC_get_non_gc_bytes();

void GC_set_no_dls(int anonymous_var_nameX1102);

int GC_get_no_dls();

void GC_set_free_space_divisor(unsigned long int anonymous_var_nameX1103);

unsigned long int GC_get_free_space_divisor();

void GC_set_max_retries(unsigned long int anonymous_var_nameX1104);

unsigned long int GC_get_max_retries();

void GC_set_dont_precollect(int anonymous_var_nameX1105);

int GC_get_dont_precollect();

void GC_set_time_limit(unsigned long int anonymous_var_nameX1106);

unsigned long int GC_get_time_limit();

void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1107);

struct GC_timeval_s GC_get_time_limit_tv();

void GC_set_allocd_bytes_per_finalizer(unsigned long int anonymous_var_nameX1108);

unsigned long int GC_get_allocd_bytes_per_finalizer();

void GC_start_performance_measurement();

unsigned long int GC_get_full_gc_total_time();

void GC_set_pages_executable(int anonymous_var_nameX1109);

int GC_get_pages_executable();

void GC_set_min_bytes_allocd(long int anonymous_var_nameX1110);

long int GC_get_min_bytes_allocd();

void GC_set_rate(int anonymous_var_nameX1111);

int GC_get_rate();

void GC_set_max_prior_attempts(int anonymous_var_nameX1112);

int GC_get_max_prior_attempts();

void GC_set_disable_automatic_collection(int anonymous_var_nameX1113);

int GC_get_disable_automatic_collection();

void GC_set_handle_fork(int anonymous_var_nameX1114);

void GC_atfork_prepare();

void GC_atfork_parent();

void GC_atfork_child();

void GC_init();

int GC_is_init_called();

void GC_deinit();

void* GC_malloc(long int anonymous_var_nameX1115);

void* GC_malloc_atomic(long int anonymous_var_nameX1116);

char* GC_strdup(const char* anonymous_var_nameX1117);

char* GC_strndup(const char* anonymous_var_nameX1118, long int anonymous_var_nameX1119);

void* GC_malloc_uncollectable(long int anonymous_var_nameX1120);

void* GC_malloc_stubborn(long int anonymous_var_nameX1121);

void* GC_memalign(long int anonymous_var_nameX1122, long int anonymous_var_nameX1123);

int GC_posix_memalign(void** anonymous_var_nameX1124, long int anonymous_var_nameX1125, long int anonymous_var_nameX1126);

void GC_free(void* anonymous_var_nameX1127);

void GC_change_stubborn(const void* anonymous_var_nameX1128);

void GC_end_stubborn_change(const void* anonymous_var_nameX1129);

void* GC_base(void* anonymous_var_nameX1130);

int GC_is_heap_ptr(const void* anonymous_var_nameX1131);

long int GC_size(const void* anonymous_var_nameX1132);

void* GC_realloc(void* anonymous_var_nameX1133, long int anonymous_var_nameX1134);

int GC_expand_hp(long int anonymous_var_nameX1135);

void GC_set_max_heap_size(unsigned long int anonymous_var_nameX1136);

void GC_exclude_static_roots(void* anonymous_var_nameX1137, void* anonymous_var_nameX1138);

void GC_clear_exclusion_table();

void GC_clear_roots();

void GC_add_roots(void* anonymous_var_nameX1139, void* anonymous_var_nameX1140);

void GC_remove_roots(void* anonymous_var_nameX1141, void* anonymous_var_nameX1142);

void GC_register_displacement(long int anonymous_var_nameX1143);

void GC_debug_register_displacement(long int anonymous_var_nameX1144);

void GC_gcollect();

void GC_gcollect_and_unmap();

int GC_try_to_collect(int (*anonymous_var_nameX1145)());

void GC_set_stop_func(int (*anonymous_var_nameX1146)());

int (*GC_get_stop_func())();

long int GC_get_heap_size();

long int GC_get_free_bytes();

long int GC_get_unmapped_bytes();

long int GC_get_bytes_since_gc();

long int GC_get_expl_freed_bytes_since_gc();

long int GC_get_total_bytes();

long int GC_get_obtained_from_os_bytes();

void GC_get_heap_usage_safe(unsigned long int* anonymous_var_nameX1147, unsigned long int* anonymous_var_nameX1148, unsigned long int* anonymous_var_nameX1149, unsigned long int* anonymous_var_nameX1150, unsigned long int* anonymous_var_nameX1151);

long int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1152, long int anonymous_var_nameX1153);

long int GC_get_size_map_at(int i);

long int GC_get_memory_use();

void GC_disable();

int GC_is_disabled();

void GC_enable();

void GC_set_manual_vdb_allowed(int anonymous_var_nameX1154);

int GC_get_manual_vdb_allowed();

void GC_enable_incremental();

int GC_is_incremental_mode();

int GC_incremental_protection_needs();

void GC_start_incremental_collection();

int GC_collect_a_little();

void* GC_malloc_ignore_off_page(long int anonymous_var_nameX1155);

void* GC_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1156);

void* GC_malloc_atomic_uncollectable(long int anonymous_var_nameX1157);

void* GC_debug_malloc_atomic_uncollectable(long int anonymous_var_nameX1158, const char* s, int i);

void* GC_debug_malloc(long int anonymous_var_nameX1159, const char* s, int i);

void* GC_debug_malloc_atomic(long int anonymous_var_nameX1160, const char* s, int i);

char* GC_debug_strdup(const char* anonymous_var_nameX1161, const char* s, int i);

char* GC_debug_strndup(const char* anonymous_var_nameX1162, long int anonymous_var_nameX1163, const char* s, int i);

void* GC_debug_malloc_uncollectable(long int anonymous_var_nameX1164, const char* s, int i);

void* GC_debug_malloc_stubborn(long int anonymous_var_nameX1165, const char* s, int i);

void* GC_debug_malloc_ignore_off_page(long int anonymous_var_nameX1166, const char* s, int i);

void* GC_debug_malloc_atomic_ignore_off_page(long int anonymous_var_nameX1167, const char* s, int i);

void GC_debug_free(void* anonymous_var_nameX1168);

void* GC_debug_realloc(void* anonymous_var_nameX1169, long int anonymous_var_nameX1170, const char* s, int i);

void GC_debug_change_stubborn(const void* anonymous_var_nameX1171);

void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1172);

void* GC_debug_malloc_replacement(long int anonymous_var_nameX1173);

void* GC_debug_realloc_replacement(void* anonymous_var_nameX1174, long int anonymous_var_nameX1175);

void GC_register_finalizer(void* anonymous_var_nameX1178, void (*anonymous_var_nameX1179)(void*,void*), void* anonymous_var_nameX1180, void (*anonymous_var_nameX1181)(void*,void*), void** anonymous_var_nameX1182);

void GC_debug_register_finalizer(void* anonymous_var_nameX1183, void (*anonymous_var_nameX1184)(void*,void*), void* anonymous_var_nameX1185, void (*anonymous_var_nameX1186)(void*,void*), void** anonymous_var_nameX1187);

void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1188, void (*anonymous_var_nameX1189)(void*,void*), void* anonymous_var_nameX1190, void (*anonymous_var_nameX1191)(void*,void*), void** anonymous_var_nameX1192);

void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1193, void (*anonymous_var_nameX1194)(void*,void*), void* anonymous_var_nameX1195, void (*anonymous_var_nameX1196)(void*,void*), void** anonymous_var_nameX1197);

void GC_register_finalizer_no_order(void* anonymous_var_nameX1198, void (*anonymous_var_nameX1199)(void*,void*), void* anonymous_var_nameX1200, void (*anonymous_var_nameX1201)(void*,void*), void** anonymous_var_nameX1202);

void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1203, void (*anonymous_var_nameX1204)(void*,void*), void* anonymous_var_nameX1205, void (*anonymous_var_nameX1206)(void*,void*), void** anonymous_var_nameX1207);

void GC_register_finalizer_unreachable(void* anonymous_var_nameX1208, void (*anonymous_var_nameX1209)(void*,void*), void* anonymous_var_nameX1210, void (*anonymous_var_nameX1211)(void*,void*), void** anonymous_var_nameX1212);

void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1213, void (*anonymous_var_nameX1214)(void*,void*), void* anonymous_var_nameX1215, void (*anonymous_var_nameX1216)(void*,void*), void** anonymous_var_nameX1217);

int GC_register_disappearing_link(void** anonymous_var_nameX1218);

int GC_general_register_disappearing_link(void** anonymous_var_nameX1219, const void* anonymous_var_nameX1220);

int GC_move_disappearing_link(void** anonymous_var_nameX1221, void** anonymous_var_nameX1222);

int GC_unregister_disappearing_link(void** anonymous_var_nameX1223);

int GC_register_long_link(void** anonymous_var_nameX1224, const void* anonymous_var_nameX1225);

int GC_move_long_link(void** anonymous_var_nameX1226, void** anonymous_var_nameX1227);

int GC_unregister_long_link(void** anonymous_var_nameX1228);

void GC_set_toggleref_func(enum anonymous_typeY14 (*anonymous_var_nameX1230)(void*));

enum anonymous_typeY14 (*GC_get_toggleref_func())(void*);

int GC_toggleref_add(void* anonymous_var_nameX1231, int anonymous_var_nameX1232);

void GC_set_await_finalize_proc(void (*anonymous_var_nameX1234)(void*));

void (*GC_get_await_finalize_proc())(void*);

int GC_should_invoke_finalizers();

int GC_invoke_finalizers();

void GC_noop1(unsigned long int anonymous_var_nameX1235);

void GC_set_warn_proc(void (*anonymous_var_nameX1238)(char*,unsigned long int));

void (*GC_get_warn_proc())(char*,unsigned long int);

void GC_ignore_warn_proc(char* anonymous_var_nameX1239, unsigned long int anonymous_var_nameX1240);

void GC_set_log_fd(int anonymous_var_nameX1241);

void GC_set_abort_func(void (*anonymous_var_nameX1243)(const char*));

void (*GC_get_abort_func())(const char*);

void GC_abort_on_oom();

void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1245)(void*), void* anonymous_var_nameX1246);

void* GC_call_with_stack_base(void* (*anonymous_var_nameX1249)(struct GC_stack_base*,void*), void* anonymous_var_nameX1250);

void GC_start_mark_threads();

void* GC_do_blocking(void* (*anonymous_var_nameX1251)(void*), void* anonymous_var_nameX1252);

void* GC_call_with_gc_active(void* (*anonymous_var_nameX1253)(void*), void* anonymous_var_nameX1254);

int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1255);

void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1256);

void GC_set_stackbottom(void* anonymous_var_nameX1257, const struct GC_stack_base* anonymous_var_nameX1258);

void* GC_same_obj(void* anonymous_var_nameX1259, void* anonymous_var_nameX1260);

void* GC_pre_incr(void** anonymous_var_nameX1261, long int anonymous_var_nameX1262);

void* GC_post_incr(void** anonymous_var_nameX1263, long int anonymous_var_nameX1264);

void* GC_is_visible(void* anonymous_var_nameX1265);

void* GC_is_valid_displacement(void* anonymous_var_nameX1266);

void GC_dump();

void GC_dump_named(const char* anonymous_var_nameX1267);

void GC_dump_regions();

void GC_dump_finalization();

void GC_ptr_store_and_dirty(void* anonymous_var_nameX1268, const void* anonymous_var_nameX1269);

void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1270, const void* anonymous_var_nameX1271);

void* GC_malloc_many(long int anonymous_var_nameX1292);

void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1296)(const char*,void*,long int));

void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1297);

int GC_get_force_unmap_on_gcollect();

void GC_win32_free_heap();

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
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
right_value1 = (void*)0;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1948, "smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang2.h", 1958, "smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang2.h", 1968, "smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang2.h", 1978, "smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang2.h", 1988, "smart_pointer$1long"))));
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value10;
char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    __result7__ = __result_obj__ = ((char*)(right_value10=xsprintf(msg,self)));
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result7__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value11;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result8__ = __result_obj__ = ((char*)(right_value11=xsprintf(msg,self)));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result8__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value12;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value12=xsprintf(msg,self)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
}
static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__;
void* right_value13;
int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    __result10__ = __result_obj__ = ((int*)(right_value13=wchar_tp_substring(str,head,tail)));
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value14;
struct list$1charph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result16__ = __result_obj__ = ((struct list$1charph*)(right_value14=charp_scan_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value15;
struct list$1charph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result17__ = __result_obj__ = ((struct list$1charph*)(right_value15=charp_scan_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value16;
struct list$1charph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
    __result18__ = __result_obj__ = ((struct list$1charph*)(right_value16=charp_split_block(self,reg,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value17;
struct list$1charph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
    __result19__ = __result_obj__ = ((struct list$1charph*)(right_value17=charp_split_block_count(self,reg,count,parent,block)));
    come_call_finalizer2(list$1charphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value18;
struct list$1charph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
    __result20__ = __result_obj__ = ((struct list$1charph*)(right_value18=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    come_call_finalizer2(list$1charphp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline char* string_strip(char* self){
void* __result_obj__;
void* right_value19;
char* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
    __result21__ = __result_obj__ = ((char*)(right_value19=charp_strip(self)));
    right_value19 = come_decrement_ref_count2(right_value19, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline char* string_printable(char* str){
void* __result_obj__;
void* right_value20;
char* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
    __result22__ = __result_obj__ = ((char*)(right_value20=string_printable(str)));
    right_value20 = come_decrement_ref_count2(right_value20, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline int* string_to_wstring(char* str){
void* __result_obj__;
void* right_value21;
int* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
    __result23__ = __result_obj__ = ((int*)(right_value21=charp_to_wstring(str)));
    right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline char* wstring_to_string(int* wstr){
void* __result_obj__;
void* right_value22;
char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
    __result24__ = __result_obj__ = ((char*)(right_value22=wchar_tp_to_string(wstr)));
    right_value22 = come_decrement_ref_count2(right_value22, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline int* int_to_wstring(int self){
void* __result_obj__;
void* right_value23;
void* right_value24;
int* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
    __result25__ = __result_obj__ = ((int*)(right_value24=string_to_wstring(((char*)(right_value23=xsprintf("%d",self))))));
    right_value23 = come_decrement_ref_count2(right_value23, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value24 = come_decrement_ref_count2(right_value24, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value25;
int* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
    __result27__ = __result_obj__ = ((int*)(right_value25=wchar_tp_delete(str,head,tail)));
    right_value25 = come_decrement_ref_count2(right_value25, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value26;
int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
    __result30__ = __result_obj__ = ((int*)(right_value26=wchar_tp_reverse(str)));
    right_value26 = come_decrement_ref_count2(right_value26, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline int* wstring_multiply(int* str, int n){
void* __result_obj__;
void* right_value27;
int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
    __result31__ = __result_obj__ = ((int*)(right_value27=wchar_tp_multiply(str,n)));
    right_value27 = come_decrement_ref_count2(right_value27, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result31__;
}
static inline int* wstring_printable(int* str){
void* __result_obj__;
void* right_value28;
int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
    __result32__ = __result_obj__ = ((int*)(right_value28=wchar_tp_printable(str)));
    right_value28 = come_decrement_ref_count2(right_value28, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value29;
char* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
    __result37__ = __result_obj__ = ((char*)(right_value29=charp_replace(self,index,c)));
    right_value29 = come_decrement_ref_count2(right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result37__;
}
static inline char* string_multiply(char* str, int n){
void* __result_obj__;
void* right_value30;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value30=charp_multiply(str,n)));
    right_value30 = come_decrement_ref_count2(right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
void* right_value31;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
    __result39__ = __result_obj__ = ((char*)(right_value31=charp_sub(self,reg,replace)));
    right_value31 = come_decrement_ref_count2(right_value31, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
void* right_value32;
char* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
    __result40__ = __result_obj__ = ((char*)(right_value32=charp_sub_count(self,reg,replace,count)));
    right_value32 = come_decrement_ref_count2(right_value32, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result40__;
}
static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__;
void* right_value33;
struct list$1charph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value33 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1charph*)(right_value33=charp_split_str(self,str)));
    come_call_finalizer2(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result41__;
}
static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value34;
struct list$1charph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1charph*)(right_value34=charp_scan(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value35;
struct list$1charph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
    __result43__ = __result_obj__ = ((struct list$1charph*)(right_value35=charp_split(self,reg)));
    come_call_finalizer2(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
void* right_value36;
struct list$1charph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value36 = (void*)0;
    __result45__ = __result_obj__ = ((struct list$1charph*)(right_value36=charp_split_maxsplit(self,reg,maxsplit)));
    come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
void* right_value37;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(right_value37=charp_sub_block(self,reg,parent,block)));
    right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}
static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value38;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
    __result49__ = __result_obj__ = ((char*)(right_value38=charp_sub_block_count(self,reg,count,parent,block)));
    right_value38 = come_decrement_ref_count2(right_value38, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_chomp(char* str){
void* __result_obj__;
void* right_value40;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value40=string_chomp(str)));
    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
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











static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_5;
_Bool _while_condtional1;
struct list_item$1charph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_5, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*));
        it_5=self->head;
        while(_while_condtional1=it_5!=((void*)0),        _while_condtional1) {
            prev_it_6=it_5;
            it_5=it_5->next;
            come_call_finalizer2(list_item$1charphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional5=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional5) {
                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}



































struct come_regex* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
const char* err_7;
int erro_ofs_8;
int options_9;
void* right_value41;
char* __dec_obj6;
_Bool _if_conditional6;
struct come_regex* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_8, 0, sizeof(int));
memset(&options_9, 0, sizeof(int));
right_value41 = (void*)0;
    options_9=2048|(ignore_case?1:0)|(multiline?2:0)|(extended?8:0)|(dotall?4:0)|(dollar_endonly?32:0)|(ungreedy?512:0);
    __dec_obj6=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(str))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value41 = come_decrement_ref_count2(right_value41, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_9;
    self->re=pcre_compile(str,options_9,&err_7,&erro_ofs_8,((void*)0));
    if(_if_conditional6=self->re==((void*)0),    _if_conditional6) {
        printf("regex error (%s)\n",str);
        stackframe();
        exit(1);
    }
    __result52__ = __result_obj__ = self;
    come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer2(come_regex_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

void come_regex_finalize(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional7;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional7=reg&&reg->str,    _if_conditional7) {
        reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional8=reg&&reg->re,    _if_conditional8) {
        free(reg->re);
    }
}

struct come_regex* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value42;
void* right_value43;
struct come_regex* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value43 = (void*)0;
    __result53__ = __result_obj__ = ((struct come_regex*)(right_value43=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value42=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 65, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result53__;
}

struct come_regex* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__;
void* right_value44;
void* right_value45;
struct come_regex* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
right_value45 = (void*)0;
    __result54__ = __result_obj__ = ((struct come_regex*)(right_value45=come_regex_initialize((struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value44=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 70, "come_regex")))),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_call_finalizer2(come_regex_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(come_regex_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result54__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__;
_Bool _if_conditional9;
struct come_regex* __result55__;
void* right_value46;
struct come_regex* result_10;
void* right_value47;
char* __dec_obj7;
const char* err_11;
int erro_ofs_12;
_Bool _if_conditional10;
struct come_regex* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
memset(&result_10, 0, sizeof(struct come_regex*));
right_value47 = (void*)0;
memset(&erro_ofs_12, 0, sizeof(int));
    if(_if_conditional9=reg==((void*)0),    _if_conditional9) {
        __result55__ = __result_obj__ = ((void*)0);
        return __result55__;
    }
    result_10=(struct come_regex*)come_increment_ref_count(((struct come_regex*)(right_value46=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang2-str.c", 80, "come_regex"))));
    come_call_finalizer2(come_regex_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj7=result_10->str;
    result_10->str=(char*)come_increment_ref_count(((char*)(right_value47=string_clone(reg->str))));
    __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_10->ignore_case=reg->ignore_case;
    result_10->multiline=reg->multiline;
    result_10->global=reg->global;
    result_10->extended=reg->extended;
    result_10->dotall=reg->dotall;
    result_10->anchored=reg->anchored;
    result_10->dollar_endonly=reg->dollar_endonly;
    result_10->ungreedy=reg->ungreedy;
    result_10->options=reg->options;
    result_10->re=pcre_compile(result_10->str,result_10->options,&err_11,&erro_ofs_12,((void*)0));
    if(_if_conditional10=result_10->re==((void*)0),    _if_conditional10) {
        printf("regex compile error(%s)\n",result_10->str);
        stackframe();
        exit(1);
    }
    __result56__ = __result_obj__ = result_10;
    come_call_finalizer2(come_regex_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result56__;
    come_call_finalizer2(come_regex_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* come_regex_to_string(struct come_regex* regex){
void* __result_obj__;
void* right_value48;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value48 = (void*)0;
    __result57__ = __result_obj__ = ((char*)(right_value48=__builtin_string(regex->str)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}

char* string_lower_case(char* str){
void* __result_obj__;
void* right_value49;
char* result_13;
int i_14;
_Bool _if_conditional11;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&result_13, 0, sizeof(char*));
memset(&i_14, 0, sizeof(int));
    result_13=(char*)come_increment_ref_count(((char*)(right_value49=__builtin_string(str))));
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_14=0;    i_14<strlen(str);    i_14++    ){
        if(_if_conditional11=str[i_14]>=65&&str[i_14]<=90,        _if_conditional11) {
            result_13[i_14]=str[i_14]-65+97;
        }
    }
    __result58__ = __result_obj__ = result_13;
    result_13 = come_decrement_ref_count2(result_13, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result58__;
    result_13 = come_decrement_ref_count2(result_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_upper_case(char* str){
void* __result_obj__;
void* right_value50;
char* result_15;
int i_16;
_Bool _if_conditional12;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
memset(&result_15, 0, sizeof(char*));
memset(&i_16, 0, sizeof(int));
    result_15=(char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(str))));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_16=0;    i_16<strlen(str);    i_16++    ){
        if(_if_conditional12=str[i_16]>=97&&str[i_16]<=122,        _if_conditional12) {
            result_15[i_16]=str[i_16]-97+65;
        }
    }
    __result59__ = __result_obj__ = result_15;
    result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result59__;
    result_15 = come_decrement_ref_count2(result_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional13;
void* right_value51;
int* __result60__;
int len_17;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
void* right_value52;
int* __result61__;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value53;
int* __result62__;
_Bool _if_conditional20;
void* right_value54;
int* __result63__;
void* right_value55;
int* result_18;
int* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
memset(&len_17, 0, sizeof(int));
right_value52 = (void*)0;
right_value53 = (void*)0;
right_value54 = (void*)0;
right_value55 = (void*)0;
memset(&result_18, 0, sizeof(int*));
    if(_if_conditional13=str==((void*)0),    _if_conditional13) {
        __result60__ = __result_obj__ = ((int*)(right_value51=__builtin_wstring("")));
        right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result60__;
    }
    len_17=wcslen(str);
    if(_if_conditional14=head<0,    _if_conditional14) {
        head+=len_17;
    }
    if(_if_conditional15=tail<0,    _if_conditional15) {
        tail+=len_17+1;
    }
    if(_if_conditional16=head>tail,    _if_conditional16) {
        __result61__ = __result_obj__ = ((int*)(right_value52=__builtin_wstring("")));
        right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result61__;
    }
    if(_if_conditional17=head<0,    _if_conditional17) {
        head=0;
    }
    if(_if_conditional18=tail>=len_17,    _if_conditional18) {
        tail=len_17;
    }
    if(_if_conditional19=head==tail,    _if_conditional19) {
        __result62__ = __result_obj__ = ((int*)(right_value53=__builtin_wstring("")));
        right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result62__;
    }
    if(_if_conditional20=tail-head+1<1,    _if_conditional20) {
        __result63__ = __result_obj__ = ((int*)(right_value54=__builtin_wstring("")));
        right_value54 = come_decrement_ref_count2(right_value54, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result63__;
    }
    result_18=(int*)come_increment_ref_count(((int*)(right_value55=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang2-str.c", 175, "int"))));
    right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_18,str+head,sizeof(int)*(tail-head));
    result_18[tail-head]=0;
    __result64__ = __result_obj__ = result_18;
    result_18 = come_decrement_ref_count2(result_18, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result64__;
    result_18 = come_decrement_ref_count2(result_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* __builtin_wstring(char* str){
void* __result_obj__;
_Bool _if_conditional21;
int* __result65__;
int len_19;
void* right_value56;
int* wstr_20;
int ret_21;
_Bool _if_conditional22;
int* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_19, 0, sizeof(int));
right_value56 = (void*)0;
memset(&wstr_20, 0, sizeof(int*));
memset(&ret_21, 0, sizeof(int));
    if(_if_conditional21=str==((void*)0),    _if_conditional21) {
        __result65__ = __result_obj__ = ((void*)0);
        return __result65__;
    }
    len_19=strlen(str);
    wstr_20=(int*)come_increment_ref_count(((int*)(right_value56=(int*)come_calloc(1, sizeof(int)*(1*(len_19+1)), "libcomelang2-str.c", 190, "int"))));
    right_value56 = come_decrement_ref_count2(right_value56, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ret_21=mbstowcs(wstr_20,str,len_19+1);
    wstr_20[ret_21]=0;
    if(_if_conditional22=ret_21<0,    _if_conditional22) {
        wstr_20[0]=0;
    }
    __result66__ = __result_obj__ = wstr_20;
    wstr_20 = come_decrement_ref_count2(wstr_20, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
    wstr_20 = come_decrement_ref_count2(wstr_20, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int n_22;
int len_23;
int i_24;
int len2_25;
int j_26;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
int __result67__;
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&n_22, 0, sizeof(int));
memset(&len_23, 0, sizeof(int));
memset(&i_24, 0, sizeof(int));
memset(&len2_25, 0, sizeof(int));
memset(&j_26, 0, sizeof(int));
    n_22=0;
    len_23=strlen(str);
    for(    i_24=0;    i_24<len_23;    i_24++    ){
        len2_25=strlen(search_str);
        for(        j_26=0;        j_26<len2_25;        j_26++        ){
            if(_if_conditional23=str[i_24+j_26]!=search_str[j_26],            _if_conditional23) {
                break;
            }
        }
        if(_if_conditional24=j_26==len2_25,        _if_conditional24) {
            n_22++;
            if(_if_conditional25=n_22==count,            _if_conditional25) {
                __result67__ = i_24;
                return __result67__;
            }
        }
    }
    __result68__ = default_value;
    return __result68__;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
int ovec_max_27;
int result_31;
int offset_32;
const char* err_33;
int erro_ofs_34;
int options_35;
char* str_36;
struct real_pcre8_or_16* re_37;
int n_38;
_Bool _while_condtional2;
int options_39;
int len_40;
int regex_result_41;
int i_42;
int i_43;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_27, 0, sizeof(int));
memset(&result_31, 0, sizeof(int));
memset(&offset_32, 0, sizeof(int));
memset(&erro_ofs_34, 0, sizeof(int));
memset(&options_35, 0, sizeof(int));
memset(&str_36, 0, sizeof(char*));
memset(&re_37, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_38, 0, sizeof(int));
memset(&options_39, 0, sizeof(int));
memset(&len_40, 0, sizeof(int));
memset(&regex_result_41, 0, sizeof(int));
memset(&i_42, 0, sizeof(int));
memset(&i_43, 0, sizeof(int));
    ovec_max_27=16;
    int start_28[ovec_max_27];
    memset(&start_28, 0, sizeof(int)    *(ovec_max_27)    );
    int end_29[ovec_max_27];
    memset(&end_29, 0, sizeof(int)    *(ovec_max_27)    );
    int ovec_value_30[ovec_max_27*3];
    memset(&ovec_value_30, 0, sizeof(int)    *(ovec_max_27*3)    );
    result_31=default_value;
    offset_32=0;
    options_35=reg->options;
    str_36=reg->str;
    re_37=reg->re;
    n_38=0;
    while(_while_condtional2=(_Bool)1,    _while_condtional2) {
        options_39=2097152;
        len_40=strlen(self);
        regex_result_41=pcre_exec(re_37,(struct pcre_extra*)0,self,len_40,offset_32,options_39,ovec_value_30,ovec_max_27*3);
        for(        i_42=0;        i_42<ovec_max_27;        i_42++        ){
            start_28[i_42]=ovec_value_30[i_42*2];
        }
        for(        i_43=0;        i_43<ovec_max_27;        i_43++        ){
            end_29[i_43]=ovec_value_30[i_43*2+1];
        }
        if(_if_conditional26=regex_result_41>0,        _if_conditional26) {
            n_38++;
            if(_if_conditional27=offset_32==end_29[0],            _if_conditional27) {
                offset_32++;
            }
            else {
                offset_32=end_29[0];
            }
            if(_if_conditional28=n_38==count,            _if_conditional28) {
                result_31=start_28[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result69__ = result_31;
    return __result69__;
}

int charp_rindex(char* str, char* search_str, int default_value){
void* __result_obj__;
int len_44;
char* p_45;
_Bool _while_condtional3;
_Bool _if_conditional29;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_44, 0, sizeof(int));
memset(&p_45, 0, sizeof(char*));
    len_44=strlen(search_str);
    p_45=str+strlen(str)-len_44;
    while(_while_condtional3=p_45>=str,    _while_condtional3) {
        if(_if_conditional29=strncmp(p_45,search_str,len_44)==0,        _if_conditional29) {
            __result70__ = p_45-str;
            return __result70__;
        }
        p_45--;
    }
    __result71__ = default_value;
    return __result71__;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
const char* err_46;
int erro_ofs_47;
int options_48;
char* str_49;
struct real_pcre8_or_16* re_50;
void* right_value57;
char* self2_51;
int ovec_max_52;
int result_56;
int offset_57;
_Bool _while_condtional4;
int options_58;
int len_59;
int regex_result_60;
int i_61;
int i_62;
_Bool _if_conditional30;
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_47, 0, sizeof(int));
memset(&options_48, 0, sizeof(int));
memset(&str_49, 0, sizeof(char*));
memset(&re_50, 0, sizeof(struct real_pcre8_or_16*));
right_value57 = (void*)0;
memset(&self2_51, 0, sizeof(char*));
memset(&ovec_max_52, 0, sizeof(int));
memset(&result_56, 0, sizeof(int));
memset(&offset_57, 0, sizeof(int));
memset(&options_58, 0, sizeof(int));
memset(&len_59, 0, sizeof(int));
memset(&regex_result_60, 0, sizeof(int));
memset(&i_61, 0, sizeof(int));
memset(&i_62, 0, sizeof(int));
    options_48=reg->options;
    str_49=reg->str;
    re_50=reg->re;
    self2_51=(char*)come_increment_ref_count(((char*)(right_value57=charp_reverse(self))));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_52=16;
    int start_53[ovec_max_52];
    memset(&start_53, 0, sizeof(int)    *(ovec_max_52)    );
    int end_54[ovec_max_52];
    memset(&end_54, 0, sizeof(int)    *(ovec_max_52)    );
    int ovec_value_55[ovec_max_52*3];
    memset(&ovec_value_55, 0, sizeof(int)    *(ovec_max_52*3)    );
    result_56=default_value;
    offset_57=0;
    while(_while_condtional4=(_Bool)1,    _while_condtional4) {
        options_58=2097152;
        len_59=strlen(self2_51);
        regex_result_60=pcre_exec(re_50,(struct pcre_extra*)0,self2_51,len_59,offset_57,options_58,ovec_value_55,ovec_max_52*3);
        for(        i_61=0;        i_61<ovec_max_52;        i_61++        ){
            start_53[i_61]=ovec_value_55[i_61*2];
        }
        for(        i_62=0;        i_62<ovec_max_52;        i_62++        ){
            end_54[i_62]=ovec_value_55[i_62*2+1];
        }
        if(_if_conditional30=regex_result_60==1||regex_result_60>0,        _if_conditional30) {
            result_56=strlen(self)-1-start_53[0];
            break;
        }
        {
            break;
        }
    }
    __result72__ = result_56;
    self2_51 = come_decrement_ref_count2(self2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result72__;
    self2_51 = come_decrement_ref_count2(self2_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
void* __result_obj__;
int len_63;
char* p_64;
int n_65;
_Bool _while_condtional5;
_Bool _if_conditional31;
_Bool _if_conditional32;
int __result73__;
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_63, 0, sizeof(int));
memset(&p_64, 0, sizeof(char*));
memset(&n_65, 0, sizeof(int));
    len_63=strlen(search_str);
    p_64=str+strlen(str)-len_63;
    n_65=0;
    while(_while_condtional5=p_64>=str,    _while_condtional5) {
        if(_if_conditional31=strncmp(p_64,search_str,len_63)==0,        _if_conditional31) {
            n_65++;
            if(_if_conditional32=n_65==count,            _if_conditional32) {
                __result73__ = p_64-str;
                return __result73__;
            }
        }
        p_64--;
    }
    __result74__ = default_value;
    return __result74__;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value58;
void* right_value59;
struct list$1charph* result_66;
int offset_67;
int ovec_max_68;
const char* err_72;
int erro_ofs_73;
int options_74;
char* str_75;
struct real_pcre8_or_16* re_76;
_Bool _while_condtional6;
int options_77;
int len_78;
int regex_result_79;
int i_80;
int i_81;
_Bool _if_conditional33;
void* right_value60;
char* str_82;
void* right_value61;
void* right_value62;
struct list$1charph* group_strings_83;
void* right_value63;
char* str2_84;
_Bool _if_conditional34;
struct list$1charph* __result76__;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value67;
char* str_88;
void* right_value68;
void* right_value69;
struct list$1charph* group_strings_89;
int i_90;
void* right_value70;
char* match_string_91;
void* right_value71;
char* str2_92;
_Bool _if_conditional39;
struct list$1charph* __result78__;
_Bool _if_conditional40;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&result_66, 0, sizeof(struct list$1charph*));
memset(&offset_67, 0, sizeof(int));
memset(&ovec_max_68, 0, sizeof(int));
memset(&erro_ofs_73, 0, sizeof(int));
memset(&options_74, 0, sizeof(int));
memset(&str_75, 0, sizeof(char*));
memset(&re_76, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_77, 0, sizeof(int));
memset(&len_78, 0, sizeof(int));
memset(&regex_result_79, 0, sizeof(int));
memset(&i_80, 0, sizeof(int));
memset(&i_81, 0, sizeof(int));
right_value60 = (void*)0;
memset(&str_82, 0, sizeof(char*));
right_value61 = (void*)0;
right_value62 = (void*)0;
memset(&group_strings_83, 0, sizeof(struct list$1charph*));
right_value63 = (void*)0;
memset(&str2_84, 0, sizeof(char*));
right_value67 = (void*)0;
memset(&str_88, 0, sizeof(char*));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&group_strings_89, 0, sizeof(struct list$1charph*));
memset(&i_90, 0, sizeof(int));
right_value70 = (void*)0;
memset(&match_string_91, 0, sizeof(char*));
right_value71 = (void*)0;
memset(&str2_92, 0, sizeof(char*));
    result_66=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value59=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value58=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 376, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_67=0;
    ovec_max_68=16;
    int start_69[ovec_max_68];
    memset(&start_69, 0, sizeof(int)    *(ovec_max_68)    );
    int end_70[ovec_max_68];
    memset(&end_70, 0, sizeof(int)    *(ovec_max_68)    );
    int ovec_value_71[ovec_max_68*3];
    memset(&ovec_value_71, 0, sizeof(int)    *(ovec_max_68*3)    );
    options_74=reg->options;
    str_75=reg->str;
    re_76=reg->re;
    while(_while_condtional6=(_Bool)1,    _while_condtional6) {
        options_77=2097152;
        len_78=strlen(self);
        regex_result_79=pcre_exec(re_76,(struct pcre_extra*)0,self,len_78,offset_67,options_77,ovec_value_71,ovec_max_68*3);
        for(        i_80=0;        i_80<ovec_max_68;        i_80++        ){
            start_69[i_80]=ovec_value_71[i_80*2];
        }
        for(        i_81=0;        i_81<ovec_max_68;        i_81++        ){
            end_70[i_81]=ovec_value_71[i_81*2+1];
        }
        if(_if_conditional33=regex_result_79==1,        _if_conditional33) {
            str_82=(char*)come_increment_ref_count(((char*)(right_value60=charp_substring(self,start_69[0],end_70[0]))));
            right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_83=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value62=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value61=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 410, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_84=(char*)come_increment_ref_count(((char*)(right_value63=block(parent,str_82,group_strings_83))));
            right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional34=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional34) {
                __result76__ = __result_obj__ = result_66;
                str_82 = come_decrement_ref_count2(str_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_84 = come_decrement_ref_count2(str2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result76__;
            }
            list$1charph_push_back(result_66,(char*)come_increment_ref_count(str2_84));
            if(_if_conditional37=offset_67==end_70[0],            _if_conditional37) {
                offset_67++;
            }
            else {
                offset_67=end_70[0];
            }
            str_82 = come_decrement_ref_count2(str_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_84 = come_decrement_ref_count2(str2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional38=regex_result_79>1,            _if_conditional38) {
                str_88=(char*)come_increment_ref_count(((char*)(right_value67=charp_substring(self,start_69[0],end_70[0]))));
                right_value67 = come_decrement_ref_count2(right_value67, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_89=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 431, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_90=1;                i_90<regex_result_79;                i_90++                ){
                    match_string_91=(char*)come_increment_ref_count(((char*)(right_value70=charp_substring(self,start_69[i_90],end_70[i_90]))));
                    right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_89,(char*)come_increment_ref_count(match_string_91));
                    match_string_91 = come_decrement_ref_count2(match_string_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_92=(char*)come_increment_ref_count(((char*)(right_value71=block(parent,str_88,group_strings_89))));
                right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional39=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional39) {
                    __result78__ = __result_obj__ = result_66;
                    str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_92 = come_decrement_ref_count2(str2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result78__;
                }
                list$1charph_push_back(result_66,(char*)come_increment_ref_count(str2_92));
                if(_if_conditional40=offset_67==end_70[0],                _if_conditional40) {
                    offset_67++;
                }
                else {
                    offset_67=end_70[0];
                }
                str_88 = come_decrement_ref_count2(str_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_92 = come_decrement_ref_count2(str2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result79__ = __result_obj__ = result_66;
    come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(list$1charphp_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result75__ = __result_obj__ = self;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value64;
struct list_item$1charph* litem_85;
char* __dec_obj8;
_Bool _if_conditional36;
void* right_value65;
struct list_item$1charph* litem_86;
char* __dec_obj9;
void* right_value66;
struct list_item$1charph* litem_87;
char* __dec_obj10;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value64 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1charph*));
right_value65 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
right_value66 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional35=self->len==0,                _if_conditional35) {
                    litem_85=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value64=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 226, "list_item$1charph"))));
                    come_call_finalizer2(list_item$1charphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_85->prev=((void*)0);
                    litem_85->next=((void*)0);
                    __dec_obj8=litem_85->item;
                    litem_85->item=(char*)come_increment_ref_count(item);
                    __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_85;
                    self->head=litem_85;
                }
                else {
                    if(_if_conditional36=self->len==1,                    _if_conditional36) {
                        litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value65=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 236, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_86->prev=self->head;
                        litem_86->next=((void*)0);
                        __dec_obj9=litem_86->item;
                        litem_86->item=(char*)come_increment_ref_count(item);
                        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_86;
                        self->head->next=litem_86;
                    }
                    else {
                        litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value66=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang2.h", 246, "list_item$1charph"))));
                        come_call_finalizer2(list_item$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        litem_87->prev=self->tail;
                        litem_87->next=((void*)0);
                        __dec_obj10=litem_87->item;
                        litem_87->item=(char*)come_increment_ref_count(item);
                        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_87;
                        self->tail=litem_87;
                    }
                }
                self->len++;
                __result77__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result77__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
void* right_value72;
void* right_value73;
struct list$1charph* result_93;
int offset_94;
int ovec_max_95;
const char* err_99;
int erro_ofs_100;
int options_101;
char* str_102;
struct real_pcre8_or_16* re_103;
int n_104;
_Bool _while_condtional7;
int options_105;
int len_106;
int regex_result_107;
int i_108;
int i_109;
_Bool _if_conditional41;
void* right_value74;
char* str_110;
void* right_value75;
void* right_value76;
struct list$1charph* group_strings_111;
void* right_value77;
char* str2_112;
_Bool _if_conditional42;
struct list$1charph* __result80__;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value78;
char* str_113;
void* right_value79;
void* right_value80;
struct list$1charph* group_strings_114;
int i_115;
void* right_value81;
char* match_string_116;
void* right_value82;
char* str2_117;
_Bool _if_conditional46;
struct list$1charph* __result81__;
_Bool _if_conditional47;
_Bool _if_conditional48;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1charph*));
memset(&offset_94, 0, sizeof(int));
memset(&ovec_max_95, 0, sizeof(int));
memset(&erro_ofs_100, 0, sizeof(int));
memset(&options_101, 0, sizeof(int));
memset(&str_102, 0, sizeof(char*));
memset(&re_103, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_104, 0, sizeof(int));
memset(&options_105, 0, sizeof(int));
memset(&len_106, 0, sizeof(int));
memset(&regex_result_107, 0, sizeof(int));
memset(&i_108, 0, sizeof(int));
memset(&i_109, 0, sizeof(int));
right_value74 = (void*)0;
memset(&str_110, 0, sizeof(char*));
right_value75 = (void*)0;
right_value76 = (void*)0;
memset(&group_strings_111, 0, sizeof(struct list$1charph*));
right_value77 = (void*)0;
memset(&str2_112, 0, sizeof(char*));
right_value78 = (void*)0;
memset(&str_113, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&group_strings_114, 0, sizeof(struct list$1charph*));
memset(&i_115, 0, sizeof(int));
right_value81 = (void*)0;
memset(&match_string_116, 0, sizeof(char*));
right_value82 = (void*)0;
memset(&str2_117, 0, sizeof(char*));
    result_93=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 465, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_94=0;
    ovec_max_95=16;
    int start_96[ovec_max_95];
    memset(&start_96, 0, sizeof(int)    *(ovec_max_95)    );
    int end_97[ovec_max_95];
    memset(&end_97, 0, sizeof(int)    *(ovec_max_95)    );
    int ovec_value_98[ovec_max_95*3];
    memset(&ovec_value_98, 0, sizeof(int)    *(ovec_max_95*3)    );
    options_101=reg->options;
    str_102=reg->str;
    re_103=reg->re;
    n_104=0;
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        options_105=2097152;
        len_106=strlen(self);
        regex_result_107=pcre_exec(re_103,(struct pcre_extra*)0,self,len_106,offset_94,options_105,ovec_value_98,ovec_max_95*3);
        for(        i_108=0;        i_108<ovec_max_95;        i_108++        ){
            start_96[i_108]=ovec_value_98[i_108*2];
        }
        for(        i_109=0;        i_109<ovec_max_95;        i_109++        ){
            end_97[i_109]=ovec_value_98[i_109*2+1];
        }
        if(_if_conditional41=regex_result_107==1,        _if_conditional41) {
            str_110=(char*)come_increment_ref_count(((char*)(right_value74=charp_substring(self,start_96[0],end_97[0]))));
            right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            group_strings_111=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value76=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value75=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 501, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_112=(char*)come_increment_ref_count(((char*)(right_value77=block(parent,str_110,group_strings_111))));
            right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional42=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional42) {
                __result80__ = __result_obj__ = result_93;
                str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result80__;
            }
            list$1charph_push_back(result_93,(char*)come_increment_ref_count(str2_112));
            if(_if_conditional43=offset_94==end_97[0],            _if_conditional43) {
                offset_94++;
            }
            else {
                offset_94=end_97[0];
            }
            n_104++;
            if(_if_conditional44=n_104==count,            _if_conditional44) {
                str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            str_110 = come_decrement_ref_count2(str_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_112 = come_decrement_ref_count2(str2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional45=regex_result_107>1,            _if_conditional45) {
                str_113=(char*)come_increment_ref_count(((char*)(right_value78=charp_substring(self,start_96[0],end_97[0]))));
                right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                group_strings_114=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value80=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 527, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_115=1;                i_115<regex_result_107;                i_115++                ){
                    match_string_116=(char*)come_increment_ref_count(((char*)(right_value81=charp_substring(self,start_96[i_115],end_97[i_115]))));
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_114,(char*)come_increment_ref_count(match_string_116));
                    match_string_116 = come_decrement_ref_count2(match_string_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_117=(char*)come_increment_ref_count(((char*)(right_value82=block(parent,str_113,group_strings_114))));
                right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional46=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional46) {
                    __result81__ = __result_obj__ = result_93;
                    str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
                list$1charph_push_back(result_93,(char*)come_increment_ref_count(str2_117));
                if(_if_conditional47=offset_94==end_97[0],                _if_conditional47) {
                    offset_94++;
                }
                else {
                    offset_94=end_97[0];
                }
                n_104++;
                if(_if_conditional48=n_104==count,                _if_conditional48) {
                    str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                str_113 = come_decrement_ref_count2(str_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_117 = come_decrement_ref_count2(str2_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result82__ = __result_obj__ = result_93;
    come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer2(list$1charphp_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_118;
int erro_ofs_119;
int options_120;
char* str_121;
struct real_pcre8_or_16* re_122;
void* right_value83;
void* right_value84;
struct list$1charph* result_123;
int offset_124;
int ovec_max_125;
_Bool _while_condtional8;
int options_129;
int len_130;
int regex_result_131;
int i_132;
int i_133;
_Bool _if_conditional49;
void* right_value85;
char* str_134;
void* right_value86;
void* right_value87;
struct list$1charph* match_strings_135;
void* right_value88;
char* str2_136;
_Bool _if_conditional50;
struct list$1charph* __result83__;
_Bool _if_conditional51;
_Bool _if_conditional52;
void* right_value89;
char* str_137;
_Bool _if_conditional53;
void* right_value90;
void* right_value91;
struct list$1charph* match_strings_138;
int i_139;
void* right_value92;
char* match_str_140;
void* right_value93;
char* str2_141;
_Bool _if_conditional54;
struct list$1charph* __result84__;
_Bool _if_conditional55;
void* right_value94;
char* str_142;
void* right_value95;
void* right_value96;
struct list$1charph* match_strings_143;
void* right_value97;
char* str2_144;
_Bool _if_conditional56;
struct list$1charph* __result85__;
struct list$1charph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_119, 0, sizeof(int));
memset(&options_120, 0, sizeof(int));
memset(&str_121, 0, sizeof(char*));
memset(&re_122, 0, sizeof(struct real_pcre8_or_16*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_123, 0, sizeof(struct list$1charph*));
memset(&offset_124, 0, sizeof(int));
memset(&ovec_max_125, 0, sizeof(int));
memset(&options_129, 0, sizeof(int));
memset(&len_130, 0, sizeof(int));
memset(&regex_result_131, 0, sizeof(int));
memset(&i_132, 0, sizeof(int));
memset(&i_133, 0, sizeof(int));
right_value85 = (void*)0;
memset(&str_134, 0, sizeof(char*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&match_strings_135, 0, sizeof(struct list$1charph*));
right_value88 = (void*)0;
memset(&str2_136, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&str_137, 0, sizeof(char*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&match_strings_138, 0, sizeof(struct list$1charph*));
memset(&i_139, 0, sizeof(int));
right_value92 = (void*)0;
memset(&match_str_140, 0, sizeof(char*));
right_value93 = (void*)0;
memset(&str2_141, 0, sizeof(char*));
right_value94 = (void*)0;
memset(&str_142, 0, sizeof(char*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&match_strings_143, 0, sizeof(struct list$1charph*));
right_value97 = (void*)0;
memset(&str2_144, 0, sizeof(char*));
    options_120=reg->options;
    str_121=reg->str;
    re_122=reg->re;
    result_123=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value84=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value83=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 573, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_124=0;
    ovec_max_125=16;
    int start_126[ovec_max_125];
    memset(&start_126, 0, sizeof(int)    *(ovec_max_125)    );
    int end_127[ovec_max_125];
    memset(&end_127, 0, sizeof(int)    *(ovec_max_125)    );
    int ovec_value_128[ovec_max_125*3];
    memset(&ovec_value_128, 0, sizeof(int)    *(ovec_max_125*3)    );
    while(_while_condtional8=(_Bool)1,    _while_condtional8) {
        options_129=2097152;
        len_130=strlen(self);
        regex_result_131=pcre_exec(re_122,(struct pcre_extra*)0,self,len_130,offset_124,options_129,ovec_value_128,ovec_max_125*3);
        for(        i_132=0;        i_132<ovec_max_125;        i_132++        ){
            start_126[i_132]=ovec_value_128[i_132*2];
        }
        for(        i_133=0;        i_133<ovec_max_125;        i_133++        ){
            end_127[i_133]=ovec_value_128[i_133*2+1];
        }
        if(_if_conditional49=regex_result_131==1,        _if_conditional49) {
            str_134=(char*)come_increment_ref_count(((char*)(right_value85=charp_substring(self,offset_124,start_126[0]))));
            right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_135=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value87=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value86=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 600, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_136=(char*)come_increment_ref_count(((char*)(right_value88=block(parent,str_134,match_strings_135))));
            right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional50=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional50) {
                __result83__ = __result_obj__ = result_123;
                str_134 = come_decrement_ref_count2(str_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_136 = come_decrement_ref_count2(str2_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result83__;
            }
            list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_136));
            if(_if_conditional51=offset_124==end_127[0],            _if_conditional51) {
                offset_124++;
            }
            else {
                offset_124=end_127[0];
            }
            str_134 = come_decrement_ref_count2(str_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_136 = come_decrement_ref_count2(str2_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional52=regex_result_131>1,            _if_conditional52) {
                str_137=(char*)come_increment_ref_count(((char*)(right_value89=charp_substring(self,offset_124,start_126[0]))));
                right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional53=offset_124==end_127[0],                _if_conditional53) {
                    offset_124++;
                }
                else {
                    offset_124=end_127[0];
                }
                match_strings_138=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value91=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value90=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 627, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_139=1;                i_139<regex_result_131;                i_139++                ){
                    match_str_140=(char*)come_increment_ref_count(((char*)(right_value92=charp_substring(self,start_126[i_139],end_127[i_139]))));
                    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_138,(char*)come_increment_ref_count(match_str_140));
                    match_str_140 = come_decrement_ref_count2(match_str_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_141=(char*)come_increment_ref_count(((char*)(right_value93=block(parent,str_137,match_strings_138))));
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional54=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional54) {
                    __result84__ = __result_obj__ = result_123;
                    str_137 = come_decrement_ref_count2(str_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_141 = come_decrement_ref_count2(str2_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result84__;
                }
                list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_141));
                str_137 = come_decrement_ref_count2(str_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_141 = come_decrement_ref_count2(str2_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional55=offset_124<charp_length(self),    _if_conditional55) {
        str_142=(char*)come_increment_ref_count(((char*)(right_value94=charp_substring(self,offset_124,-1))));
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        match_strings_143=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value96=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 649, "list$1charph"))))))));
        come_call_finalizer2(list$1charphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(list$1charphp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        str2_144=(char*)come_increment_ref_count(((char*)(right_value97=block(parent,str_142,match_strings_143))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional56=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,        _if_conditional56) {
            __result85__ = __result_obj__ = result_123;
            str_142 = come_decrement_ref_count2(str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_144 = come_decrement_ref_count2(str2_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result85__;
        }
        list$1charph_push_back(result_123,(char*)come_increment_ref_count(str2_144));
        str_142 = come_decrement_ref_count2(str_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(list$1charphp_finalize,match_strings_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        str2_144 = come_decrement_ref_count2(str2_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result86__ = __result_obj__ = result_123;
    come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(list$1charphp_finalize,result_123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
const char* err_145;
int erro_ofs_146;
int options_147;
char* str_148;
struct real_pcre8_or_16* re_149;
void* right_value98;
void* right_value99;
struct list$1charph* result_150;
int offset_151;
int ovec_max_152;
int n_156;
_Bool _while_condtional9;
int options_157;
int len_158;
int regex_result_159;
int i_160;
int i_161;
_Bool _if_conditional57;
void* right_value100;
char* str_162;
void* right_value101;
void* right_value102;
struct list$1charph* match_strings_163;
void* right_value103;
char* str2_164;
_Bool _if_conditional58;
struct list$1charph* __result87__;
_Bool _if_conditional59;
_Bool _if_conditional60;
void* right_value104;
char* str_165;
_Bool _if_conditional61;
void* right_value105;
void* right_value106;
struct list$1charph* match_strings_166;
int i_167;
void* right_value107;
char* match_str_168;
void* right_value108;
char* str2_169;
_Bool _if_conditional62;
struct list$1charph* __result88__;
_Bool _if_conditional63;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_146, 0, sizeof(int));
memset(&options_147, 0, sizeof(int));
memset(&str_148, 0, sizeof(char*));
memset(&re_149, 0, sizeof(struct real_pcre8_or_16*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&result_150, 0, sizeof(struct list$1charph*));
memset(&offset_151, 0, sizeof(int));
memset(&ovec_max_152, 0, sizeof(int));
memset(&n_156, 0, sizeof(int));
memset(&options_157, 0, sizeof(int));
memset(&len_158, 0, sizeof(int));
memset(&regex_result_159, 0, sizeof(int));
memset(&i_160, 0, sizeof(int));
memset(&i_161, 0, sizeof(int));
right_value100 = (void*)0;
memset(&str_162, 0, sizeof(char*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&match_strings_163, 0, sizeof(struct list$1charph*));
right_value103 = (void*)0;
memset(&str2_164, 0, sizeof(char*));
right_value104 = (void*)0;
memset(&str_165, 0, sizeof(char*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&match_strings_166, 0, sizeof(struct list$1charph*));
memset(&i_167, 0, sizeof(int));
right_value107 = (void*)0;
memset(&match_str_168, 0, sizeof(char*));
right_value108 = (void*)0;
memset(&str2_169, 0, sizeof(char*));
    options_147=reg->options;
    str_148=reg->str;
    re_149=reg->re;
    result_150=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value99=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value98=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 671, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_151=0;
    ovec_max_152=16;
    int start_153[ovec_max_152];
    memset(&start_153, 0, sizeof(int)    *(ovec_max_152)    );
    int end_154[ovec_max_152];
    memset(&end_154, 0, sizeof(int)    *(ovec_max_152)    );
    int ovec_value_155[ovec_max_152*3];
    memset(&ovec_value_155, 0, sizeof(int)    *(ovec_max_152*3)    );
    n_156=0;
    while(_while_condtional9=(_Bool)1,    _while_condtional9) {
        options_157=2097152;
        len_158=strlen(self);
        regex_result_159=pcre_exec(re_149,(struct pcre_extra*)0,self,len_158,offset_151,options_157,ovec_value_155,ovec_max_152*3);
        for(        i_160=0;        i_160<ovec_max_152;        i_160++        ){
            start_153[i_160]=ovec_value_155[i_160*2];
        }
        for(        i_161=0;        i_161<ovec_max_152;        i_161++        ){
            end_154[i_161]=ovec_value_155[i_161*2+1];
        }
        if(_if_conditional57=regex_result_159==1,        _if_conditional57) {
            str_162=(char*)come_increment_ref_count(((char*)(right_value100=charp_substring(self,offset_151,start_153[0]))));
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_strings_163=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value101=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 700, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            str2_164=(char*)come_increment_ref_count(((char*)(right_value103=block(parent,str_162,match_strings_163))));
            right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional58=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional58) {
                __result87__ = __result_obj__ = result_150;
                str_162 = come_decrement_ref_count2(str_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_164 = come_decrement_ref_count2(str2_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result87__;
            }
            list$1charph_push_back(result_150,(char*)come_increment_ref_count(str2_164));
            if(_if_conditional59=offset_151==end_154[0],            _if_conditional59) {
                offset_151++;
            }
            else {
                offset_151=end_154[0];
            }
            str_162 = come_decrement_ref_count2(str_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,match_strings_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            str2_164 = come_decrement_ref_count2(str2_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional60=regex_result_159>1,            _if_conditional60) {
                str_165=(char*)come_increment_ref_count(((char*)(right_value104=charp_substring(self,offset_151,start_153[0]))));
                right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional61=offset_151==end_154[0],                _if_conditional61) {
                    offset_151++;
                }
                else {
                    offset_151=end_154[0];
                }
                match_strings_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 726, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_167=1;                i_167<regex_result_159;                i_167++                ){
                    match_str_168=(char*)come_increment_ref_count(((char*)(right_value107=charp_substring(self,start_153[i_167],end_154[i_167]))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(match_strings_166,(char*)come_increment_ref_count(match_str_168));
                    match_str_168 = come_decrement_ref_count2(match_str_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str2_169=(char*)come_increment_ref_count(((char*)(right_value108=block(parent,str_165,match_strings_166))));
                right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional62=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional62) {
                    __result88__ = __result_obj__ = result_150;
                    str_165 = come_decrement_ref_count2(str_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    str2_169 = come_decrement_ref_count2(str2_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                }
                list$1charph_push_back(result_150,(char*)come_increment_ref_count(str2_169));
                str_165 = come_decrement_ref_count2(str_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,match_strings_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                str2_169 = come_decrement_ref_count2(str2_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_156++;
        if(_if_conditional63=n_156==count,        _if_conditional63) {
            break;
        }
    }
    __result89__ = __result_obj__ = result_150;
    come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer2(list$1charphp_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
void* __result_obj__;
_Bool _if_conditional64;
_Bool __result90__;
_Bool _if_conditional65;
_Bool __result91__;
_Bool _if_conditional66;
_Bool __result92__;
_Bool _if_conditional67;
_Bool __result93__;
_Bool _if_conditional68;
_Bool __result94__;
_Bool _if_conditional69;
_Bool __result95__;
_Bool _if_conditional70;
_Bool __result96__;
_Bool _if_conditional71;
_Bool __result97__;
_Bool _if_conditional72;
_Bool __result98__;
_Bool _if_conditional73;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional64=strcmp(left->str,right->str)!=0,    _if_conditional64) {
        __result90__ = (_Bool)0;
        return __result90__;
    }
    if(_if_conditional65=left->ignore_case!=right->ignore_case,    _if_conditional65) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    if(_if_conditional66=left->multiline!=right->multiline,    _if_conditional66) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    if(_if_conditional67=left->global!=right->global,    _if_conditional67) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    if(_if_conditional68=left->extended!=right->extended,    _if_conditional68) {
        __result94__ = (_Bool)0;
        return __result94__;
    }
    if(_if_conditional69=left->dotall!=right->dotall,    _if_conditional69) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    if(_if_conditional70=left->anchored!=right->anchored,    _if_conditional70) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    if(_if_conditional71=left->dollar_endonly!=right->dollar_endonly,    _if_conditional71) {
        __result97__ = (_Bool)0;
        return __result97__;
    }
    if(_if_conditional72=left->ungreedy!=right->ungreedy,    _if_conditional72) {
        __result98__ = (_Bool)0;
        return __result98__;
    }
    if(_if_conditional73=left->options!=right->options,    _if_conditional73) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    __result100__ = (_Bool)1;
    return __result100__;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__;
void* right_value109;
void* right_value110;
struct list$1charph* result_170;
int offset_171;
int ovec_max_172;
const char* err_176;
int erro_ofs_177;
int options_178;
char* str_179;
struct real_pcre8_or_16* re_180;
_Bool _while_condtional10;
int options_181;
int len_182;
int regex_result_183;
int i_184;
int i_185;
_Bool _if_conditional74;
void* right_value111;
char* str_186;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value112;
char* str_187;
_Bool _if_conditional77;
int i_188;
void* right_value113;
char* match_string_189;
struct list$1charph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1charph*));
memset(&offset_171, 0, sizeof(int));
memset(&ovec_max_172, 0, sizeof(int));
memset(&erro_ofs_177, 0, sizeof(int));
memset(&options_178, 0, sizeof(int));
memset(&str_179, 0, sizeof(char*));
memset(&re_180, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_181, 0, sizeof(int));
memset(&len_182, 0, sizeof(int));
memset(&regex_result_183, 0, sizeof(int));
memset(&i_184, 0, sizeof(int));
memset(&i_185, 0, sizeof(int));
right_value111 = (void*)0;
memset(&str_186, 0, sizeof(char*));
right_value112 = (void*)0;
memset(&str_187, 0, sizeof(char*));
memset(&i_188, 0, sizeof(int));
right_value113 = (void*)0;
memset(&match_string_189, 0, sizeof(char*));
    result_170=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 794, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_171=0;
    ovec_max_172=16;
    int start_173[ovec_max_172];
    memset(&start_173, 0, sizeof(int)    *(ovec_max_172)    );
    int end_174[ovec_max_172];
    memset(&end_174, 0, sizeof(int)    *(ovec_max_172)    );
    int ovec_value_175[ovec_max_172*3];
    memset(&ovec_value_175, 0, sizeof(int)    *(ovec_max_172*3)    );
    options_178=reg->options;
    str_179=reg->str;
    re_180=reg->re;
    while(_while_condtional10=(_Bool)1,    _while_condtional10) {
        options_181=2097152;
        len_182=strlen(self);
        regex_result_183=pcre_exec(re_180,(struct pcre_extra*)0,self,len_182,offset_171,options_181,ovec_value_175,ovec_max_172*3);
        for(        i_184=0;        i_184<ovec_max_172;        i_184++        ){
            start_173[i_184]=ovec_value_175[i_184*2];
        }
        for(        i_185=0;        i_185<ovec_max_172;        i_185++        ){
            end_174[i_185]=ovec_value_175[i_185*2+1];
        }
        if(_if_conditional74=regex_result_183==1,        _if_conditional74) {
            str_186=(char*)come_increment_ref_count(((char*)(right_value111=charp_substring(self,start_173[0],end_174[0]))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_170,(char*)come_increment_ref_count(str_186));
            if(_if_conditional75=offset_171==end_174[0],            _if_conditional75) {
                offset_171++;
            }
            else {
                offset_171=end_174[0];
            }
            str_186 = come_decrement_ref_count2(str_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional76=regex_result_183>1,            _if_conditional76) {
                str_187=(char*)come_increment_ref_count(((char*)(right_value112=charp_substring(self,start_173[0],end_174[0]))));
                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_170,(char*)come_increment_ref_count(str_187));
                if(_if_conditional77=offset_171==end_174[0],                _if_conditional77) {
                    offset_171++;
                }
                else {
                    offset_171=end_174[0];
                }
                *num_group_string_in_regex=regex_result_183-1;
                for(                i_188=1;                i_188<regex_result_183;                i_188++                ){
                    match_string_189=(char*)come_increment_ref_count(((char*)(right_value113=charp_substring(self,start_173[i_188],end_174[i_188]))));
                    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_189));
                    match_string_189 = come_decrement_ref_count2(match_string_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_187 = come_decrement_ref_count2(str_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result101__ = __result_obj__ = result_170;
    come_call_finalizer2(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result101__;
    come_call_finalizer2(list$1charphp_finalize,result_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_strip(char* self){
void* __result_obj__;
void* right_value114;
char* result_190;
int len_191;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&result_190, 0, sizeof(char*));
memset(&len_191, 0, sizeof(int));
    result_190=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(self))));
    right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    len_191=strlen(self);
    if(_if_conditional78=self[len_191-1]==10,    _if_conditional78) {
        result_190[len_191-1]=0;
    }
    else {
        if(_if_conditional79=self[len_191-1]==13,        _if_conditional79) {
            result_190[len_191-1]=0;
        }
        else {
            if(_if_conditional80=len_191>2&&self[len_191-2]==13&&self[len_191-1]==10,            _if_conditional80) {
                result_190[len_191-2]=0;
            }
        }
    }
    __result102__ = __result_obj__ = result_190;
    result_190 = come_decrement_ref_count2(result_190, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result102__;
    result_190 = come_decrement_ref_count2(result_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_printable(char* str){
void* __result_obj__;
int len_192;
void* right_value115;
char* result_193;
int n_194;
int i_195;
char c_196;
_Bool _if_conditional81;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_192, 0, sizeof(int));
right_value115 = (void*)0;
memset(&result_193, 0, sizeof(char*));
memset(&n_194, 0, sizeof(int));
memset(&i_195, 0, sizeof(int));
memset(&c_196, 0, sizeof(char));
    len_192=charp_length(str);
    result_193=(char*)come_increment_ref_count(((char*)(right_value115=(char*)come_calloc(1, sizeof(char)*(1*(len_192*2+1)), "libcomelang2-str.c", 888, "char"))));
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_194=0;
    for(    i_195=0;    i_195<len_192;    i_195++    ){
        c_196=str[i_195];
        if(_if_conditional81=(c_196>=0&&c_196<32)||c_196==127,        _if_conditional81) {
            result_193[n_194++]=94;
            result_193[n_194++]=c_196+65-1;
        }
        else {
            result_193[n_194++]=c_196;
        }
    }
    result_193[n_194]=0;
    __result103__ = __result_obj__ = result_193;
    result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result103__;
    result_193 = come_decrement_ref_count2(result_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__;
int len_197;
void* right_value116;
char* result_198;
_Bool _if_conditional82;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_197, 0, sizeof(int));
right_value116 = (void*)0;
memset(&result_198, 0, sizeof(char*));
    len_197=6*(wcslen(wstr)+1);
    result_198=(char*)come_increment_ref_count(((char*)(right_value116=(char*)come_calloc(1, sizeof(char)*(1*(len_197)), "libcomelang2-str.c", 914, "char"))));
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional82=wcstombs(result_198,wstr,len_197)<0,    _if_conditional82) {
        strncpy(result_198,"",len_197);
    }
    __result104__ = __result_obj__ = result_198;
    result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result104__;
    result_198 = come_decrement_ref_count2(result_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* charp_to_wstring(char* str){
void* __result_obj__;
void* right_value117;
int* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
    __result105__ = __result_obj__ = ((int*)(right_value117=__builtin_wstring(str)));
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
int len_199;
_Bool _if_conditional83;
void* right_value118;
void* right_value119;
int* __result107__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value120;
void* right_value121;
int* __result108__;
_Bool _if_conditional88;
void* right_value122;
int* sub_str_200;
void* right_value123;
void* right_value124;
int* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_199, 0, sizeof(int));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&sub_str_200, 0, sizeof(int*));
right_value123 = (void*)0;
right_value124 = (void*)0;
    len_199=wcslen(str);
    if(_if_conditional83=len_199==0,    _if_conditional83) {
        __result107__ = __result_obj__ = ((int*)(right_value119=string_to_wstring(((char*)(right_value118=wchar_tp_to_string(str))))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result107__;
    }
    if(_if_conditional84=head<0,    _if_conditional84) {
        head+=len_199;
    }
    if(_if_conditional85=tail<0,    _if_conditional85) {
        tail+=len_199+1;
    }
    if(_if_conditional86=head<0,    _if_conditional86) {
        head=0;
    }
    if(_if_conditional87=tail<0,    _if_conditional87) {
        __result108__ = __result_obj__ = ((int*)(right_value121=string_to_wstring(((char*)(right_value120=wchar_tp_to_string(str))))));
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result108__;
    }
    if(_if_conditional88=tail>=len_199,    _if_conditional88) {
        tail=len_199;
    }
    sub_str_200=(int*)come_increment_ref_count(((int*)(right_value122=wchar_tp_substring(str,tail,-1))));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_200,sizeof(int)*(wstring_length(sub_str_200)+1));
    __result109__ = __result_obj__ = ((int*)(right_value124=string_to_wstring(((char*)(right_value123=wchar_tp_to_string(str))))));
    sub_str_200 = come_decrement_ref_count2(sub_str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
    sub_str_200 = come_decrement_ref_count2(sub_str_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int wchar_tp_index(int* str, int* search_str, int default_value){
void* __result_obj__;
int* head_201;
_Bool _if_conditional89;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_201, 0, sizeof(int*));
    head_201=wcsstr(str,search_str);
    if(_if_conditional89=head_201==((void*)0),    _if_conditional89) {
        __result110__ = default_value;
        return __result110__;
    }
    __result111__ = head_201-str;
    return __result111__;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
void* __result_obj__;
int len_202;
int* p_203;
_Bool _while_condtional11;
int len2_204;
_Bool result_205;
int i_206;
_Bool _if_conditional90;
_Bool _if_conditional91;
int __result112__;
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_202, 0, sizeof(int));
memset(&p_203, 0, sizeof(int*));
memset(&len2_204, 0, sizeof(int));
memset(&result_205, 0, sizeof(_Bool));
memset(&i_206, 0, sizeof(int));
    len_202=wcslen(search_str);
    p_203=str+wcslen(str)-len_202;
    while(_while_condtional11=p_203>=str,    _while_condtional11) {
        len2_204=wcslen(p_203);
        result_205=(_Bool)1;
        for(        i_206=0;        i_206<len_202&&i_206<len2_204;        i_206++        ){
            if(_if_conditional90=p_203[i_206]!=search_str[i_206],            _if_conditional90) {
                result_205=(_Bool)0;
            }
        }
        if(result_205) {
            __result112__ = (p_203-str);
            return __result112__;
        }
        p_203--;
    }
    __result113__ = default_value;
    return __result113__;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__;
int len_207;
void* right_value125;
int* result_208;
int i_209;
int* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_207, 0, sizeof(int));
right_value125 = (void*)0;
memset(&result_208, 0, sizeof(int*));
memset(&i_209, 0, sizeof(int));
    len_207=wcslen(str);
    result_208=(int*)come_increment_ref_count(((int*)(right_value125=(int*)come_calloc(1, sizeof(int)*(1*(len_207+1)), "libcomelang2-str.c", 1014, "int"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_209=0;    i_209<len_207;    i_209++    ){
        result_208[i_209]=str[len_207-i_209-1];
    }
    result_208[len_207]=0;
    __result114__ = __result_obj__ = result_208;
    result_208 = come_decrement_ref_count2(result_208, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result114__;
    result_208 = come_decrement_ref_count2(result_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__;
int len_210;
void* right_value126;
int* result_211;
int i_212;
int* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_210, 0, sizeof(int));
right_value126 = (void*)0;
memset(&result_211, 0, sizeof(int*));
memset(&i_212, 0, sizeof(int));
    len_210=wcslen(str)*n+1;
    result_211=(int*)come_increment_ref_count(((int*)(right_value126=(int*)come_calloc(1, sizeof(int)*(1*(len_210)), "libcomelang2-str.c", 1029, "int"))));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_211[0]=0;
    for(    i_212=0;    i_212<n;    i_212++    ){
        wcscat(result_211,str);
    }
    __result115__ = __result_obj__ = result_211;
    result_211 = come_decrement_ref_count2(result_211, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result115__;
    result_211 = come_decrement_ref_count2(result_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wchar_tp_printable(int* str){
void* __result_obj__;
int len_213;
void* right_value127;
int* result_214;
int n_215;
int i_216;
int c_217;
_Bool _if_conditional92;
int* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_213, 0, sizeof(int));
right_value127 = (void*)0;
memset(&result_214, 0, sizeof(int*));
memset(&n_215, 0, sizeof(int));
memset(&i_216, 0, sizeof(int));
memset(&c_217, 0, sizeof(int));
    len_213=wchar_tp_length(str);
    result_214=(int*)come_increment_ref_count(((int*)(right_value127=(int*)come_calloc(1, sizeof(int)*(1*(len_213*2+1)), "libcomelang2-str.c", 1043, "int"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    n_215=0;
    for(    i_216=0;    i_216<len_213;    i_216++    ){
        c_217=str[i_216];
        if(_if_conditional92=(c_217>=0&&c_217<32)||c_217==127,        _if_conditional92) {
            result_214[n_215++]=94;
            result_214[n_215++]=c_217+65-1;
        }
        else {
            result_214[n_215++]=c_217;
        }
    }
    result_214[n_215]=0;
    __result116__ = __result_obj__ = result_214;
    result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result116__;
    result_214 = come_decrement_ref_count2(result_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
void* __result_obj__;
int offset_218;
int ovec_max_219;
const char* err_223;
int erro_ofs_224;
int options_225;
char* str_226;
struct real_pcre8_or_16* re_227;
int n_228;
_Bool _while_condtional12;
int options_229;
int len_230;
int regex_result_231;
int i_232;
int i_233;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool __result117__;
_Bool _if_conditional95;
_Bool _if_conditional96;
int i_236;
void* right_value128;
char* match_string_237;
_Bool _if_conditional97;
_Bool __result119__;
_Bool _if_conditional98;
_Bool __result120__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_218, 0, sizeof(int));
memset(&ovec_max_219, 0, sizeof(int));
memset(&erro_ofs_224, 0, sizeof(int));
memset(&options_225, 0, sizeof(int));
memset(&str_226, 0, sizeof(char*));
memset(&re_227, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_228, 0, sizeof(int));
memset(&options_229, 0, sizeof(int));
memset(&len_230, 0, sizeof(int));
memset(&regex_result_231, 0, sizeof(int));
memset(&i_232, 0, sizeof(int));
memset(&i_233, 0, sizeof(int));
memset(&i_236, 0, sizeof(int));
right_value128 = (void*)0;
memset(&match_string_237, 0, sizeof(char*));
    offset_218=0;
    ovec_max_219=16;
    int start_220[ovec_max_219];
    memset(&start_220, 0, sizeof(int)    *(ovec_max_219)    );
    int end_221[ovec_max_219];
    memset(&end_221, 0, sizeof(int)    *(ovec_max_219)    );
    int ovec_value_222[ovec_max_219*3];
    memset(&ovec_value_222, 0, sizeof(int)    *(ovec_max_219*3)    );
    options_225=reg->options;
    str_226=reg->str;
    re_227=reg->re;
    n_228=0;
    while(_while_condtional12=(_Bool)1,    _while_condtional12) {
        options_229=2097152;
        len_230=strlen(self);
        regex_result_231=pcre_exec(re_227,(struct pcre_extra*)0,self,len_230,offset_218,options_229,ovec_value_222,ovec_max_219*3);
        for(        i_232=0;        i_232<ovec_max_219;        i_232++        ){
            start_220[i_232]=ovec_value_222[i_232*2];
        }
        for(        i_233=0;        i_233<ovec_max_219;        i_233++        ){
            end_221[i_233]=ovec_value_222[i_233*2+1];
        }
        if(_if_conditional93=regex_result_231==1||(group_strings==((void*)0)&&regex_result_231>0),        _if_conditional93) {
            n_228++;
            if(_if_conditional94=n_228==count,            _if_conditional94) {
                __result117__ = (_Bool)1;
                return __result117__;
            }
            if(_if_conditional95=offset_218==end_221[0],            _if_conditional95) {
                offset_218++;
            }
            else {
                offset_218=end_221[0];
            }
        }
        else {
            if(_if_conditional96=regex_result_231>1,            _if_conditional96) {
                n_228++;
                list$1charph_reset(group_strings);
                for(                i_236=1;                i_236<regex_result_231;                i_236++                ){
                    match_string_237=(char*)come_increment_ref_count(((char*)(right_value128=charp_substring(self,start_220[i_236],end_221[i_236]))));
                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_237));
                    match_string_237 = come_decrement_ref_count2(match_string_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional97=n_228==count,                _if_conditional97) {
                    __result119__ = (_Bool)1;
                    return __result119__;
                }
                if(_if_conditional98=offset_218==end_221[0],                _if_conditional98) {
                    offset_218++;
                }
                else {
                    offset_218=end_221[0];
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
struct list_item$1charph* it_234;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_235;
struct list$1charph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_234, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_235, 0, sizeof(struct list_item$1charph*));
                    it_234=self->head;
                    while(_while_condtional13=it_234!=((void*)0),                    _while_condtional13) {
                        prev_it_235=it_234;
                        it_234=it_234->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
void* right_value129;
int* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result126__ = __result_obj__ = ((int*)(right_value129=wchar_tp_multiply(str,n)));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__;
void* right_value130;
int* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
    __result127__ = __result_obj__ = ((int*)(right_value130=wchar_tp_multiply(str,n)));
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value131;
int* result_238;
int* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&result_238, 0, sizeof(int*));
    result_238=(int*)come_increment_ref_count(((int*)(right_value131=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1207, "int"))));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_238,left);
    wcscat(result_238,right);
    __result134__ = __result_obj__ = result_238;
    result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result134__;
    result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__;
void* right_value132;
int* result_239;
int* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
memset(&result_239, 0, sizeof(int*));
    result_239=(int*)come_increment_ref_count(((int*)(right_value132=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang2-str.c", 1217, "int"))));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    wcscpy(result_239,left);
    wcscat(result_239,right);
    __result135__ = __result_obj__ = result_239;
    result_239 = come_decrement_ref_count2(result_239, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result135__;
    result_239 = come_decrement_ref_count2(result_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

int charp_index(char* str, char* search_str, int default_value){
void* __result_obj__;
char* head_240;
_Bool _if_conditional99;
int __result136__;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_240, 0, sizeof(char*));
    head_240=strstr(str,search_str);
    if(_if_conditional99=head_240==((void*)0),    _if_conditional99) {
        __result136__ = default_value;
        return __result136__;
    }
    __result137__ = head_240-str;
    return __result137__;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
void* __result_obj__;
int ovec_max_241;
int result_245;
int offset_246;
const char* err_247;
int erro_ofs_248;
int options_249;
char* str_250;
struct real_pcre8_or_16* re_251;
_Bool _while_condtional14;
int options_252;
int len_253;
int regex_result_254;
int i_255;
int i_256;
_Bool _if_conditional100;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ovec_max_241, 0, sizeof(int));
memset(&result_245, 0, sizeof(int));
memset(&offset_246, 0, sizeof(int));
memset(&erro_ofs_248, 0, sizeof(int));
memset(&options_249, 0, sizeof(int));
memset(&str_250, 0, sizeof(char*));
memset(&re_251, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_252, 0, sizeof(int));
memset(&len_253, 0, sizeof(int));
memset(&regex_result_254, 0, sizeof(int));
memset(&i_255, 0, sizeof(int));
memset(&i_256, 0, sizeof(int));
    ovec_max_241=16;
    int start_242[ovec_max_241];
    memset(&start_242, 0, sizeof(int)    *(ovec_max_241)    );
    int end_243[ovec_max_241];
    memset(&end_243, 0, sizeof(int)    *(ovec_max_241)    );
    int ovec_value_244[ovec_max_241*3];
    memset(&ovec_value_244, 0, sizeof(int)    *(ovec_max_241*3)    );
    result_245=default_value;
    offset_246=0;
    options_249=reg->options;
    str_250=reg->str;
    re_251=reg->re;
    while(_while_condtional14=(_Bool)1,    _while_condtional14) {
        options_252=2097152;
        len_253=strlen(self);
        regex_result_254=pcre_exec(re_251,(struct pcre_extra*)0,self,len_253,offset_246,options_252,ovec_value_244,ovec_max_241*3);
        for(        i_255=0;        i_255<ovec_max_241;        i_255++        ){
            start_242[i_255]=ovec_value_244[i_255*2];
        }
        for(        i_256=0;        i_256<ovec_max_241;        i_256++        ){
            end_243[i_256]=ovec_value_244[i_256*2+1];
        }
        if(_if_conditional100=regex_result_254==1||regex_result_254>0,        _if_conditional100) {
            result_245=start_242[0];
            break;
        }
        {
            break;
        }
    }
    __result138__ = result_245;
    return __result138__;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__;
int len_257;
_Bool _if_conditional101;
void* right_value133;
char* __result139__;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value134;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_257, 0, sizeof(int));
right_value133 = (void*)0;
right_value134 = (void*)0;
    len_257=strlen(self);
    if(_if_conditional101=strcmp(self,"")==0,    _if_conditional101) {
        __result139__ = __result_obj__ = ((char*)(right_value133=__builtin_string(self)));
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result139__;
    }
    if(_if_conditional102=index<0,    _if_conditional102) {
        index+=len_257;
    }
    if(_if_conditional103=index>=len_257,    _if_conditional103) {
        index=len_257-1;
    }
    if(_if_conditional104=index<0,    _if_conditional104) {
        index=0;
    }
    self[index]=c;
    __result140__ = __result_obj__ = ((char*)(right_value134=__builtin_string(self)));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__;
int len_258;
void* right_value135;
char* result_259;
int i_260;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_258, 0, sizeof(int));
right_value135 = (void*)0;
memset(&result_259, 0, sizeof(char*));
memset(&i_260, 0, sizeof(int));
    len_258=strlen(str)*n+1;
    result_259=(char*)come_increment_ref_count(((char*)(right_value135=(char*)come_calloc(1, sizeof(char)*(1*(len_258)), "libcomelang2-str.c", 1315, "char"))));
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_259[0]=0;
    for(    i_260=0;    i_260<n;    i_260++    ){
        strcat(result_259,str);
    }
    __result141__ = __result_obj__ = result_259;
    result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result141__;
    result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__;
int offset_261;
int ovec_max_262;
const char* err_266;
int erro_ofs_267;
int options_268;
char* str_269;
struct real_pcre8_or_16* re_270;
void* right_value136;
void* right_value137;
struct buffer* result_271;
_Bool _while_condtional15;
int options_272;
int len_273;
int regex_result_274;
int i_275;
int i_276;
_Bool _if_conditional105;
void* right_value138;
char* str_277;
_Bool _if_conditional106;
_Bool _if_conditional107;
void* right_value139;
char* str_278;
void* right_value140;
char* str_279;
void* right_value141;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_261, 0, sizeof(int));
memset(&ovec_max_262, 0, sizeof(int));
memset(&erro_ofs_267, 0, sizeof(int));
memset(&options_268, 0, sizeof(int));
memset(&str_269, 0, sizeof(char*));
memset(&re_270, 0, sizeof(struct real_pcre8_or_16*));
right_value136 = (void*)0;
right_value137 = (void*)0;
memset(&result_271, 0, sizeof(struct buffer*));
memset(&options_272, 0, sizeof(int));
memset(&len_273, 0, sizeof(int));
memset(&regex_result_274, 0, sizeof(int));
memset(&i_275, 0, sizeof(int));
memset(&i_276, 0, sizeof(int));
right_value138 = (void*)0;
memset(&str_277, 0, sizeof(char*));
right_value139 = (void*)0;
memset(&str_278, 0, sizeof(char*));
right_value140 = (void*)0;
memset(&str_279, 0, sizeof(char*));
right_value141 = (void*)0;
    offset_261=0;
    ovec_max_262=16;
    int start_263[ovec_max_262];
    memset(&start_263, 0, sizeof(int)    *(ovec_max_262)    );
    int end_264[ovec_max_262];
    memset(&end_264, 0, sizeof(int)    *(ovec_max_262)    );
    int ovec_value_265[ovec_max_262*3];
    memset(&ovec_value_265, 0, sizeof(int)    *(ovec_max_262*3)    );
    options_268=reg->options;
    str_269=reg->str;
    re_270=reg->re;
    result_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value137=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value136=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1343, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional15=(_Bool)1,    _while_condtional15) {
        options_272=2097152;
        len_273=strlen(self);
        regex_result_274=pcre_exec(re_270,(struct pcre_extra*)0,self,len_273,offset_261,options_272,ovec_value_265,ovec_max_262*3);
        for(        i_275=0;        i_275<ovec_max_262;        i_275++        ){
            start_263[i_275]=ovec_value_265[i_275*2];
        }
        for(        i_276=0;        i_276<ovec_max_262;        i_276++        ){
            end_264[i_276]=ovec_value_265[i_276*2+1];
        }
        if(_if_conditional105=regex_result_274==1,        _if_conditional105) {
            str_277=(char*)come_increment_ref_count(((char*)(right_value138=charp_substring(self,offset_261,start_263[0]))));
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_271,str_277);
            buffer_append_str(result_271,replace);
            if(_if_conditional106=offset_261==end_264[0],            _if_conditional106) {
                offset_261++;
            }
            else {
                offset_261=end_264[0];
            }
            if(_if_conditional107=!reg->global,            _if_conditional107) {
                str_278=(char*)come_increment_ref_count(((char*)(right_value139=charp_substring(self,offset_261,-1))));
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_271,str_278);
                str_278 = come_decrement_ref_count2(str_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_277 = come_decrement_ref_count2(str_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_278 = come_decrement_ref_count2(str_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_277 = come_decrement_ref_count2(str_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_279=(char*)come_increment_ref_count(((char*)(right_value140=charp_substring(self,offset_261,-1))));
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_271,str_279);
            str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_279 = come_decrement_ref_count2(str_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result142__ = __result_obj__ = ((char*)(right_value141=buffer_to_string(result_271)));
    come_call_finalizer2(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
    come_call_finalizer2(buffer_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__;
int offset_280;
int ovec_max_281;
const char* err_285;
int erro_ofs_286;
int options_287;
char* str_288;
struct real_pcre8_or_16* re_289;
void* right_value142;
void* right_value143;
struct buffer* result_290;
int n_291;
_Bool _while_condtional16;
int options_292;
int len_293;
int regex_result_294;
int i_295;
int i_296;
_Bool _if_conditional108;
void* right_value144;
char* str_297;
_Bool _if_conditional109;
_Bool _if_conditional110;
void* right_value145;
char* str_298;
_Bool _if_conditional111;
void* right_value146;
char* str_299;
void* right_value147;
char* str_300;
void* right_value148;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_280, 0, sizeof(int));
memset(&ovec_max_281, 0, sizeof(int));
memset(&erro_ofs_286, 0, sizeof(int));
memset(&options_287, 0, sizeof(int));
memset(&str_288, 0, sizeof(char*));
memset(&re_289, 0, sizeof(struct real_pcre8_or_16*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&result_290, 0, sizeof(struct buffer*));
memset(&n_291, 0, sizeof(int));
memset(&options_292, 0, sizeof(int));
memset(&len_293, 0, sizeof(int));
memset(&regex_result_294, 0, sizeof(int));
memset(&i_295, 0, sizeof(int));
memset(&i_296, 0, sizeof(int));
right_value144 = (void*)0;
memset(&str_297, 0, sizeof(char*));
right_value145 = (void*)0;
memset(&str_298, 0, sizeof(char*));
right_value146 = (void*)0;
memset(&str_299, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&str_300, 0, sizeof(char*));
right_value148 = (void*)0;
    offset_280=0;
    ovec_max_281=16;
    int start_282[ovec_max_281];
    memset(&start_282, 0, sizeof(int)    *(ovec_max_281)    );
    int end_283[ovec_max_281];
    memset(&end_283, 0, sizeof(int)    *(ovec_max_281)    );
    int ovec_value_284[ovec_max_281*3];
    memset(&ovec_value_284, 0, sizeof(int)    *(ovec_max_281*3)    );
    options_287=reg->options;
    str_288=reg->str;
    re_289=reg->re;
    result_290=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value143=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value142=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1406, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_291=0;
    while(_while_condtional16=(_Bool)1,    _while_condtional16) {
        options_292=2097152;
        len_293=strlen(self);
        regex_result_294=pcre_exec(re_289,(struct pcre_extra*)0,self,len_293,offset_280,options_292,ovec_value_284,ovec_max_281*3);
        for(        i_295=0;        i_295<ovec_max_281;        i_295++        ){
            start_282[i_295]=ovec_value_284[i_295*2];
        }
        for(        i_296=0;        i_296<ovec_max_281;        i_296++        ){
            end_283[i_296]=ovec_value_284[i_296*2+1];
        }
        if(_if_conditional108=regex_result_294==1,        _if_conditional108) {
            n_291++;
            str_297=(char*)come_increment_ref_count(((char*)(right_value144=charp_substring(self,offset_280,start_282[0]))));
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_290,str_297);
            buffer_append_str(result_290,replace);
            if(_if_conditional109=offset_280==end_283[0],            _if_conditional109) {
                offset_280++;
            }
            else {
                offset_280=end_283[0];
            }
            if(_if_conditional110=!reg->global,            _if_conditional110) {
                str_298=(char*)come_increment_ref_count(((char*)(right_value145=charp_substring(self,offset_280,-1))));
                right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_290,str_298);
                str_298 = come_decrement_ref_count2(str_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_298 = come_decrement_ref_count2(str_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional111=n_291==count,            _if_conditional111) {
                str_299=(char*)come_increment_ref_count(((char*)(right_value146=charp_substring(self,offset_280,-1))));
                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_290,str_299);
                str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_299 = come_decrement_ref_count2(str_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_297 = come_decrement_ref_count2(str_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_300=(char*)come_increment_ref_count(((char*)(right_value147=charp_substring(self,offset_280,-1))));
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_290,str_300);
            str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            str_300 = come_decrement_ref_count2(str_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result143__ = __result_obj__ = ((char*)(right_value148=buffer_to_string(result_290)));
    come_call_finalizer2(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
    come_call_finalizer2(buffer_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__;
void* right_value149;
void* right_value150;
struct list$1charph* result_301;
void* right_value151;
void* right_value152;
struct buffer* buf_302;
int i_303;
_Bool _if_conditional112;
void* right_value153;
_Bool _if_conditional113;
void* right_value154;
struct list$1charph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_301, 0, sizeof(struct list$1charph*));
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&buf_302, 0, sizeof(struct buffer*));
memset(&i_303, 0, sizeof(int));
right_value153 = (void*)0;
right_value154 = (void*)0;
    result_301=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1465, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buf_302=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value152=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value151=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1467, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_303=0;    i_303<charp_length(self);    i_303++    ){
        if(_if_conditional112=strstr(self+i_303,str)==self+i_303,        _if_conditional112) {
            list$1charph_push_back(result_301,(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(buf_302->buf)))));
            right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(buf_302);
            i_303+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_302,self[i_303]);
        }
    }
    if(_if_conditional113=buffer_length(buf_302)!=0,    _if_conditional113) {
        list$1charph_push_back(result_301,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(buf_302->buf)))));
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result144__ = __result_obj__ = result_301;
    come_call_finalizer2(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer2(list$1charphp_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,buf_302, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__;
void* right_value155;
void* right_value156;
struct list$1charph* result_304;
int offset_305;
int ovec_max_306;
const char* err_310;
int erro_ofs_311;
int options_312;
char* str_313;
struct real_pcre8_or_16* re_314;
_Bool _while_condtional17;
int options_315;
int len_316;
int regex_result_317;
int i_318;
int i_319;
_Bool _if_conditional114;
void* right_value157;
char* str_320;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value158;
char* str_321;
_Bool _if_conditional117;
int i_322;
void* right_value159;
char* match_string_323;
struct list$1charph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&result_304, 0, sizeof(struct list$1charph*));
memset(&offset_305, 0, sizeof(int));
memset(&ovec_max_306, 0, sizeof(int));
memset(&erro_ofs_311, 0, sizeof(int));
memset(&options_312, 0, sizeof(int));
memset(&str_313, 0, sizeof(char*));
memset(&re_314, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_315, 0, sizeof(int));
memset(&len_316, 0, sizeof(int));
memset(&regex_result_317, 0, sizeof(int));
memset(&i_318, 0, sizeof(int));
memset(&i_319, 0, sizeof(int));
right_value157 = (void*)0;
memset(&str_320, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&str_321, 0, sizeof(char*));
memset(&i_322, 0, sizeof(int));
right_value159 = (void*)0;
memset(&match_string_323, 0, sizeof(char*));
    result_304=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value156=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1488, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_305=0;
    ovec_max_306=16;
    int start_307[ovec_max_306];
    memset(&start_307, 0, sizeof(int)    *(ovec_max_306)    );
    int end_308[ovec_max_306];
    memset(&end_308, 0, sizeof(int)    *(ovec_max_306)    );
    int ovec_value_309[ovec_max_306*3];
    memset(&ovec_value_309, 0, sizeof(int)    *(ovec_max_306*3)    );
    options_312=reg->options;
    str_313=reg->str;
    re_314=reg->re;
    while(_while_condtional17=(_Bool)1,    _while_condtional17) {
        options_315=2097152;
        len_316=strlen(self);
        regex_result_317=pcre_exec(re_314,(struct pcre_extra*)0,self,len_316,offset_305,options_315,ovec_value_309,ovec_max_306*3);
        for(        i_318=0;        i_318<ovec_max_306;        i_318++        ){
            start_307[i_318]=ovec_value_309[i_318*2];
        }
        for(        i_319=0;        i_319<ovec_max_306;        i_319++        ){
            end_308[i_319]=ovec_value_309[i_319*2+1];
        }
        if(_if_conditional114=regex_result_317==1,        _if_conditional114) {
            str_320=(char*)come_increment_ref_count(((char*)(right_value157=charp_substring(self,start_307[0],end_308[0]))));
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_304,(char*)come_increment_ref_count(str_320));
            if(_if_conditional115=offset_305==end_308[0],            _if_conditional115) {
                offset_305++;
            }
            else {
                offset_305=end_308[0];
            }
            str_320 = come_decrement_ref_count2(str_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional116=regex_result_317>1,            _if_conditional116) {
                str_321=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(self,start_307[0],end_308[0]))));
                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_304,(char*)come_increment_ref_count(str_321));
                if(_if_conditional117=offset_305==end_308[0],                _if_conditional117) {
                    offset_305++;
                }
                else {
                    offset_305=end_308[0];
                }
                for(                i_322=1;                i_322<regex_result_317;                i_322++                ){
                    match_string_323=(char*)come_increment_ref_count(((char*)(right_value159=charp_substring(self,start_307[i_322],end_308[i_322]))));
                    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_304,(char*)come_increment_ref_count(match_string_323));
                    match_string_323 = come_decrement_ref_count2(match_string_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_321 = come_decrement_ref_count2(str_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    __result145__ = __result_obj__ = result_304;
    come_call_finalizer2(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result145__;
    come_call_finalizer2(list$1charphp_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__;
const char* err_324;
int erro_ofs_325;
int options_326;
char* str_327;
struct real_pcre8_or_16* re_328;
void* right_value160;
void* right_value161;
struct list$1charph* result_329;
int offset_330;
int ovec_max_331;
_Bool _while_condtional18;
int options_335;
int len_336;
int regex_result_337;
int i_338;
int i_339;
_Bool _if_conditional118;
void* right_value162;
char* str_340;
_Bool _if_conditional119;
_Bool _if_conditional120;
void* right_value163;
char* str_341;
_Bool _if_conditional121;
int i_342;
void* right_value164;
char* match_str_343;
_Bool _if_conditional122;
void* right_value165;
char* str_344;
struct list$1charph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_325, 0, sizeof(int));
memset(&options_326, 0, sizeof(int));
memset(&str_327, 0, sizeof(char*));
memset(&re_328, 0, sizeof(struct real_pcre8_or_16*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&result_329, 0, sizeof(struct list$1charph*));
memset(&offset_330, 0, sizeof(int));
memset(&ovec_max_331, 0, sizeof(int));
memset(&options_335, 0, sizeof(int));
memset(&len_336, 0, sizeof(int));
memset(&regex_result_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
memset(&i_339, 0, sizeof(int));
right_value162 = (void*)0;
memset(&str_340, 0, sizeof(char*));
right_value163 = (void*)0;
memset(&str_341, 0, sizeof(char*));
memset(&i_342, 0, sizeof(int));
right_value164 = (void*)0;
memset(&match_str_343, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&str_344, 0, sizeof(char*));
    options_326=reg->options;
    str_327=reg->str;
    re_328=reg->re;
    result_329=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value160=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1569, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_330=0;
    ovec_max_331=16;
    int start_332[ovec_max_331];
    memset(&start_332, 0, sizeof(int)    *(ovec_max_331)    );
    int end_333[ovec_max_331];
    memset(&end_333, 0, sizeof(int)    *(ovec_max_331)    );
    int ovec_value_334[ovec_max_331*3];
    memset(&ovec_value_334, 0, sizeof(int)    *(ovec_max_331*3)    );
    while(_while_condtional18=(_Bool)1,    _while_condtional18) {
        options_335=2097152;
        len_336=strlen(self);
        regex_result_337=pcre_exec(re_328,(struct pcre_extra*)0,self,len_336,offset_330,options_335,ovec_value_334,ovec_max_331*3);
        for(        i_338=0;        i_338<ovec_max_331;        i_338++        ){
            start_332[i_338]=ovec_value_334[i_338*2];
        }
        for(        i_339=0;        i_339<ovec_max_331;        i_339++        ){
            end_333[i_339]=ovec_value_334[i_339*2+1];
        }
        if(_if_conditional118=regex_result_337==1,        _if_conditional118) {
            str_340=(char*)come_increment_ref_count(((char*)(right_value162=charp_substring(self,offset_330,start_332[0]))));
            right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_340));
            if(_if_conditional119=offset_330==end_333[0],            _if_conditional119) {
                offset_330++;
            }
            else {
                offset_330=end_333[0];
            }
            str_340 = come_decrement_ref_count2(str_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional120=regex_result_337>1,            _if_conditional120) {
                str_341=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(self,offset_330,start_332[0]))));
                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_341));
                if(_if_conditional121=offset_330==end_333[0],                _if_conditional121) {
                    offset_330++;
                }
                else {
                    offset_330=end_333[0];
                }
                for(                i_342=1;                i_342<regex_result_337;                i_342++                ){
                    match_str_343=(char*)come_increment_ref_count(((char*)(right_value164=charp_substring(self,start_332[i_342],end_333[i_342]))));
                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_329,(char*)come_increment_ref_count(match_str_343));
                    match_str_343 = come_decrement_ref_count2(match_str_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_341 = come_decrement_ref_count2(str_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
    }
    if(_if_conditional122=offset_330<charp_length(self),    _if_conditional122) {
        str_344=(char*)come_increment_ref_count(((char*)(right_value165=charp_substring(self,offset_330,-1))));
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_329,(char*)come_increment_ref_count(str_344));
        str_344 = come_decrement_ref_count2(str_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result146__ = __result_obj__ = result_329;
    come_call_finalizer2(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(list$1charphp_finalize,result_329, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

_Bool charp_match(char* self, struct come_regex* reg){
void* __result_obj__;
int offset_345;
int ovec_max_346;
const char* err_350;
int erro_ofs_351;
int options_352;
char* str_353;
struct real_pcre8_or_16* re_354;
_Bool _while_condtional19;
int options_355;
int len_356;
int regex_result_357;
int i_358;
int i_359;
_Bool _if_conditional123;
_Bool __result147__;
_Bool __result148__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_345, 0, sizeof(int));
memset(&ovec_max_346, 0, sizeof(int));
memset(&erro_ofs_351, 0, sizeof(int));
memset(&options_352, 0, sizeof(int));
memset(&str_353, 0, sizeof(char*));
memset(&re_354, 0, sizeof(struct real_pcre8_or_16*));
memset(&options_355, 0, sizeof(int));
memset(&len_356, 0, sizeof(int));
memset(&regex_result_357, 0, sizeof(int));
memset(&i_358, 0, sizeof(int));
memset(&i_359, 0, sizeof(int));
    offset_345=0;
    ovec_max_346=16;
    int start_347[ovec_max_346];
    memset(&start_347, 0, sizeof(int)    *(ovec_max_346)    );
    int end_348[ovec_max_346];
    memset(&end_348, 0, sizeof(int)    *(ovec_max_346)    );
    int ovec_value_349[ovec_max_346*3];
    memset(&ovec_value_349, 0, sizeof(int)    *(ovec_max_346*3)    );
    options_352=reg->options;
    str_353=reg->str;
    re_354=reg->re;
    while(_while_condtional19=(_Bool)1,    _while_condtional19) {
        options_355=2097152;
        len_356=strlen(self);
        regex_result_357=pcre_exec(re_354,(struct pcre_extra*)0,self,len_356,offset_345,options_355,ovec_value_349,ovec_max_346*3);
        for(        i_358=0;        i_358<ovec_max_346;        i_358++        ){
            start_347[i_358]=ovec_value_349[i_358*2];
        }
        for(        i_359=0;        i_359<ovec_max_346;        i_359++        ){
            end_348[i_359]=ovec_value_349[i_359*2+1];
        }
        if(_if_conditional123=regex_result_357>0,        _if_conditional123) {
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
const char* err_360;
int erro_ofs_361;
int options_362;
char* str_363;
struct real_pcre8_or_16* re_364;
void* right_value166;
void* right_value167;
struct list$1charph* result_365;
int offset_366;
int ovec_max_367;
int n_371;
_Bool _while_condtional20;
int options_372;
int len_373;
int regex_result_374;
int i_375;
int i_376;
_Bool _if_conditional124;
void* right_value168;
char* str_377;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value169;
char* str_378;
_Bool _if_conditional127;
int i_379;
void* right_value170;
char* match_str_380;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value171;
char* str_381;
struct list$1charph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_361, 0, sizeof(int));
memset(&options_362, 0, sizeof(int));
memset(&str_363, 0, sizeof(char*));
memset(&re_364, 0, sizeof(struct real_pcre8_or_16*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&result_365, 0, sizeof(struct list$1charph*));
memset(&offset_366, 0, sizeof(int));
memset(&ovec_max_367, 0, sizeof(int));
memset(&n_371, 0, sizeof(int));
memset(&options_372, 0, sizeof(int));
memset(&len_373, 0, sizeof(int));
memset(&regex_result_374, 0, sizeof(int));
memset(&i_375, 0, sizeof(int));
memset(&i_376, 0, sizeof(int));
right_value168 = (void*)0;
memset(&str_377, 0, sizeof(char*));
right_value169 = (void*)0;
memset(&str_378, 0, sizeof(char*));
memset(&i_379, 0, sizeof(int));
right_value170 = (void*)0;
memset(&match_str_380, 0, sizeof(char*));
right_value171 = (void*)0;
memset(&str_381, 0, sizeof(char*));
    options_362=reg->options;
    str_363=reg->str;
    re_364=reg->re;
    result_365=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value166=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1691, "list$1charph"))))))));
    come_call_finalizer2(list$1charphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(list$1charphp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    offset_366=0;
    ovec_max_367=16;
    int start_368[ovec_max_367];
    memset(&start_368, 0, sizeof(int)    *(ovec_max_367)    );
    int end_369[ovec_max_367];
    memset(&end_369, 0, sizeof(int)    *(ovec_max_367)    );
    int ovec_value_370[ovec_max_367*3];
    memset(&ovec_value_370, 0, sizeof(int)    *(ovec_max_367*3)    );
    n_371=0;
    while(_while_condtional20=(_Bool)1,    _while_condtional20) {
        options_372=2097152;
        len_373=strlen(self);
        regex_result_374=pcre_exec(re_364,(struct pcre_extra*)0,self,len_373,offset_366,options_372,ovec_value_370,ovec_max_367*3);
        for(        i_375=0;        i_375<ovec_max_367;        i_375++        ){
            start_368[i_375]=ovec_value_370[i_375*2];
        }
        for(        i_376=0;        i_376<ovec_max_367;        i_376++        ){
            end_369[i_376]=ovec_value_370[i_376*2+1];
        }
        if(_if_conditional124=regex_result_374==1,        _if_conditional124) {
            str_377=(char*)come_increment_ref_count(((char*)(right_value168=charp_substring(self,offset_366,start_368[0]))));
            right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_377));
            if(_if_conditional125=offset_366==end_369[0],            _if_conditional125) {
                offset_366++;
            }
            else {
                offset_366=end_369[0];
            }
            str_377 = come_decrement_ref_count2(str_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional126=regex_result_374>1,            _if_conditional126) {
                str_378=(char*)come_increment_ref_count(((char*)(right_value169=charp_substring(self,offset_366,start_368[0]))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_378));
                if(_if_conditional127=offset_366==end_369[0],                _if_conditional127) {
                    offset_366++;
                }
                else {
                    offset_366=end_369[0];
                }
                for(                i_379=1;                i_379<regex_result_374;                i_379++                ){
                    match_str_380=(char*)come_increment_ref_count(((char*)(right_value170=charp_substring(self,start_368[i_379],end_369[i_379]))));
                    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(result_365,(char*)come_increment_ref_count(match_str_380));
                    match_str_380 = come_decrement_ref_count2(match_str_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                break;
            }
        }
        n_371++;
        if(_if_conditional128=maxsplit==n_371,        _if_conditional128) {
            break;
        }
    }
    if(_if_conditional129=offset_366<charp_length(self),    _if_conditional129) {
        str_381=(char*)come_increment_ref_count(((char*)(right_value171=charp_substring(self,offset_366,-1))));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(result_365,(char*)come_increment_ref_count(str_381));
        str_381 = come_decrement_ref_count2(str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result150__ = __result_obj__ = result_365;
    come_call_finalizer2(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result150__;
    come_call_finalizer2(list$1charphp_finalize,result_365, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
void* __result_obj__;
const char* err_382;
int erro_ofs_383;
int options_384;
char* str_385;
struct real_pcre8_or_16* re_386;
void* right_value172;
char* self2_387;
int ovec_max_388;
int result_392;
int offset_393;
int n_394;
_Bool _while_condtional21;
int options_395;
int len_396;
int regex_result_397;
int i_398;
int i_399;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&erro_ofs_383, 0, sizeof(int));
memset(&options_384, 0, sizeof(int));
memset(&str_385, 0, sizeof(char*));
memset(&re_386, 0, sizeof(struct real_pcre8_or_16*));
right_value172 = (void*)0;
memset(&self2_387, 0, sizeof(char*));
memset(&ovec_max_388, 0, sizeof(int));
memset(&result_392, 0, sizeof(int));
memset(&offset_393, 0, sizeof(int));
memset(&n_394, 0, sizeof(int));
memset(&options_395, 0, sizeof(int));
memset(&len_396, 0, sizeof(int));
memset(&regex_result_397, 0, sizeof(int));
memset(&i_398, 0, sizeof(int));
memset(&i_399, 0, sizeof(int));
    options_384=reg->options;
    str_385=reg->str;
    re_386=reg->re;
    self2_387=(char*)come_increment_ref_count(((char*)(right_value172=charp_reverse(self))));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ovec_max_388=16;
    int start_389[ovec_max_388];
    memset(&start_389, 0, sizeof(int)    *(ovec_max_388)    );
    int end_390[ovec_max_388];
    memset(&end_390, 0, sizeof(int)    *(ovec_max_388)    );
    int ovec_value_391[ovec_max_388*3];
    memset(&ovec_value_391, 0, sizeof(int)    *(ovec_max_388*3)    );
    result_392=default_value;
    offset_393=0;
    n_394=0;
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        options_395=2097152;
        len_396=strlen(self2_387);
        regex_result_397=pcre_exec(re_386,(struct pcre_extra*)0,self2_387,len_396,offset_393,options_395,ovec_value_391,ovec_max_388*3);
        for(        i_398=0;        i_398<ovec_max_388;        i_398++        ){
            start_389[i_398]=ovec_value_391[i_398*2];
        }
        for(        i_399=0;        i_399<ovec_max_388;        i_399++        ){
            end_390[i_399]=ovec_value_391[i_399*2+1];
        }
        if(_if_conditional130=regex_result_397>0,        _if_conditional130) {
            n_394++;
            if(_if_conditional131=offset_393==end_390[0],            _if_conditional131) {
                offset_393++;
            }
            else {
                offset_393=end_390[0];
            }
            if(_if_conditional132=n_394==count,            _if_conditional132) {
                result_392=strlen(self)-end_390[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result151__ = result_392;
    self2_387 = come_decrement_ref_count2(self2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result151__;
    self2_387 = come_decrement_ref_count2(self2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
void* __result_obj__;
int offset_400;
int ovec_max_401;
const char* err_405;
int erro_ofs_406;
int options_407;
char* str_408;
struct real_pcre8_or_16* re_409;
int n_410;
_Bool _while_condtional22;
int options_411;
int len_412;
int regex_result_413;
int i_414;
int i_415;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool __result152__;
_Bool _if_conditional135;
_Bool __result153__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_400, 0, sizeof(int));
memset(&ovec_max_401, 0, sizeof(int));
memset(&erro_ofs_406, 0, sizeof(int));
memset(&options_407, 0, sizeof(int));
memset(&str_408, 0, sizeof(char*));
memset(&re_409, 0, sizeof(struct real_pcre8_or_16*));
memset(&n_410, 0, sizeof(int));
memset(&options_411, 0, sizeof(int));
memset(&len_412, 0, sizeof(int));
memset(&regex_result_413, 0, sizeof(int));
memset(&i_414, 0, sizeof(int));
memset(&i_415, 0, sizeof(int));
    offset_400=0;
    ovec_max_401=16;
    int start_402[ovec_max_401];
    memset(&start_402, 0, sizeof(int)    *(ovec_max_401)    );
    int end_403[ovec_max_401];
    memset(&end_403, 0, sizeof(int)    *(ovec_max_401)    );
    int ovec_value_404[ovec_max_401*3];
    memset(&ovec_value_404, 0, sizeof(int)    *(ovec_max_401*3)    );
    options_407=reg->options;
    str_408=reg->str;
    re_409=reg->re;
    n_410=0;
    while(_while_condtional22=(_Bool)1,    _while_condtional22) {
        options_411=2097152;
        len_412=strlen(self);
        regex_result_413=pcre_exec(re_409,(struct pcre_extra*)0,self,len_412,offset_400,options_411,ovec_value_404,ovec_max_401*3);
        for(        i_414=0;        i_414<ovec_max_401;        i_414++        ){
            start_402[i_414]=ovec_value_404[i_414*2];
        }
        for(        i_415=0;        i_415<ovec_max_401;        i_415++        ){
            end_403[i_415]=ovec_value_404[i_415*2+1];
        }
        if(_if_conditional133=regex_result_413>0,        _if_conditional133) {
            n_410++;
            if(_if_conditional134=count==n_410,            _if_conditional134) {
                __result152__ = (_Bool)1;
                return __result152__;
            }
            if(_if_conditional135=offset_400==end_403[0],            _if_conditional135) {
                offset_400++;
            }
            else {
                offset_400=end_403[0];
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
int offset_416;
int ovec_max_417;
const char* err_421;
int erro_ofs_422;
int options_423;
char* str_424;
struct real_pcre8_or_16* re_425;
void* right_value173;
void* right_value174;
struct buffer* result_426;
_Bool _while_condtional23;
int options_427;
int len_428;
int regex_result_429;
int i_430;
int i_431;
_Bool _if_conditional136;
void* right_value175;
char* str_432;
void* right_value176;
void* right_value177;
struct list$1charph* group_strings_433;
void* right_value178;
char* match_string_434;
void* right_value179;
void* right_value180;
char* block_result_435;
_Bool _if_conditional137;
void* right_value181;
char* __result155__;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value182;
char* str_436;
_Bool _if_conditional140;
void* right_value183;
char* str_437;
_Bool _if_conditional141;
void* right_value184;
void* right_value185;
struct list$1charph* group_strings_438;
int i_439;
void* right_value186;
char* match_string_440;
void* right_value187;
char* match_string_441;
void* right_value188;
char* block_result_442;
_Bool _if_conditional142;
void* right_value189;
char* __result156__;
_Bool _if_conditional143;
void* right_value190;
char* str_443;
void* right_value191;
char* str_444;
void* right_value192;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_416, 0, sizeof(int));
memset(&ovec_max_417, 0, sizeof(int));
memset(&erro_ofs_422, 0, sizeof(int));
memset(&options_423, 0, sizeof(int));
memset(&str_424, 0, sizeof(char*));
memset(&re_425, 0, sizeof(struct real_pcre8_or_16*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&result_426, 0, sizeof(struct buffer*));
memset(&options_427, 0, sizeof(int));
memset(&len_428, 0, sizeof(int));
memset(&regex_result_429, 0, sizeof(int));
memset(&i_430, 0, sizeof(int));
memset(&i_431, 0, sizeof(int));
right_value175 = (void*)0;
memset(&str_432, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&group_strings_433, 0, sizeof(struct list$1charph*));
right_value178 = (void*)0;
memset(&match_string_434, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&block_result_435, 0, sizeof(char*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&str_436, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&str_437, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&group_strings_438, 0, sizeof(struct list$1charph*));
memset(&i_439, 0, sizeof(int));
right_value186 = (void*)0;
memset(&match_string_440, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&match_string_441, 0, sizeof(char*));
right_value188 = (void*)0;
memset(&block_result_442, 0, sizeof(char*));
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&str_443, 0, sizeof(char*));
right_value191 = (void*)0;
memset(&str_444, 0, sizeof(char*));
right_value192 = (void*)0;
    offset_416=0;
    ovec_max_417=16;
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    options_423=reg->options;
    str_424=reg->str;
    re_425=reg->re;
    result_426=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 1903, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        options_427=2097152;
        len_428=strlen(self);
        regex_result_429=pcre_exec(re_425,(struct pcre_extra*)0,self,len_428,offset_416,options_427,ovec_value_420,ovec_max_417*3);
        for(        i_430=0;        i_430<ovec_max_417;        i_430++        ){
            start_418[i_430]=ovec_value_420[i_430*2];
        }
        for(        i_431=0;        i_431<ovec_max_417;        i_431++        ){
            end_419[i_431]=ovec_value_420[i_431*2+1];
        }
        if(_if_conditional136=regex_result_429==1,        _if_conditional136) {
            str_432=(char*)come_increment_ref_count(((char*)(right_value175=charp_substring(self,offset_416,start_418[0]))));
            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_426,str_432);
            group_strings_433=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1923, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            match_string_434=(char*)come_increment_ref_count(((char*)(right_value178=charp_substring(self,start_418[0],end_419[0]))));
            right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_433,(char*)come_increment_ref_count(((char*)(right_value179=charp_substring(self,start_418[0],end_419[0])))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_435=(char*)come_increment_ref_count(((char*)(right_value180=block(parent,match_string_434,group_strings_433))));
            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional137=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional137) {
                __result155__ = __result_obj__ = ((char*)(right_value181=buffer_to_string(result_426)));
                str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result155__;
            }
            buffer_append_str(result_426,block_result_435);
            if(_if_conditional138=offset_416==end_419[0],            _if_conditional138) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            if(_if_conditional139=!reg->global,            _if_conditional139) {
                str_436=(char*)come_increment_ref_count(((char*)(right_value182=charp_substring(self,offset_416,-1))));
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_426,str_436);
                str_436 = come_decrement_ref_count2(str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_436 = come_decrement_ref_count2(str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_432 = come_decrement_ref_count2(str_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_433, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_434 = come_decrement_ref_count2(match_string_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_435 = come_decrement_ref_count2(block_result_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional140=regex_result_429>1,            _if_conditional140) {
                str_437=(char*)come_increment_ref_count(((char*)(right_value183=charp_substring(self,offset_416,start_418[0]))));
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_426,str_437);
                if(_if_conditional141=offset_416==end_419[0],                _if_conditional141) {
                    offset_416++;
                }
                else {
                    offset_416=end_419[0];
                }
                group_strings_438=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value185=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value184=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 1962, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_439=1;                i_439<regex_result_429;                i_439++                ){
                    match_string_440=(char*)come_increment_ref_count(((char*)(right_value186=charp_substring(self,start_418[i_439],end_419[i_439]))));
                    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_438,(char*)come_increment_ref_count(match_string_440));
                    match_string_440 = come_decrement_ref_count2(match_string_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_441=(char*)come_increment_ref_count(((char*)(right_value187=charp_substring(self,start_418[0],end_419[0]))));
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_442=(char*)come_increment_ref_count(((char*)(right_value188=block(parent,match_string_441,group_strings_438))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional142=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional142) {
                    __result156__ = __result_obj__ = ((char*)(right_value189=buffer_to_string(result_426)));
                    str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result156__;
                }
                buffer_append_str(result_426,block_result_442);
                if(_if_conditional143=!reg->global,                _if_conditional143) {
                    str_443=(char*)come_increment_ref_count(((char*)(right_value190=charp_substring(self,offset_416,-1))));
                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_426,str_443);
                    str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_443 = come_decrement_ref_count2(str_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_438, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_441 = come_decrement_ref_count2(match_string_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_442 = come_decrement_ref_count2(block_result_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_444=(char*)come_increment_ref_count(((char*)(right_value191=charp_substring(self,offset_416,-1))));
                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_426,str_444);
                str_444 = come_decrement_ref_count2(str_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_444 = come_decrement_ref_count2(str_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result157__ = __result_obj__ = ((char*)(right_value192=buffer_to_string(result_426)));
    come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
    come_call_finalizer2(buffer_finalize,result_426, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__;
int offset_445;
int ovec_max_446;
const char* err_450;
int erro_ofs_451;
int options_452;
char* str_453;
struct real_pcre8_or_16* re_454;
void* right_value193;
void* right_value194;
struct buffer* result_455;
int n_456;
_Bool _while_condtional24;
int options_457;
int len_458;
int regex_result_459;
int i_460;
int i_461;
_Bool _if_conditional144;
void* right_value195;
char* str_462;
void* right_value196;
void* right_value197;
struct list$1charph* group_strings_463;
void* right_value198;
void* right_value199;
char* match_string_464;
void* right_value200;
char* block_result_465;
_Bool _if_conditional145;
void* right_value201;
char* __result158__;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value202;
char* str_466;
_Bool _if_conditional148;
void* right_value203;
char* str_467;
_Bool _if_conditional149;
void* right_value204;
char* str_468;
_Bool _if_conditional150;
void* right_value205;
void* right_value206;
struct list$1charph* group_strings_469;
int i_470;
void* right_value207;
char* match_string_471;
void* right_value208;
char* match_string_472;
void* right_value209;
char* block_result_473;
_Bool _if_conditional151;
void* right_value210;
char* __result159__;
_Bool _if_conditional152;
void* right_value211;
char* str_474;
_Bool _if_conditional153;
void* right_value212;
char* str_475;
void* right_value213;
char* str_476;
void* right_value214;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&offset_445, 0, sizeof(int));
memset(&ovec_max_446, 0, sizeof(int));
memset(&erro_ofs_451, 0, sizeof(int));
memset(&options_452, 0, sizeof(int));
memset(&str_453, 0, sizeof(char*));
memset(&re_454, 0, sizeof(struct real_pcre8_or_16*));
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&result_455, 0, sizeof(struct buffer*));
memset(&n_456, 0, sizeof(int));
memset(&options_457, 0, sizeof(int));
memset(&len_458, 0, sizeof(int));
memset(&regex_result_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
memset(&i_461, 0, sizeof(int));
right_value195 = (void*)0;
memset(&str_462, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&group_strings_463, 0, sizeof(struct list$1charph*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&match_string_464, 0, sizeof(char*));
right_value200 = (void*)0;
memset(&block_result_465, 0, sizeof(char*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&str_466, 0, sizeof(char*));
right_value203 = (void*)0;
memset(&str_467, 0, sizeof(char*));
right_value204 = (void*)0;
memset(&str_468, 0, sizeof(char*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&group_strings_469, 0, sizeof(struct list$1charph*));
memset(&i_470, 0, sizeof(int));
right_value207 = (void*)0;
memset(&match_string_471, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&match_string_472, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&block_result_473, 0, sizeof(char*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&str_474, 0, sizeof(char*));
right_value212 = (void*)0;
memset(&str_475, 0, sizeof(char*));
right_value213 = (void*)0;
memset(&str_476, 0, sizeof(char*));
right_value214 = (void*)0;
    offset_445=0;
    ovec_max_446=16;
    int start_447[ovec_max_446];
    memset(&start_447, 0, sizeof(int)    *(ovec_max_446)    );
    int end_448[ovec_max_446];
    memset(&end_448, 0, sizeof(int)    *(ovec_max_446)    );
    int ovec_value_449[ovec_max_446*3];
    memset(&ovec_value_449, 0, sizeof(int)    *(ovec_max_446*3)    );
    options_452=reg->options;
    str_453=reg->str;
    re_454=reg->re;
    result_455=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value194=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value193=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang2-str.c", 2011, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    n_456=0;
    while(_while_condtional24=(_Bool)1,    _while_condtional24) {
        options_457=2097152;
        len_458=strlen(self);
        regex_result_459=pcre_exec(re_454,(struct pcre_extra*)0,self,len_458,offset_445,options_457,ovec_value_449,ovec_max_446*3);
        for(        i_460=0;        i_460<ovec_max_446;        i_460++        ){
            start_447[i_460]=ovec_value_449[i_460*2];
        }
        for(        i_461=0;        i_461<ovec_max_446;        i_461++        ){
            end_448[i_461]=ovec_value_449[i_461*2+1];
        }
        if(_if_conditional144=regex_result_459==1,        _if_conditional144) {
            n_456++;
            str_462=(char*)come_increment_ref_count(((char*)(right_value195=charp_substring(self,offset_445,start_447[0]))));
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(result_455,str_462);
            group_strings_463=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value197=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value196=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2034, "list$1charph"))))))));
            come_call_finalizer2(list$1charphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(list$1charphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(group_strings_463,(char*)come_increment_ref_count(((char*)(right_value198=charp_substring(self,start_447[0],end_448[0])))));
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            match_string_464=(char*)come_increment_ref_count(((char*)(right_value199=charp_substring(self,start_447[0],end_448[0]))));
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            block_result_465=(char*)come_increment_ref_count(((char*)(right_value200=block(parent,match_string_464,group_strings_463))));
            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional145=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            _if_conditional145) {
                __result158__ = __result_obj__ = ((char*)(right_value201=buffer_to_string(result_455)));
                str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result158__;
            }
            buffer_append_str(result_455,block_result_465);
            if(_if_conditional146=offset_445==end_448[0],            _if_conditional146) {
                offset_445++;
            }
            else {
                offset_445=end_448[0];
            }
            if(_if_conditional147=!reg->global,            _if_conditional147) {
                str_466=(char*)come_increment_ref_count(((char*)(right_value202=charp_substring(self,offset_445,-1))));
                right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_455,str_466);
                str_466 = come_decrement_ref_count2(str_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_466 = come_decrement_ref_count2(str_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional148=n_456==count,            _if_conditional148) {
                str_467=(char*)come_increment_ref_count(((char*)(right_value203=charp_substring(self,offset_445,-1))));
                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_455,str_467);
                str_467 = come_decrement_ref_count2(str_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_467 = come_decrement_ref_count2(str_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str_462 = come_decrement_ref_count2(str_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,group_strings_463, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            match_string_464 = come_decrement_ref_count2(match_string_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_result_465 = come_decrement_ref_count2(block_result_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional149=regex_result_459>1,            _if_conditional149) {
                n_456++;
                str_468=(char*)come_increment_ref_count(((char*)(right_value204=charp_substring(self,offset_445,start_447[0]))));
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_455,str_468);
                if(_if_conditional150=offset_445==end_448[0],                _if_conditional150) {
                    offset_445++;
                }
                else {
                    offset_445=end_448[0];
                }
                group_strings_469=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value206=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value205=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang2-str.c", 2081, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                for(                i_470=1;                i_470<regex_result_459;                i_470++                ){
                    match_string_471=(char*)come_increment_ref_count(((char*)(right_value207=charp_substring(self,start_447[i_470],end_448[i_470]))));
                    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(group_strings_469,(char*)come_increment_ref_count(match_string_471));
                    match_string_471 = come_decrement_ref_count2(match_string_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                match_string_472=(char*)come_increment_ref_count(((char*)(right_value208=charp_substring(self,start_447[0],end_448[0]))));
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                block_result_473=(char*)come_increment_ref_count(((char*)(right_value209=block(parent,match_string_472,group_strings_469))));
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional151=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,                _if_conditional151) {
                    __result159__ = __result_obj__ = ((char*)(right_value210=buffer_to_string(result_455)));
                    str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    return __result159__;
                }
                buffer_append_str(result_455,block_result_473);
                if(_if_conditional152=!reg->global,                _if_conditional152) {
                    str_474=(char*)come_increment_ref_count(((char*)(right_value211=charp_substring(self,offset_445,-1))));
                    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_455,str_474);
                    str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional153=n_456==count,                _if_conditional153) {
                    str_475=(char*)come_increment_ref_count(((char*)(right_value212=charp_substring(self,offset_445,-1))));
                    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(result_455,str_475);
                    str_475 = come_decrement_ref_count2(str_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                    str_475 = come_decrement_ref_count2(str_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                str_468 = come_decrement_ref_count2(str_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(list$1charphp_finalize,group_strings_469, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                match_string_472 = come_decrement_ref_count2(match_string_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_result_473 = come_decrement_ref_count2(block_result_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_476=(char*)come_increment_ref_count(((char*)(right_value213=charp_substring(self,offset_445,-1))));
                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(result_455,str_476);
                str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                str_476 = come_decrement_ref_count2(str_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result160__ = __result_obj__ = ((char*)(right_value214=buffer_to_string(result_455)));
    come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
    come_call_finalizer2(buffer_finalize,result_455, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

unsigned int wchar_tp_get_hash_key(int* value){
void* __result_obj__;
int result_477;
int* p_478;
_Bool _while_condtional25;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_477, 0, sizeof(int));
memset(&p_478, 0, sizeof(int*));
    result_477=0;
    p_478=value;
    while(_while_condtional25=*p_478,    _while_condtional25) {
        result_477+=(*p_478);
        p_478++;
    }
    __result161__ = result_477;
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
void* right_value215;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result169__ = __result_obj__ = ((char*)(right_value215=xsprintf("%ls",wc)));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
}

char* string_chomp(char* str){
void* __result_obj__;
void* right_value216;
char* result_479;
_Bool _if_conditional154;
void* right_value217;
char* __result170__;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
memset(&result_479, 0, sizeof(char*));
right_value217 = (void*)0;
    result_479=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(str))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional154=result_479[string_length(result_479)-1]==10,    _if_conditional154) {
        __result170__ = __result_obj__ = ((char*)(right_value217=string_substring(result_479,0,-2)));
        result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result170__;
    }
    __result171__ = __result_obj__ = result_479;
    result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result171__;
    result_479 = come_decrement_ref_count2(result_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

